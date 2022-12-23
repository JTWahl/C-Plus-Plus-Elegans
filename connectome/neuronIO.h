#include "connectome.h"

neuron noseTouch[2] = {c.cellularMatrix[15], c.cellularMatrix[16]};
neuron lightAvoidance[8] = {c.cellularMatrix[44], c.cellularMatrix[45], c.cellularMatrix[48], c.cellularMatrix[45], c.cellularMatrix[75], c.cellularMatrix[76], c.cellularMatrix[50], c.cellularMatrix[51]};
neuron gentleTouch[5] = {c.cellularMatrix[24], c.cellularMatrix[25], c.cellularMatrix[168], c.cellularMatrix[169], c.cellularMatrix[72]};
neuron harshTouch[4] = {c.cellularMatrix[24], c.cellularMatrix[25], c.cellularMatrix[175], c.cellularMatrix[176]};
neuron thermotaxis[8] = {c.cellularMatrix[9], c.cellularMatrix[10], c.cellularMatrix[77], c.cellularMatrix[78], c.cellularMatrix[15], c.cellularMatrix[16], c.cellularMatrix[166], c.cellularMatrix[167]};
neuron chemorepulsion[8] = {c.cellularMatrix[162], c.cellularMatrix[163], c.cellularMatrix[164], c.cellularMatrix[165], c.cellularMatrix[44], c.cellularMatrix[45], c.cellularMatrix[7], c.cellularMatrix[8]};
neuron chemoattraction[6] = {c.cellularMatrix[40], c.cellularMatrix[41], c.cellularMatrix[73], c.cellularMatrix[74], c.cellularMatrix[77], c.cellularMatrix[78]};

neuron commandInterneurons[commandInterneuronSize] = {
    c.cellularMatrix[56], c.cellularMatrix[57], c.cellularMatrix[173], c.cellularMatrix[174], c.cellularMatrix[54], c.cellularMatrix[55], c.cellularMatrix[58], c.cellularMatrix[59], c.cellularMatrix[60], c.cellularMatrix[61]
};

bool getMotorCellState() {
	bool cmdInterneuronActivations[commandInterneuronSize] = {};

	for (int i = 0; i < commandInterneuronSize; i++) {		//for every element in the list of motor neurons
		if (commandInterneurons[i].cellOutput) {					//if the cell output of the current motor neuron is true
			cmdInterneuronActivations[i] = true;					//set the value in a boolean array as true
		} else {												//otherwise
			cmdInterneuronActivations[i] = false;					//set the value as false
		}
	}

	return cmdInterneuronActivations[commandInterneuronSize];
}

void printMotorMatrix() {
    ofstream motorIOfile;
    motorIOfile.open("C:/Users/t420/Desktop/custom-elegans-network/connectome/motorOutputs.txt", ios::out);

    for (int i = 0; i < commandInterneuronSize; i++) {
        if (commandInterneurons[i].cellOutput) {
            cout << " [1]  ";
            motorIOfile << "1" << '\n';
        } else {
            cout << " [0]  ";
            motorIOfile << "0" << '\n';
        }
    }

    motorIOfile.close();

    cout << '\n';
    cout << "^AVBL ";
    cout << "^AVBR ";
    cout << "^PVCL ";
    cout << "^PVCR ";
    cout << "^AVAL ";
    cout << "^AVAR ";
    cout << "^AVDL ";
    cout << "^AVDR ";
    cout << "^AVEL ";
    cout << "^AVER ";
    cout << '\n';
}

void doNoseTouch() {
	for (int i = 0; i < noseTouchSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
            //if nosetouch neuron is in cellular matrix then set output to true
            if (c.cellularMatrix[j].cellID == noseTouch[i].cellID) {
                c.cellularMatrix[j].cellOutput = true;
            }
        }
    }
}

void doLightAvoidance() {
	for (int i = 0; i < lightAvoidanceSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if light avoidance neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == lightAvoidance[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doGentleTouch() {
	for (int i = 0; i < gentleTouchSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if gentletouch neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == gentleTouch[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doHarshTouch() {
	for (int i = 0; i < harshTouchSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if harshtouch neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == harshTouch[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doThermotaxis() {
	for (int i = 0; i < thermotaxisSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if thermotaxis neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == thermotaxis[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
    }
}

void doChemorepulsion() {
	for (int i = 0; i < chemorepulsionSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if chemorepulsion neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == chemorepulsion[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doChemoattraction() {
	for (int i = 0; i < chemoattractionSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if chemoattraction neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == chemoattraction[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void getSensoryInputs() {
    ifstream sensoryIOfile;

    //read from file -- if functions say to activate a sensory modality, then call that function
    sensoryIOfile.open("C:/Users/t420/Desktop/custom-elegans-network/connectome/sensoryInputs.txt");

    string data = "";
    string isNoseTouch = "";
    string isLightAvoidance = "";
    string isGentleTouch = "";
    string isHarshTouch = "";
    string isThermotaxis = "";
    string isChemorepulsion = "";
    string isChemoattraction = "";

    for (int i = 0; i < 7 && !sensoryIOfile.eof(); i++) {
        getline(sensoryIOfile, data, '\n');
        isNoseTouch = data;

        getline(sensoryIOfile, data, '\n');
        isLightAvoidance = data;

        getline(sensoryIOfile, data, '\n');
        isGentleTouch = data;

        getline(sensoryIOfile, data, '\n');
        isHarshTouch = data;

        getline(sensoryIOfile, data, '\n');
        isThermotaxis = data;

        getline(sensoryIOfile, data, '\n');
        isChemorepulsion = data;

        getline(sensoryIOfile, data, '\n');
        isChemoattraction = data;

        if (isNoseTouch == "1") {
            doNoseTouch();
        }

        if (isLightAvoidance == "1") {
            doLightAvoidance();
        }

        if (isGentleTouch == "1") {
            doGentleTouch();
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

