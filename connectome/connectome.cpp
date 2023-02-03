#include "neurons.h"
#include "connectome.h"
#include "neuronIO.h"

int hebbianMax = 50;                    //global adjustable learning attributes
float hebbianFactor = .001;
float LTDfactor = .001;

int diagnosticCellID = 0;               //diagnostic tool global variables
int diagnosticOutputID = 0;
int diagnosticWeightList[302];
float diagnosticOutputList[302];

bool noseTouchActive = false;           //global input check variables
bool lightAvoidanceActive = false;
bool gentleTouchForwardActive = false;
bool gentleTouchBackwardActive = false;
bool harshTouchActive = false;
bool thermotaxisActive = false;
bool chemorepulsionActive = false;
bool chemoattractionActive = false;

string motorFileLocation = "./motorOutputs.txt";       //specifies IO file locations as in same directory as code
string sensoryLocation = "./sensoryInputs.txt";
string matrixLocation = "./cellularMatrixData.txt";

//string motorFileLocation = "/Users/t420/Desktop/custom-elegans-network/connectome/executable-connectome/motorOutputs.txt";
//string sensoryLocation = "/Users/t420/Desktop/custom-elegans-network/connectome/executable-connectome/sensoryInputs.txt";
//string matrixLocation = "/Users/t420/Desktop/custom-elegans-network/connectome/executable-connectome/cellularMatrixData.txt";

//string motorFileLocation = "/Users/t420/Desktop/custom-elegans-network/connectome/motorOutputs.txt";
//string sensoryLocation = "/Users/t420/Desktop/custom-elegans-network/connectome/sensoryInputs.txt";
//string matrixLocation = "/Users/t420/Desktop/custom-elegans-network/connectome/cellularMatrixData.txt";


ofstream matrixFile;            //sets up an output stream object

connectome c;                   //create a connectome object

int firingRates[302][3];        //create a 2d matrix to hold firing rates from last few ticks of every neuron

/*
Calculates a random weight between -1 and 1, returns as a float
*/
float calculateRandomWeight() {
    //int adjustmentConst = 100;

    srand (static_cast <unsigned> (time(0)));   //start a randomizer based on system time

    float randomWeight = (((float) rand()) / (float) RAND_MAX);     //calculate a random weight based on the randomizer and its max and cast to a float
    //float randomWeight = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    //randomWeight = round (randomWeight * adjustmentConst) / (adjustmentConst * 10);

    bool isPos = rand() % 2;        //randomly decide if weight is positive or negative

    if (isPos) {                    //depending on the sign, return the proper polarity of weight
        return randomWeight;
    } else {
        return -randomWeight;
    }
}

