//TODO: decide if we're gonna use glia or if we need to edit
//TODO: tune learning variables to produce optimal output
//TODO: add sense for gustatory salt sensing neurons
//TODO: build new wormybot to house my personal ANN model... add an LCD face? Questions, questions...

/*
PROJECT CREDITS

    Project Leads: JoJo Wahl, Molly Camp
    Consultation and Debugging: Eonn Penalver, Kaiz Akhtar
    Date - Dec. 2022

*/

#include "neuronIO.h"

/*
Function to print the entire connectome's cellular matrix to the terminal
*/
void printCellularMatrix() {
    int width = matrixWidth; //17
    int height = matrixHeight; //18
    int neuronCounter = 0;

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
void printMotorRatios() {
    int VAcount = 12;
    int VBcount = 11;
    int DAcount = 9;
    int DBcount = 7;
    int VAsum = 0;
    int VBsum = 0;
    int DAsum = 0;
    int DBsum = 0;

    //backward ventral locomotion motor neurons
    int motorNeuronAVentral[VAcount] = {
      VA1, VA2, VA3, VA4, VA5, VA6, VA7, VA8, VA9, VA10, VA11, VA12
    };

    //forward ventral locomotion motor neurons
    int motorNeuronBVentral[VBcount] = {
      VB1, VB2, VB3, VB4, VB5, VB6, VB7, VB8, VB9, VB10, VB11
    };

    //backward dorsal locomotion motor neurons
    int motorNeuronADorsal[DAcount] = {
      DA1, DA2, DA3, DA4, DA5, DA6, DA7, DA8, DA9
    };

    //forward dorsal locomotion motor neurons
    int motorNeuronBDorsal[DBcount] = {
      DB1, DB2, DB3, DB4, DB5, DB6, DB7
    };


    for (int i = 0; i < VAcount; i++) {
        if (c.cellularMatrix[motorNeuronAVentral[i] - 1].cellOutput) {
            VAsum++;
        }
    }

    for (int i = 0; i < VBcount; i++) {
        if (c.cellularMatrix[motorNeuronBVentral[i] - 1].cellOutput) {
            VBsum++;
        }
    }

    for (int i = 0; i < DAcount; i++) {
        if (c.cellularMatrix[motorNeuronADorsal[i] - 1].cellOutput) {
            DAsum++;
        }
    }

    for (int i = 0; i < DBcount; i++) {
        if (c.cellularMatrix[motorNeuronBDorsal[i] - 1].cellOutput) {
            DBsum++;
        }
    }


    float vaRatio = float(VAsum)/float(VAcount);
    float vbRatio = float(VBsum)/float(VBcount);
    float daRatio = float(DAsum)/float(DAcount);
    float dbRatio = float(DBsum)/float(DBcount);

    cout << "VA Ratio: " << vaRatio << endl;
    cout << "VB Ratio: " << vbRatio << endl;
    cout << "DA Ratio: " << daRatio << endl;
    cout << "DB Ratio: " << dbRatio << endl;
    cout << '\n';

    if (vaRatio + daRatio > vbRatio + dbRatio) {
        cout << "BACKWARD - ";
    } else {
        cout << "FORWARD - ";
    }

/*    if (vaRatio + vbRatio > daRatio + dbRatio) {
        cout << "LEFT/VENTRAL" << endl;
        cout << '\n';
    } else {
        cout << "RIGHT/DORSAL" << endl;
        cout << '\n';
    }*/

    ofstream motorIOfile;
    motorIOfile.open(motorFileLocation, ios::out);
    motorIOfile << vaRatio << '\n';
    motorIOfile << vbRatio << '\n';
    motorIOfile << daRatio << '\n';
    motorIOfile << dbRatio << '\n';
    motorIOfile.close();
}

/*
Function to print out command interneuron data to terminal
*/
void printCmdInterneurons() {
      for (int i = 0; i < commandInterneuronSize; i++) {
                //AVBL
        if (i == 0) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(56);

            if (cellOutput) {
                cout << " [1]  ";
            } else {
                cout << " [0]  ";
            }
        }
                //AVBR
        if (i == 1) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(57);

            if (cellOutput) {
                cout << " [1]  ";
            } else {
                cout << " [0]  ";
            }
        }
                //PVCL
        if (i == 2) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(173);
            if (cellOutput) {
                cout << " [1]  ";
            } else {
                cout << " [0]  ";
            }
        }
                //PVCR
        if (i == 3) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(174);
            if (cellOutput) {
                cout << " [1]  ";
            } else {
                cout << " [0]  ";
            }
        }
                //AVAL
        if (i == 4) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(54);
            if (cellOutput) {
                cout << " [1]  ";
            } else {
                cout << " [0]  ";
            }
        }
                //AVAR
        if (i == 5) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(55);
            if (cellOutput) {
                cout << " [1]  ";
            } else {
                cout << " [0]  ";
            }
        }
                //AVDL
        if (i == 6) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(58);
            if (cellOutput) {
                cout << " [1]  ";
            } else {
                cout << " [0]  ";
            }
        }
                //AVDR
        if (i == 7) {
            bool cellOutput = false;
            cellOutput = getCellOutputFromMatrix(59);
            if (cellOutput) {
                cout << " [1]  ";
            } else {
                cout << " [0]  ";
            }
        }
    }

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
    int hebbianCap = hebbianMax;   //variable to hold competitive maximum value for hebbian learning adjustments
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
        bool maxRateHasI = false;

        for (int k = 0; k < hebbianCap; k++) {  //iterate over the array of max rates
            if (maxRateIDs[k] == i) {           //check to see if maxRateIDs contains the current neuron
                maxRateHasI = true;

                for (int j = 0; j < c.cellularMatrix[i].weightsLen; j++) {  //iterate over all inputs in the current neuron
                    //cout << "Do Hebbian with cell ID: " << i << endl;
                    hebbian(c.cellularMatrix[i].inputs[j], i);              //do hebbian learning with it
                }
            }
        }

        if (!maxRateHasI) {
            for (int j = 0; j < c.cellularMatrix[i].weightsLen; j++) {  //iterate over all inputs in the current neuron
                //cout << "Do LTD with cell ID: " << i << endl;
                LTD(c.cellularMatrix[i].inputs[j], i);                 //otherwise just do LTD
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
    matrixFile.open(matrixLocation);      //open the file

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

        c.cellularMatrix[i].cellOutput = false;

        for (int j = 0; j < 3; j++) {           //loop over every iteration in the firing rate matrix
            firingRates[i][j] = 0;              //initialize it with all zeroes
        }
    }

    for (int i = 0; i < neuronCount; i++) {
        for (int j = 0; j < c.cellularMatrix[i].weightsLen; j++) {
            //float weightRaw = c.cellularMatrix[i].weights[j];
            //float weightOffset = .17;

            //c.cellularMatrix[i].weights[j] = (pow(weightRaw, (1/3))/3) + weightOffset;
            c.cellularMatrix[i].inputs[j] = c.cellularMatrix[i].inputs[j] - 1;
            c.cellularMatrix[i].weights[j] /= 5;
        }
    }
}

/*
Main function that runs connectome in a loop
*/
int main() {
    connectomeInit();                           //initialize connectome

    while (true) {
        system("cls");

        getSensoryInputs();                     //get updated sensory information from a file

        printCellularMatrix();                  //print the whole connectome out
        printMotorRatios();                     //print the motor cells out
        printCmdInterneurons();                 //print out the command interneurons

        sleep(1);

        setNextState();
        doLearning();                           //run hebbian algorithm
        //saveNewState();                         //save the state of the connectome
        glialWeightTuning();
    }

        //while (diagnosticTool());                        //while it's true run the connectome
        //adjustTuningVars();

    return 0;
}
