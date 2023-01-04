//TODO: do division by five on all weights in dataset and save it that way
//TODO: figure out how to implement ASER, as it is supposed to be always on and only off in presence of stimuli
//TODO: for some reason rebooting connectome fixes erratic behaviors? try implementing an occasional reboot perhaps?
//TODO: potentially implement forgetting of connection weights (to zero?) that no innervataed by any firing neurons after x number of ticks
//TODO: add the rest of the senses to the glial programs supervised learning function
//TODO: build a robot for wormy

/*
PROJECT CREDITS

    Project Leads: JoJo Wahl, Molly Camp
    Consultation and Debugging: Eonn Penalver, Kaiz Akhtar
    Date - Dec. 2022

*/

#include "neuronIO.cpp"


/*
Function to calculate a random weight between -1 and 1
*/
float calculateRandomWeight() {
    //int adjustmentConst = 100;

    srand (static_cast <unsigned> (time(0)));

    float randomWeight = (((float) rand()) / (float) RAND_MAX);
    //float randomWeight = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    //randomWeight = round (randomWeight * adjustmentConst) / (adjustmentConst * 10);

    bool isPos = rand() % 2;

    if (isPos) {
        return randomWeight;
    } else {
        return -randomWeight;
    }
}

/*
Function used by main glial weight tuning function to adjust weights of cells innervating command neurons to a desired state
*/
void useGlia(int cmdNeuronID, bool desiredState) {
    float glialFactor = .75;         //the amount we adjust weights by
    float minAdjust = .1;
    float maxAdjust = 1;

    for (int i = 0; i < c.cellularMatrix[cmdNeuronID].inputsLen; i++) {         //iterate over all inputs of command interneuron
        int targetNeuronID = c.cellularMatrix[cmdNeuronID].inputs[i];           //get the ID of the current command neuron input

        //if the output of the current target neuron is not the same as the desired state, adjust its weight
        if (c.cellularMatrix[targetNeuronID].cellOutput == true && desiredState == false) {
            if (c.cellularMatrix[cmdNeuronID].weights[i] >= minAdjust) c.cellularMatrix[cmdNeuronID].weights[i] -= glialFactor;
        }

        if (c.cellularMatrix[targetNeuronID].cellOutput == false && desiredState == true) {
            if (c.cellularMatrix[cmdNeuronID].weights[i] <= maxAdjust) c.cellularMatrix[cmdNeuronID].weights[i] += glialFactor;
        }
    }
}

