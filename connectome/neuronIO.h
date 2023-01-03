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


void adjustTuningVars () {
    cout << "A - Go To Next Step" << endl;
    cout << "S - Adjust Hebbian Learning Factor" << endl;
    cout << "D - Adjust LTD Learning Factor" << endl;
    cout << "F - Adjust Learnable Neuron Count" << endl;

    char inputChar;
    cin >> inputChar;

    if (inputChar == 'a') {
        system("cls");
    }

    if (inputChar == 's') {
        system("cls");
        cout << "Input New Hebbian Factor: ";
        char newFactor;

        cin >> newFactor;

        hebbianFactor = newFactor;
    }

    if (inputChar == 'd') {
        system("cls");
        cout << "Input New LTD Factor: ";
        char newFactor;

        cin >> newFactor;

        LTDfactor = newFactor;
    }

    if (inputChar == 'f') {
        system("cls");
        cout << "Input New Learnable Neuron Count: ";
        char newFactor;

        cin >> newFactor;

        hebbianMax = newFactor;
    }
}

bool diagnosticTool() {
    char inputChar;

    //get the ID of the neuron if it is not already established
    if (diagnosticCellID == 0 && beginDiagnostic) {
        cout << "Enter Neuron ID: ";
        cin >> diagnosticCellID;
        beginDiagnostic = false;
    }

/*    //fill the diagnostic output and weight arrays
    for (int i = 0; i < neuronCount; i++) {
        for (int j = 0; j < c.cellularMatrix[i].inputsLen; j++) {
            if (c.cellularMatrix[i].inputs[j] == diagnosticCellID) {
                diagnosticOutputList[diagnosticOutputID] = i;
                diagnosticWeightList[diagnosticOutputID] = c.cellularMatrix[i].weights[j];
            }
        }
    }*/

    if (c.cellularMatrix[diagnosticCellID].cellOutput) {
        system("cls");
        cout << "Neuron ID " << diagnosticCellID << " has an output of: TRUE" << endl;
        cout << "--------------------------" << endl;
        cout << "\n";
    } else {
        system("cls");
        cout << "Neuron ID " << diagnosticCellID << " has an output of: FALSE" << endl;
        cout << "--------------------------" << endl;
        cout << "\n";
    }

    for (int i = 0; i < c.cellularMatrix[diagnosticCellID - 1].inputsLen; i++) {
        cout << "Neuron ID " << diagnosticCellID << " synapses to cell " << c.cellularMatrix[diagnosticCellID - 1].inputs[i] << endl;
        cout << "The weight of the connection is " << c.cellularMatrix[diagnosticCellID - 1].weights[i] << endl;;
        cout << "\n";
    }

/*    if (diagnosticCellID != 0 && diagnosticCellID <= 302) {
        //display the output value of the first output for the current neuron
        cout << "\n";
        cout << "Neuron ID " << diagnosticCellID << " outputs to neuron: " << diagnosticOutputList[diagnosticOutputID] << endl;
        cout << "The weight of the connection is " << diagnosticWeightList[diagnosticOutputID] << endl;
        cout << "\n";
    } else if (diagnosticCellID > 302) {
        diagnosticCellID = 0;
        cout << "\n";
        cout << "Neuron ID " << diagnosticCellID << " outputs to neuron: " << diagnosticOutputList[diagnosticOutputID] << endl;
        cout << "The weight of the connection is " << diagnosticWeightList[diagnosticOutputID] << endl;
        cout << "\n";
    } else if (diagnosticCellID < 1) {
        diagnosticCellID = 302;
        cout << "\n";
        cout << "Neuron ID " << diagnosticCellID << " outputs to neuron: " << diagnosticOutputList[diagnosticOutputID] << endl;
        cout << "The weight of the connection is " << diagnosticWeightList[diagnosticOutputID] << endl;
        cout << "\n";
    }*/

    //output the prompt
    cout << '\t' << '\t' << "W: Increment Neuron ID" << endl;
    cout << '\t' << '\t' << '\t' << "     |" << endl;
//    cout << "A: Previous Output Weight ---X--- D: Next Output Weight" << endl;
    cout << '\t' << '\t' << '\t' << "     |" << endl;
    cout << '\t' << '\t' << "S: Decrement Neuron ID" << endl;
    cout << "\n";
    cout << '\t' << '\t' << "Q: Enter New Neuron ID" << endl;
    cout << "\n";
    cout << "| > ";
    cin >> inputChar;

    //if q - enter new neuron ID
    if (inputChar == 'q') {
        cout << "\n";
        cout << "Enter Neuron ID: ";
        cin >> diagnosticCellID;

        return true;
    }

    //if w - increment ID
    if (inputChar == 'w') {
        diagnosticCellID++;

        for (int i = 0; i < neuronCount; i++) {
            for (int j = 0; j < neuronCount; j++) {
                for (int k = 0; k < c.cellularMatrix[j].weightsLen; k++) {
                    if (c.cellularMatrix[j].inputs[k] == diagnosticCellID) {
                        diagnosticOutputList[i] = c.cellularMatrix[j].inputs[k];
                    }
                }
            }
        }
        system("cls");

        return true;
    }

    //if a - show previous output
/*    if (inputChar == 'a' && diagnosticCellID != 0) {
        diagnosticOutputID--;
        system("cls");

        if (diagnosticOutputID < 0) {
            cout << "ERROR! Reached Minimum Output ID." << endl;
        } else if (diagnosticOutputID > 302) {
            cout << "ERROR! Reached Maximum Output ID." << endl;
        }

        return true;
    }*/

    //if s - decrement ID
    if (inputChar == 's') {
        diagnosticCellID--;

        for (int i = 0; i < neuronCount; i++) {
            for (int j = 0; j < neuronCount; j++) {
                for (int k = 0; k < c.cellularMatrix[j].weightsLen; k++) {
                    if (c.cellularMatrix[j].inputs[k] == diagnosticCellID) {
                        diagnosticOutputList[i] = c.cellularMatrix[j].inputs[k];
                    }
                }
            }
        }
        system("cls");

        return true;
    }

    //if d - show next output
/*    if (inputChar == 'd' && diagnosticCellID != 0) {
        diagnosticOutputID++;
        system("cls");

        if (diagnosticOutputID < 0) {
            cout << "ERROR! Reached Minimum Output ID." << endl;
        } else if (diagnosticOutputID > 302) {
            cout << "ERROR! Reached Maximum Output ID." << endl;
        }

        return true;
    }*/

    return true;
}

