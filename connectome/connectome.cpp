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

#include "neurons.h"
#include "connectome.h"
#include "neuronIO.h"

int hebbianMax = 220;                   //adjustable learning attributes
float hebbianFactor = .75;                  //220, .75, .25 works well
float LTDfactor = .25;

int diagnosticCellID = 0;
int diagnosticOutputID = 0;

bool noseTouchActive = false;    //input check variables
bool lightAvoidanceActive = false;
bool gentleTouchForwardActive = false;
bool gentleTouchBackwardActive = false;
bool harshTouchActive = false;
bool thermotaxisActive = false;
bool chemorepulsionActive = false;
bool saltSensingActive = false;
bool basalForagingActive = false;

string motorFileLocation = "C:/Users/green/OneDrive/Jojo/c++/C-Plus-Plus-Elegans/connectome/motorOutputs.txt";
string sensoryLocation = "C:/Users/green/OneDrive/Jojo/c++/C-Plus-Plus-Elegans/connectome/sensoryInputs.txt";
string matrixLocation = "C:/Users/green/OneDrive/Jojo/c++/C-Plus-Plus-Elegans/connectome/cellularMatrixData.txt";

ofstream matrixOutFile;

connectome c;

neuron neuralList[302] = {
    stringToNeuron(1),
    stringToNeuron(2),
    stringToNeuron(3),
    stringToNeuron(4),
    stringToNeuron(5),
    stringToNeuron(6),
    stringToNeuron(7),
    stringToNeuron(8),
    stringToNeuron(9),
    stringToNeuron(10),
    stringToNeuron(11),
    stringToNeuron(12),
    stringToNeuron(13),
    stringToNeuron(14),
    stringToNeuron(15),
    stringToNeuron(16),
    stringToNeuron(17),
    stringToNeuron(18),
    stringToNeuron(19),
    stringToNeuron(20),
    stringToNeuron(21),
    stringToNeuron(22),
    stringToNeuron(23),
    stringToNeuron(24),
    stringToNeuron(25),
    stringToNeuron(26),
    stringToNeuron(27),
    stringToNeuron(28),
    stringToNeuron(29),
    stringToNeuron(30),
    stringToNeuron(31),
    stringToNeuron(32),
    stringToNeuron(33),
    stringToNeuron(34),
    stringToNeuron(35),
    stringToNeuron(36),
    stringToNeuron(37),
    stringToNeuron(38),
    stringToNeuron(39),
    stringToNeuron(40),
    stringToNeuron(41),
    stringToNeuron(42),
    stringToNeuron(43),
    stringToNeuron(44),
    stringToNeuron(45),
    stringToNeuron(46),
    stringToNeuron(47),
    stringToNeuron(48),
    stringToNeuron(49),
    stringToNeuron(50),
    stringToNeuron(51),
    stringToNeuron(52),
    stringToNeuron(53),
    stringToNeuron(54),
    stringToNeuron(55),
    stringToNeuron(56),
    stringToNeuron(57),
    stringToNeuron(58),
    stringToNeuron(59),
    stringToNeuron(60),
    stringToNeuron(61),
    stringToNeuron(62),
    stringToNeuron(63),
    stringToNeuron(64),
    stringToNeuron(65),
    stringToNeuron(66),
    stringToNeuron(67),
    stringToNeuron(68),
    stringToNeuron(69),
    stringToNeuron(70),
    stringToNeuron(71),
    stringToNeuron(72),
    stringToNeuron(73),
    stringToNeuron(74),
    stringToNeuron(75),
    stringToNeuron(76),
    stringToNeuron(77),
    stringToNeuron(78),
    stringToNeuron(79),
    stringToNeuron(80),
    stringToNeuron(81),
    stringToNeuron(82),
    stringToNeuron(83),
    stringToNeuron(84),
    stringToNeuron(85),
    stringToNeuron(86),
    stringToNeuron(87),
    stringToNeuron(88),
    stringToNeuron(89),
    stringToNeuron(90),
    stringToNeuron(91),
    stringToNeuron(92),
    stringToNeuron(93),
    stringToNeuron(94),
    stringToNeuron(95),
    stringToNeuron(96),
    stringToNeuron(97),
    stringToNeuron(98),
    stringToNeuron(99),
    stringToNeuron(100),
    stringToNeuron(101),
    stringToNeuron(102),
    stringToNeuron(103),
    stringToNeuron(104),
    stringToNeuron(105),
    stringToNeuron(106),
    stringToNeuron(107),
    stringToNeuron(108),
    stringToNeuron(109),
    stringToNeuron(110),
    stringToNeuron(111),
    stringToNeuron(112),
    stringToNeuron(113),
    stringToNeuron(114),
    stringToNeuron(115),
    stringToNeuron(116),
    stringToNeuron(117),
    stringToNeuron(118),
    stringToNeuron(119),
    stringToNeuron(120),
    stringToNeuron(121),
    stringToNeuron(122),
    stringToNeuron(123),
    stringToNeuron(124),
    stringToNeuron(125),
    stringToNeuron(126),
    stringToNeuron(127),
    stringToNeuron(128),
    stringToNeuron(129),
    stringToNeuron(130),
    stringToNeuron(131),
    stringToNeuron(132),
    stringToNeuron(133),
    stringToNeuron(134),
    stringToNeuron(135),
    stringToNeuron(136),
    stringToNeuron(137),
    stringToNeuron(138),
    stringToNeuron(139),
    stringToNeuron(140),
    stringToNeuron(141),
    stringToNeuron(142),
    stringToNeuron(143),
    stringToNeuron(144),
    stringToNeuron(145),
    stringToNeuron(146),
    stringToNeuron(147),
    stringToNeuron(148),
    stringToNeuron(149),
    stringToNeuron(150),
    stringToNeuron(151),
    stringToNeuron(152),
    stringToNeuron(153),
    stringToNeuron(154),
    stringToNeuron(155),
    stringToNeuron(156),
    stringToNeuron(157),
    stringToNeuron(158),
    stringToNeuron(159),
    stringToNeuron(160),
    stringToNeuron(161),
    stringToNeuron(162),
    stringToNeuron(163),
    stringToNeuron(164),
    stringToNeuron(165),
    stringToNeuron(166),
    stringToNeuron(167),
    stringToNeuron(168),
    stringToNeuron(169),
    stringToNeuron(170),
    stringToNeuron(171),
    stringToNeuron(172),
    stringToNeuron(173),
    stringToNeuron(174),
    stringToNeuron(175),
    stringToNeuron(176),
    stringToNeuron(177),
    stringToNeuron(178),
    stringToNeuron(179),
    stringToNeuron(180),
    stringToNeuron(181),
    stringToNeuron(182),
    stringToNeuron(183),
    stringToNeuron(184),
    stringToNeuron(185),
    stringToNeuron(186),
    stringToNeuron(187),
    stringToNeuron(188),
    stringToNeuron(189),
    stringToNeuron(190),
    stringToNeuron(191),
    stringToNeuron(192),
    stringToNeuron(193),
    stringToNeuron(194),
    stringToNeuron(195),
    stringToNeuron(196),
    stringToNeuron(197),
    stringToNeuron(198),
    stringToNeuron(199),
    stringToNeuron(200),
    stringToNeuron(201),
    stringToNeuron(202),
    stringToNeuron(203),
    stringToNeuron(204),
    stringToNeuron(205),
    stringToNeuron(206),
    stringToNeuron(207),
    stringToNeuron(208),
    stringToNeuron(209),
    stringToNeuron(210),
    stringToNeuron(211),
    stringToNeuron(212),
    stringToNeuron(213),
    stringToNeuron(214),
    stringToNeuron(215),
    stringToNeuron(216),
    stringToNeuron(217),
    stringToNeuron(218),
    stringToNeuron(219),
    stringToNeuron(220),
    stringToNeuron(221),
    stringToNeuron(222),
    stringToNeuron(223),
    stringToNeuron(224),
    stringToNeuron(225),
    stringToNeuron(226),
    stringToNeuron(227),
    stringToNeuron(228),
    stringToNeuron(229),
    stringToNeuron(230),
    stringToNeuron(231),
    stringToNeuron(232),
    stringToNeuron(233),
    stringToNeuron(234),
    stringToNeuron(235),
    stringToNeuron(236),
    stringToNeuron(237),
    stringToNeuron(238),
    stringToNeuron(239),
    stringToNeuron(240),
    stringToNeuron(241),
    stringToNeuron(242),
    stringToNeuron(243),
    stringToNeuron(244),
    stringToNeuron(245),
    stringToNeuron(246),
    stringToNeuron(247),
    stringToNeuron(248),
    stringToNeuron(249),
    stringToNeuron(250),
    stringToNeuron(251),
    stringToNeuron(252),
    stringToNeuron(253),
    stringToNeuron(254),
    stringToNeuron(255),
    stringToNeuron(256),
    stringToNeuron(257),
    stringToNeuron(258),
    stringToNeuron(259),
    stringToNeuron(260),
    stringToNeuron(261),
    stringToNeuron(262),
    stringToNeuron(263),
    stringToNeuron(264),
    stringToNeuron(265),
    stringToNeuron(266),
    stringToNeuron(267),
    stringToNeuron(268),
    stringToNeuron(269),
    stringToNeuron(270),
    stringToNeuron(271),
    stringToNeuron(272),
    stringToNeuron(273),
    stringToNeuron(274),
    stringToNeuron(275),
    stringToNeuron(276),
    stringToNeuron(277),
    stringToNeuron(278),
    stringToNeuron(279),
    stringToNeuron(280),
    stringToNeuron(281),
    stringToNeuron(282),
    stringToNeuron(283),
    stringToNeuron(284),
    stringToNeuron(285),
    stringToNeuron(286),
    stringToNeuron(287),
    stringToNeuron(288),
    stringToNeuron(289),
    stringToNeuron(290),
    stringToNeuron(291),
    stringToNeuron(292),
    stringToNeuron(293),
    stringToNeuron(294),
    stringToNeuron(295),
    stringToNeuron(296),
    stringToNeuron(297),
    stringToNeuron(298),
    stringToNeuron(299),
    stringToNeuron(300),
    stringToNeuron(301),
    stringToNeuron(302)
};

