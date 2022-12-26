#include <sstream>
#include <ctime>

using namespace std;

const static int neuronCount = 302;
const int maxSynapse = 500;
const int commandInterneuronSize = 10;
const int noseTouchSize = 2;
const int lightAvoidanceSize = 8;
const int gentleTouchSize = 5;
const int harshTouchSize = 4;
const int thermotaxisSize = 8;
const int chemorepulsionSize = 8;
const int chemoattractionSize = 6;
const float threshold = .05;

int initNum = 0;
bool isFirstInit = true;        //init check variable
bool priorTicksOutputs[302][3] = {}; //holds last 5 outputs for every neuron in the network
bool lastTickInputs[7] = {};    //last inputs array
bool lastTickOutputs[10] = {};  //last outputs array
bool noseTouchActive = false;    //input check variables
bool lightAvoidanceActive = false;
bool gentleTouchActive = false;
bool harshTouchActive = false;
bool thermotaxisActive = false;
bool chemorepulsionActive = false;
bool chemoattractionActive = false;
bool avblActive = false;        //output check variables
bool avbrActive = false;
bool pvclActive = false;
bool pvcrActive = false;
bool avalActive = false;
bool avarActive = false;
bool avdlActive = false;
bool avdrActive = false;
bool avelActive = false;
bool averActive = false;


struct neuron {
   int cellID;										//the assigned ID for the cell
   int threshold;									//the activation threshold of the cell
   int inputs[maxSynapse];				//list of IDs of the connected pre-synaptic neurons to the current neuron
   int inputsLen;									//length of a neuron's inputs array
   float weights[maxSynapse];				//list of weights for every pre-synaptic input for the given neuron
   int weightsLen;									//length of a neuron's weights array
   bool cellOutput;									//holds the output value for the cell as determined by connectome object
};

struct connectome {
    neuron cellularMatrix[neuronCount];
    bool outputs[neuronCount];
};

connectome c;


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

float calculateRandomWeight() {
    srand (static_cast <unsigned> (time(0)));

    float randomWeight = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    randomWeight = round (randomWeight * 100) / 1000;

    int r = rand();
    bool isPos = r % 2;

    if (isPos) {
        return randomWeight;
    } else {
        return -randomWeight;
    }
}

void neuronToString(neuron n) {           //function to convert a neuron to a string in the data file
    ofstream matrixFile;

    string cellIDStr = "";
    string thresholdStr = "";
    string inputsStr = "";
    string inputLenStr = "";
    string weightsStr = "";
    string weightLenStr = "";
    string cellOutputStr = "";

    cellIDStr = n.cellID;
    thresholdStr = n.threshold;
    inputLenStr = n.inputsLen;
    weightLenStr = n.weightsLen;
    cellOutputStr = n.cellOutput;

    for (int i = 0; i < n.inputsLen; i++) {     //iterate over number of inputs/weights
        if (inputsStr == "") {              //if empty then just assign a value
            int inputVal = n.inputs[i];
            int weightVal = n.weights[i];

            inputsStr = inputVal;     //assign value of an input as a string
            weightsStr = weightVal;   //assign value of a weight as a string
        } else {                                    //otherwise
            int inputVal = n.inputs[i];
            int weightVal = n.weights[i];

            inputsStr = inputVal;
            weightsStr = weightVal;

            inputsStr.append("\n");
            inputsStr.append(inputsStr);   //append the values if already has data in string

            weightsStr.append("\n");
            weightsStr.append(weightsStr);
        }
    }

    matrixFile.open("cellularMatrixData.txt");      //open the file

    matrixFile << cellIDStr + '\n';     //write out the information for each neuron into the file
    matrixFile << thresholdStr + '\n';
    matrixFile << inputsStr + '\n';
    matrixFile << inputLenStr + '\n';
    matrixFile << weightsStr + '\n';
    matrixFile << weightLenStr + '\n';
    matrixFile << cellOutputStr + '\n';
    matrixFile << ',' + '\n';

    matrixFile.close();             //close the file
}

neuron stringToNeuron(int id) {
    ifstream matrixFile;

    neuron n;
    neuron x;

    x.cellID = 0;
    x.cellOutput = 0;
    x.inputsLen = 0;
    x.weightsLen = 0;
    x.threshold = 1;
    x.inputs[0] = {};
    x.weights[0] = {};

    int maxSynapse = 500;

    string cellIDStr;
    string thresholdStr;
    string inputsStr[maxSynapse];
    string inputsLenStr;
    string weightsLenStr;
    string weightsStr[maxSynapse];
    string cellOutputStr;
    string data = "";

    matrixFile.open("C:/Users/t420/Desktop/custom-elegans-network/connectome/cellularMatrixData.txt");

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

void LTPandD(int preID, int postID) {
    float posHebbianFactor = .001;
    float negHebbianFactor = -1.0;
    float runningSum = 0.0;

    if (initNum == 0) {
        if (priorTicksOutputs[preID][0]) runningSum++;
    } else if (initNum == 2) {
        if (priorTicksOutputs[preID][0]) runningSum++;
        if (priorTicksOutputs[preID][1]) runningSum++;
        runningSum /= 1;
    } else {
        if (priorTicksOutputs[preID][0]) runningSum++;
        if (priorTicksOutputs[preID][1]) runningSum++;
        if (priorTicksOutputs[preID][2]) runningSum++;
        runningSum /= 2;
    }

    for (int i = 0; i < neuronCount; i++) {                                 //iterate over entire network
        if (c.cellularMatrix[i].cellID == postID) {                         //if the current cell in the matrix has the same ID ad postID
            for (int j = 0; j < c.cellularMatrix[i].inputsLen; j++) {       //iterate over all inputs in that cell
                if (c.cellularMatrix[i].inputs[j] == preID) {               //if the current input has the same ID as preID
                    if (priorTicksOutputs[preID][1]) {               //if the preID cells output is true
                        c.cellularMatrix[i].weights[j] += posHebbianFactor * runningSum;    //add the hebbian factor to the postID cells weight for the preID cell
                    } else {                                                //otherwise
                        if (c.cellularMatrix[i].weights[j] < posHebbianFactor * runningSum) {   //if the weight of the neuron is less than the hebbian adjustment
                            c.cellularMatrix[i].weights[j] = 0;                 //just set that weight to zero
                        } else {                                                //if its more than the adjustment
                            c.cellularMatrix[i].weights[j] = negHebbianFactor;    //subtract the factor form the postID cells weight for the preID cell
                        }
                    }
                }
            }
        }
    }
}

neuron neuralList[] = {
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
