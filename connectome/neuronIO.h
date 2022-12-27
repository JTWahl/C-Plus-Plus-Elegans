#include "connectome.h"

neuron noseTouch[4] = {c.cellularMatrix[44], c.cellularMatrix[45], c.cellularMatrix[114], c.cellularMatrix[115]}; //AIML, AIMR --> ASHL, ASHR, FLPL, FLPR, OLQ???
neuron lightAvoidance[8] = {c.cellularMatrix[44], c.cellularMatrix[45], c.cellularMatrix[48], c.cellularMatrix[49], c.cellularMatrix[75], c.cellularMatrix[76], c.cellularMatrix[50], c.cellularMatrix[51]};
neuron gentleTouch[5] = {c.cellularMatrix[24], c.cellularMatrix[25], c.cellularMatrix[168], c.cellularMatrix[169], c.cellularMatrix[72]};
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

neuron commandInterneurons[commandInterneuronSize] = {
    c.cellularMatrix[56], c.cellularMatrix[57], c.cellularMatrix[173], c.cellularMatrix[174], c.cellularMatrix[54], c.cellularMatrix[55], c.cellularMatrix[58], c.cellularMatrix[59]
};

bool getInputsFromLastTick(int inputID) {
    return lastTickInputs[inputID];
}

bool getOutputsFromLastTick(int outputID) {
    return lastTickOutputs[outputID];
}

bool hasConnectingCell(int preID, int postID) {
    for (int i = 0; i < c.cellularMatrix[postID].inputsLen; i++) {
        if (c.cellularMatrix[postID].inputs[i] == preID) {
            return true;
        }
    }

    return false;
}

void randomizeInnervatingWeight(int cellID) {
    for (int i = 0; i < neuronCount; i++) {
        if (hasConnectingCell(i, cellID)) {
            for (int j = 0; j < c.cellularMatrix[cellID].weightsLen; j++) {
                if (c.cellularMatrix[cellID].weights[j] == cellID && c.cellularMatrix[cellID].cellOutput) {
                    c.cellularMatrix[cellID].weights[j] = calculateRandomWeight();
                }
            }
        }
    }
}

/*void randomizeAllWeights () {
    for (int i = 0; i < neuronCount; i++) {
        for (int j = 0; j < c.cellularMatrix[i].weightsLen; j++) {
            float randomWeight = 0.0;

            if (c.cellularMatrix[i].weights[j >= 0]) {
                while (randomWeight >= c.cellularMatrix[i].weights[j]) {
                    srand (static_cast <unsigned> (time(0)));

                    float randomWeight = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
                    randomWeight = round (randomWeight * 100) / 1000;

                    int r = rand();
                    bool isPos = r % 2;

                    if (!isPos) {
                       randomWeight = -randomWeight;
                    }

                    c.cellularMatrix[i].weights[j] = randomWeight;
                }
            } else {
                while (randomWeight < c.cellularMatrix[i].weights[j]) {
                    srand (static_cast <unsigned> (time(0)));

                    float randomWeight = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
                    randomWeight = round (randomWeight * 100) / 1000;

                    int r = rand();
                    bool isPos = r % 2;

                    if (isPos) {
                       randomWeight = -randomWeight;
                    }

                    c.cellularMatrix[i].weights[j] = randomWeight;
                }
            }
        }
    }
}*/

