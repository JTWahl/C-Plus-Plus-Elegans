#include "connectome.h"

neuron noseTouch[2] = {neuronAccess(15), neuronAccess(16)};
neuron lightAvoidance[8] = {neuronAccess(44), neuronAccess(45), neuronAccess(48), neuronAccess(45), neuronAccess(75), neuronAccess(76), neuronAccess(50), neuronAccess(51)};
neuron gentleTouch[5] = {neuronAccess(24), neuronAccess(25), neuronAccess(168), neuronAccess(169), neuronAccess(72)};
neuron harshTouch[4] = {neuronAccess(24), neuronAccess(25), neuronAccess(175), neuronAccess(176)};
neuron thermotaxis[8] = {neuronAccess(9), neuronAccess(10), neuronAccess(77), neuronAccess(78), neuronAccess(15), neuronAccess(16), neuronAccess(166), neuronAccess(167)};
neuron chemorepulsion[8] = {neuronAccess(162), neuronAccess(163), neuronAccess(164), neuronAccess(165), neuronAccess(44), neuronAccess(45), neuronAccess(7), neuronAccess(8)};
neuron chemoattraction[6] = {neuronAccess(40), neuronAccess(41), neuronAccess(73), neuronAccess(74), neuronAccess(77), neuronAccess(78)};
neuron commandInterneurons[commandInterneuronSize] = {
    neuronAccess(56), neuronAccess(57), neuronAccess(173), neuronAccess(174), neuronAccess(54), neuronAccess(55), neuronAccess(58), neuronAccess(59), neuronAccess(60), neuronAccess(61)
};


fstream sensoryIOfile;
fstream motorIOfile;

bool getMotorCellState() {
	bool cmdInterneuronActivations[commandInterneuronSize] = {};

	for (int i = 0; i < commandInterneuronSize - 1; i++) {		//for every element in the list of motor neurons
		if (commandInterneurons[i].cellOutput) {					//if the cell output of the current motor neuron is true
			cmdInterneuronActivations[i] = true;					//set the value in a boolean array as true
		} else {												//otherwise
			cmdInterneuronActivations[i] = false;					//set the value as false
		}
	}

	return cmdInterneuronActivations[commandInterneuronSize - 1];
}

void printMotorMatrix() {
    motorIOfile.open("motorOutputs.txt", ios::out);

    for (int i = 0; i < commandInterneuronSize; i++) {
        if (commandInterneurons[i].cellOutput) {
            cout << " [1]  ";
            motorIOfile << "1" << '\n';
        } else {
            cout << " [0]  ";
            motorIOfile << "0" << '\n';
            //TODO: write data to file
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
	for (int i = 0; i < noseTouchSize - 1; i++) {
		for (int j = 0; j < neuronCount - 1; j++) {
            //if nosetouch neuron is in cellular matrix then set output to true
            if (c.cellularMatrix[j].cellID == noseTouch[i].cellID) {
                c.cellularMatrix[j].cellOutput = true;
            }
        }
    }
}

void doLightAvoidance() {
	for (int i = 0; i < lightAvoidanceSize - 1; i++) {
		for (int j = 0; j < neuronCount - 1; j++) {
			//if light avoidance neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == lightAvoidance[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doGentleTouch() {
	for (int i = 0; i < gentleTouchSize - 1; i++) {
		for (int j = 0; j < neuronCount - 1; j++) {
			//if gentletouch neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == gentleTouch[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doHarshTouch() {
	for (int i = 0; i < harshTouchSize - 1; i++) {
		for (int j = 0; j < neuronCount - 1; j++) {
			//if harshtouch neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == harshTouch[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doThermotaxis() {
	for (int i = 0; i < thermotaxisSize - 1; i++) {
		for (int j = 0; j < neuronCount - 1; j++) {
			//if thermotaxis neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == thermotaxis[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
    }
}

void doChemorepulsion() {
	for (int i = 0; i < chemorepulsionSize - 1; i++) {
		for (int j = 0; j < neuronCount - 1; j++) {
			//if chemorepulsion neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == chemorepulsion[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doChemoattraction() {
	for (int i = 0; i < chemoattractionSize - 1; i++) {
		for (int j = 0; j < neuronCount - 1; j++) {
			//if chemoattraction neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == chemoattraction[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void getSensoryInputs() {
    //read from file -- if functions say to activate a sensory modality, then call that function
    sensoryIOfile.open("sensoryInputs.txt");

    /*
    SENSORY DATA FORMAT:
        0
        0
        0
        0
        0
        0
        0
    */
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

