#include "connectome.h"

//list of neurons involved in each sensory process put in array form
neuron noseTouch[4] = {c.cellularMatrix[44], c.cellularMatrix[45], c.cellularMatrix[114], c.cellularMatrix[115]}; //AIML, AIMR --> ASHL, ASHR, FLPL, FLPR, OLQ???
neuron lightAvoidance[8] = {c.cellularMatrix[44], c.cellularMatrix[45], c.cellularMatrix[48], c.cellularMatrix[49], c.cellularMatrix[75], c.cellularMatrix[76], c.cellularMatrix[50], c.cellularMatrix[51]};
neuron gentleTouchForward[2] = {c.cellularMatrix[168], c.cellularMatrix[169]};
neuron gentleTouchBackward[3] = {c.cellularMatrix[24], c.cellularMatrix[25], c.cellularMatrix[72]};
neuron harshTouch[4] = {c.cellularMatrix[24], c.cellularMatrix[25], c.cellularMatrix[175], c.cellularMatrix[176]};
neuron thermotaxis[5] = {c.cellularMatrix[9], c.cellularMatrix[10], c.cellularMatrix[16], c.cellularMatrix[166], c.cellularMatrix[167]}; //AFDL, AFDR, AWC (SEEK OUT), AIML, AIMR, PHC (AVOID) --> AFDL, AFDR, PHCL, PHCR
neuron chemorepulsion[4] = {c.cellularMatrix[162], c.cellularMatrix[163], c.cellularMatrix[164], c.cellularMatrix[165]}; //PHAL, PHAR, PHBL, PHBR, ASHL, ASHR, ADLL, ADLR --> -ASH, -ADL
neuron chemoattraciton[2] = {c.cellularMatrix[40], c.cellularMatrix[41]}; //ASEL, ASER, AWAL?, AWAR?, AWCL?, AWCR? --> ASEL, ASER

//AVBL - forward
//AVBR - forward
//PVCL - forward from harsh touch to tail
//PVCR - forward from harsh touch to tail
//AVAL - backward
//AVAR - backward
//AVDL - backward from head touch
//AVDR - backward from head touch


/*
Array to hold the command interneurons used as output info
*/
neuron commandInterneurons[commandInterneuronSize] = {
    c.cellularMatrix[56], c.cellularMatrix[57], c.cellularMatrix[173], c.cellularMatrix[174], c.cellularMatrix[54], c.cellularMatrix[55], c.cellularMatrix[58], c.cellularMatrix[59]
};

