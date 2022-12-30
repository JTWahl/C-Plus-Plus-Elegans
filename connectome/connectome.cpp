//TODO: try new dataset with sign for synapses and proper weights for inputs based on synapses
//TODO: implement some form of synaptic competition in hebbian function? Limited hebbian resources and most frequent fires get it?
//TODO: decide if we can salvage the idea of a "glial function" that supervises weights or if we should save it for the FPGA project version
//TODO: add arduino/pi compatability! allow program to interface with wormybots for demonstrations
//TODO: build new wormybot to house my personal ANN model... add an LCD face? Questions, questions...

/*
PROJECT CREDITS

    Project Leads: JoJo Wahl, Molly Camp
    Consultation and Debugging: Eonn Penalver, Kaiz Akhtar
    Date - Dec. 2022

*/

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
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
            }
        }
                //AVBR
        if (i == 1) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(57);

            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
            }
        }
                //PVCL
        if (i == 2) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(173);
            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
            }
        }
                //PVCR
        if (i == 3) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(174);
            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
            }
        }
                //AVAL
        if (i == 4) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(54);
            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
            }
        }
                //AVAR
        if (i == 5) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(55);
            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
            }
        }
                //AVDL
        if (i == 6) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(58);
            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
            }
        }
                //AVDR
        if (i == 7) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(59);
            if (cellOutput) {
                cout << " [1]  ";
                motorIOfile << "1" << '\n';
            } else {
                cout << " [0]  ";
                motorIOfile << "0" << '\n';
            }
        }
    }

    motorIOfile.close();

    cout << '\n';
    cout << " AVBL " << " AVBR " << " PVCL " << " PVCR " << " AVAL " << " AVAR " << " AVDL " << " AVDR " << endl;
    cout << " FWD  " << " FWD  " << " FWDt " << " FWDt " << " BCK  " << " BCK  " << " BCKh " << " BCKh" << endl;
    cout << '\n' << '\n';
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
//        cout << "productMatrix: " << productMatrix[i] << endl;
    }

    for (int i = 0; i < inputLen; i++) {		                        //iterate over the length of presynaptic inputs
        finalSummation += productMatrix[i];		                        //for every input add the product matrix to a running sum
        //cout << productMatrix[i];
    }

//    cout << "Final Sum: " << finalSummation << endl;
//    cout << "Threshold: " << threshold << endl;

    if (finalSummation < threshold) {       //if the running sum is less than the given neurons threshold
        return false;
    } else {
        firingRates[cellID][0] = firingRates[cellID][1];
        firingRates[cellID][1] = firingRates[cellID][2];
        firingRates[cellID][2] = 1;

        return true;
    }
}

/*
Function for doing hebbian learning with each applicable neuron in the network
*/
void doLearning() {
    int hebbianCap = 100;   //variable to hold competitive maximum value for hebbian learning adjustments
    float rateSums[neuronCount] = {};   //variable to hold the sums of the firing rates for each neuron
    int maxRateIDs[hebbianCap] = {};            //declare array of IDs of neurons with highest rates

    for (int i = 0; i < neuronCount; i++) {
        rateSums[i] = 0;
    }

    for (int i = 0; i < hebbianCap; i++) {
        maxRateIDs[i] = 1;
    }

    for (int i = 0; i < neuronCount; i++) {     //iterate over entire connectome
        rateSums[i] = (firingRates[i][0] + firingRates[i][1] + firingRates[i][2]) / 3;  //calculate the firing rate of the current neuron
        for (int j = hebbianCap - 1; j > 0; j--) {                                     //iterate over list of max rates starting from top
            //if the current neurons firing rate is bigger than the current max rate IDs rate then set it to the new neuron
            if (rateSums[i] > rateSums[maxRateIDs[j]]) maxRateIDs[j] = i;
        }
    }

    for (int i = 0; i < neuronCount; i++) {     //iterate over all neurons in the connectome
        for (int k = 0; k < hebbianCap; k++) {  //iterate over the array of max rates
            if (maxRateIDs[k] == i) {           //check to see if maxRateIDs contains the current neuron
                for (int j = 0; j < c.cellularMatrix[i].weightsLen; j++) {  //iterate over all inputs in the current neuron
                    hebbian(c.cellularMatrix[i].inputs[j], i);              //do hebbian learning with it
                }
            } else {
                for (int j = 0; j < c.cellularMatrix[i].weightsLen; j++) {  //iterate over all inputs in the current neuron
                    LTD(c.cellularMatrix[i].inputs[j], i);                 //otherwise just do LTD
                }
            }
        }
    }
}

/*
Function to set the next tick of the connectome.
*/
void setNextState() {                  			        //function to update values in connectome to next state using the activation function
  for (int i = 0; i < neuronCount; i++) {		        //for every cell in the connectome
      bool activationVal = activationFunction(i);

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
    matrixFile.open("C:/Users/t420/Desktop/custom-elegans-network/connectome/cellularMatrixData.txt");      //open the file

    for (int i = 0; i < neuronCount; i++) {
        neuronToString(c.cellularMatrix[i]);
    }

    matrixFile.close();
}

/*
Function to set up the connectome matrix and array that holds output firing data for the hebbian function
*/
void connectomeInit() {
    for (int i = 0; i <= neuronCount; i++) {    //for every neuron in the network
        c.cellularMatrix[i] = neuralList[i];    //load the neuron from a file into the matrix of the connectome

        for (int j = 0; j < 3; j++) {           //loop over every iteration in the firing rate matrix
            firingRates[i][j] = 0;              //initialize it with all zeroes
        }
    }
}

/*
Main function that runs connectome in a loop
*/
int main() {
    connectomeInit();                           //initialize connectome
    bool activated = true;                      //declare a boolean to set connectome as 'on'

    while (activated) {                         //while it's true run the connectome
        getSensoryInputs();                     //get updated sensory information from a file

        printCellularMatrix();                  //print the connectome out
        printMotorMatrix();                     //print the motor cell matrix out

        doLearning();                           //run hebbian algorithm

        setNextState();                         //calculate next state of the connectome
        //saveNewState();                         //save the state of the connectome
    }

    return 0;
}
