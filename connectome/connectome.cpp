//TODO: why are all neurons off except nose touch, even with inputs??
//TODO: why do inputs never seem to result in output values changing?
//TODO: verify saveNewState() is actually saving updated info
//TODO: make code modular for any network!
//TODO: update visual outputs to be more informative... graphics?

/* Note 1
ORDER OF STRETCH GOALS:
-weights are tuned constantly; if "genes" determine they need to be stronger or weaker, it adjusts via glia
-LTP and LTD are represented in cell synapses over short periods

-can abstract the effects of neuroglia into one "glial program"
-this program acts on the "guidepost genes" that tune the weights (strengthening = oligodendrocytes, weakening = microglia)
-later, differentiated glia can be added, including astrocytes, which synchronize nearby cells

-NT-R reactions can then be incorporated into weight calculation
-metabotropic transmitters/receptors can be made to have variable effects over time compared to the 'normal' ionotropic variety
-later, a gradient can be added to effects of metabotropic receptors on nearby cell's weights
*/

/* Note 2
 ultimately biologic "weight initialization" uses fuzzy logic...
   -randomness generated by who is nearest and how it affects weights
   -plus effect of oligodendrocytes
   -plus hebbian learning/LTP
   -plus LTD
   -plus the interaction of transmitters-receptors
   -plus effects of nearby transmitters-receptors

   we can approximate this with:
        -randomly initialized weights between 0 and .1
        -LTP/LTD funcitonality
        -neuroglia "gene guidepost" program to determine which weights to tune, how, and when based off of data sets on elegans synapse weights
        -NT-R reactions
        -gradient effects of metabotropic transmitters in 2d matrix
*/

//Authors: JoJo, Molly, Eonn, Kaiz - code created Dec. 2022

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include "neuronIO.h"


/*
Function to print the entire connectome's cellular matrix to the terminal
*/
void printCellularMatrix() {
    int width = 17;
    int height = 18;
    int neuronCounter = 1;

        for (int i = 0; i < height; i++) {
            for (int k = 0; k < width; k++) {
                if (neuronCounter < neuronCount) {
                    bool cellOutput = false;
                    cellOutput = getCellOutputFromMatrix(neuronCounter);

                    if (cellOutput) {
                        cout << "[1]";
                    } else {
                        cout << "[0]";
                    }

                    neuronCounter++;
                }
            }
            cout << '\n';
        }

    cout << '\n';
}

/*
Function to print a labeled array of the motor matrix
*/
void printMotorMatrix() {
    ofstream motorIOfile;
    motorIOfile.open("C:/Users/t420/Desktop/custom-elegans-network/connectome/motorOutputs.txt", ios::out);

    for (int i = 0; i < commandInterneuronSize; i++) {
                //AVBL
        if (i == 0) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(56);

            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
                lastTickOutputs[0] = true;
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
                lastTickOutputs[0] = false;
            }
        }
                //AVBR
        if (i == 1) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(57);

            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
                lastTickOutputs[1] = true;
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
                lastTickOutputs[1] = false;
            }
        }
                //PVCL
        if (i == 2) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(173);
            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
                lastTickOutputs[2] = true;
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
                lastTickOutputs[2] = false;
            }
        }
                //PVCR
        if (i == 3) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(174);
            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
                lastTickOutputs[3] = true;
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
                lastTickOutputs[3] = false;
            }
        }
                //AVAL
        if (i == 4) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(54);
            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
                lastTickOutputs[4] = true;
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
                lastTickOutputs[4] = false;
            }
        }
                //AVAR
        if (i == 5) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(55);
            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
                lastTickOutputs[5] = true;
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
                lastTickOutputs[5] = false;
            }
        }
                //AVDL
        if (i == 6) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(58);
            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
                lastTickOutputs[6] = true;
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
                lastTickOutputs[6] = false;
            }
        }
                //AVDR
        if (i == 7) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(59);
            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
                lastTickOutputs[7] = true;
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
                lastTickOutputs[7] = false;
            }
        }
                //AVEL
        if (i == 8) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(60);
            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
                lastTickOutputs[8] = true;
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
                lastTickOutputs[8] = false;
            }
        }
                //AVER
        if (i == 9) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(61);
            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
                lastTickOutputs[9] = true;
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
                lastTickOutputs[9] = false;
            }
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

