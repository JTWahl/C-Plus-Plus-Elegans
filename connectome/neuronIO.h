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

#define AVBL 56   //- forward
#define AVBR 57   //- forward
#define PVCL 173  //- forward from harsh touch to tail
#define PVCR 174  //- forward from harsh touch to tail
#define AVAL 54   //- backward
#define AVAR 55   //- backward
#define AVDL 58   //- backward from head touch
#define AVDR 59   //- backward from head touch
#define AVEL 60   //- backward
#define AVER 61   //- backward


bool getInputsFromLastTick(int inputID) {
    return lastTickInputs[inputID];
}

bool getOutputsFromLastTick(int outputID) {
    return lastTickOutputs[outputID];
}

/*void glialWeightTuning() {
    //did nosetouch activate?
    if (noseTouchActive) {
            //initiate escape behavior-- backing up, acceleration, lots of movement backward
            //should be backing up a lot, should not be moving forward
            //if no backward movement, increase weight to avd primarily, as well as ave/ava

        //if avdl is not active --> increase weights to avdr
        if (!getCellOutputFromMatrix(AVDL)) {                            //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVDR) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                    }
                }
            }
        }

        //if avdr is not active --> increase weights to avdl
        if (!getCellOutputFromMatrix(AVDR)) {
            for (int i = 0; i < neuronCount; i++) {
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) {
                    if (c.cellularMatrix[i].inputs[j] == AVDL) {
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                    }
                }
            }
        }
    }else if (lightAvoidanceActive) {
            //initiates reversals and acceleration
            //should be moving a lot in one direction
            //if no forward/backward motion, increase weight of avb, ava, ave

        //if only avbl is active and not avbr --> increase weights to avbr
        if (!getCellOutputFromMatrix(AVBR) && getCellOutputFromMatrix(AVBL)) {
            for (int i = 0; i < neuronCount; i++) {
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) {
                    if (c.cellularMatrix[i].inputs[j] == AVBR) {
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                    }
                }
            }
        }

        //if only avbr is active and not avbl --> increase weights to avbl
        if (!getCellOutputFromMatrix(AVBL) && getCellOutputFromMatrix(AVBR)) {
            for (int i = 0; i < neuronCount; i++) {
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) {
                    if (c.cellularMatrix[i].inputs[j] == AVBL) {
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                    }
                }
            }
        }

        //if only aval and not avar is active --> increase weights to aval
        if (!getCellOutputFromMatrix(AVAR) && getCellOutputFromMatrix(AVAL)) {
            for (int i = 0; i < neuronCount; i++) {
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) {
                    if (c.cellularMatrix[i].inputs[j] == AVAL) {
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                    }
                }
            }
        }

        //if only avar and not aval is active --> increase weights to avar
        if (!getCellOutputFromMatrix(AVAL) && getCellOutputFromMatrix(AVAR)) {
            for (int i = 0; i < neuronCount; i++) {
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) {
                    if (c.cellularMatrix[i].inputs[j] == AVAR) {
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                    }
                }
            }
        }

        //if only avel and not aver is active --> increase weights to avel
        if (!getCellOutputFromMatrix(AVER) && getCellOutputFromMatrix(AVEL)) {
            for (int i = 0; i < neuronCount; i++) {
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) {
                    if (c.cellularMatrix[i].inputs[j] == AVER) {
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                    }
                }
            }
        }

        //if only aver and not avel is active --> increase weights to aver
        if (!getCellOutputFromMatrix(AVEL) && getCellOutputFromMatrix(AVER)) {
            for (int i = 0; i < neuronCount; i++) {
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) {
                    if (c.cellularMatrix[i].inputs[j] == AVER) {
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                    }
                }
            }
        }
    } else if (gentleTouchActive) {
        //small amount of backward locomotion if on head, forward if on back
        //should be moving back if on head, forward if on back
        //if no back or forward (respective) movement, then increase weight on neurons, increase avb (forward) or ava/ave (backward)

        //if only avbl is active and not avbr --> increase weights to avbr
        if (!getCellOutputFromMatrix(AVBR) && getCellOutputFromMatrix(AVBL)) {                            //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVBR) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }
                }
            }
        }

        //if only avbr is active and not avbl --> increase weights to avbl
        if (!getCellOutputFromMatrix(AVBL) && getCellOutputFromMatrix(AVBR)) {                            //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVBL) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }
                }
            }
        }

        //if only aval and not avar is active --> increase weights to aval
        if (!getCellOutputFromMatrix(AVAR) && getCellOutputFromMatrix(AVAL)) {                            //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVAL) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }
                }
            }
        }

        //if only avar and not aval is active --> increase weights to avar
        if (!getCellOutputFromMatrix(AVAL) && getCellOutputFromMatrix(AVAR)) {                            //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVAR) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }
                }
            }
        }

        //if only avel and not aver is active --> increase weights to avel
        if (!getCellOutputFromMatrix(AVER) && getCellOutputFromMatrix(AVEL)) {                            //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVER) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }
                }
            }
        }

        //if only aver and not avel is active --> increase weights to aver
        if (!getCellOutputFromMatrix(AVEL) && getCellOutputFromMatrix(AVER)) {                            //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVER) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }
                }
            }
        }
    } else if (harshTouchActive) {
        //escape response, lots of backward locomotion if on head, forward if on back
        //should be moving back if on head, forward if on back
        //if no back or forward (respective) movement, then increase weight on neurons, increase avb (forward) or ava/ave (backward)

        //if only avbl is active and not avbr --> increase weights to avbr
        if (!getCellOutputFromMatrix(AVBR) && getCellOutputFromMatrix(AVBL)) {                            //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVBR) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();           //increase the weight
                    }
                }
            }
        }

        //if only avbr is active and not avbl --> increase weights to avbl
        if (!getCellOutputFromMatrix(AVBL) && getCellOutputFromMatrix(AVBR)) {                            //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVBL) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }
                }
            }
        }

        //if only aval and not avar is active --> increase weights to aval
        if (!getCellOutputFromMatrix(AVAR) && getCellOutputFromMatrix(AVAL)) {                            //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVAL) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }
                }
            }
        }

        //if only avar and not aval is active --> increase weights to avar
        if (!getCellOutputFromMatrix(AVAL) && getCellOutputFromMatrix(AVAR)) {                            //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVAR) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }
                }
            }
        }

        //if only avel and not aver is active --> increase weights to avel
        if (!getCellOutputFromMatrix(AVER) && getCellOutputFromMatrix(AVEL)) {                            //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVER) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }
                }
            }
        }

        //if only aver and not avel is active --> increase weights to aver
        if (!getCellOutputFromMatrix(AVEL) && getCellOutputFromMatrix(AVER)) {                            //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVER) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }
                }
            }
        }
    } else if (thermotaxisActive) {
        //positive thermotaxis moves to heat, negative moves to cold, both use AFD, causes worm to bias reversals and movement to one gradient
        //should be moving a lot in one direction
        //if no forward/backward motion, increase weight of all movement neurons, increase ave, avb, ava

        //if no avel/aver and no avbl/avbr and no aval/avar --> increase weights to avel, aver, avbl, avbr, aval, avar
        if (!getCellOutputFromMatrix(AVBL) && !getCellOutputFromMatrix(AVBR) && !getCellOutputFromMatrix(AVEL) &&
            !getCellOutputFromMatrix(AVER) && !getCellOutputFromMatrix(AVAL) && !getCellOutputFromMatrix(AVAR)) {              //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVBL) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }

                    if (c.cellularMatrix[i].inputs[j] == AVBR) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }

                    if (c.cellularMatrix[i].inputs[j] == AVEL) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }

                    if (c.cellularMatrix[i].inputs[j] == AVER) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }

                    if (c.cellularMatrix[i].inputs[j] == AVAL) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }

                    if (c.cellularMatrix[i].inputs[j] == AVAR) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }
                }
            }
        }
    } else if (chemorepulsionActive) {
        //escape behavior, few reversals, slow movement away from positive gradient
        //if no forward/backward motion, increase weight of all movement neurons, increase ave, avb, ava

        //if no avel/aver and no avbl/avbr and no aval/avar --> increase weights to avel, aver, avbl, avbr, aval, avar
        if (!getCellOutputFromMatrix(AVBL) && !getCellOutputFromMatrix(AVBR) && !getCellOutputFromMatrix(AVEL) &&
            !getCellOutputFromMatrix(AVER) && !getCellOutputFromMatrix(AVAL) && !getCellOutputFromMatrix(AVAR)) {              //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVBL) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }

                    if (c.cellularMatrix[i].inputs[j] == AVBR) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }

                    if (c.cellularMatrix[i].inputs[j] == AVEL) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }

                    if (c.cellularMatrix[i].inputs[j] == AVER) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }

                    if (c.cellularMatrix[i].inputs[j] == AVAL) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }

                    if (c.cellularMatrix[i].inputs[j] == AVAR) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = calculateRandomWeight();             //increase the weight
                    }
                }
            }
        }
    } else if (chemoattractionActive) {
        //causes general movement toward a positive gradient, slow moving, requent small reversals/turns
        //should be switching directions frequently
        //if both of a pair are active, decrease/increase weights to make skewed and increase reversals if AVBL/AVBR, AVAL/AVAR, or AVEL/AVER then decrease an L or R

        //if both avbl and avbr --> randomly decrease weights to one, increase to other
        if (!getCellOutputFromMatrix(AVBL) && !getCellOutputFromMatrix(AVBR)) {              //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVBL) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = 0;             //increase the weight
                    }
                }
            }
        }

        //if both aval and avar --> randomly decrease weights to one, increase to other
        if (!getCellOutputFromMatrix(AVAL) && !getCellOutputFromMatrix(AVAR)) {              //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVAL) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = 0;             //increase the weight
                    }
                }
            }
        }

        //if both avel and aver --> randomly decrease weights to one, increase to other
        if (!getCellOutputFromMatrix(AVEL) && !getCellOutputFromMatrix(AVER)) {              //if AVDL is not active
            for (int i = 0; i < neuronCount; i++) {                      //for every neuron in the network
                for (int j = 0; j < getCellInputLenFromMatrix(i); j++) { //for every input in a given neuron
                    if (c.cellularMatrix[i].inputs[j] == AVER) {         //if the input contains the cell ID to AVDR
                        c.cellularMatrix[i].weights[j] = 0;             //increase the weight
                    }
                }
            }
        }
    } else {
        for (int i = 0; i < neuronCount; i++) {
            for (int j = 0; j < getCellInputLenFromMatrix(i); j++) {
                if (c.cellularMatrix[i]. inputs[j] == AVBL) {
                        if (c.cellularMatrix[i].weights[j] <= .1) c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                }

                if (c.cellularMatrix[i]. inputs[j] == AVBR) {
                        if (c.cellularMatrix[i].weights[j] <= .1) c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                }

                if (c.cellularMatrix[i]. inputs[j] == PVCL) {
                        if (c.cellularMatrix[i].weights[j] <= .1) c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                }

                if (c.cellularMatrix[i]. inputs[j] == PVCR) {
                        if (c.cellularMatrix[i].weights[j] <= .1) c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                }

                if (c.cellularMatrix[i]. inputs[j] == AVAL) {
                        if (c.cellularMatrix[i].weights[j] <= .1) c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                }

                if (c.cellularMatrix[i]. inputs[j] == AVAR) {
                        if (c.cellularMatrix[i].weights[j] <= .1) c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                }

                if (c.cellularMatrix[i]. inputs[j] == AVDL) {
                        if (c.cellularMatrix[i].weights[j] <= .1) c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                }

                if (c.cellularMatrix[i]. inputs[j] == AVDR) {
                        if (c.cellularMatrix[i].weights[j] <= .1) c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                }

                if (c.cellularMatrix[i]. inputs[j] == AVEL) {
                        if (c.cellularMatrix[i].weights[j] <= .1) c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                }

                if (c.cellularMatrix[i]. inputs[j] == AVER) {
                        if (c.cellularMatrix[i].weights[j] <= .1) c.cellularMatrix[i].weights[j] = calculateRandomWeight();
                }
            }
        }
    }
}*/

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
            if (id == 15 || id == 16) {
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
                if (id == 44 || id == 45 || id == 48 || id == 74 || id == 75 || id == 76 || id == 50 || id == 51) {
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
                if (id == 9 || id == 10 || id == 77 || id == 78 || id == 15 || id == 16 || id == 166 || id == 167) {
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
                if (id == 162 || id == 163 || id == 164 || id == 165 || id == 44 || id == 45 || id == 7 || id == 8) {
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
                if (id == 40 || id == 41 || id == 73 || id == 74 || id == 77 || id == 78) {
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