/*
Array to hold the command interneurons used as output info
*/
neuron commandInterneurons[commandInterneuronSize] = {
    c.cellularMatrix[56], c.cellularMatrix[57], c.cellularMatrix[173], c.cellularMatrix[174], c.cellularMatrix[54], c.cellularMatrix[55], c.cellularMatrix[58], c.cellularMatrix[59]
};

/*
Function used by main glial weight tuning function to adjust weights of cells innervating command neurons to a desired state
*/
void useGlia(int cmdNeuronID, bool desiredState) {
    float glialFactor = .1;         //the amount we adjust weights by
    float minAdjust = .1;
    float maxAdjust = 1;

    for (int i = 0; i < c.cellularMatrix[cmdNeuronID].inputsLen; i++) {         //iterate over all inputs of command interneuron
        int targetNeuronID = c.cellularMatrix[cmdNeuronID].inputs[i];           //get the ID of the current command neuron input

        //if the output of the current target neuron is not the same as the desired state, adjust its weight
        if (c.cellularMatrix[targetNeuronID].cellOutput == true && desiredState == false) {
            if (c.cellularMatrix[cmdNeuronID].weights[i] >= minAdjust) c.cellularMatrix[cmdNeuronID].weights[i] -= glialFactor;
        }

        if (c.cellularMatrix[targetNeuronID].cellOutput == false && desiredState == true) {
            if (c.cellularMatrix[cmdNeuronID].weights[i] <= maxAdjust) c.cellularMatrix[cmdNeuronID].weights[i] += glialFactor;
        }
    }
}

/*
returns a random zero or one
*/
bool coinFlip(int seed) {
    srand(seed);
    bool n = rand() % 2;
    return n;
}