/*
Function to tune weights using a VERY rough abstraction of neuroglia's genetic effect on a network, in this case based on its outputs
*/
void glialWeightTuning() {
    //USE CASE 1 - check to see if command cells are off and input says they should be on
        if (noseTouchActive && !c.cellularMatrix[FLPL - 1].cellOutput) useGlia(FLPL - 1, true); //for nose touch
        if (noseTouchActive && !c.cellularMatrix[FLPR - 1].cellOutput) useGlia(FLPR - 1, true);

        if (lightAvoidanceActive && !c.cellularMatrix[ASHL - 1].cellOutput) useGlia (ASHL - 1, true); //for light avoidance
        if (lightAvoidanceActive && !c.cellularMatrix[ASHR - 1].cellOutput) useGlia (ASHR - 1, true);
        if (lightAvoidanceActive && !c.cellularMatrix[ASJL - 1].cellOutput) useGlia (ASJL - 1, true);
        if (lightAvoidanceActive && !c.cellularMatrix[ASJR - 1].cellOutput) useGlia (ASJR - 1, true);
        if (lightAvoidanceActive && !c.cellularMatrix[AWBL - 1].cellOutput)useGlia (AWBL - 1, true);
        if (lightAvoidanceActive && !c.cellularMatrix[AWBR - 1].cellOutput)useGlia (AWBR - 1, true);
        if (lightAvoidanceActive && !c.cellularMatrix[ASKL - 1].cellOutput)useGlia (ASKL - 1, true);
        if (lightAvoidanceActive && !c.cellularMatrix[ASKR - 1].cellOutput)useGlia (ASKR - 1, true);

        if (gentleTouchForwardActive && !c.cellularMatrix[AIML - 1].cellOutput) useGlia(AIML - 1, true); //for gentle forward
        if (gentleTouchForwardActive && !c.cellularMatrix[ALMR - 1].cellOutput) useGlia(ALMR - 1, true);
        if (gentleTouchForwardActive && !c.cellularMatrix[PLML - 1].cellOutput) useGlia(PLML - 1, true);
        if (gentleTouchForwardActive && !c.cellularMatrix[PLMR - 1].cellOutput) useGlia(PLMR - 1, true);
        if (gentleTouchForwardActive && !c.cellularMatrix[AVM - 1].cellOutput) useGlia(AVM - 1, true);

        if (gentleTouchBackwardActive && !c.cellularMatrix[AVM - 1].cellOutput) useGlia(AVM - 1, true); //for gentle backward
        if (gentleTouchBackwardActive && !c.cellularMatrix[ALML - 1].cellOutput) useGlia(ALML - 1, true);
        if (gentleTouchBackwardActive && !c.cellularMatrix[ALMR - 1].cellOutput) useGlia(ALMR - 1, true);

        if (harshTouchActive && !c.cellularMatrix[PLML - 1].cellOutput) useGlia(PLML - 1, true); //for harsh touch
        if (harshTouchActive && !c.cellularMatrix[PLMR - 1].cellOutput) useGlia(PLMR - 1, true);

        if (thermotaxisActive && !c.cellularMatrix[AFDL - 1].cellOutput) useGlia(AFDL - 1, true); //for thermotaxis
        if (thermotaxisActive && !c.cellularMatrix[AFDR - 1].cellOutput) useGlia(AFDR - 1, true);
        if (thermotaxisActive && !c.cellularMatrix[AIMR - 1].cellOutput) useGlia(AIMR - 1, true);
        if (thermotaxisActive && !c.cellularMatrix[PHCL - 1].cellOutput) useGlia(PHCL - 1, true);
        if (thermotaxisActive && !c.cellularMatrix[PHCR - 1].cellOutput) useGlia(PHCR - 1, true);

        if (chemorepulsionActive && !c.cellularMatrix[PHAL - 1].cellOutput) useGlia(PHAL - 1, true); //for chemorepulsion
        if (chemorepulsionActive && !c.cellularMatrix[PHAR - 1].cellOutput) useGlia(PHAR - 1, true);
        if (chemorepulsionActive && !c.cellularMatrix[PHBL - 1].cellOutput) useGlia(PHBL - 1, true);
        if (chemorepulsionActive && !c.cellularMatrix[PHBR - 1].cellOutput) useGlia(PHBR - 1, true);

        if (saltSensingActive && !c.cellularMatrix[ASEL - 1].cellOutput) useGlia(ASEL - 1, true);

        if (basalForagingActive && c.cellularMatrix[ASER - 1].cellOutput) useGlia(ASER - 1, false);


    //USE CASE 2 - check to see if the wrong outputs are on for a given input
        if (noseTouchActive) {
            //check if going forward: avbl/r, pvcl/r
            if (c.cellularMatrix[AVBL - 1].cellOutput) useGlia(AVBL - 1, false);
            if (c.cellularMatrix[AVBR - 1].cellOutput) useGlia(AVBR - 1, false);
            if (c.cellularMatrix[PVCL - 1].cellOutput) useGlia(PVCL - 1, false);
            if (c.cellularMatrix[PVCR - 1].cellOutput) useGlia(PVCR - 1, false);
        }

        if (gentleTouchForwardActive) {
            //check if going backwards: aval/r, avdl/r
            if (c.cellularMatrix[AVAL - 1].cellOutput) useGlia(AVAL - 1, false);
            if (c.cellularMatrix[AVAR - 1].cellOutput) useGlia(AVAR - 1, false);
            if (c.cellularMatrix[AVDL - 1].cellOutput) useGlia(AVDL - 1, false);
            if (c.cellularMatrix[AVDR - 1].cellOutput) useGlia(AVDR - 1, false);
        }

        if (gentleTouchBackwardActive) {
            //check if going forward: avbl/r, pvcl/r
            if (c.cellularMatrix[AVBL - 1].cellOutput) useGlia(AVBL - 1, false);
            if (c.cellularMatrix[AVBR - 1].cellOutput) useGlia(AVBR - 1, false);
            if (c.cellularMatrix[PVCL - 1].cellOutput) useGlia(PVCL - 1, false);
            if (c.cellularMatrix[PVCR - 1].cellOutput) useGlia(PVCR - 1, false);
        }
//TODO: still need to do rest of senses for this use case
}