/*
Function to tune weights using a VERY rough abstraction of neuroglia's genetic effect on a network, in this case based on its outputs
*/
void glialWeightTuning() {
    bool useGlia = false;
    float glialFactor = .9;

    /*
    THREE USE-CASES OF THIS FUNCTION
            1 - if command neuron is active when no input activated it --> use glia to randomize
            2 - if a command neuron is inactive when an input activated it --> use glia to randomize
            3 - if certain input neurons are active and the wrong command neurons are on --> use glia to randomize
    */


    //USE CASE 1 - if any command interneurons are on and all inputs are off
    if (c.cellularMatrix[AVBL].cellOutput || c.cellularMatrix[AVBR].cellOutput || c.cellularMatrix[PVCL].cellOutput || c.cellularMatrix[PVCR].cellOutput ||
        c.cellularMatrix[AVAL].cellOutput || c.cellularMatrix[AVAR].cellOutput || c.cellularMatrix[AVDL].cellOutput || c.cellularMatrix[AVDR].cellOutput) {
            if (!noseTouchActive && !lightAvoidanceActive && !gentleTouchForwardActive && !gentleTouchBackwardActive && ! harshTouchActive &&
            !thermotaxisActive && !chemorepulsionActive && !chemoattractionActive) useGlia = true;
    }

     //USE CASE 2 - If any inputs are on and all command neurons are off
    if (noseTouchActive  || lightAvoidanceActive  || gentleTouchForwardActive || gentleTouchBackwardActive || harshTouchActive ||
        thermotaxisActive || chemorepulsionActive || chemoattractionActive ) {
            if (!c.cellularMatrix[AVBL].cellOutput && !c.cellularMatrix[AVBR].cellOutput && !c.cellularMatrix[PVCL].cellOutput && !c.cellularMatrix[PVCR].cellOutput &&
            !c.cellularMatrix[AVAL].cellOutput && !c.cellularMatrix[AVAR].cellOutput && !c.cellularMatrix[AVDL].cellOutput && !c.cellularMatrix[AVDR].cellOutput) useGlia = true;
    }

    //USE CASE 3
    if (noseTouchActive) {
        //check if going forward: avbl/r, pvcl/r
        if (c.cellularMatrix[AVBL].cellOutput || c.cellularMatrix[AVBR].cellOutput ||
            c.cellularMatrix[PVCL].cellOutput || c.cellularMatrix[PVCR].cellOutput) {
            useGlia = true;
        }
    }

    if (gentleTouchForwardActive) {
        //check if going backwards: aval/r, avdl/r
        if (c.cellularMatrix[AVAL].cellOutput || c.cellularMatrix[AVAR].cellOutput ||
            c.cellularMatrix[AVDL].cellOutput || c.cellularMatrix[AVDR].cellOutput) {
            useGlia = true;
        }
    }

    if (gentleTouchBackwardActive) {
        //check if going forward: avbl/r, pvcl/r
        if (c.cellularMatrix[AVBL].cellOutput || c.cellularMatrix[AVBR].cellOutput ||
            c.cellularMatrix[PVCL].cellOutput || c.cellularMatrix[PVCR].cellOutput) {
            useGlia = true;
        }
    }

    if (harshTouchActive) {
        //check if only L or R of harsh touch cmd neurons are active: pvcl/r, avdl/r
        if (((c.cellularMatrix[PVCL].cellOutput || c.cellularMatrix[AVDL].cellOutput) &&
            (!c.cellularMatrix[PVCR].cellOutput || !c.cellularMatrix[AVDR].cellOutput)) ||
            ((c.cellularMatrix[PVCR].cellOutput || c.cellularMatrix[AVDR].cellOutput) &&
            (!c.cellularMatrix[PVCL].cellOutput || !c.cellularMatrix[AVDL].cellOutput))) {
            useGlia = true;
        }
    }

    //RANDOMIZATION FUNCTION - randomizes all weights, retaining only the sign of the original
    if (useGlia) {

        for (int j = 0; j < neuronCount; j++) {
            float newWeight = calculateRandomWeight();

            for (int k = 0; k < c.cellularMatrix[j].weightsLen; k++) {
                newWeight = abs(newWeight);

                if (newWeight > glialFactor) {
                    newWeight -= glialFactor;
                }

                if (c.cellularMatrix[j].weights[k] <= 0) {
                    c.cellularMatrix[j].weights[j] = -newWeight;
                } else {
                    c.cellularMatrix[j].weights[k] = newWeight;
                }
            }
        }
    }
}

/*
Function to get the state of each command interneuron for the motor output
*/
bool getMotorCellState(int cellID) {
	bool cmdInterneuronActivations[commandInterneuronSize] = {};

	for (int i = 0; i < commandInterneuronSize; i++) {		//for every element in the list of motor neurons
		if (commandInterneurons[i].cellOutput) {					//if the cell output of the current motor neuron is true
			cmdInterneuronActivations[i] = true;					//set the value in a boolean array as true
		} else {												//otherwise
			cmdInterneuronActivations[i] = false;					//set the value as false
		}
	}

	return cmdInterneuronActivations[cellID];
}

/*
Function to activate nose touch sense
*/
void doNoseTouch() {
	for (int i = 0; i < noseTouchSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
            int id = c.cellularMatrix[j].cellID;
            //if nosetouch neuron is in cellular matrix then set output to true
            if (id == 44 || id == 45 || id == 114 || id == 115) {
                c.cellularMatrix[j].cellOutput = true;
                noseTouchActive = true;
                //cout << "Nose Touch Active?: " << noseTouchActive << endl;
            }
        }
    }
}

/*
Function to activate light avoidance sense
*/
void doLightAvoidance() {
	for (int i = 0; i < lightAvoidanceSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if light avoidance neuron is in cellular matrix then set output to true
                int id = c.cellularMatrix[j].cellID;
            //if light avoidance neuron is in cellular matrix then set output to true
                if (id == 44 || id == 45 || id == 48 || id == 49 || id == 75 || id == 76 || id == 50 || id == 51) {
                    c.cellularMatrix[j].cellOutput = true;
                    lightAvoidanceActive = true;
                }
		}
	}
}

/*
Function to activate gentle forward provoking touch sense
*/
void doGentleForwardTouch() {
	for (int i = 0; i < gentleTouchForwardSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if gentletouch neuron is in cellular matrix then set output to true
                int id = c.cellularMatrix[j].cellID;
				if (id == 24 || id == 25 || id == 168 || id == 169 || id == 72) {
                    c.cellularMatrix[j].cellOutput = true;
                    gentleTouchForwardActive = true;
				}
		}
	}
}