/*
Function used by main glial weight tuning function to adjust weights of cells innervating command neurons to a desired state
*/
void useGlia(int cmdNeuronID, bool desiredState) {
    float glialFactor = .74; //.74         //the amount we adjust weights by
    float minAdjust = .1; //.1
    float maxAdjust = 1; //1

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
Tunes weights using a VERY rough abstraction of neuroglia's genetically programmed effect on a network, in this case based on its outputs
*/
void glialWeightTuning() {
    //USE CASE 1 - check to see if command cells are off and input says they should be on
        if (noseTouchActive && !c.cellularMatrix[FLPL].cellOutput) useGlia(FLPL, true); //for nose touch
        if (noseTouchActive && !c.cellularMatrix[FLPR].cellOutput) useGlia(FLPR, true);

        if (lightAvoidanceActive && !c.cellularMatrix[ASHL].cellOutput) useGlia (ASHL, true); //for light avoidance
        if (lightAvoidanceActive && !c.cellularMatrix[ASHR].cellOutput) useGlia (ASHR, true);
        if (lightAvoidanceActive && !c.cellularMatrix[ASJL].cellOutput) useGlia (ASJL, true);
        if (lightAvoidanceActive && !c.cellularMatrix[ASJR].cellOutput) useGlia (ASJR, true);
        if (lightAvoidanceActive && !c.cellularMatrix[AWBL].cellOutput)useGlia (AWBL, true);
        if (lightAvoidanceActive && !c.cellularMatrix[AWBR].cellOutput)useGlia (AWBR, true);
        if (lightAvoidanceActive && !c.cellularMatrix[ASKL].cellOutput)useGlia (ASKL, true);
        if (lightAvoidanceActive && !c.cellularMatrix[ASKR].cellOutput)useGlia (ASKR, true);

        if (gentleTouchForwardActive && !c.cellularMatrix[AIML].cellOutput) useGlia(AIML, true); //for gentle forward
        if (gentleTouchForwardActive && !c.cellularMatrix[ALMR].cellOutput) useGlia(ALMR, true);
        if (gentleTouchForwardActive && !c.cellularMatrix[PLML].cellOutput) useGlia(PLML, true);
        if (gentleTouchForwardActive && !c.cellularMatrix[PLMR].cellOutput) useGlia(PLMR, true);
        if (gentleTouchForwardActive && !c.cellularMatrix[AVM].cellOutput) useGlia(AVM, true);

        if (gentleTouchBackwardActive && !c.cellularMatrix[AVM].cellOutput) useGlia(AVM, true); //for gentle backward
        if (gentleTouchBackwardActive && !c.cellularMatrix[ALML].cellOutput) useGlia(ALML, true);
        if (gentleTouchBackwardActive && !c.cellularMatrix[ALMR].cellOutput) useGlia(ALMR, true);

        if (harshTouchActive && !c.cellularMatrix[PLML].cellOutput) useGlia(PLML, true); //for harsh touch
        if (harshTouchActive && !c.cellularMatrix[PLMR].cellOutput) useGlia(PLMR, true);

        if (thermotaxisActive && !c.cellularMatrix[AFDL].cellOutput) useGlia(AFDL, true); //for thermotaxis
        if (thermotaxisActive && !c.cellularMatrix[AFDR].cellOutput) useGlia(AFDR, true);
        if (thermotaxisActive && !c.cellularMatrix[AIMR].cellOutput) useGlia(AIMR, true);
        if (thermotaxisActive && !c.cellularMatrix[PHCL].cellOutput) useGlia(PHCL, true);
        if (thermotaxisActive && !c.cellularMatrix[PHCR].cellOutput) useGlia(PHCR, true);

        if (chemorepulsionActive && !c.cellularMatrix[PHAL].cellOutput) useGlia(PHAL, true); //for chemorepulsion
        if (chemorepulsionActive && !c.cellularMatrix[PHAR].cellOutput) useGlia(PHAR, true);
        if (chemorepulsionActive && !c.cellularMatrix[PHBL].cellOutput) useGlia(PHBL, true);
        if (chemorepulsionActive && !c.cellularMatrix[PHBR].cellOutput) useGlia(PHBR, true);

        if (chemoattractionActive && !c.cellularMatrix[ASEL].cellOutput) useGlia(ASEL, true);
        if (chemoattractionActive && !c.cellularMatrix[ASER].cellOutput) useGlia(ASER, true);

    //USE CASE 2 - check to see if the wrong outputs are on for a given input
        if (noseTouchActive) {
            //check if going forward: avbl/r, pvcl/r
            if (c.cellularMatrix[AVBL].cellOutput) useGlia(AVBL, false);
            if (c.cellularMatrix[AVBR].cellOutput) useGlia(AVBR, false);
            if (c.cellularMatrix[PVCL].cellOutput) useGlia(PVCL, false);
            if (c.cellularMatrix[PVCR].cellOutput) useGlia(PVCR, false);
        }

        if (gentleTouchForwardActive) {
            //check if going backwards: aval/r, avdl/r
            if (c.cellularMatrix[AVAL].cellOutput) useGlia(AVAL, false);
            if (c.cellularMatrix[AVAR].cellOutput) useGlia(AVAR, false);
            if (c.cellularMatrix[AVDL].cellOutput) useGlia(AVDL, false);
            if (c.cellularMatrix[AVDR].cellOutput) useGlia(AVDR, false);
        }

        if (gentleTouchBackwardActive) {
            //check if going forward: avbl/r, pvcl/r
            if (c.cellularMatrix[AVBL].cellOutput) useGlia(AVBL, false);
            if (c.cellularMatrix[AVBR].cellOutput) useGlia(AVBR, false);
            if (c.cellularMatrix[PVCL].cellOutput) useGlia(PVCL, false);
            if (c.cellularMatrix[PVCR].cellOutput) useGlia(PVCR, false);
        }
//TODO: still need to do rest of senses for this use case
}

/*
Function to convert a neuron to a string in the data file in order to save information
*/
void neuronToString(neuron n) {
    stringstream cellIDStr;     //create a stringstream object for the first piece of neuron struct info
    cellIDStr << n.cellID;      //set the stringstream object to the data from the given neuron's struct

    stringstream thresholdStr;
    thresholdStr << n.threshold;

    stringstream inputLenStr;
    inputLenStr << n.inputsLen;

    stringstream weightLenStr;
    weightLenStr << n.weightsLen;

    stringstream cellOutputStr;
    cellOutputStr << n.cellOutput;

    stringstream inputsStr[n.inputsLen] = {};   //create a stringstream object as an array that holds the list of inputs for the given neuron
    stringstream weightsStr[n.weightsLen] = {}; //do the same, but this time with weights instead of inputs

    for (int i = 0; i < n.inputsLen; i++) {     //iterate over all the inputs/weights (its the same number) in a given neuron
        inputsStr[i] << n.inputs[i];            //set the stringstream input array's value to that of the neuron objects input array
        weightsStr[i] << n.weights[i];          //do the same with the weight arrays for stringstream and the neuron
    }

    matrixFile << cellIDStr.rdbuf() << endl;    //output the buffered data from the stringstream object to a file, each piece of neuron struct data separated by a new line char
    matrixFile << thresholdStr.rdbuf() << endl; //repeat this with other string stream information
    matrixFile << inputLenStr.rdbuf() << endl;  //etc.
    for (int i = 0; i < n.inputsLen; i++) {     //iterate over the string stream input array
        matrixFile << inputsStr[i].rdbuf() << endl; //and output their contents to the save file as well
    }
    matrixFile << weightLenStr.rdbuf() << endl; //do this again but with the weight array
    for (int i = 0; i < n.weightsLen; i++) {    //etc.
        matrixFile << weightsStr[i].rdbuf() << endl;
    }
    matrixFile << cellOutputStr.rdbuf() << endl;    //output the buffered cell output data string stream to the file
    matrixFile << ',' << endl;                      //indicate the end of the current neuron output in the file with a comma
}

/*
Function to convert a string from input file into a populated cellular matrix
*/
void stringToNeuron() {
    ifstream matrixFile;    //create an input file object

    int maxSynapse = 500;   //maximum possible synapse number for any given neuron object

    string cellIDStr;       //create empty string variables to handle the input
    string thresholdStr;
    string inputsLenStr;
    string inputsStr[maxSynapse];
    string weightsLenStr;
    string weightsStr[maxSynapse];
    string cellOutputStr;
    string data = "";

    matrixFile.open(matrixLocation);        //open the file

    for (int k = 0; k < neuronCount; k++) { //for every neuron in the network
        if (getline(matrixFile, data, '\n')) cellIDStr = data;  //if there is another line, read in data from a line in the file and store in placeholder string variable, then set this variable equal to a designated string
        stringstream idcell (cellIDStr);    //create a stringstream variable for the specific neuron attribute being worked with (cell ID in this case) and set it equal to that designated string value
        idcell >> c.cellularMatrix[k].cellID;   //populate the cellular matrix with the new information read from the file using string stream

        if (getline(matrixFile, data, '\n')) thresholdStr = data;   //repeat this process for other neuron attributes
        stringstream threshold (thresholdStr);                      //etc.
        threshold >> c.cellularMatrix[k].threshold;

        if (getline(matrixFile, data, '\n')) inputsLenStr = data;
        stringstream inputLen (inputsLenStr);
        inputLen >> c.cellularMatrix[k].inputsLen;

        for (int i = 0; i < c.cellularMatrix[k].inputsLen; i++) {   //using the recently read in length of the neuron's input list, count up to that stored number of inputs
            if (getline(matrixFile, data, '\n')) inputsStr[i] = data;   //if theres a line to read still in the file, create a placeholder and set it equal to a designated variable (this time an array of inputs)
            stringstream inputs (inputsStr[i]);     //create a string stream of inputs and set it equal to that designated array's value at the currently counted number of inputs
            inputs >> c.cellularMatrix[k].inputs[i]; //store that new input at the current count (i) for the current neuron (k) in the cellular matrix
        }

        if (getline(matrixFile, data, '\n')) weightsLenStr = data;  //read in the weight data this time, using the same process
        stringstream weightLen (weightsLenStr);
        weightLen >> c.cellularMatrix[k].weightsLen;

        for (int i = 0; i < c.cellularMatrix[k].weightsLen; i++) {  //and do the same trick with arrays, but this time with weights instead of inputs
            if (getline(matrixFile, data, '\n')) weightsStr[i] = data;
            stringstream weights (weightsStr[i]);
            weights >> c.cellularMatrix[k].weights[i];
        }

        if (getline(matrixFile, data, '\n')) cellOutputStr = data;  //finally just read in the cells output boolean
        stringstream cellOutput (cellOutputStr);
        cellOutput >> c.cellularMatrix[k].cellOutput;

        if (getline(matrixFile, data, '\n')) string delim = data;   //and read in the delimiter (a comma) as a temporary piece of data, that way its removed from the buffer prepping us for the next neuron
    }

    matrixFile.close(); //close the file
}

/*
Optional function used for diagnostics. It tunes the network's learning attributes in real time after each individual tick of the connectome
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
    bool beginDiagnostic = true;

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

    for (int i = 0; i < c.cellularMatrix[diagnosticCellID].inputsLen; i++) {
        cout << "Neuron ID " << diagnosticCellID << " synapses to cell " << c.cellularMatrix[diagnosticCellID].inputs[i] << endl;
        cout << "The weight of the connection is " << c.cellularMatrix[diagnosticCellID].weights[i] << endl;;
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
Does long term depression on a given synapse
*/
void LTD(int preID, int postID) {
    float minWeight = -1.0; //-1
    float z = LTDfactor;

    for (int i = 0; i < neuronCount; i++) {                                 //iterate over entire network
        if (c.cellularMatrix[i].cellID == postID) {                         //if the current cell in the matrix has the same ID ad postID
            for (int j = 0; j < c.cellularMatrix[i].inputsLen; j++) {       //iterate over all inputs in that cell
                if (c.cellularMatrix[i].inputs[j] == preID) {               //if the current input has the same ID as preID
                    if (!c.cellularMatrix[preID].cellOutput && !c.cellularMatrix[postID].cellOutput){   //if both the preID and postID cells outputs are false
                        if (c.cellularMatrix[i].weights[j] >= minWeight) c.cellularMatrix[i].weights[j] -= z;   //if the weight hasnt hit the minimum yet, decrease it by the LTD factor
                    }
                }
            }
        }
    }
}

/*
Does hebbian learning on a given synapse
*/
void hebbian(int preID, int postID) {
//Hebb's Rule: Wdelta = n*X*Y
//where Wdelta is the change in weights, n is the learning rate, X is the presynaptic input rate, and Y is the postsynaptic output rate
//LTD can be approximated by applying a z for a non-hebbian learning rate in place of a multiplication by x and y

    int x = 0;
    int y = 0;
    float maxWeight = 1.0; //1
    float n = hebbianFactor;

    x = (firingRates[preID][0] + firingRates[preID][1] + firingRates[preID][2]) / 3;
    y = (firingRates[postID][0] + firingRates[postID][1] + firingRates[postID][2]) / 3;



    for (int i = 0; i < neuronCount; i++) {                                 //iterate over entire network
        if (c.cellularMatrix[i].cellID == postID) {                         //if the current cell in the matrix has the same ID ad postID
            for (int j = 0; j < c.cellularMatrix[i].inputsLen; j++) {       //iterate over all inputs in that cell
                if (c.cellularMatrix[i].inputs[j] == preID) {               //if the current input has the same ID as preID

                    if (c.cellularMatrix[preID].cellOutput && c.cellularMatrix[postID].cellOutput) {                    //if the preID and postID neurons outputs are both true
                        if (c.cellularMatrix[i].weights[j] <= maxWeight) c.cellularMatrix[i].weights[j] += (x*y*n);     //if the weight hasnt hit the maximum yet, increase it by value calculated by hebbs rule
                    }
                }
            }
        }
    }
}

/*
Prints the entire connectome's cellular matrix to the terminal
*/
void printCellularMatrix() {
    int width  = matrixWidth;  //17
    int height = matrixHeight; //18
    int neuronCounter = 0;

    cout << '\n';
    cout << '\n';

    for (int i = 1; i <= height; i++) {         //for loop for the height
        cout << '\t';

        for (int k = 1; k <= width; k++) {      //for loop for the width
            if (neuronCounter < neuronCount) {  //if the neuron counter hasnt reached the max in the network
                if (c.cellularMatrix[neuronCounter].cellOutput) {   //if the current neuron counter cell's output is true
                    cout << '[' << char(178) << ']';                //draw a true symbol
                } else {                                            //otherwise draw a false symbol
                    cout << '[' << char(177) << ']';
                }

                neuronCounter++;                //increment the counter
            } else {
                cout << '[' << char (176) << ']';       //if there are no more neurons in the network, draw empty symbols
            }
        }

        cout << '\n';
    }

    cout << '\n';
}

/*
Prints a labeled array of the motor matrix to the terminal
*/
void printMotorRatios() {
    const int VAcount = 12;   //constants holding the size of motor neuron arrays
    const int VBcount = 11;
    const int DAcount = 9;
    const int DBcount = 7;
    int VAsum = 0;            //variables for the motor neuron ratios
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


    for (int i = 0; i < VAcount; i++) {     //for every ON neuron in the motor neuron VA array, increment a counter
        if (c.cellularMatrix[motorNeuronAVentral[i]].cellOutput) {
            VAsum++;
        }
    }

    for (int i = 0; i < VBcount; i++) {      //do the same for the other motor neuron arrays...
        if (c.cellularMatrix[motorNeuronBVentral[i]].cellOutput) {
            VBsum++;
        }
    }

    for (int i = 0; i < DAcount; i++) {     //etc.
        if (c.cellularMatrix[motorNeuronADorsal[i]].cellOutput) {
            DAsum++;
        }
    }

    for (int i = 0; i < DBcount; i++) {
        if (c.cellularMatrix[motorNeuronBDorsal[i]].cellOutput) {
            DBsum++;
        }
    }

    float vaRatio = float(VAsum)/float(VAcount);       //calculate ratios based on the arrays
    float vbRatio = float(VBsum)/float(VBcount);
    float daRatio = float(DAsum)/float(DAcount);
    float dbRatio = float(DBsum)/float(DBcount);

    if (vaRatio == 0 && vbRatio == 0 && daRatio == 0 && dbRatio == 0) {     //if the ratios are zero write that the nematode is stationary to the terminal
        cout << '\t' << "DIRECTION: STATIONARY" << endl;
        cout << '\n';
    } else {                                                                //otherwise, based on the ratios, output the direction of movement
        if (vaRatio + daRatio > vbRatio + dbRatio) {
            cout << '\t' << "DIRECITON: BACKWARD - ";
        } else {
            cout << '\t' << "DIRECTION: FORWARD - ";
        }

        if (vaRatio + vbRatio > daRatio + dbRatio) {
            cout << "LEFT/VENTRAL" << endl;
            cout << '\n';
        } else {
            cout << "RIGHT/DORSAL" << endl;
            cout << '\n';
        }
    }

    cout << '\t' << "VA Ratio: " << vaRatio << endl;        //print out the motor ratios to the terminal
    cout << '\t' << "VB Ratio: " << vbRatio << endl;
    cout << '\t' << "DA Ratio: " << daRatio << endl;
    cout << '\t' << "DB Ratio: " << dbRatio << endl;
    cout << '\n';

    ofstream motorIOfile;                                   //create a file object and open the output file for motor ratios
    motorIOfile.open(motorFileLocation, ios::out);
    motorIOfile << vaRatio << '\n';                         //write the ratios to the file
    motorIOfile << vbRatio << '\n';
    motorIOfile << daRatio << '\n';
    motorIOfile << dbRatio << '\n';
    motorIOfile.close();                                    //close the file
}

/*
Prints out command interneuron data to the terminal
*/
void printCmdInterneurons() {
      cout << '\t';

      for (int i = 0; i < commandInterneuronSize; i++) {        //for every command interneuron
                //AVBL
        if (i == 0) {
            bool cellOutput = false;                            //get the cell output for each neuron
            cellOutput = c.cellularMatrix[AVBL].cellOutput;

            if (cellOutput) {                                   //based on the output print a symbol
                cout << "[" << char(178) << "]  ";
            } else {
                cout << "[" << char(177) << "]  ";
            }
        }
                //AVBR
        if (i == 1) {
            bool cellOutput = false;                            //repeat this process...
            cellOutput = c.cellularMatrix[AVBR].cellOutput;     //etc.

            if (cellOutput) {
                cout << " [" << char(178) << "]  ";
            } else {
                cout << " [" << char(177) << "]  ";
            }
        }
                //PVCL
        if (i == 2) {
            bool cellOutput = false;
            cellOutput = c.cellularMatrix[PVCL].cellOutput;
            if (cellOutput) {
                cout << " [" << char(178) << "]  ";
            } else {
                cout << " [" << char(177) << "]  ";
            }
        }
                //PVCR
        if (i == 3) {
            bool cellOutput = false;
            cellOutput = c.cellularMatrix[PVCR].cellOutput;
            if (cellOutput) {
                cout << " [" << char(178) << "]  ";
            } else {
                cout << " [" << char(177) << "]  ";
            }
        }
                //AVAL
        if (i == 4) {
            bool cellOutput = false;
            cellOutput = c.cellularMatrix[AVAL].cellOutput;
            if (cellOutput) {
                cout << " [" << char(178) << "]  ";
            } else {
                cout << " [" << char(177) << "]  ";
            }
        }
                //AVAR
        if (i == 5) {
            bool cellOutput = false;
            cellOutput = c.cellularMatrix[AVAR].cellOutput;
            if (cellOutput) {
                cout << " [" << char(178) << "]  ";
            } else {
                cout << " [" << char(177) << "]  ";
            }
        }
                //AVDL
        if (i == 6) {
            bool cellOutput = false;
            cellOutput = c.cellularMatrix[AVDL].cellOutput;
            if (cellOutput) {
                cout << " [" << char(178) << "]  ";
            } else {
                cout << " [" << char(177) << "]  ";
            }
        }
                //AVDR
        if (i == 7) {
            bool cellOutput = false;
            cellOutput = c.cellularMatrix[AVDR].cellOutput;
            if (cellOutput) {
                cout << " [" << char(178) << "]  ";
            } else {
                cout << " [" << char(177) << "]  ";
            }
        }
    }

    cout << '\n';
    cout << '\t' << "AVBL " << " AVBR " << " PVCL " << " PVCR " << " AVAL " << " AVAR " << " AVDL " << " AVDR " << endl;    //format some labels for the output symbols above
    cout << '\t' << "FWD  " << " FWD  " << " FWDt " << " FWDt " << " BCK  " << " BCK  " << " BCKh " << " BCKh" << endl;     //print out some direction indicators for the neurons
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
    bool inputValues[inputLen] = {};                                    //make an array to hold all boolean values for each presynaptic neuron input
    float productMatrix[inputLen] = {};                                   //make a maktrix to hold all multiplied sums

    for (int i = 0; i < inputLen; i++) {
        neuronWeights[i] = c.cellularMatrix[cellID].weights[i];         //update matrix to hold all cell weights for a given neuron
        neuronInputs[i] = c.cellularMatrix[cellID].inputs[i];           //update matrix to hold all cell input IDs for a given neurons presynapses
    }

    for (int i = 0; i < inputLen; i++) {                                //iterate over the length of presynaptic inputs
        inputValues[i] = c.cellularMatrix[neuronInputs[i]].cellOutput;  //fill the presynaptic boolean matrix with every output value for each presynaptic neuron
    }

    for (int i = 0; i < inputLen; i++) {                              //iterate over all possible connections
        productMatrix[i] = neuronWeights[i] * inputValues[i];           //fill a matrix with the product of the Wi and Xi values
    }

    for (int i = 0; i < inputLen; i++) {		                        //iterate over the length of presynaptic inputs
        finalSummation += productMatrix[i];		                        //for every input add the product matrix to a running sum
    }

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
Activation function to be used for cells that are also sensory
*/
bool activationFunctionSensory (int cellID) {
    bool senseIsOn = false;                                             //flag for if the sense the cell belongs to is on
    int inputLen = c.cellularMatrix[cellID].inputsLen;                   //get the length of the input and weight matrix for a given neuron
    float finalSummation = 0.0;                                         //initalize function to hold final sum(Xi * Wi)
    float neuronWeights[inputLen] = {};                               //make matrix for all cells weights
    int neuronInputs[inputLen] = {};                                  //make matrix for all cells inputs
    bool inputValues[inputLen] = {};                                    //make an array to hold all boolean values for each presynaptic neuron input
    float productMatrix[inputLen] = {};                                   //make a maktrix to hold all multiplied sums

    for (int i = 0; i < inputLen; i++) {
        neuronWeights[i] = c.cellularMatrix[cellID].weights[i];         //update matrix to hold all cell weights for a given neuron
        neuronInputs[i] = c.cellularMatrix[cellID].inputs[i];           //update matrix to hold all cell input IDs for a given neurons presynapses
    }

    for (int i = 0; i < inputLen; i++) {                                //iterate over the length of presynaptic inputs
        inputValues[i] = c.cellularMatrix[neuronInputs[i]].cellOutput;  //fill the presynaptic boolean matrix with every output value for each presynaptic neuron
    }

    for (int i = 0; i < inputLen; i++) {                              //iterate over all possible connections
        productMatrix[i] = neuronWeights[i] * inputValues[i];           //fill a matrix with the product of the Wi and Xi values
    }

    for (int i = 0; i < inputLen; i++) {		                        //iterate over the length of presynaptic inputs
        finalSummation += productMatrix[i];		                        //for every input add the product matrix to a running sum
    }

    //check what sense this cell belongs to and see if that sense is on
    if (noseTouchActive) {
        if (cellID == FLPL || cellID == FLPR) senseIsOn = true;
    }

    if (lightAvoidanceActive) {
        if (cellID == ASHL || cellID == ASHR || cellID == ASJL || cellID == ASJR || cellID == AWBL || cellID == AWBR || cellID == ASKL || cellID == ASKR) senseIsOn = true;
    }

    if (gentleTouchBackwardActive) {
        if (cellID == AVM || cellID == ALML || cellID == ALMR) senseIsOn = true;
    }

    if (gentleTouchForwardActive) {
        if (cellID == PLML || cellID == PLMR || cellID == AVM || cellID == ALML || cellID == ALMR) senseIsOn = true;
    }

    if (harshTouchActive) {
        if (cellID == PLML || cellID == PLMR) senseIsOn = true;
    }

    if (thermotaxisActive) {
        if (cellID == AFDL || cellID == AFDR || cellID == AIMR || cellID == PHCL || cellID == PHCR) senseIsOn = true;
    }

    if (chemorepulsionActive) {
        if (cellID == PHAL || cellID == PHAR || cellID == PHBL || cellID == PHBR) senseIsOn = true;
    }

    if (chemoattractionActive) {
        if (cellID == ASEL || cellID == ASER) senseIsOn = true;
    }

    //if sensory input for this cell is on, add 1 to final summation
    if (senseIsOn) finalSummation += 1.0;

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
Function for doing hebbian learning and LTD with each applicable neuron in the network
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
Checks to see if a given cell ID is a sensory neuron
*/
bool isSensoryNeuron(int cellID) {
    int sensoryNeuronLen = 26;
    int sensoryIDs[sensoryNeuronLen] = {FLPL, FLPR,                                             //nose touch neurons
                                        ASHL, ASHR, ASJL , ASJR, AWBL, AWBR, ASKL, ASKR,         //light avoidance neurons
                                        ALML, ALMR, PLML, PLMR, AVM,                            //gentle forward, backward, and harsh touch
                                        AFDL, AFDR, AIMR, PHCL, PHCR,                           //thermotaxis
                                        PHAL, PHAR, PHBL, PHBR,                                 //chemorepulsion
                                        ASEL, ASER};                                            //chemoattraction

    for (int i = 0; i < sensoryNeuronLen; i++) {        //iterate over all sensory neuron IDs
        if (sensoryIDs[i] == cellID) return true;       //return true if any of their IDs is the same as the given cell's ID
    }

    return false;
}

/*
Sets the next tick of the connectome.
*/
void setNextState() {                  			        //function to update values in connectome to next state using the activation function
  for (int i = 0; i < neuronCount; i++) {		        //for every cell in the connectome
      if (!isSensoryNeuron(i)) {                        //check if neuron is a sensory neuron
            bool activationVal = activationFunction(i); //if it is not do the activation function

            if (activationVal) {						        //if the activation function of that cell returns true
                c.cellularMatrix[i].cellOutput = true;								//save its output in the connectomes output matrix as true
            } else {
                c.cellularMatrix[i].cellOutput = false;								//otherwise save it as false
            }
      } else {                                          //if it is a sensory neuron
            if (c.cellularMatrix[i].inputsLen > 0) {    //check if it is also an interneuron by seeing if the input length is above zero
                bool activationVal = activationFunctionSensory(i);     //do the sensory activation function

                if (activationVal) {
                    c.cellularMatrix[i].cellOutput = true;
                } else {
                    c.cellularMatrix[i].cellOutput = false;
                }
            }
      }
  }
}

/*
Saves the current state of the connectome's cellular matrix to the matrix file.
*/
void saveNewState() {
    matrixFile.open(matrixLocation);      //open the file

    for (int i = 0; i < neuronCount; i++) { //iterate over all neuron IDs
        neuronToString(c.cellularMatrix[i]);    //write each neuron to the txt file
    }

    matrixFile.close();
}

/*
Initializes connectome by setting up the connectome's matrix and the array that holds output firing data used by the hebbian learning function
*/
void connectomeInit() {
    stringToNeuron();                          //reads in neuron data from file into cellular matrix

    for (int i = 0; i < neuronCount; i++) {    //for every neuron in the network
        for (int j = 0; j < 3; j++) {           //loop over every iteration in the firing rate matrix
            firingRates[i][j] = 0;              //initialize it with all zeroes
        }
    }

/*    for (int i = 0; i < neuronCount; i++) {
        for (int j = 0; j < c.cellularMatrix[i].weightsLen; j++) {
            //float weightRaw = c.cellularMatrix[i].weights[j];
            //float weightOffset = .17;
            //c.cellularMatrix[i].weights[j] = (pow(weightRaw, (1/3))/3) + weightOffset;
            //c.cellularMatrix[i].weights[j] /= 5;

            c.cellularMatrix[i].inputs[j] -= 1;
        }
    }*/
}

/*
Function to make all neuron outputs in connectome 0, resulting in a "sleep" that fixes some issues with erratic behaviors in network that
arise as a natural result of the connectome model's imperfections
*/
void connectomeSleep() {
    for (int i = 0; i < neuronCount; i++) {    //for every neuron in the network
        c.cellularMatrix[i].cellOutput = false; //turn all cells off for initialization
    }
}

/*
Prints out visual information for connectome to the terminal
*/
void printToTerminal() {
    system("cls");
    printCellularMatrix();                  //print the whole connectome out
    printCmdInterneurons();                 //print out the command interneurons
    printMotorRatios();                     //print the motor cells out
    //adjustTuningVars();

    sleep(1);
}