/*
Function to calculate if a given cell fires. Takes a cells ID, outputs a boolean activation value.
*/
bool activationFunction (int cellID) {          	                    //activation function calculator-- it tells you what output the weighted inputs into the given neuron make
    int inputLen = c.cellularMatrix[cellID].inputsLen;                   //get the length of the input and weight matrix for a given neuron
    float finalSummation = 0.0;                                         //initalize function to hold final sum(Xi * Wi)
    float neuronWeights[inputLen] = {};                               //make matrix for all cells weights
    int neuronInputs[inputLen] = {};                                  //make matrix for all cells inputs

    for (int i = 0; i < inputLen; i++) {
        neuronWeights[i] = getWeightFromMatrix(cellID, i);              //update matrix to hold all cell weights for a given neuron
        neuronInputs[i] = getInputFromMatrix(cellID, i);                //update matrix to hold all cell input IDs for a given neurons presynapses
        //cout << "weights: " << neuronWeights[i] << endl;
        //cout << "inputs: " << neuronInputs[i] << endl;
    }

    float productMatrix[inputLen];                                   //make a maktrix to hold all multiplied sums

    bool inputValues[inputLen] = {};                                    //make an array to hold all boolean values for each presynaptic neuron input

    for (int i = 0; i < inputLen; i++) {                                //iterate over the length of presynaptic inputs
        inputValues[i] = c.cellularMatrix[neuronInputs[i]].cellOutput;  //fill the presynaptic boolean matrix with every output value for each presynaptic neuron
        //cout << "input values: " << inputValues[i] << endl;
    }

    for (int i = 0; i < inputLen; i++) {                              //iterate over all possible connections
        productMatrix[i] = neuronWeights[i] * inputValues[i];           //fill a matrix with the product of the Wi and Xi values
        if (!isFirstInit) LTPandD(i, cellID);                           //for each connection do hebbian logic to create new weights for next tick
//        cout << "productMatrix: " << productMatrix[i] << endl;
    }

    for (int i = 0; i < inputLen; i++) {		                        //iterate over the length of presynaptic inputs
        finalSummation += productMatrix[i];		                        //for every input add the product matrix to a running sum
        //cout << productMatrix[i];
    }

//    cout << "Final Sum: " << finalSummation << endl;
//    cout << "Threshold: " << threshold << endl;

    if (finalSummation < threshold) {       //if the running sum is less than the given neurons threshold
        if (initNum >= 3) {
            priorTicksOutputs[cellID][2] = false;
        } else if (initNum == 2) {
            priorTicksOutputs[cellID][1] = false;
        } else {
            priorTicksOutputs[cellID][0] = false;
        }

        return false;
    } else {                                                            //otherwise
        if (initNum >= 3) {
            priorTicksOutputs[cellID][2] = true;
        } else if (initNum == 2) {
            priorTicksOutputs[cellID][1] = true;
        } else {
            priorTicksOutputs[cellID][0] = true;
        }

        return true;
    }
}

/*
Function to set the next tick of the connectome.
*/
void setNextState() {                  			        //function to update values in connectome to next state using the activation function
  for (int i = 0; i < neuronCount; i++) {		        //for every cell in the connectome
      bool activationVal = activationFunction(i);
      //TODO: for some reason activationFunction() always returns true??

      if (activationVal) {						        //if the activation function of that cell returns true
          c.outputs[i] = 1;								//save its output in the connectomes output matrix as true
	      updateOutputArray(i, 1);						//update the individual output value for that cell in the cells struct as well (not just in the connectomes matrix)
       } else {
          c.outputs[i] = 0;								//otherwise save it as false
	      updateOutputArray(i, 0);						//update the individual output value for that cell in the cells struct as well (not just in the connectomes matrix)
       }
  }
}

/*
Function to save the current state of the connectomes cellular matrix to the matrix file.
*/
void saveNewState() {
    for (int i = 0; i < neuronCount; i++) {             //for every cell in the connectome
        neuronToString(getNeuronFromMatrix(i));         //call a function to write its data to a file
    }
}

/*
Main function that runs connectome in a loop
*/
int main() {
    for (int i = 1; i <= neuronCount; i++) {    //for every neuron in the network
        c.cellularMatrix[i] = neuralList[i];    //load the neuron from a file into the matrix of the connectome
    }

    initNum = 0;
    bool activated = true;                      //declare a boolean to set connectome as 'on'

    while (activated) {                         //while it's true run the connectome
        getSensoryInputs();                     //get updated sensory information from a file

        printCellularMatrix();                  //print the connectome out
        printMotorMatrix();                     //print the motor cell matrix out

        setNextState();                         //calculate next state of the connectome
        saveNewState();                         //save the state of the connectome

        glialWeightTuning();                    //tune weights of program to meet biologic needs

        isFirstInit = false;                    //turn variable to false to indicate that connectome is now initialized

        initNum++;                              //increments initNum for use by hebbian function

        if (initNum >= 3) {                     //if initNum reaches end of the output matrices scope then reset it to zero
            initNum = 1;
        }
    }

    return 0;
}