/*
Getter function for the output of a given neuron in the matrix. Takes a cells ID, outputs a boolean value.
*/
bool getCellOutputFromMatrix(int targetID) {
   return c.cellularMatrix[targetID].cellOutput;
}

/*
Getter function for a given neuron in the cellular matrix. Takes a cells ID, outputs the neuron object.
*/
neuron getNeuronFromMatrix(int targetID) {								//function to get the neuron out of the connectome object's cellular matrix
  return c.cellularMatrix[targetID];
}

/*
Getter function for the threshold of a given neuron in the matrix. Takes a cells ID, outputs the integer threshold.
*/
int getCellThresholdFromMatrix(int targetID) {
   return c.cellularMatrix[targetID].threshold;
}

/*
Getter function for the length of a cells input array. Takes a cells ID, outputs an integer length.
*/
int getCellInputLenFromMatrix(int targetID) {
   return c.cellularMatrix[targetID].inputsLen;
}

/*
Getter function for the input array of a given cell. Takes a cells ID, outputs an array of the input IDs.
*/
int getInputFromMatrix(int neuronID, int inputID) {
   return c.cellularMatrix[neuronID].inputs[inputID];
}

/*
Getter function for the length of a cells weight array. Takes a cells ID, outputs an integer length.
*/
int getCellWeightLenFromMatrix(int targetID) {
   return c.cellularMatrix[targetID].weightsLen;
}

/*
Getter function for the weight array of a given cell. Takes a cells ID, outputs an array of the weight values.
*/
float getWeightFromMatrix(int neuronID, int weightID) {
//    cout << "Neuron ID: " << neuronID << endl;
//    cout << "Weight ID: " << weightID << endl;
   return c.cellularMatrix[neuronID].weights[weightID];
}

/*
Function to update the output arrays of neurons. Takes a cells ID and the output to be updated.
*/
void updateOutputArray(int cellID, bool outputVal) {
    c.cellularMatrix[cellID].cellOutput = outputVal;
}

/*
Function to convert a neuron to a string in the data file in order to save information
*/
void neuronToString(neuron n) {
    stringstream cellIDStr;
    cellIDStr << n.cellID;

    stringstream thresholdStr;
    thresholdStr << n.threshold;

    stringstream inputLenStr;
    inputLenStr << n.inputsLen;

    stringstream weightLenStr;
    weightLenStr << n.weightsLen;

    stringstream cellOutputStr;
    cellOutputStr << n.cellOutput;

    stringstream inputsStr[n.inputsLen] = {};
    stringstream weightsStr[n.weightsLen] = {};

    for (int i = 0; i < n.inputsLen; i++) {
        inputsStr[i] << n.inputs[i];
        weightsStr[i] << n.weights[i];
    }

    matrixFile << cellIDStr.rdbuf() << endl;
    matrixFile << thresholdStr.rdbuf() << endl;
    matrixFile << inputLenStr.rdbuf() << endl;
    for (int i = 0; i < n.inputsLen; i++) {
        matrixFile << inputsStr[i].rdbuf() << endl;
    }
    matrixFile << weightLenStr.rdbuf() << endl;
    for (int i = 0; i < n.weightsLen; i++) {
        matrixFile << weightsStr[i].rdbuf() << endl;
    }
    matrixFile << cellOutputStr.rdbuf() << endl;
    matrixFile << ',' << endl;
}

