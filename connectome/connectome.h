#include <sstream>
#include <ctime>

using namespace std;

ofstream matrixFile;    //sets up an output stream object

const static int neuronCount = 302; //constants used by network
const int maxSynapse = 500;
const int matrixHeight = 17;
const int matrixWidth = 18;
const int commandInterneuronSize = 8;
const int noseTouchSize = 2;
const int lightAvoidanceSize = 8;
const int gentleTouchForwardSize = 2;
const int gentleTouchBackwardSize = 3;
const int harshTouchSize = 4;
const int thermotaxisSize = 8;
const int chemorepulsionSize = 8;
const int chemoattractionSize = 6;
const float threshold = 1; //5

bool noseTouchActive = false;    //input check variables
bool lightAvoidanceActive = false;
bool gentleTouchForwardActive = false;
bool gentleTouchBackwardActive = false;
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

int firingRates[neuronCount][3] = {};   //makes an array to hold output firing data

#define ADAL 1  //list of all neuron names defined by their ID number for ease of use
#define ADAR 2
#define ADEL 3
#define ADER 4
#define ADFL 5
#define ADFR 6
#define ADLL 7
#define ADLR 8
#define AFDL 9
#define AFDR 10
#define AIAL 11
#define AIAR 12
#define AIBL 13
#define AIBR 14
#define AIML 15
#define AIMR 16
#define AINL 17
#define AINR 18
#define AIYL 19
#define AIYR 20
#define AIZL 21
#define AIZR 22
#define ALA 23
#define ALML 24
#define ALMR 25
#define ALNL 26
#define ALNR 27
#define AQR 28
#define AS1 29
#define AS10 30
#define AS11 31
#define AS2 32
#define AS3 33
#define AS4 34
#define AS5 35
#define AS6 36
#define AS7 37
#define AS8 38
#define AS9 39
#define ASEL 40
#define ASER 41
#define ASGL 42
#define ASGR 43
#define ASHL 44
#define ASHR 45
#define ASIL 46
#define ASIR 47
#define ASJL 48
#define ASJR 49
#define ASKL 50
#define ASKR 51
#define AUAL 52
#define AUAR 53
#define AVAL 54
#define AVAR 55
#define AVBL 56
#define AVBR 57
#define AVDL 58
#define AVDR 59
#define AVEL 60
#define AVER 61
#define AVFL 62
#define AVFR 63
#define AVG 64
#define AVHL 65
#define AVHR 66
#define AVJL 67
#define AVJR 68
#define AVKL 69
#define AVKR 70
#define AVL 71
#define AVM 72
#define AWAL 73
#define AWAR 74
#define AWBL 75
#define AWBR 76
#define AWCL 77
#define AWCR 78
#define BAGL 79
#define BAGR 80
#define BDUL 81
#define BDUR 82
#define CANL 83
#define CANR 84
#define CEPDL 85
#define CEPDR 86
#define CEPVL 87
#define CEPVR 88
#define DA1 89
#define DA2 90
#define DA3 91
#define DA4 92
#define DA5 93
#define DA6 94
#define DA7 95
#define DA8 96
#define DA9 97
#define DB1 98
#define DB2 99
#define DB3 100
#define DB4 101
#define DB5 102
#define DB6 103
#define DB7 104
#define DD1 105
#define DD2 106
#define DD3 107
#define DD4 108
#define DD5 109
#define DD6 110
#define DVA 111
#define DVB 112
#define DVC 113
#define FLPL 114
#define FLPR 115
#define HSNL 116
#define HSNR 117
#define I1L 118
#define I1R 119
#define I2L 120
#define I2R 121
#define I3 122
#define I4 123
#define I5 124
#define I6 125
#define IL1DL 126
#define IL1DR 127
#define IL1L 128
#define IL1R 129
#define IL1VL 130
#define IL1VR 131
#define IL2DL 132
#define IL2DR 133
#define IL2L 134
#define IL2R 135
#define IL2VL 136
#define IL2VR 137
#define LUAL 138
#define LUAR 139
#define M1 140
#define M2L 141
#define M2R 142
#define M3L 143
#define M3R 144
#define M4 145
#define M5 146
#define MCL 147
#define MCR 148
#define MI 149
#define NSML 150
#define NSMR 151
#define OLLL 152
#define OLLR 153
#define OLQDL 154
#define OLQDR 155
#define OLQVL 156
#define OLQVR 157
#define PDA 158
#define PDB 159
#define PDEL 160
#define PDER 161
#define PHAL 162
#define PHAR 163
#define PHBL 164
#define PHBR 165
#define PHCL 166
#define PHCR 167
#define PLML 168
#define PLMR 169
#define PLNL 170
#define PLNR 171
#define PQR 172
#define PVCL 173
#define PVCR 174
#define PVDL 175
#define PVDR 176
#define PVM 177
#define PVNL 178
#define PVNR 179
#define PVPL 180
#define PVPR 181
#define PVQL 182
#define PVQR 183
#define PVR 184
#define PVT 185
#define PVWL 186
#define PVWR 187
#define RIAL 188
#define RIAR 189
#define RIBL 190
#define RIBR 191
#define RICL 192
#define RICR 193
#define RID 194
#define RIFL 195
#define RIFR 196
#define RIGL 197
#define RIGR 198
#define RIH 199
#define RIML 200
#define RIMR 201
#define RIPL 202
#define RIPR 203
#define RIR 204
#define RIS 205
#define RIVL 206
#define RIVR 207
#define RMDDL 208
#define RMDDR 209
#define RMDL 210
#define RMDR 211
#define RMDVL 212
#define RMDVR 213
#define RMED 214
#define RMEL 215
#define RMER 216
#define RMEV 217
#define RMFL 218
#define RMFR 219
#define RMGL 220
#define RMGR 221
#define RMHL 222
#define RMHR 223
#define SAADL 224
#define SAADR 225
#define SAAVL 226
#define SAAVR 227
#define SABD 228
#define SABVL 229
#define SABVR 230
#define SDQL 231
#define SDQR 232
#define SIADL 233
#define SIADR 234
#define SIAVL 235
#define SIAVR 236
#define SIBDL 237
#define SIBDR 238
#define SIBVL 239
#define SIBVR 240
#define SMBDL 241
#define SMBDR 242
#define SMBVL 243
#define SMBVR 244
#define SMDDL 245
#define SMDDR 246
#define SMDVL 247
#define SMDVR 248
#define URADL 249
#define URADR 250
#define URAVL 251
#define URAVR 252
#define URBL 253
#define URBR 254
#define URXL 255
#define URXR 256
#define URYDL 257
#define URYDR 258
#define URYVL 259
#define URYVR 260
#define VA1 261
#define VA10 262
#define VA11 263
#define VA12 264
#define VA2 265
#define VA3 266
#define VA4 267
#define VA5 268
#define VA6 269
#define VA7 270
#define VA8 271
#define VA9 272
#define VB1 273
#define VB10 274
#define VB11 275
#define VB2 276
#define VB3 277
#define VB4 278
#define VB5 279
#define VB6 280
#define VB7 281
#define VB8 282
#define VB9 283
#define VC1 284
#define VC2 285
#define VC3 286
#define VC4 287
#define VC5 288
#define VC6 289
#define VD1 290
#define VD10 291
#define VD11 292
#define VD12 293
#define VD13 294
#define VD2 295
#define VD3 296
#define VD4 297
#define VD5 298
#define VD6 299
#define VD7 300
#define VD8 301
#define VD9 302