/*
Function to tune weights using a VERY rough abstraction of neuroglia's genetic effect on a network, in this case based on its outputs
*/
void glialWeightTuning() {
    //USE CASE 3 - provoking movement
        int countInactive = 0;                                                                       //create counter for command interneurons that are inactive

        for (int i = 0; i < commandInterneuronSize; i++) {                                      //iterate over command interneurons
            if (!c.cellularMatrix[commandInterneurons[i].cellID].cellOutput) countInactive++;            //count number of inactive command interneurons
        }

        if (countInactive == commandInterneuronSize) {                                           //if counter shows all command neurons inactive
            bool hasCmdNeuron = false;

            for (int i = 0; i < neuronCount; i++) {                                             //iterate over all neurons
                for (int j = 0; j < c.cellularMatrix[i].inputsLen; j++) {                       //iterate over the inputs of each neuron
                    for (int k = 0; k < commandInterneuronSize; k++) {                             //iterate over the command interneurons
                        if (c.cellularMatrix[i].inputs[j] == commandInterneurons[k].cellID) hasCmdNeuron = true;   //if the neuron has a command neuron in its input list flag it
                    }
                }

                if (!hasCmdNeuron) {                                                        //if flag for a neuron connecting to a command neuron is false
                    for (int j = 0; j < c.cellularMatrix[i].weightsLen; j++) {              //iterate over the neurons weights
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();           //and for each weight randomize it
                    }
                }
            }
        }

    //USE CASE 1 - check to see if command cells are off and input says they should be on
        if (noseTouchActive && !c.cellularMatrix[FLPL - 1].cellOutput) useGlia(FLPL - 1, true); //for nose touch
        if (noseTouchActive && !c.cellularMatrix[FLPR - 1].cellOutput) useGlia(FLPR - 1, true);

        if (lightAvoidanceActive && !c.cellularMatrix[ASHL - 1].cellOutput) useGlia (ASHL - 1, true); //for light avoidance
        if (lightAvoidanceActive && !c.cellularMatrix[ASHR - 1].cellOutput) useGlia (ASHR - 1, true);
        if (lightAvoidanceActive && !c.cellularMatrix[ASJL - 1].cellOutput) useGlia (ASJL - 1, true);
        if (lightAvoidanceActive && !c.cellularMatrix[ASJR - 1].cellOutput) useGlia (ASJR - 1, true);
        if (lightAvoidanceActive && !c.cellularMatrix[AWBL - 1].cellOutput)useGlia (AWBL - 1, true);
        if (lightAvoidanceActive && !c.cellularMatrix[AWBR - 1].cellOutput)useGlia (AWBR - 1, true);
        if (lightAvoidanceActive && !c.cellularMatrix[ASKL - 1].cellOutput)useGlia (ASKL - 1, true);
        if (lightAvoidanceActive && !c.cellularMatrix[ASKR - 1].cellOutput)useGlia (ASKR - 1, true);

        if (gentleTouchForwardActive && !c.cellularMatrix[AIML - 1].cellOutput) useGlia(AIML - 1, true); //for gentle forward
        if (gentleTouchForwardActive && !c.cellularMatrix[ALMR - 1].cellOutput) useGlia(ALMR - 1, true);
        if (gentleTouchForwardActive && !c.cellularMatrix[PLML - 1].cellOutput) useGlia(PLML - 1, true);
        if (gentleTouchForwardActive && !c.cellularMatrix[PLMR - 1].cellOutput) useGlia(PLMR - 1, true);
        if (gentleTouchForwardActive && !c.cellularMatrix[AVM - 1].cellOutput) useGlia(AVM - 1, true);

        if (gentleTouchBackwardActive && !c.cellularMatrix[AVM - 1].cellOutput) useGlia(AVM - 1, true); //for gentle backward
        if (gentleTouchBackwardActive && !c.cellularMatrix[ALML - 1].cellOutput) useGlia(ALML - 1, true);
        if (gentleTouchBackwardActive && !c.cellularMatrix[ALMR - 1].cellOutput) useGlia(ALMR - 1, true);

        if (harshTouchActive && !c.cellularMatrix[PLML - 1].cellOutput) useGlia(PLML - 1, true); //for harsh touch
        if (harshTouchActive && !c.cellularMatrix[PLMR - 1].cellOutput) useGlia(PLMR - 1, true);

        if (thermotaxisActive && !c.cellularMatrix[AFDL - 1].cellOutput) useGlia(AFDL - 1, true); //for thermotaxis
        if (thermotaxisActive && !c.cellularMatrix[AFDR - 1].cellOutput) useGlia(AFDR - 1, true);
        if (thermotaxisActive && !c.cellularMatrix[AIMR - 1].cellOutput) useGlia(AIMR - 1, true);
        if (thermotaxisActive && !c.cellularMatrix[PHCL - 1].cellOutput) useGlia(PHCL - 1, true);
        if (thermotaxisActive && !c.cellularMatrix[PHCR - 1].cellOutput) useGlia(PHCR - 1, true);

        if (chemorepulsionActive && !c.cellularMatrix[PHAL - 1].cellOutput) useGlia(PHAL - 1, true); //for chemorepulsion
        if (chemorepulsionActive && !c.cellularMatrix[PHAR - 1].cellOutput) useGlia(PHAR - 1, true);
        if (chemorepulsionActive && !c.cellularMatrix[PHBL - 1].cellOutput) useGlia(PHBL - 1, true);
        if (chemorepulsionActive && !c.cellularMatrix[PHBR - 1].cellOutput) useGlia(PHBR - 1, true);

        if (chemoattractionActive && !c.cellularMatrix[ASEL - 1].cellOutput) useGlia(ASEL - 1, true); //for chemoattraction
        if (chemoattractionActive && !c.cellularMatrix[ASER - 1].cellOutput) useGlia(ASER - 1, true);

    //USE CASE 2 - check to see if the wrong outputs are on for a given input
        if (noseTouchActive) {
            //check if going forward: avbl/r, pvcl/r
            if (c.cellularMatrix[AVBL - 1].cellOutput) useGlia(AVBL - 1, false);
            if (c.cellularMatrix[AVBR - 1].cellOutput) useGlia(AVBR - 1, false);
            if (c.cellularMatrix[PVCL - 1].cellOutput) useGlia(PVCL - 1, false);
            if (c.cellularMatrix[PVCR - 1].cellOutput) useGlia(PVCR - 1, false);
        }

        if (gentleTouchForwardActive) {
            //check if going backwards: aval/r, avdl/r
            if (c.cellularMatrix[AVAL - 1].cellOutput) useGlia(AVAL - 1, false);
            if (c.cellularMatrix[AVAR - 1].cellOutput) useGlia(AVAR - 1, false);
            if (c.cellularMatrix[AVDL - 1].cellOutput) useGlia(AVDL - 1, false);
            if (c.cellularMatrix[AVDR - 1].cellOutput) useGlia(AVDR - 1, false);
        }

        if (gentleTouchBackwardActive) {
            //check if going forward: avbl/r, pvcl/r
            if (c.cellularMatrix[AVBL - 1].cellOutput) useGlia(AVBL - 1, false);
            if (c.cellularMatrix[AVBR - 1].cellOutput) useGlia(AVBR - 1, false);
            if (c.cellularMatrix[PVCL - 1].cellOutput) useGlia(PVCL - 1, false);
            if (c.cellularMatrix[PVCR - 1].cellOutput) useGlia(PVCR - 1, false);
        }
//TODO: still need to do chemorepulsion, chemoattraction, thermotaxis, light avoidance, and harsh touch for second use case

    //USE CASE 3 - if any inputs are on and all command neurons are off... then do one of three different procedures
/*    if (noseTouchActive  || lightAvoidanceActive  || gentleTouchForwardActive || gentleTouchBackwardActive || harshTouchActive ||
        thermotaxisActive || chemorepulsionActive || chemoattractionActive ) {
            if (!c.cellularMatrix[AVBL - 1].cellOutput && !c.cellularMatrix[AVBR - 1].cellOutput && !c.cellularMatrix[PVCL - 1].cellOutput && !c.cellularMatrix[PVCR - 1].cellOutput &&
            !c.cellularMatrix[AVAL - 1].cellOutput && !c.cellularMatrix[AVAR - 1].cellOutput && !c.cellularMatrix[AVDL - 1].cellOutput && !c.cellularMatrix[AVDR - 1].cellOutput) {

            int method = 1;

                if (method == 1) {  //randomize all the weights in the network
                    for (int i = 0; i < neuronCount; i++) {
                        for (int j = 0; j < c.cellularMatrix[i].weightsLen; j++) {
                            c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                        }
                    }
                }

                if (method == 2) {  //randomize the weights and outputs of only the neurons connected to command interneurons
                    for (int i = 0; i < neuronCount; i++) {
                        bool hasCmdNeuron = false;

                        for (int j = 0; j < c.cellularMatrix[i].inputsLen; j++) {
                            for (int k = 0; k < commandInterneuronSize; k++) {
                                if (c.cellularMatrix[i].inputs[j] == commandInterneurons[k].cellID) hasCmdNeuron = true;
                            }

                            if (hasCmdNeuron) {
                                int seed = abs(c.cellularMatrix[i].cellID - c.cellularMatrix[i].cellOutput - c.cellularMatrix[i].inputsLen + c.cellularMatrix[i].weights[0]);
                                c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                                c.cellularMatrix[i].cellOutput = coinFlip(seed);
                            }
                        }
                    }
                }

                if (method == 3) {  //squeeze weights and outputs of neurons not connected to command neurons
                        for (int i = 0; i < neuronCount; i++) {
                            for (int j = 0; j < c.cellularMatrix[i].weightsLen; j++) {
                                c.cellularMatrix[i].weights[j] = calculateRandomWeight();

                                bool hasCmdNeuron = false;

                                for (int k = 0; k < commandInterneuronSize; k++) {
                                    if (c.cellularMatrix[i].inputs[j] == commandInterneurons[k].cellID) hasCmdNeuron = true;
                                }

                                if (!hasCmdNeuron) {
                                    int squeezeFactor = 2;
                                    c.cellularMatrix[i].weights[j] /= squeezeFactor;
                                }
                            }
                        }
                }
            }
    }*/
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
		for (int j = 0; j < neuronCount; j++) {
            int id = c.cellularMatrix[j].cellID + 1;
            //if nosetouch neuron is in cellular matrix then set output to true
            if (id == 114 || id == 115) {
                c.cellularMatrix[j].cellOutput = true;
                noseTouchActive = true;
                //cout << "Nose Touch Active?: " << noseTouchActive << endl;
            }
        }
}