/*
Function to convert a string from input file into a neuron object to read in information
*/
neuron stringToNeuron(int id) {
    ifstream matrixFile;

    neuron n;
    neuron x;

    x.cellID = 0;
    x.threshold = 1;
    x.inputsLen = 0;
    x.weightsLen = 0;
    x.inputs[0] = {};
    x.weights[0] = {};
    x.cellOutput = 0;

    int maxSynapse = 500;

    string cellIDStr;
    string thresholdStr;
    string inputsLenStr;
    string inputsStr[maxSynapse];
    string weightsLenStr;
    string weightsStr[maxSynapse];
    string cellOutputStr;
    string data = "";

    matrixFile.open(matrixLocation);

    for (int j = 1; j <= id; j++) {
        if (getline(matrixFile, data, '\n')) cellIDStr = data;
        stringstream idcell (cellIDStr);
        idcell >> n.cellID;
        //cout << "Cell ID: " << cellIDStr << endl;

        if (getline(matrixFile, data, '\n')) thresholdStr = data;
        stringstream threshold (thresholdStr);
        threshold >> n.threshold;
        //cout << "Threshold: " << thresholdStr << endl;

        if (getline(matrixFile, data, '\n')) inputsLenStr = data;
        stringstream inputLen (inputsLenStr);
        inputLen >> n.inputsLen;
        //cout << "Input Len: " << inputsLenStr << endl;

        for (int i = 0; i < n.inputsLen; i++) {
            if (getline(matrixFile, data, '\n')) inputsStr[i] = data;
            stringstream inputs (inputsStr[i]);
            inputs >> n.inputs[i];
            //cout << "Input IDs: " << inputsStr[i] << endl;
        }

        if (getline(matrixFile, data, '\n')) weightsLenStr = data;
        stringstream weightLen (weightsLenStr);
        weightLen >> n.weightsLen;
        //cout << "Weight Len: " << weightsLenStr << endl;


        for (int i = 0; i < n.weightsLen; i++) {
            if (getline(matrixFile, data, '\n')) weightsStr[i] = data;
            stringstream weights (weightsStr[i]);
            weights >> n.weights[i];
            //n.weights[i] = calculateRandomWeight();
            //cout << "Weights: " << weightsStr[i] << endl;
        }

        if (getline(matrixFile, data, '\n')) cellOutputStr = data;
        stringstream cellOutput (cellOutputStr);
        cellOutput >> n.cellOutput;
        //cout << "Output: " << cellOutputStr << endl;

        if (getline(matrixFile, data, '\n')) string delim = data;

        if (j == id) {
            return n;
        }
    }

    matrixFile.close();

/*    cout << "ID: " << n.cellID << endl;
    cout << "THRESHOLD: " << n.threshold << endl;
    cout << "INPUT LEN: " << n.inputsLen << endl;
    cout << "WEIGHT LEN: " << n.weightsLen << endl;
    cout << "INPUTS: " << n.inputs << endl;
    cout << "WEIGHTS: " << n.weights << endl;
    cout << "OUTPUT: " << n.cellOutput << endl;
*/
    return x;
}

/*
Function to tune the network's learning attributes in real time after each individual tick of the connectome
*/
void adjustTuningVars () {
    cout << "A - Go To Next Step" << endl;
    cout << "S - Adjust Hebbian Learning Factor" << endl;
    cout << "D - Adjust LTD Learning Factor" << endl;
    cout << "F - Adjust Learnable Neuron Count" << endl;

    char inputChar;
    cin >> inputChar;

    if (inputChar == 'a') {
        system("cls");
    }

    if (inputChar == 's') {
        system("cls");
        cout << "Input New Hebbian Factor: ";
        char newFactor;

        cin >> newFactor;

        hebbianFactor = newFactor;
    }

    if (inputChar == 'd') {
        system("cls");
        cout << "Input New LTD Factor: ";
        char newFactor;

        cin >> newFactor;

        LTDfactor = newFactor;
    }

    if (inputChar == 'f') {
        system("cls");
        cout << "Input New Learnable Neuron Count: ";
        char newFactor;

        cin >> newFactor;

        hebbianMax = newFactor;
    }
}

