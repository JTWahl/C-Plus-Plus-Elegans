#include "neuronIO.h"

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
Function to activate salt sensing neurons
*/
void doSaltSensing() {
		for (int j = 0; j < neuronCount; j++) {
			//if salt sensing neuron is in cellular matrix then set output to true
                int id = c.cellularMatrix[j].cellID + 1;
                if (id == ASEL) {
                    c.cellularMatrix[j].cellOutput = true;
                    saltSensingActive = true;
                }
		}
}

/*
Function to do basal foraging response
*/
void doBasalForaging() {
    for (int j = 0; j < neuronCount; j++) {
        //if basal response inhibiting neuron is in cellular matrix then set output to true
            int id = c.cellularMatrix[j].cellID + 1;
            if (id == ASER) {
                //c.cellularMatrix[j].cellOutput = false;
                c.cellularMatrix[j].cellOutput = true;
                basalForagingActive = true;
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
    string isSaltSensing = "";
    string isBasalForaging = "";

    noseTouchActive = false;
    lightAvoidanceActive = false;
    gentleTouchForwardActive = false;
    gentleTouchBackwardActive = false;
    harshTouchActive = false;
    thermotaxisActive = false;
    chemorepulsionActive = false;
    saltSensingActive = false;
    basalForagingActive = false;

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
        isSaltSensing = data;

        getline(sensoryIOfile, data);
        isBasalForaging = data;

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

        if (isSaltSensing == "1") {
            doSaltSensing();
        }

        if (isBasalForaging == "1") {
            doBasalForaging();
        }
    }

    sensoryIOfile.close();
}