void glialWeightTuning(bool nukeWeights) {
    //if chosen, glial function will simply randomize all weights in the network
    if (nukeWeights) {
        for (int i = 0; i < neuronCount; i++) {
            for (int j = 0; j < c.cellularMatrix[i].weightsLen; j++) {
                float rand = calculateRandomWeight();

                if (rand < 0) {
                    if (c.cellularMatrix[i].weights[j] >= 0) c.cellularMatrix[i].weights[j] = -rand;
                    if (c.cellularMatrix[i].weights[j] < 0)  c.cellularMatrix[i].weights[j] = rand;
                } else {
                    if (c.cellularMatrix[i].weights[j] >= 0) c.cellularMatrix[i].weights[j] = rand;
                    if (c.cellularMatrix[i].weights[j] < 0)  c.cellularMatrix[i].weights[j] = -rand;

                }
            }
        }
    } else {
       if (noseTouchActive && !lightAvoidanceActive && !gentleTouchActive && ! harshTouchActive &&
            !thermotaxisActive && !chemorepulsionActive && !chemoattractionActive) {
            //randomize light - ashl, ashr, asjl, asjr, awbl, awbr, askl, askr
                randomizeInnervatingWeight(ASJL);
                randomizeInnervatingWeight(ASJR);
                randomizeInnervatingWeight(AWBL);
                randomizeInnervatingWeight(AWBR);
                randomizeInnervatingWeight(ASKL);
                randomizeInnervatingWeight(ASKR);

            //randomize gentle - alml, almr, plml, plmr, avml, avmr
                randomizeInnervatingWeight(ALML);
                randomizeInnervatingWeight(ALMR);
                randomizeInnervatingWeight(PLML);
                randomizeInnervatingWeight(PLMR);

            //randomize harsh - alml, almr, pvdl, pvdr
                randomizeInnervatingWeight(ALML);
                randomizeInnervatingWeight(ALMR);
                randomizeInnervatingWeight(PVDL);
                randomizeInnervatingWeight(PVDR);

            //randomize thermo - afdl, afdr, phcl, phcr
                randomizeInnervatingWeight(AFDL);
                randomizeInnervatingWeight(AFDR);
                randomizeInnervatingWeight(PHCL);
                randomizeInnervatingWeight(PHCR);

            //randomize repul - phal, phar, phbl, phbr
                randomizeInnervatingWeight(PHAL);
                randomizeInnervatingWeight(PHAR);
                randomizeInnervatingWeight(PHBL);
                randomizeInnervatingWeight(PHBR);

            //randomize attr - asel, aser
                randomizeInnervatingWeight(ASEL);
                randomizeInnervatingWeight(ASER);

        }

        //if only light avoidance
        if (!noseTouchActive && lightAvoidanceActive && !gentleTouchActive && ! harshTouchActive &&
            !thermotaxisActive && !chemorepulsionActive && !chemoattractionActive) {
            //randomize all other neurons that innervate the other functions
            //randomize nose - ashl, ashr, flpl, flpr
                randomizeInnervatingWeight(FLPL);
                randomizeInnervatingWeight(FLPR);

            //randomize gentle - alml, almr, plml, plmr, avml, avmr
                randomizeInnervatingWeight(ALML);
                randomizeInnervatingWeight(ALMR);
                randomizeInnervatingWeight(PLML);
                randomizeInnervatingWeight(PLMR);

            //randomize harsh - alml, almr, pvdl, pvdr
                randomizeInnervatingWeight(ALML);
                randomizeInnervatingWeight(ALMR);
                randomizeInnervatingWeight(PVDL);
                randomizeInnervatingWeight(PVDR);

            //randomize thermo - afdl, afdr, phcl, phcr
                randomizeInnervatingWeight(AFDL);
                randomizeInnervatingWeight(AFDR);
                randomizeInnervatingWeight(PHCL);
                randomizeInnervatingWeight(PHCR);

            //randomize repul - phal, phar, phbl, phbr
                randomizeInnervatingWeight(PHAL);
                randomizeInnervatingWeight(PHAR);
                randomizeInnervatingWeight(PHBL);
                randomizeInnervatingWeight(PHBR);

            //randomize attr - asel, aser
                randomizeInnervatingWeight(ASEL);
                randomizeInnervatingWeight(ASER);

        }

        //if only gentle touch
        if (!noseTouchActive && !lightAvoidanceActive && gentleTouchActive && ! harshTouchActive &&
            !thermotaxisActive && !chemorepulsionActive && !chemoattractionActive) {
            //randomize all other neurons that innervate the other functions
            //randomize nose - ashl, ashr, flpl, flpr
                randomizeInnervatingWeight(ASHL);
                randomizeInnervatingWeight(ASHR);
                randomizeInnervatingWeight(FLPL);
                randomizeInnervatingWeight(FLPR);

            //randomize light - ashl, ashr, asjl, asjr, awbl, awbr, askl, askr
                randomizeInnervatingWeight(ASHL);
                randomizeInnervatingWeight(ASHR);
                randomizeInnervatingWeight(ASJL);
                randomizeInnervatingWeight(ASJR);
                randomizeInnervatingWeight(AWBL);
                randomizeInnervatingWeight(AWBR);
                randomizeInnervatingWeight(ASKL);
                randomizeInnervatingWeight(ASKR);

            //randomize harsh - alml, almr, pvdl, pvdr
                randomizeInnervatingWeight(PVDL);
                randomizeInnervatingWeight(PVDR);

            //randomize thermo - afdl, afdr, phcl, phcr
                randomizeInnervatingWeight(AFDL);
                randomizeInnervatingWeight(AFDR);
                randomizeInnervatingWeight(PHCL);
                randomizeInnervatingWeight(PHCR);

            //randomize repul - phal, phar, phbl, phbr
                randomizeInnervatingWeight(PHAL);
                randomizeInnervatingWeight(PHAR);
                randomizeInnervatingWeight(PHBL);
                randomizeInnervatingWeight(PHBR);

            //randomize attr - asel, aser
                randomizeInnervatingWeight(ASEL);
                randomizeInnervatingWeight(ASER);

        }

        //if only harsh touch
        if (!noseTouchActive && !lightAvoidanceActive && !gentleTouchActive && harshTouchActive &&
            !thermotaxisActive && !chemorepulsionActive && !chemoattractionActive) {
            //randomize all other neurons that innervate the other functions
            //randomize nose - ashl, ashr, flpl, flpr
                randomizeInnervatingWeight(ASHL);
                randomizeInnervatingWeight(ASHR);
                randomizeInnervatingWeight(FLPL);
                randomizeInnervatingWeight(FLPR);

            //randomize light - ashl, ashr, asjl, asjr, awbl, awbr, askl, askr
                randomizeInnervatingWeight(ASHL);
                randomizeInnervatingWeight(ASHR);
                randomizeInnervatingWeight(ASJL);
                randomizeInnervatingWeight(ASJR);
                randomizeInnervatingWeight(AWBL);
                randomizeInnervatingWeight(AWBR);
                randomizeInnervatingWeight(ASKL);
                randomizeInnervatingWeight(ASKR);

            //randomize gentle - alml, almr, plml, plmr, avml, avmr
                randomizeInnervatingWeight(PLML);
                randomizeInnervatingWeight(PLMR);

            //randomize thermo - afdl, afdr, phcl, phcr
                randomizeInnervatingWeight(AFDL);
                randomizeInnervatingWeight(AFDR);
                randomizeInnervatingWeight(PHCL);
                randomizeInnervatingWeight(PHCR);

            //randomize repul - phal, phar, phbl, phbr
                randomizeInnervatingWeight(PHAL);
                randomizeInnervatingWeight(PHAR);
                randomizeInnervatingWeight(PHBL);
                randomizeInnervatingWeight(PHBR);

            //randomize attr - asel, aser
                randomizeInnervatingWeight(ASEL);
                randomizeInnervatingWeight(ASER);

        }

        //if only thermotaxis
        if (!noseTouchActive && !lightAvoidanceActive && !gentleTouchActive && ! harshTouchActive &&
            thermotaxisActive && !chemorepulsionActive && !chemoattractionActive) {
            //randomize all other neurons that innervate the other functions
            //randomize nose - ashl, ashr, flpl, flpr
                randomizeInnervatingWeight(ASHL);
                randomizeInnervatingWeight(ASHR);
                randomizeInnervatingWeight(FLPL);
                randomizeInnervatingWeight(FLPR);

            //randomize light - ashl, ashr, asjl, asjr, awbl, awbr, askl, askr
                randomizeInnervatingWeight(ASHL);
                randomizeInnervatingWeight(ASHR);
                randomizeInnervatingWeight(ASJL);
                randomizeInnervatingWeight(ASJR);
                randomizeInnervatingWeight(AWBL);
                randomizeInnervatingWeight(AWBR);
                randomizeInnervatingWeight(ASKL);
                randomizeInnervatingWeight(ASKR);

            //randomize gentle - alml, almr, plml, plmr, avml, avmr
                randomizeInnervatingWeight(ALML);
                randomizeInnervatingWeight(ALMR);
                randomizeInnervatingWeight(PLML);
                randomizeInnervatingWeight(PLMR);

            //randomize harsh - alml, almr, pvdl, pvdr
                randomizeInnervatingWeight(PVDL);
                randomizeInnervatingWeight(PVDR);

            //randomize repul - phal, phar, phbl, phbr
                randomizeInnervatingWeight(PHAL);
                randomizeInnervatingWeight(PHAR);
                randomizeInnervatingWeight(PHBL);
                randomizeInnervatingWeight(PHBR);

            //randomize attr - asel, aser
                randomizeInnervatingWeight(ASEL);
                randomizeInnervatingWeight(ASER);

        }

        //if only chemorepulsion
        if (!noseTouchActive && !lightAvoidanceActive && !gentleTouchActive && ! harshTouchActive &&
            !thermotaxisActive && chemorepulsionActive && !chemoattractionActive) {
            //randomize all other neurons that innervate the other functions
            //randomize nose - ashl, ashr, flpl, flpr
                randomizeInnervatingWeight(ASHL);
                randomizeInnervatingWeight(ASHR);
                randomizeInnervatingWeight(FLPL);
                randomizeInnervatingWeight(FLPR);

            //randomize light - ashl, ashr, asjl, asjr, awbl, awbr, askl, askr
                randomizeInnervatingWeight(ASHL);
                randomizeInnervatingWeight(ASHR);
                randomizeInnervatingWeight(ASJL);
                randomizeInnervatingWeight(ASJR);
                randomizeInnervatingWeight(AWBL);
                randomizeInnervatingWeight(AWBR);
                randomizeInnervatingWeight(ASKL);
                randomizeInnervatingWeight(ASKR);

            //randomize gentle - alml, almr, plml, plmr, avml, avmr
                randomizeInnervatingWeight(ALML);
                randomizeInnervatingWeight(ALMR);
                randomizeInnervatingWeight(PLML);
                randomizeInnervatingWeight(PLMR);

            //randomize harsh - alml, almr, pvdl, pvdr
                randomizeInnervatingWeight(PVDL);
                randomizeInnervatingWeight(PVDR);

            //randomize thermo - afdl, afdr, phcl, phcr
                randomizeInnervatingWeight(AFDL);
                randomizeInnervatingWeight(AFDR);
                randomizeInnervatingWeight(PHCL);
                randomizeInnervatingWeight(PHCR);

            //randomize attr - asel, aser
                randomizeInnervatingWeight(ASEL);
                randomizeInnervatingWeight(ASER);

        }

        //if only chemoattraction
        if (!noseTouchActive && !lightAvoidanceActive && !gentleTouchActive && ! harshTouchActive &&
            !thermotaxisActive && !chemorepulsionActive && chemoattractionActive) {
            //inhibit all other neurons that innervate the other functions
            //randomize nose - ashl, ashr, flpl, flpr
                randomizeInnervatingWeight(ASHL);
                randomizeInnervatingWeight(ASHR);
                randomizeInnervatingWeight(FLPL);
                randomizeInnervatingWeight(FLPR);

            //randomize light - ashl, ashr, asjl, asjr, awbl, awbr, askl, askr
                randomizeInnervatingWeight(ASHL);
                randomizeInnervatingWeight(ASHR);
                randomizeInnervatingWeight(ASJL);
                randomizeInnervatingWeight(ASJR);
                randomizeInnervatingWeight(AWBL);
                randomizeInnervatingWeight(AWBR);
                randomizeInnervatingWeight(ASKL);
                randomizeInnervatingWeight(ASKR);

            //randomize gentle - alml, almr, plml, plmr, avml, avmr
                randomizeInnervatingWeight(ALML);
                randomizeInnervatingWeight(ALMR);
                randomizeInnervatingWeight(PLML);
                randomizeInnervatingWeight(PLMR);

            //randomize harsh - alml, almr, pvdl, pvdr
                randomizeInnervatingWeight(PVDL);
                randomizeInnervatingWeight(PVDR);

            //randomize thermo - afdl, afdr, phcl, phcr
                randomizeInnervatingWeight(AFDL);
                randomizeInnervatingWeight(AFDR);
                randomizeInnervatingWeight(PHCL);
                randomizeInnervatingWeight(PHCR);

            //randomize repul - phal, phar, phbl, phbr
                randomizeInnervatingWeight(PHAL);
                randomizeInnervatingWeight(PHAR);
                randomizeInnervatingWeight(PHBL);
                randomizeInnervatingWeight(PHBR);

        if (!noseTouchActive && !lightAvoidanceActive && !gentleTouchActive && ! harshTouchActive &&
            !thermotaxisActive && !chemorepulsionActive && !chemoattractionActive) {    //if none are active
            //in addition, randomize all network weights, keeping only their sign (inhibitory/excitatory)
                for (int j = 0; j < neuronCount; j++) {
                    for (int k = 0; k < c.cellularMatrix[j].weightsLen; k++) {
                        float newWeight = calculateRandomWeight();

                        if (newWeight <= 0 && c.cellularMatrix[j].weights[k] <= 0) {
                            c.cellularMatrix[j].weights[k] = -newWeight;
                        } else {
                            c.cellularMatrix[j].weights[k] = newWeight;
                        }
                    }
                }
            }
        }
    }
}

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