/*
Tool to do diagnostics on network connections, view individual weights and the neurons connected, and hop through the network by ID
*/
bool diagnosticTool() {
    char inputChar;

    //get the ID of the neuron if it is not already established
    if (diagnosticCellID == 0 && beginDiagnostic) {
        cout << "Enter Neuron ID: ";
        cin >> diagnosticCellID;
        beginDiagnostic = false;
    }

/*    //fill the diagnostic output and weight arrays
    for (int i = 0; i < neuronCount; i++) {
        for (int j = 0; j < c.cellularMatrix[i].inputsLen; j++) {
            if (c.cellularMatrix[i].inputs[j] == diagnosticCellID) {
                diagnosticOutputList[diagnosticOutputID] = i;
                diagnosticWeightList[diagnosticOutputID] = c.cellularMatrix[i].weights[j];
            }
        }
    }*/

    if (c.cellularMatrix[diagnosticCellID].cellOutput) {
        system("cls");
        cout << "Neuron ID " << diagnosticCellID << " has an output of: TRUE" << endl;
        cout << "--------------------------" << endl;
        cout << "\n";
    } else {
        system("cls");
        cout << "Neuron ID " << diagnosticCellID << " has an output of: FALSE" << endl;
        cout << "--------------------------" << endl;
        cout << "\n";
    }

    for (int i = 0; i < c.cellularMatrix[diagnosticCellID - 1].inputsLen; i++) {
        cout << "Neuron ID " << diagnosticCellID << " synapses to cell " << c.cellularMatrix[diagnosticCellID - 1].inputs[i] << endl;
        cout << "The weight of the connection is " << c.cellularMatrix[diagnosticCellID - 1].weights[i] << endl;;
        cout << "\n";
    }

/*    if (diagnosticCellID != 0 && diagnosticCellID <= 302) {
        //display the output value of the first output for the current neuron
        cout << "\n";
        cout << "Neuron ID " << diagnosticCellID << " outputs to neuron: " << diagnosticOutputList[diagnosticOutputID] << endl;
        cout << "The weight of the connection is " << diagnosticWeightList[diagnosticOutputID] << endl;
        cout << "\n";
    } else if (diagnosticCellID > 302) {
        diagnosticCellID = 0;
        cout << "\n";
        cout << "Neuron ID " << diagnosticCellID << " outputs to neuron: " << diagnosticOutputList[diagnosticOutputID] << endl;
        cout << "The weight of the connection is " << diagnosticWeightList[diagnosticOutputID] << endl;
        cout << "\n";
    } else if (diagnosticCellID < 1) {
        diagnosticCellID = 302;
        cout << "\n";
        cout << "Neuron ID " << diagnosticCellID << " outputs to neuron: " << diagnosticOutputList[diagnosticOutputID] << endl;
        cout << "The weight of the connection is " << diagnosticWeightList[diagnosticOutputID] << endl;
        cout << "\n";
    }*/

    //output the prompt
    cout << '\t' << '\t' << "W: Increment Neuron ID" << endl;
    cout << '\t' << '\t' << '\t' << "     |" << endl;
//    cout << "A: Previous Output Weight ---X--- D: Next Output Weight" << endl;
    cout << '\t' << '\t' << '\t' << "     |" << endl;
    cout << '\t' << '\t' << "S: Decrement Neuron ID" << endl;
    cout << "\n";
    cout << '\t' << '\t' << "Q: Enter New Neuron ID" << endl;
    cout << "\n";
    cout << "| > ";
    cin >> inputChar;

    //if q - enter new neuron ID
    if (inputChar == 'q') {
        cout << "\n";
        cout << "Enter Neuron ID: ";
        cin >> diagnosticCellID;

        return true;
    }

    //if w - increment ID
    if (inputChar == 'w') {
        diagnosticCellID++;

        for (int i = 0; i < neuronCount; i++) {
            for (int j = 0; j < neuronCount; j++) {
                for (int k = 0; k < c.cellularMatrix[j].weightsLen; k++) {
                    if (c.cellularMatrix[j].inputs[k] == diagnosticCellID) {
                        diagnosticOutputList[i] = c.cellularMatrix[j].inputs[k];
                    }
                }
            }
        }
        system("cls");

        return true;
    }

    //if a - show previous output
/*    if (inputChar == 'a' && diagnosticCellID != 0) {
        diagnosticOutputID--;
        system("cls");

        if (diagnosticOutputID < 0) {
            cout << "ERROR! Reached Minimum Output ID." << endl;
        } else if (diagnosticOutputID > 302) {
            cout << "ERROR! Reached Maximum Output ID." << endl;
        }

        return true;
    }*/

    //if s - decrement ID
    if (inputChar == 's') {
        diagnosticCellID--;

        for (int i = 0; i < neuronCount; i++) {
            for (int j = 0; j < neuronCount; j++) {
                for (int k = 0; k < c.cellularMatrix[j].weightsLen; k++) {
                    if (c.cellularMatrix[j].inputs[k] == diagnosticCellID) {
                        diagnosticOutputList[i] = c.cellularMatrix[j].inputs[k];
                    }
                }
            }
        }
        system("cls");

        return true;
    }

    //if d - show next output
/*    if (inputChar == 'd' && diagnosticCellID != 0) {
        diagnosticOutputID++;
        system("cls");

        if (diagnosticOutputID < 0) {
            cout << "ERROR! Reached Minimum Output ID." << endl;
        } else if (diagnosticOutputID > 302) {
            cout << "ERROR! Reached Maximum Output ID." << endl;
        }

        return true;
    }*/

    return true;
}