/*
Function to activate light avoidance sense
*/
void doLightAvoidance() {
		for (int j = 0; j < neuronCount; j++) {
                int id = c.cellularMatrix[j].cellID + 1;
            //if light avoidance neuron is in cellular matrix then set output to true
                if (id == 44 || id == 45 || id == 48 || id == 49 || id == 75 || id == 76 || id == 50 || id == 51) {
                    c.cellularMatrix[j].cellOutput = true;
                    lightAvoidanceActive = true;
                }
		}
}

/*
Function to activate gentle forward provoking touch sense
*/
void doGentleForwardTouch() {
		for (int j = 0; j < neuronCount; j++) {
			//if gentletouch neuron is in cellular matrix then set output to true
                int id = c.cellularMatrix[j].cellID + 1;
				if (id == 24 || id == 25 || id == 168 || id == 169 || id == 72) {
                    c.cellularMatrix[j].cellOutput = true;
                    gentleTouchForwardActive = true;
				}
		}
}

/*
Function to activate gentle backward provoking touch sense
*/
void doGentleBackwardTouch() {
        for (int j = 0; j < neuronCount; j++) {
            int id = c.cellularMatrix[j].cellID + 1;
            if (id == AVM || id == ALML || id == ALMR) {

                c.cellularMatrix[j].cellOutput = true;
                gentleTouchBackwardActive = true;
            }
        }
}