void doGentleTouch() {
	for (int i = 0; i < gentleTouchSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if gentletouch neuron is in cellular matrix then set output to true
                int id = c.cellularMatrix[j].cellID;
				if (id == 24 || id == 25 || id == 168 || id == 169 || id == 72) {
                    c.cellularMatrix[j].cellOutput = true;
                    gentleTouchActive = true;
				}
		}
	}
}

void doHarshTouch() {
	for (int i = 0; i < harshTouchSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if harshtouch neuron is in cellular matrix then set output to true
                int id = c.cellularMatrix[j].cellID;
                if (id == 24 || id == 25 || id == 175 || id == 176) {
                    c.cellularMatrix[j].cellOutput = true;
                    harshTouchActive = true;
                }
		}
	}
}

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

    noseTouchActive = false;
    lightAvoidanceActive = false;
    gentleTouchActive = false;
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
        isGentleTouch = data;

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
            lastTickInputs[0] = true;
        } else {
            lastTickInputs[0] = false;
        }

        if (isLightAvoidance == "1") {
            doLightAvoidance();
            lastTickInputs[1] = true;
        } else {
            lastTickInputs[1] = false;
        }

        if (isGentleTouch == "1") {
            doGentleTouch();
            lastTickInputs[2] = true;
        } else {
            lastTickInputs[2] = false;
        }

        if (isHarshTouch == "1") {
            doHarshTouch();
            lastTickInputs[3] = true;
        } else {
            lastTickInputs[3] = false;
        }

        if (isThermotaxis == "1") {
            doThermotaxis();
            lastTickInputs[4] = true;
        } else {
            lastTickInputs[4] = false;
        }

        if (isChemorepulsion == "1") {
            doChemorepulsion();
            lastTickInputs[5] = true;
        } else {
            lastTickInputs[5] = false;
        }

        if (isChemoattraction == "1") {
            doChemoattraction();
            lastTickInputs[6] = true;
        } else {
            lastTickInputs[6] = false;
        }
    }

    sensoryIOfile.close();
}

