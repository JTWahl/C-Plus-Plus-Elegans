#include <iostream>
#include "connectome.h"


//TODO: generate functions for neurons.cpp
//TODO: neurotransmitters, receptors, glia, etc
//TODO: add hebian learning capabilities, adjustable weights/thresholds/back-prop tuning, etc

const int commandInterneuronSize = 10;
const int noseTouchSize = 2;
const int lightAvoidanceSize = 8;
const int gentleTouchSize = 5;
const int harshTouchSize = 4;
const int thermotaxisSize = 8;
const int chemorepulsionSize = 8;
const int chemoattractionSize = 6;

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

bool getMotorCellState() {
	bool cmdInterneuronActivations[commandInterneuronSize - 1] = {};

	for (int i = 0; i < commandInterneuronSize; i++) {		//for every element in the list of motor neurons
		if (commandInterneurons[i].cellOutput) {					//if the cell output of the current motor neuron is true
			cmdInterneuronActivations[i] = true;					//set the value in a boolean array as true
		} else {												//otherwise
			cmdInterneuronActivations[i] = false;					//set the value as false
		}
	}

	return cmdInterneuronActivations[commandInterneuronSize - 1];
}

void printMotorMatrix(connectome c) {
    for (int i = 0; i < commandInterneuronSize; i++) {
        if (commandInterneurons[i].cellOutput) {
            std::cout << " [1]  ";
        } else {
            std::cout << " [0]  ";
        }
        std::cout << '\n';
    }
    std::cout << "^AVBL ";
    std::cout << "^AVBR ";
    std::cout << "^PVCL ";
    std::cout << "^PVCR ";
    std::cout << "^AVAL ";
    std::cout << "^AVAR ";
    std::cout << "^AVDL ";
    std::cout << "^AVDR ";
    std::cout << "^AVEL ";
    std::cout << "^AVER " + '\n';
}

void doNoseTouch(connectome c) {
	for (int i = 0; i < noseTouchSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
            //if nosetouch neuron is in cellular matrix then set output to true
            if (c.cellularMatrix[j].cellID == noseTouch[i].cellID) {
                c.cellularMatrix[j].cellOutput = true;
            }
        }
    }
}