int firingRates[302][3];

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
    double minAdjust = 0.1;
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

    //    stringstream inputsStr[n.inputsLen] = {};
    //    stringstream weightsStr[n.weightsLen] = {};

    vector<stringstream> inputsStr;
    vector<stringstream> weightsStr;

    inputsStr[n.inputsLen] = {};
    weightsStr[n.weightsLen] = {};

    for (int i = 0; i < n.inputsLen; i++) {
        inputsStr.at(i) << n.inputs[i];
        weightsStr.at(i) << n.weights[i];
    }

    matrixOutFile << cellIDStr.rdbuf() << endl;
    matrixOutFile << thresholdStr.rdbuf() << endl;
    matrixOutFile << inputLenStr.rdbuf() << endl;
    for (int i = 0; i < n.inputsLen; i++) {
        matrixOutFile << inputsStr.at(i).rdbuf() << endl;
    }
    matrixOutFile << weightLenStr.rdbuf() << endl;
    for (int i = 0; i < n.weightsLen; i++) {
        matrixOutFile << weightsStr.at(i).rdbuf() << endl;
    }
    matrixOutFile << cellOutputStr.rdbuf() << endl;
    matrixOutFile << ',' << endl;
}

/*
Function to convert a string from input file into a neuron object to read in information
*/
neuron stringToNeuron(int id) {
    ifstream matrixInFile;

    neuron n;
    neuron x;

    x.cellID = 0;
    x.threshold = 1;
    x.inputsLen = 0;
    x.weightsLen = 0;
    x.inputs[0] = {};
    x.weights[0] = {};
    x.cellOutput = 0;

    string cellIDStr;
    string thresholdStr;
    string inputsLenStr;
    string inputsStr[500];
    string weightsLenStr;
    string weightsStr[500];
    string cellOutputStr;
    string data = "";

    matrixInFile.open(matrixLocation);

    for (int j = 1; j <= id; j++) {
        if (getline(matrixInFile, data, '\n')) cellIDStr = data;
        stringstream idcell (cellIDStr);
        idcell >> n.cellID;
        //cout << "Cell ID: " << cellIDStr << endl;

        if (getline(matrixInFile, data, '\n')) thresholdStr = data;
        stringstream threshold (thresholdStr);
        threshold >> n.threshold;
        //cout << "Threshold: " << thresholdStr << endl;

        if (getline(matrixInFile, data, '\n')) inputsLenStr = data;
        stringstream inputLen (inputsLenStr);
        inputLen >> n.inputsLen;
        //cout << "Input Len: " << inputsLenStr << endl;

        for (int i = 0; i < n.inputsLen; i++) {
            if (getline(matrixInFile, data, '\n')) inputsStr[i] = data;
            stringstream inputs (inputsStr[i]);
            inputs >> n.inputs[i];
            //cout << "Input IDs: " << inputsStr[i] << endl;
        }

        if (getline(matrixInFile, data, '\n')) weightsLenStr = data;
        stringstream weightLen (weightsLenStr);
        weightLen >> n.weightsLen;
        //cout << "Weight Len: " << weightsLenStr << endl;


        for (int i = 0; i < n.weightsLen; i++) {
            if (getline(matrixInFile, data, '\n')) weightsStr[i] = data;
            stringstream weights (weightsStr[i]);
            weights >> n.weights[i];
            //n.weights[i] = calculateRandomWeight();
            //cout << "Weights: " << weightsStr[i] << endl;
        }

        if (getline(matrixInFile, data, '\n')) cellOutputStr = data;
        stringstream cellOutput (cellOutputStr);
        cellOutput >> n.cellOutput;
        //cout << "Output: " << cellOutputStr << endl;

        if (getline(matrixInFile, data, '\n')) string delim = data;

        if (j == id) {
            return n;
        }
    }

    matrixInFile.close();

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
    int motorNeuronAVentral[12] = {
      VA1, VA2, VA3, VA4, VA5, VA6, VA7, VA8, VA9, VA10, VA11, VA12
    };

    //forward ventral locomotion motor neurons
    int motorNeuronBVentral[11] = {
      VB1, VB2, VB3, VB4, VB5, VB6, VB7, VB8, VB9, VB10, VB11
    };

    //backward dorsal locomotion motor neurons
    int motorNeuronADorsal[9] = {
      DA1, DA2, DA3, DA4, DA5, DA6, DA7, DA8, DA9
    };

    //forward dorsal locomotion motor neurons
    int motorNeuronBDorsal[7] = {
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
    //float neuronWeights[inputLen] = {};                               //make matrix for all cells weights
    //int neuronInputs[inputLen] = {};                                  //make matrix for all cells inputs
    vector<float> neuronWeights;
    vector<int> neuronInputs;

    neuronWeights[inputLen] = {};
    neuronInputs[inputLen] = {};

    for (int i = 0; i < inputLen; i++) {
        neuronWeights[i] = getWeightFromMatrix(cellID, i);              //update matrix to hold all cell weights for a given neuron
        neuronInputs[i] = getInputFromMatrix(cellID, i);                //update matrix to hold all cell input IDs for a given neurons presynapses
        //cout << "weights: " << neuronWeights[i] << endl;
        //cout << "inputs: " << neuronInputs[i] << endl;
    }

    //float productMatrix[inputLen];                                   //make a maktrix to hold all multiplied sums
    vector<float> productMatrix;
    productMatrix[inputLen] = {};

    vector<bool> inputValues; // bool inputValues[inputLen] = {};                                    //make an array to hold all boolean values for each presynaptic neuron input
    inputValues[inputLen] = {};

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
    float rateSums[302] = {};   //variable to hold the sums of the firing rates for each neuron
    vector<int> maxRateIDs;
    maxRateIDs[hebbianCap] = {};            //declare array of IDs of neurons with highest rates

    for (int i = 0; i < neuronCount; i++) {
        rateSums[i] = 0;
    }

    for (int i = 0; i < hebbianCap; i++) {
        maxRateIDs[i] = 1;
    }

    for (int i = 0; i < neuronCount; i++) {     //iterate over entire connectome
        rateSums[i] = (float)(firingRates[i][0] + firingRates[i][1] + firingRates[i][2]) / 3;  //calculate the firing rate of the current neuron
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
    matrixOutFile.open(matrixLocation);      //open the file

    for (int i = 0; i < neuronCount; i++) {
        neuronToString(c.cellularMatrix[i]);
    }

    matrixOutFile.close();
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
            //c.cellularMatrix[i].weights[j] /= 5;

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
    //sleep(1);
}


/*
Main function that runs connectome in a loop
*/
/*int main() {
    connectomeInit();                           //initialize connectome

    while (true) {
        getSensoryInputs();                     //get updated sensory information from a file
        setNextState();                         //update to next tick of connectome
        doLearning();                           //run hebbian algorithm
        glialWeightTuning();                    //do error correction on the outputs based on input types
        saveNewState();                         //save the state of the connectome

        printToTerminal();
    }
    //while (diagnosticTool());                        //while it's true run the connectome diagnostic tool

    return 0;
}
*/