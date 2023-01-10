#include "neuronIO.h"
#include "neurons.h"
#include "connectome.h"

/*
Function to activate nose touch sense
*/
void doNoseTouch() {
		for (int j = 0; j < neuronCount; j++) {
            int id = c.cellularMatrix[j].cellID;
            //if nosetouch neuron is in cellular matrix then set output to true
            if (id == FLPL || id == FLPR) {
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
                int id = c.cellularMatrix[j].cellID;
            //if light avoidance neuron is in cellular matrix then set output to true
                if (id == ASHL || id == ASHR || id == ASJL || id == ASJR || id == AWBL || id == AWBR || id == ASKL || id == ASKR) {
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
                int id = c.cellularMatrix[j].cellID;
				if (id == ALML || id == ALMR || id == PLML || id == PLMR || id == AVM) {
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
            int id = c.cellularMatrix[j].cellID;
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
                int id = c.cellularMatrix[j].cellID;
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
                int id = c.cellularMatrix[j].cellID;
                if (id == AFDL || id == AFDR || id == AIMR || id == PHCL || id == PHCR) {
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
               int id = c.cellularMatrix[j].cellID;
                if (id == PHAL || id == PHAR || id == PHBL || id == PHBR) {
                    c.cellularMatrix[j].cellOutput = true;
                    chemorepulsionActive = true;
                }
		}
}

/*
Function to activate salt sensing neurons
*/
void doChemoattraction() {
		for (int j = 0; j < neuronCount; j++) {
			//if salt sensing neuron is in cellular matrix then set output to true
                int id = c.cellularMatrix[j].cellID;
                if (id == ASEL || id == ASER) {
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

    int numSenses = 8;

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

    for (int i = 0; i < numSenses && !sensoryIOfile.eof(); i++) {
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