void doLightAvoidance(connectome c) {
	for (int i = 0; i < lightAvoidanceSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if light avoidance neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == lightAvoidance[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doGentleTouch(connectome c) {
	for (int i = 0; i < gentleTouchSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if gentletouch neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == gentleTouch[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doHarshTouch(connectome c) {
	for (int i = 0; i < harshTouchSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if harshtouch neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == harshTouch[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doThermotaxis(connectome c) {
	for (int i = 0; i < thermotaxisSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if thermotaxis neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == thermotaxis[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
    }
}

void doChemorepulsion(connectome c) {
	for (int i = 0; i < chemorepulsionSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if chemorepulsion neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == chemorepulsion[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doChemoattraction(connectome c) {
	for (int i = 0; i < chemoattractionSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
			//if chemoattraction neuron is in cellular matrix then set output to true
			if (c.cellularMatrix[j].cellID == chemoattraction[i].cellID) {
				c.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

neuron getNeuronFromMatrix(int targetID, connectome c) {								//function to get the neuron out of the connectome object's cellular matrix
	for (int i = 0; i < neuronCount; i++) {		//for every cell in the matrix
		neuron currentCell = c.cellularMatrix[i];				//make a copy of each cell and set it to a temporary variable
		if (currentCell.cellID == targetID) {							//if the temporary cell's ID is the same as the target
			return c.cellularMatrix[i];						//return the cell from the connectome's matrix
		}
   }

   return neuronAccess(1);
}

int getCellThresholdFromMatrix(int targetID, connectome c) {
	for (int i = 0; i < neuronCount; i++) {		//for every cell in the matrix
		neuron currentCell = c.cellularMatrix[i];				//make a copy of each cell and set it to a temporary variable
		if (currentCell.cellID == targetID) {							//if the temporary cell's ID is the same as the target
			return c.cellularMatrix[i].threshold;				//return the threshold value of the cell from the connectome's matrix
		}
   }
   return 0;
}

bool getCellOutputFromMatrix(int targetID, connectome c) {
	for (int i = 0; i < neuronCount; i++) {		//for every cell in the matrix
		neuron currentCell = c.cellularMatrix[i];				//make a copy of each cell and set it to a temporary variable
		if (currentCell.cellID == targetID) {							//if the temporary cell's ID is the same as the target
			return c.cellularMatrix[i].cellOutput;				//return the output value of the cell from the connectome's matrix
		}
   }
   return 0;
}

int getCellInputLenFromMatrix(int targetID, connectome c) {
	for (int i = 0; i < neuronCount; i++) {		//for every cell in the matrix
		neuron currentCell = c.cellularMatrix[i];				//make a copy of each cell and set it to a temporary variable
		if (currentCell.cellID == targetID) {							//if the temporary cell's ID is the same as the target
			return c.cellularMatrix[i].inputsLen;				//return the length of the matrix of inputs of the cell from the connectome's matrix
		}
   }
   return 0;
}

int* getCellInputsFromMatrix(int targetID, connectome c) {
	for (int i = 0; i < neuronCount; i++) {		                //for every cell in the matrix
		neuron currentCell = c.cellularMatrix[i];				//make a copy of each cell and set it to a temporary variable
		if (currentCell.cellID == targetID) {                   //if the temporary cell's ID is the same as the target
			return c.cellularMatrix[i].inputs;     				//return the matrix of inputs of the cell from the connectome's matrix
		}
    }
   return 0;
}

int getCellWeightLenFromMatrix(int targetID, connectome c) {
		for (int i = 0; i < neuronCount; i++) {		//for every cell in the matrix
		neuron currentCell = c.cellularMatrix[i];				//make a copy of each cell and set it to a temporary variable
		if (currentCell.cellID == targetID) {							//if the temporary cell's ID is the same as the target
			return c.cellularMatrix[i].weightsLen;				//return the length of the matrix of inputs of the cell from the connectome's matrix
		}
   }
   return 0;
}

int* getCellWeightsFromMatrix(int targetID, connectome c) {
	for (int i = 0; i < neuronCount; i++) {		//for every cell in the matrix
		neuron currentCell = c.cellularMatrix[i];				//make a copy of each cell and set it to a temporary variable
		if (currentCell.cellID == targetID) {							//if the temporary cell's ID is the same as the target
			return c.cellularMatrix[i].weights;				//return the matrix of weights of the cell from the connectome's matrix
		}
   }
   return 0;
}

void printCellularMatrix(connectome c) {
    int width = 17;
    int height = 16;

    for (int i = 0; i < neuronCount; i++) {     //iterate through list of neurons
        for (int j = 0; j < width; j++) {       //iterate over width
            for (int k = 0; k < height; k++) {  //iterate over height
                //print 0 or 1 for the neuron depending on state
                bool outputState = getCellOutputFromMatrix(i, c);
                if (outputState) {
                    std::cout << "[1]";
                } else {
                    std::cout << "[0]";
                }
            }
            //print new line char
            std::cout << '\n';
        }
    }
}

bool activationFunction (int cellID, connectome c) {          	//activation function calculator-- it tells you what output the weighted inputs into the given neuron make
   int finalSummation = 0;
   int summationMatrix[getCellInputLenFromMatrix(cellID, c)] = {*getCellWeightsFromMatrix(cellID, c) * *getCellInputsFromMatrix(cellID, c)};	//multiply the input matrix by the weights matrix

   for (int i = 0; i < getCellInputLenFromMatrix(cellID, c); i++) {		//for every input
         finalSummation = finalSummation + summationMatrix[i];										//add their product to the running sum
    }

   return finalSummation > getCellThresholdFromMatrix(cellID, c);					//if the running sum exceeds the cells threshold return true, else return false
}

void updateInputArray(int targetNeuronID, bool outputVal, connectome c) {								//update synapses of other neurons based on post-synaptic value of given neuron
	for (int i = 0; i < neuronCount; i++) {						//for every cell in the connectome
		for (int j = 0; j < getCellInputLenFromMatrix(targetNeuronID, c); j++) {		//and every input of the target neuron
			if (getNeuronFromMatrix(i, c).inputs[j] == targetNeuronID) {		//check to see if the input cells correspond to the target neuron
                getNeuronFromMatrix(i, c).inputs[j] = outputVal;   //if they do, update its value to be the new output value
			}
		}
	}
}

void updateOutputArray(int cellID, bool outputVal, connectome c) {
    //getNeuronFromMatrix(cellID, c).cellOutput = outputVal;
    c.cellularMatrix[cellID].cellOutput = outputVal;
}

void setNextState(connectome c) {                  									//function to update values in connectome to next state using the activation function
   for (int i = 1; i < neuronCount; i++) {					//for every cell in the connectome
       if (activationFunction(i, c)) {										//if the activation function of that cell returns true
          c.outputs[i] = 1;									//save its output in the connectomes output matrix as true
       } else {
          c.outputs[i] = 0;									//otherwise save it as false
       }

       updateInputArray(i, c.outputs[i], c);						//update the rest of the cells that use that output value in the connectome
	   updateOutputArray(i, c.outputs[i], c);						//update the individual output value for that cell in the cells struct as well (not just in the connectomes matrix)
   }
}