/*
Function to do long term depression on a given synapse
*/
void LTD(int preID, int postID) {
    float minWeight = -1.0;
    float z = LTDfactor;

    for (int i = 0; i < neuronCount; i++) {                                 //iterate over entire network
        if (c.cellularMatrix[i].cellID == postID) {                         //if the current cell in the matrix has the same ID ad postID
            for (int j = 0; j < c.cellularMatrix[i].inputsLen; j++) {       //iterate over all inputs in that cell
                if (c.cellularMatrix[i].inputs[j] == preID) {               //if the current input has the same ID as preID
                    if (!c.cellularMatrix[preID].cellOutput && !c.cellularMatrix[postID].cellOutput){
                        if (c.cellularMatrix[i].weights[j] >= minWeight) c.cellularMatrix[i].weights[j] -= z;
                    }
                }
            }
        }
    }
}

/*
Function to do hebbian learning with a given connection
*/
void hebbian(int preID, int postID) {
//Hebb's Rule: Wdelta = n*X*Y
//where Wdelta is the change in weights, n is the learning rate, X is the presynaptic input rate, and Y is the postsynaptic output rate
//LTD can be approximated by applying a z for a non-hebbian learning rate in place of a multiplication by x and y

    int x = 0;
    int y = 0;
    float maxWeight = 1.0;
    float n = hebbianFactor;

    x = (firingRates[preID][0] + firingRates[preID][1] + firingRates[preID][2]) / 3;
    y = (firingRates[postID][0] + firingRates[postID][1] + firingRates[postID][2]) / 3;



    for (int i = 0; i < neuronCount; i++) {                                 //iterate over entire network
        if (c.cellularMatrix[i].cellID == postID) {                         //if the current cell in the matrix has the same ID ad postID
            for (int j = 0; j < c.cellularMatrix[i].inputsLen; j++) {       //iterate over all inputs in that cell
                if (c.cellularMatrix[i].inputs[j] == preID) {               //if the current input has the same ID as preID

                    if (c.cellularMatrix[preID].cellOutput && c.cellularMatrix[postID].cellOutput) {
                        if (c.cellularMatrix[i].weights[j] <= maxWeight) c.cellularMatrix[i].weights[j] += (x*y*n);
                    }
                }
            }
        }
    }
}

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

    if (vaRatio + vbRatio > daRatio + dbRatio) {
        cout << "LEFT/VENTRAL" << endl;
        cout << '\n';
    } else {
        cout << "RIGHT/DORSAL" << endl;
        cout << '\n';
    }

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
            c.cellularMatrix[i].weights[j] /= 5;

            c.cellularMatrix[i].inputs[j] = c.cellularMatrix[i].inputs[j] - 1;
        }
    }
}


void printToTerminal() {
    system("cls");
    printCellularMatrix();                  //print the whole connectome out
    printMotorRatios();                     //print the motor cells out
    printCmdInterneurons();                 //print out the command interneurons
    //adjustTuningVars();
    sleep(1);
}

/*
Main function that runs connectome in a loop
*/
int main() {
    connectomeInit();                           //initialize connectome

    while (true) {
        getSensoryInputs();                     //get updated sensory information from a file
        setNextState();
        doLearning();                           //run hebbian algorithm
        glialWeightTuning();
        //saveNewState();                         //save the state of the connectome

        printToTerminal();
    }
    //while (diagnosticTool());                        //while it's true run the connectome

    return 0;
}