/*
Function to activate harsh touch sense
*/
void doHarshTouch() {
		for (int j = 0; j < neuronCount; j++) {
			//if harshtouch neuron is in cellular matrix then set output to true
                int id = c.cellularMatrix[j].cellID + 1;
                if (id == PLML || id == PLMR) {
                    c.cellularMatrix[j].cellOutput = true;
                    harshTouchActive = true;
                }
		}
}

/*
Function to activate thermotaxis sense
*/
void doThermotaxis() {
		for (int j = 0; j < neuronCount; j++) {
			//if thermotaxis neuron is in cellular matrix then set output to true
                int id = c.cellularMatrix[j].cellID + 1;
                if (id == 9 || id == 10 || id == 16 || id == 166 || id == 167) {
                    c.cellularMatrix[j].cellOutput = true;
                    thermotaxisActive = true;
                }
		}
}

/*
Function to activate chemorepulsive sense
*/
void doChemorepulsion() {
		for (int j = 0; j < neuronCount; j++) {
			//if chemorepulsion neuron is in cellular matrix then set output to true
               int id = c.cellularMatrix[j].cellID + 1;
                if (id == 162 || id == 163 || id == 164 || id == 165) {
                    c.cellularMatrix[j].cellOutput = true;
                    chemorepulsionActive = true;
                }
		}
}

/*
Functino to activate chemoattractive sense
*/
void doChemoattraction() {
		for (int j = 0; j < neuronCount; j++) {
			//if chemoattraction neuron is in cellular matrix then set output to true
                int id = c.cellularMatrix[j].cellID + 1;
                if (id == 40 || id == 41) {
                    c.cellularMatrix[j].cellOutput = true;
                    chemoattractionActive = true;
                }
		}
}

/*
Function to read in sensor data from a file to be used by connectome to activate corresponding sensory neurons
*/
void getSensoryInputs() {
    ifstream sensoryIOfile;

    //read from file -- if functions say to activate a sensory modality, then call that function
    sensoryIOfile.open(sensoryLocation);

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