/*
Function to activate gentle backward provoking touch sense
*/
void doGentleBackwardTouch() {
    for (int i = 0; i < gentleTouchBackwardSize; i++) {
        for (int j = 0; j < neuronCount; j++) {
            int id = c.cellularMatrix[j].cellID;
            if (id == AVM || id == ALML || id == ALMR) {

                c.cellularMatrix[j].cellOutput = true;
                gentleTouchBackwardActive = true;
            }
        }
    }
}

/*
Function to activate harsh touch sense
*/
void doHarshTouch() {
	for (int i = 0; i < harshTouchSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if harshtouch neuron is in cellular matrix then set output to true
                int id = c.cellularMatrix[j].cellID;
                if (id == PLML || id == PLMR) {
                    c.cellularMatrix[j].cellOutput = true;
                    harshTouchActive = true;
                }
		}
	}
}

/*
Function to activate thermotaxis sense
*/
void doThermotaxis() {
	for (int i = 0; i < thermotaxisSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if thermotaxis neuron is in cellular matrix then set output to true
                int id = c.cellularMatrix[j].cellID;
                if (id == 9 || id == 10 || id == 16 || id == 166 || id == 167) {
                    c.cellularMatrix[j].cellOutput = true;
                    thermotaxisActive = true;
                }
		}
    }
}

/*
Function to activate chemorepulsive sense
*/
void doChemorepulsion() {
	for (int i = 0; i < chemorepulsionSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if chemorepulsion neuron is in cellular matrix then set output to true
               int id = c.cellularMatrix[j].cellID;
                if (id == 162 || id == 163 || id == 164 || id == 165) {
                    c.cellularMatrix[j].cellOutput = true;
                    chemorepulsionActive = true;
                }
		}
	}
}

/*
Functino to activate chemoattractive sense
*/
void doChemoattraction() {
	for (int i = 0; i < chemoattractionSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if chemoattraction neuron is in cellular matrix then set output to true
                int id = c.cellularMatrix[j].cellID;
                if (id == 40 || id == 41) {
                    c.cellularMatrix[j].cellOutput = true;
                    chemoattractionActive = true;
                }
		}
	}
}

/*
Function to read in sensor data from a file to be used by connectome to activate corresponding sensory neurons
*/
void getSensoryInputs() {
    ifstream sensoryIOfile;

    //read from file -- if functions say to activate a sensory modality, then call that function
    sensoryIOfile.open("C:/Users/t420/Desktop/custom-elegans-network/connectome/sensoryInputs.txt");

    string data = "";
    string isNoseTouch = "";
    string isLightAvoidance = "";
    string isGentleTouchForward = "";
    string isGentleTouchBackward = "";
    string isHarshTouch = "";
    string isThermotaxis = "";
    string isChemorepulsion = "";
    string isChemoattraction = "";

    noseTouchActive = false;
    lightAvoidanceActive = false;
    gentleTouchForwardActive = false;
    gentleTouchBackwardActive = false;
    harshTouchActive = false;
    thermotaxisActive = false;
    chemorepulsionActive = false;
    chemoattractionActive = false;

    for (int i = 0; i < 7 && !sensoryIOfile.eof(); i++) {
        getline(sensoryIOfile, data);
        isNoseTouch = data;

        getline(sensoryIOfile, data);
        isLightAvoidance = data;

        getline(sensoryIOfile, data);
        isGentleTouchForward = data;

        getline(sensoryIOfile, data);
        isGentleTouchBackward = data;

        getline(sensoryIOfile, data);
        isHarshTouch = data;

        getline(sensoryIOfile, data);
        isThermotaxis = data;

        getline(sensoryIOfile, data);
        isChemorepulsion = data;

        getline(sensoryIOfile, data);
        isChemoattraction = data;

        if (isNoseTouch == "1") {
            doNoseTouch();
        }

        if (isLightAvoidance == "1") {
            doLightAvoidance();
        }

        if (isGentleTouchForward == "1") {
            doGentleForwardTouch();
        }

        if (isGentleTouchBackward == "1") {
            doGentleBackwardTouch();
        }

        if (isHarshTouch == "1") {
            doHarshTouch();
        }

        if (isThermotaxis == "1") {
            doThermotaxis();
        }

        if (isChemorepulsion == "1") {
            doChemorepulsion();
        }

        if (isChemoattraction == "1") {
            doChemoattraction();
        }
    }

    sensoryIOfile.close();
}