/*
Struct definition for a neuron object
*/
struct neuron {
   int cellID;										//the assigned ID for the cell
   int threshold;									//the activation threshold of the cell
   int inputs[maxSynapse];				//list of IDs of the connected pre-synaptic neurons to the current neuron
   int inputsLen;									//length of a neuron's inputs array
   float weights[maxSynapse];				//list of weights for every pre-synaptic input for the given neuron
   int weightsLen;									//length of a neuron's weights array
   bool cellOutput;									//holds the output value for the cell as determined by connectome object
};

/*
Struct definition for a connectome object
*/
struct connectome {
    neuron cellularMatrix[neuronCount];
    bool outputs[neuronCount];
};

connectome c;   //constructs a connectome object


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
Function to calculate a random weight between -.01 and .01
*/
float calculateRandomWeight() {
    //int adjustmentConst = 100;

    srand (static_cast <unsigned> (time(0)));

    //float randomWeight = (((float) rand()) / (float) RAND_MAX);
    float randomWeight = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    //randomWeight = round (randomWeight * adjustmentConst) / (adjustmentConst * 10);

    int r = rand();
    bool isPos = r % 2;

    if (isPos) {
        return randomWeight;
    } else {
        return -randomWeight;
    }
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

void LTD(int preID, int postID) {
    float minWeight = -71.0; //-1.0
    float z = 10;

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
    float maxWeight = 71.0; //1.0
    float n = 20;

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
Array that reads in neuron info from an input file
*/
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
