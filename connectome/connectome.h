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
    int maxSynapse = 500;

    string cellIDStr;
    string thresholdStr;
    string inputsStr[maxSynapse];
    string inputsLenStr;
    string weightsLenStr;
    string weightsStr[maxSynapse];
    string cellOutputStr;
    string data = "";

    matrixFile.open("C:/Users/t420/Desktop/custom-elegans-network/connectome/inputTest.txt");

    for (int j = 1; j <= id; j++) {
        if (data.compare(",")) break;   //stop reading file if reaches end

        while (getline(matrixFile, data)) {
            cellIDStr = data;
            stringstream idcell (cellIDStr);
            idcell >> n.cellID;
        }

        while (getline(matrixFile, data)) {
            thresholdStr = data;
            stringstream threshold (thresholdStr);
            threshold >> n.threshold;
        }

        while (getline(matrixFile, data)) {
            inputsLenStr = data;
            stringstream inputLen (inputsLenStr);
            inputLen >> n.inputsLen;
        }

        while (getline(matrixFile, data)) {
            weightsLenStr = data;
            stringstream weightLen (weightsLenStr);
            weightLen >> n.weightsLen;
        }

        for (int i = 0; i < n.inputsLen; i++) {
            while (getline(matrixFile, data)) {
                inputsStr[i] = data;
                stringstream inputs (inputsStr[i]);
                inputs >> n.inputs[i];
            }
        }

        for (int i = 0; i < n.weightsLen; i++) {
            while (getline(matrixFile, data)) {
                weightsStr[i] = data;
                stringstream weights (weightsStr[i]);
                weights >> n.weights[i];

                n.weights[i] = calculateRandomWeight();
            }
        }

        while (getline(matrixFile, data)) {
            cellOutputStr = data;
            stringstream cellOutput (cellOutputStr);
            cellOutput >> n.cellOutput;
        }
    }

   /* while (getline(matrixFile, data)) {
        outputData = data;
    }*/

    matrixFile.close();

    return n;
}

neuron neuronAccess (int id) {
    return stringToNeuron(id);
}

neuron neuralList[] = {
    neuronAccess(1),
    neuronAccess(2),
    neuronAccess(3),
    neuronAccess(4),
    neuronAccess(5),
    neuronAccess(6),
    neuronAccess(7),
    neuronAccess(8),
    neuronAccess(9),
    neuronAccess(10),
    neuronAccess(11),
    neuronAccess(12),
    neuronAccess(13),
    neuronAccess(14),
    neuronAccess(15),
    neuronAccess(16),
    neuronAccess(17),
    neuronAccess(18),
    neuronAccess(19),
    neuronAccess(20),
    neuronAccess(21),
    neuronAccess(22),
    neuronAccess(23),
    neuronAccess(24),
    neuronAccess(25),
    neuronAccess(26),
    neuronAccess(27),
    neuronAccess(28),
    neuronAccess(29),
    neuronAccess(30),
    neuronAccess(31),
    neuronAccess(32),
    neuronAccess(33),
    neuronAccess(34),
    neuronAccess(35),
    neuronAccess(36),
    neuronAccess(37),
    neuronAccess(38),
    neuronAccess(39),
    neuronAccess(40),
    neuronAccess(41),
    neuronAccess(42),
    neuronAccess(43),
    neuronAccess(44),
    neuronAccess(45),
    neuronAccess(46),
    neuronAccess(47),
    neuronAccess(48),
    neuronAccess(49),
    neuronAccess(50),
    neuronAccess(51),
    neuronAccess(52),
    neuronAccess(53),
    neuronAccess(54),
    neuronAccess(55),
    neuronAccess(56),
    neuronAccess(57),
    neuronAccess(58),
    neuronAccess(59),
    neuronAccess(60),
    neuronAccess(61),
    neuronAccess(62),
    neuronAccess(63),
    neuronAccess(64),
    neuronAccess(65),
    neuronAccess(66),
    neuronAccess(67),
    neuronAccess(68),
    neuronAccess(69),
    neuronAccess(70),
    neuronAccess(71),
    neuronAccess(72),
    neuronAccess(73),
    neuronAccess(74),
    neuronAccess(75),
    neuronAccess(76),
    neuronAccess(77),
    neuronAccess(78),
    neuronAccess(79),
    neuronAccess(80),
    neuronAccess(81),
    neuronAccess(82),
    neuronAccess(83),
    neuronAccess(84),
    neuronAccess(85),
    neuronAccess(86),
    neuronAccess(87),
    neuronAccess(88),
    neuronAccess(89),
    neuronAccess(90),
    neuronAccess(91),
    neuronAccess(92),
    neuronAccess(93),
    neuronAccess(94),
    neuronAccess(95),
    neuronAccess(96),
    neuronAccess(97),
    neuronAccess(98),
    neuronAccess(99),
    neuronAccess(100),
    neuronAccess(101),
    neuronAccess(102),
    neuronAccess(103),
    neuronAccess(104),
    neuronAccess(105),
    neuronAccess(106),
    neuronAccess(107),
    neuronAccess(108),
    neuronAccess(109),
    neuronAccess(110),
    neuronAccess(111),
    neuronAccess(112),
    neuronAccess(113),
    neuronAccess(114),
    neuronAccess(115),
    neuronAccess(116),
    neuronAccess(117),
    neuronAccess(118),
    neuronAccess(119),
    neuronAccess(120),
    neuronAccess(121),
    neuronAccess(122),
    neuronAccess(123),
    neuronAccess(124),
    neuronAccess(125),
    neuronAccess(126),
    neuronAccess(127),
    neuronAccess(128),
    neuronAccess(129),
    neuronAccess(130),
    neuronAccess(131),
    neuronAccess(132),
    neuronAccess(133),
    neuronAccess(134),
    neuronAccess(135),
    neuronAccess(136),
    neuronAccess(137),
    neuronAccess(138),
    neuronAccess(139),
    neuronAccess(140),
    neuronAccess(141),
    neuronAccess(142),
    neuronAccess(143),
    neuronAccess(144),
    neuronAccess(145),
    neuronAccess(146),
    neuronAccess(147),
    neuronAccess(148),
    neuronAccess(149),
    neuronAccess(150),
    neuronAccess(151),
    neuronAccess(152),
    neuronAccess(153),
    neuronAccess(154),
    neuronAccess(155),
    neuronAccess(156),
    neuronAccess(157),
    neuronAccess(158),
    neuronAccess(159),
    neuronAccess(160),
    neuronAccess(161),
    neuronAccess(162),
    neuronAccess(163),
    neuronAccess(164),
    neuronAccess(165),
    neuronAccess(166),
    neuronAccess(167),
    neuronAccess(168),
    neuronAccess(169),
    neuronAccess(170),
    neuronAccess(171),
    neuronAccess(172),
    neuronAccess(173),
    neuronAccess(174),
    neuronAccess(175),
    neuronAccess(176),
    neuronAccess(177),
    neuronAccess(178),
    neuronAccess(179),
    neuronAccess(180),
    neuronAccess(181),
    neuronAccess(182),
    neuronAccess(183),
    neuronAccess(184),
    neuronAccess(185),
    neuronAccess(186),
    neuronAccess(187),
    neuronAccess(188),
    neuronAccess(189),
    neuronAccess(190),
    neuronAccess(191),
    neuronAccess(192),
    neuronAccess(193),
    neuronAccess(194),
    neuronAccess(195),
    neuronAccess(196),
    neuronAccess(197),
    neuronAccess(198),
    neuronAccess(199),
    neuronAccess(200),
    neuronAccess(201),
    neuronAccess(202),
    neuronAccess(203),
    neuronAccess(204),
    neuronAccess(205),
    neuronAccess(206),
    neuronAccess(207),
    neuronAccess(208),
    neuronAccess(209),
    neuronAccess(210),
    neuronAccess(211),
    neuronAccess(212),
    neuronAccess(213),
    neuronAccess(214),
    neuronAccess(215),
    neuronAccess(216),
    neuronAccess(217),
    neuronAccess(218),
    neuronAccess(219),
    neuronAccess(220),
    neuronAccess(221),
    neuronAccess(222),
    neuronAccess(223),
    neuronAccess(224),
    neuronAccess(225),
    neuronAccess(226),
    neuronAccess(227),
    neuronAccess(228),
    neuronAccess(229),
    neuronAccess(230),
    neuronAccess(231),
    neuronAccess(232),
    neuronAccess(233),
    neuronAccess(234),
    neuronAccess(235),
    neuronAccess(236),
    neuronAccess(237),
    neuronAccess(238),
    neuronAccess(239),
    neuronAccess(240),
    neuronAccess(241),
    neuronAccess(242),
    neuronAccess(243),
    neuronAccess(244),
    neuronAccess(245),
    neuronAccess(246),
    neuronAccess(247),
    neuronAccess(248),
    neuronAccess(249),
    neuronAccess(250),
    neuronAccess(251),
    neuronAccess(252),
    neuronAccess(253),
    neuronAccess(254),
    neuronAccess(255),
    neuronAccess(256),
    neuronAccess(257),
    neuronAccess(258),
    neuronAccess(259),
    neuronAccess(260),
    neuronAccess(261),
    neuronAccess(262),
    neuronAccess(263),
    neuronAccess(264),
    neuronAccess(265),
    neuronAccess(266),
    neuronAccess(267),
    neuronAccess(268),
    neuronAccess(269),
    neuronAccess(270),
    neuronAccess(271),
    neuronAccess(272),
    neuronAccess(273),
    neuronAccess(274),
    neuronAccess(275),
    neuronAccess(276),
    neuronAccess(277),
    neuronAccess(278),
    neuronAccess(279),
    neuronAccess(280),
    neuronAccess(281),
    neuronAccess(282),
    neuronAccess(283),
    neuronAccess(284),
    neuronAccess(285),
    neuronAccess(286),
    neuronAccess(287),
    neuronAccess(288),
    neuronAccess(289),
    neuronAccess(290),
    neuronAccess(291),
    neuronAccess(292),
    neuronAccess(293),
    neuronAccess(294),
    neuronAccess(295),
    neuronAccess(296),
    neuronAccess(297),
    neuronAccess(298),
    neuronAccess(299),
    neuronAccess(300),
    neuronAccess(301),
    neuronAccess(302)
};
