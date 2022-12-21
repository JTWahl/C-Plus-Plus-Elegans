//JoJo - code created Dec. 2022

#include <iostream>

const static int neuronCount = 302;
const int commandInterneuronSize = 10;
const int noseTouchSize = 2;
const int lightAvoidanceSize = 8;
const int gentleTouchSize = 5;
const int harshTouchSize = 4;
const int thermotaxisSize = 8;
const int chemorepulsionSize = 8;
const int chemoattractionSize = 6;

//JoJo, Molly -- neuron struct list generated from data collected by steve cook

struct neuron {
   int cellID;										//the assigned ID for the cell
   int threshold;									//the activation threshold of the cell
   int inputs[302];				//list of IDs of the connected pre-synaptic neurons to the current neuron
   int inputsLen;									//length of a neuron's inputs array
   int weights[302];				//list of weights for every pre-synaptic input for the given neuron
   int weightsLen;									//length of a neuron's weights array
   bool cellOutput;									//holds the output value for the cell as determined by connectome object
};

neuron neuronAccess(int id) {

    neuron ADAL;
    ADAL.cellID = 1;
    ADAL.threshold = 1;
    ADAL.inputsLen = 25;
    ADAL.inputs[0] = 255; ADAL.inputs[1] = 255; ADAL.inputs[2] = 253; ADAL.inputs[3] = 44; ADAL.inputs[4] = 192; ADAL.inputs[5] = 253; ADAL.inputs[6] = 255; ADAL.inputs[7] = 73; ADAL.inputs[8] = 73; ADAL.inputs[9] = 180; ADAL.inputs[10] = 1; ADAL.inputs[11] = 5; ADAL.inputs[12] = 81; ADAL.inputs[13] = 3; ADAL.inputs[14] = 11; ADAL.inputs[15] = 7; ADAL.inputs[16] = 115; ADAL.inputs[17] = 156; ADAL.inputs[18] = 2; ADAL.inputs[19] = 5; ADAL.inputs[20] = 5; ADAL.inputs[21] = 59; ADAL.inputs[22] = 182; ADAL.inputs[23] = 182; ADAL.inputs[24] = 59;
    ADAL.weightsLen = 25;
    ADAL.weights[0] = 1; ADAL.weights[1] = 1; ADAL.weights[2] = 1; ADAL.weights[3] = 1; ADAL.weights[4] = 1; ADAL.weights[5] = 1; ADAL.weights[6] = 1; ADAL.weights[7] = 1; ADAL.weights[8] = 1; ADAL.weights[9] = 1; ADAL.weights[10] = 1; ADAL.weights[11] = 1; ADAL.weights[12] = 1; ADAL.weights[13] = 1; ADAL.weights[14] = 1; ADAL.weights[15] = 1; ADAL.weights[16] = 1; ADAL.weights[17] = 1; ADAL.weights[18] = 1; ADAL.weights[19] = 1; ADAL.weights[20] = 1; ADAL.weights[21] = 1; ADAL.weights[22] = 1; ADAL.weights[23] = 1; ADAL.weights[24] = 1;
    if (id == 1) {
        return ADAL;
    }


    neuron ADAR;
    ADAR.cellID = 2;
    ADAR.threshold = 1;
    ADAR.inputsLen = 32;
    ADAR.inputs[0] = 45; ADAR.inputs[1] = 192; ADAR.inputs[2] = 192; ADAR.inputs[3] = 192; ADAR.inputs[4] = 254; ADAR.inputs[5] = 221; ADAR.inputs[6] = 256; ADAR.inputs[7] = 254; ADAR.inputs[8] = 252; ADAR.inputs[9] = 260; ADAR.inputs[10] = 8; ADAR.inputs[11] = 193; ADAR.inputs[12] = 193; ADAR.inputs[13] = 45; ADAR.inputs[14] = 184; ADAR.inputs[15] = 192; ADAR.inputs[16] = 204; ADAR.inputs[17] = 221; ADAR.inputs[18] = 12; ADAR.inputs[19] = 6; ADAR.inputs[20] = 201; ADAR.inputs[21] = 201; ADAR.inputs[22] = 201; ADAR.inputs[23] = 4; ADAR.inputs[24] = 115; ADAR.inputs[25] = 45; ADAR.inputs[26] = 45; ADAR.inputs[27] = 6; ADAR.inputs[28] = 45; ADAR.inputs[29] = 58; ADAR.inputs[30] = 183; ADAR.inputs[31] = 58;
    ADAR.weightsLen = 32;
    ADAR.weights[0] = 1; ADAR.weights[1] = 1; ADAR.weights[2] = 1; ADAR.weights[3] = 1; ADAR.weights[4] = 1; ADAR.weights[5] = 1; ADAR.weights[6] = 1; ADAR.weights[7] = 1; ADAR.weights[8] = 1; ADAR.weights[9] = 1; ADAR.weights[10] = 1; ADAR.weights[11] = 1; ADAR.weights[12] = 1; ADAR.weights[13] = 1; ADAR.weights[14] = 1; ADAR.weights[15] = 1; ADAR.weights[16] = 1; ADAR.weights[17] = 1; ADAR.weights[18] = 1; ADAR.weights[19] = 1; ADAR.weights[20] = 1; ADAR.weights[21] = 1; ADAR.weights[22] = 1; ADAR.weights[23] = 1; ADAR.weights[24] = 1; ADAR.weights[25] = 1; ADAR.weights[26] = 1; ADAR.weights[27] = 1; ADAR.weights[28] = 1; ADAR.weights[29] = 1; ADAR.weights[30] = 1; ADAR.weights[31] = 1;
    if (id == 2) {
        return ADAR;
    }


    neuron ADEL;
    ADEL.cellID = 3;
    ADEL.threshold = 1;
    ADEL.inputsLen = 16;
    ADEL.inputs[0] = 114; ADEL.inputs[1] = 210; ADEL.inputs[2] = 134; ADEL.inputs[3] = 134; ADEL.inputs[4] = 235; ADEL.inputs[5] = 134; ADEL.inputs[6] = 134; ADEL.inputs[7] = 4; ADEL.inputs[8] = 81; ADEL.inputs[9] = 81; ADEL.inputs[10] = 81; ADEL.inputs[11] = 81; ADEL.inputs[12] = 114; ADEL.inputs[13] = 114; ADEL.inputs[14] = 17; ADEL.inputs[15] = 198;
    ADEL.weightsLen = 16;
    ADEL.weights[0] = 1; ADEL.weights[1] = 1; ADEL.weights[2] = 1; ADEL.weights[3] = 1; ADEL.weights[4] = 1; ADEL.weights[5] = 1; ADEL.weights[6] = 1; ADEL.weights[7] = 1; ADEL.weights[8] = 1; ADEL.weights[9] = 1; ADEL.weights[10] = 1; ADEL.weights[11] = 1; ADEL.weights[12] = 1; ADEL.weights[13] = 1; ADEL.weights[14] = 1; ADEL.weights[15] = 1;
    if (id == 3) {
        return ADEL;
    }


    neuron ADER;
    ADER.cellID = 4;
    ADER.threshold = 1;
    ADER.inputsLen = 25;
    ADER.inputs[0] = 153; ADER.inputs[1] = 254; ADER.inputs[2] = 115; ADER.inputs[3] = 27; ADER.inputs[4] = 221; ADER.inputs[5] = 82; ADER.inputs[6] = 135; ADER.inputs[7] = 135; ADER.inputs[8] = 135; ADER.inputs[9] = 210; ADER.inputs[10] = 82; ADER.inputs[11] = 115; ADER.inputs[12] = 115; ADER.inputs[13] = 3; ADER.inputs[14] = 3; ADER.inputs[15] = 72; ADER.inputs[16] = 72; ADER.inputs[17] = 114; ADER.inputs[18] = 3; ADER.inputs[19] = 68; ADER.inputs[20] = 27; ADER.inputs[21] = 18; ADER.inputs[22] = 115; ADER.inputs[23] = 69; ADER.inputs[24] = 183;
    ADER.weightsLen = 25;
    ADER.weights[0] = 1; ADER.weights[1] = 1; ADER.weights[2] = 1; ADER.weights[3] = 1; ADER.weights[4] = 1; ADER.weights[5] = 1; ADER.weights[6] = 1; ADER.weights[7] = 1; ADER.weights[8] = 1; ADER.weights[9] = 1; ADER.weights[10] = 1; ADER.weights[11] = 1; ADER.weights[12] = 1; ADER.weights[13] = 1; ADER.weights[14] = 1; ADER.weights[15] = 1; ADER.weights[16] = 1; ADER.weights[17] = 1; ADER.weights[18] = 1; ADER.weights[19] = 1; ADER.weights[20] = 1; ADER.weights[21] = 1; ADER.weights[22] = 1; ADER.weights[23] = 1; ADER.weights[24] = 1;
    if (id == 4) {
        return ADER;
    }


    neuron ADFL;
    ADFL.cellID = 5;
    ADFL.threshold = 1;
    ADFL.inputsLen = 32;
    ADFL.inputs[0] = 75; ADFL.inputs[1] = 75; ADFL.inputs[2] = 75; ADFL.inputs[3] = 75; ADFL.inputs[4] = 75; ADFL.inputs[5] = 75; ADFL.inputs[6] = 52; ADFL.inputs[7] = 197; ADFL.inputs[8] = 75; ADFL.inputs[9] = 75; ADFL.inputs[10] = 21; ADFL.inputs[11] = 75; ADFL.inputs[12] = 75; ADFL.inputs[13] = 75; ADFL.inputs[14] = 11; ADFL.inputs[15] = 255; ADFL.inputs[16] = 204; ADFL.inputs[17] = 75; ADFL.inputs[18] = 44; ADFL.inputs[19] = 44; ADFL.inputs[20] = 44; ADFL.inputs[21] = 44; ADFL.inputs[22] = 46; ADFL.inputs[23] = 44; ADFL.inputs[24] = 188; ADFL.inputs[25] = 21; ADFL.inputs[26] = 9; ADFL.inputs[27] = 77; ADFL.inputs[28] = 253; ADFL.inputs[29] = 202; ADFL.inputs[30] = 9; ADFL.inputs[31] = 44;
    ADFL.weightsLen = 32;
    ADFL.weights[0] = 1; ADFL.weights[1] = 1; ADFL.weights[2] = 1; ADFL.weights[3] = 1; ADFL.weights[4] = 1; ADFL.weights[5] = 1; ADFL.weights[6] = 1; ADFL.weights[7] = 1; ADFL.weights[8] = 1; ADFL.weights[9] = 1; ADFL.weights[10] = 1; ADFL.weights[11] = 1; ADFL.weights[12] = 1; ADFL.weights[13] = 1; ADFL.weights[14] = 1; ADFL.weights[15] = 1; ADFL.weights[16] = 1; ADFL.weights[17] = 1; ADFL.weights[18] = 1; ADFL.weights[19] = 1; ADFL.weights[20] = 1; ADFL.weights[21] = 1; ADFL.weights[22] = 1; ADFL.weights[23] = 1; ADFL.weights[24] = 1; ADFL.weights[25] = 1; ADFL.weights[26] = 1; ADFL.weights[27] = 1; ADFL.weights[28] = 1; ADFL.weights[29] = 1; ADFL.weights[30] = 1; ADFL.weights[31] = 1;
    if (id == 5) {
        return ADFL;
    }


    neuron ADFR;
    ADFR.cellID = 6;
    ADFR.threshold = 1;
    ADFR.inputsLen = 39;
    ADFR.inputs[0] = 74; ADFR.inputs[1] = 76; ADFR.inputs[2] = 204; ADFR.inputs[3] = 199; ADFR.inputs[4] = 76; ADFR.inputs[5] = 189; ADFR.inputs[6] = 65; ADFR.inputs[7] = 76; ADFR.inputs[8] = 256; ADFR.inputs[9] = 65; ADFR.inputs[10] = 16; ADFR.inputs[11] = 76; ADFR.inputs[12] = 20; ADFR.inputs[13] = 40; ADFR.inputs[14] = 181; ADFR.inputs[15] = 78; ADFR.inputs[16] = 256; ADFR.inputs[17] = 22; ADFR.inputs[18] = 204; ADFR.inputs[19] = 65; ADFR.inputs[20] = 6; ADFR.inputs[21] = 65; ADFR.inputs[22] = 79; ADFR.inputs[23] = 74; ADFR.inputs[24] = 74; ADFR.inputs[25] = 74; ADFR.inputs[26] = 45; ADFR.inputs[27] = 45; ADFR.inputs[28] = 199; ADFR.inputs[29] = 244; ADFR.inputs[30] = 10; ADFR.inputs[31] = 76; ADFR.inputs[32] = 43; ADFR.inputs[33] = 248; ADFR.inputs[34] = 10; ADFR.inputs[35] = 74; ADFR.inputs[36] = 12; ADFR.inputs[37] = 12; ADFR.inputs[38] = 12;
    ADFR.weightsLen = 39;
    ADFR.weights[0] = 1; ADFR.weights[1] = 1; ADFR.weights[2] = 1; ADFR.weights[3] = 1; ADFR.weights[4] = 1; ADFR.weights[5] = 1; ADFR.weights[6] = 1; ADFR.weights[7] = 1; ADFR.weights[8] = 1; ADFR.weights[9] = 1; ADFR.weights[10] = 1; ADFR.weights[11] = 1; ADFR.weights[12] = 1; ADFR.weights[13] = 1; ADFR.weights[14] = 1; ADFR.weights[15] = 1; ADFR.weights[16] = 1; ADFR.weights[17] = 1; ADFR.weights[18] = 1; ADFR.weights[19] = 1; ADFR.weights[20] = 1; ADFR.weights[21] = 1; ADFR.weights[22] = 1; ADFR.weights[23] = 1; ADFR.weights[24] = 1; ADFR.weights[25] = 1; ADFR.weights[26] = 1; ADFR.weights[27] = 1; ADFR.weights[28] = 1; ADFR.weights[29] = 1; ADFR.weights[30] = 1; ADFR.weights[31] = 1; ADFR.weights[32] = 1; ADFR.weights[33] = 1; ADFR.weights[34] = 1; ADFR.weights[35] = 1; ADFR.weights[36] = 1; ADFR.weights[37] = 1; ADFR.weights[38] = 1;
    if (id == 6) {
        return ADFR;
    }


    neuron ADLL;
    ADLL.cellID = 7;
    ADLL.threshold = 1;
    ADLL.inputsLen = 15;
    ADLL.inputs[0] = 44; ADLL.inputs[1] = 41; ADLL.inputs[2] = 44; ADLL.inputs[3] = 232; ADLL.inputs[4] = 116; ADLL.inputs[5] = 11; ADLL.inputs[6] = 41; ADLL.inputs[7] = 41; ADLL.inputs[8] = 44; ADLL.inputs[9] = 197; ADLL.inputs[10] = 1; ADLL.inputs[11] = 1; ADLL.inputs[12] = 8; ADLL.inputs[13] = 73; ADLL.inputs[14] = 59;
    ADLL.weightsLen = 15;
    ADLL.weights[0] = 1; ADLL.weights[1] = 1; ADLL.weights[2] = 1; ADLL.weights[3] = 1; ADLL.weights[4] = 1; ADLL.weights[5] = 1; ADLL.weights[6] = 1; ADLL.weights[7] = 1; ADLL.weights[8] = 1; ADLL.weights[9] = 1; ADLL.weights[10] = 1; ADLL.weights[11] = 1; ADLL.weights[12] = 1; ADLL.weights[13] = 1; ADLL.weights[14] = 1;
    if (id == 7) {
        return ADLL;
    }


    neuron ADLR;
    ADLR.cellID = 8;
    ADLR.threshold = 1;
    ADLR.inputsLen = 37;
    ADLR.inputs[0] = 12; ADLR.inputs[1] = 88; ADLR.inputs[2] = 256; ADLR.inputs[3] = 45; ADLR.inputs[4] = 66; ADLR.inputs[5] = 51; ADLR.inputs[6] = 12; ADLR.inputs[7] = 66; ADLR.inputs[8] = 254; ADLR.inputs[9] = 240; ADLR.inputs[10] = 254; ADLR.inputs[11] = 137; ADLR.inputs[12] = 45; ADLR.inputs[13] = 244; ADLR.inputs[14] = 12; ADLR.inputs[15] = 12; ADLR.inputs[16] = 45; ADLR.inputs[17] = 116; ADLR.inputs[18] = 173; ADLR.inputs[19] = 12; ADLR.inputs[20] = 41; ADLR.inputs[21] = 47; ADLR.inputs[22] = 12; ADLR.inputs[23] = 45; ADLR.inputs[24] = 45; ADLR.inputs[25] = 45; ADLR.inputs[26] = 51; ADLR.inputs[27] = 51; ADLR.inputs[28] = 14; ADLR.inputs[29] = 88; ADLR.inputs[30] = 8; ADLR.inputs[31] = 196; ADLR.inputs[32] = 8; ADLR.inputs[33] = 192; ADLR.inputs[34] = 244; ADLR.inputs[35] = 43; ADLR.inputs[36] = 51;
    ADLR.weightsLen = 37;
    ADLR.weights[0] = 1; ADLR.weights[1] = 1; ADLR.weights[2] = 1; ADLR.weights[3] = 1; ADLR.weights[4] = 1; ADLR.weights[5] = 1; ADLR.weights[6] = 1; ADLR.weights[7] = 1; ADLR.weights[8] = 1; ADLR.weights[9] = 1; ADLR.weights[10] = 1; ADLR.weights[11] = 1; ADLR.weights[12] = 1; ADLR.weights[13] = 1; ADLR.weights[14] = 1; ADLR.weights[15] = 1; ADLR.weights[16] = 1; ADLR.weights[17] = 1; ADLR.weights[18] = 1; ADLR.weights[19] = 1; ADLR.weights[20] = 1; ADLR.weights[21] = 1; ADLR.weights[22] = 1; ADLR.weights[23] = 1; ADLR.weights[24] = 1; ADLR.weights[25] = 1; ADLR.weights[26] = 1; ADLR.weights[27] = 1; ADLR.weights[28] = 1; ADLR.weights[29] = 1; ADLR.weights[30] = 1; ADLR.weights[31] = 1; ADLR.weights[32] = 1; ADLR.weights[33] = 1; ADLR.weights[34] = 1; ADLR.weights[35] = 1; ADLR.weights[36] = 1;
    if (id == 8) {
        return ADLR;
    }


    neuron AFDL;
    AFDL.cellID = 9;
    AFDL.threshold = 1;
    AFDL.inputsLen = 35;
    AFDL.inputs[0] = 73; AFDL.inputs[1] = 73; AFDL.inputs[2] = 19; AFDL.inputs[3] = 73; AFDL.inputs[4] = 41; AFDL.inputs[5] = 18; AFDL.inputs[6] = 18; AFDL.inputs[7] = 77; AFDL.inputs[8] = 18; AFDL.inputs[9] = 18; AFDL.inputs[10] = 18; AFDL.inputs[11] = 5; AFDL.inputs[12] = 18; AFDL.inputs[13] = 73; AFDL.inputs[14] = 9; AFDL.inputs[15] = 18; AFDL.inputs[16] = 77; AFDL.inputs[17] = 18; AFDL.inputs[18] = 41; AFDL.inputs[19] = 21; AFDL.inputs[20] = 19; AFDL.inputs[21] = 85; AFDL.inputs[22] = 10; AFDL.inputs[23] = 19; AFDL.inputs[24] = 60; AFDL.inputs[25] = 40; AFDL.inputs[26] = 253; AFDL.inputs[27] = 253; AFDL.inputs[28] = 10; AFDL.inputs[29] = 253; AFDL.inputs[30] = 40; AFDL.inputs[31] = 40; AFDL.inputs[32] = 253; AFDL.inputs[33] = 40; AFDL.inputs[34] = 13;
    AFDL.weightsLen = 35;
    AFDL.weights[0] = 1; AFDL.weights[1] = 1; AFDL.weights[2] = 1; AFDL.weights[3] = 1; AFDL.weights[4] = 1; AFDL.weights[5] = 1; AFDL.weights[6] = 1; AFDL.weights[7] = 1; AFDL.weights[8] = 1; AFDL.weights[9] = 1; AFDL.weights[10] = 1; AFDL.weights[11] = 1; AFDL.weights[12] = 1; AFDL.weights[13] = 1; AFDL.weights[14] = 1; AFDL.weights[15] = 1; AFDL.weights[16] = 1; AFDL.weights[17] = 1; AFDL.weights[18] = 1; AFDL.weights[19] = 1; AFDL.weights[20] = 1; AFDL.weights[21] = 1; AFDL.weights[22] = 1; AFDL.weights[23] = 1; AFDL.weights[24] = 1; AFDL.weights[25] = 1; AFDL.weights[26] = 1; AFDL.weights[27] = 1; AFDL.weights[28] = 1; AFDL.weights[29] = 1; AFDL.weights[30] = 1; AFDL.weights[31] = 1; AFDL.weights[32] = 1; AFDL.weights[33] = 1; AFDL.weights[34] = 1;
    if (id == 9) {
        return AFDL;
    }


    neuron AFDR;
    AFDR.cellID = 10;
    AFDR.threshold = 1;
    AFDR.inputsLen = 41;
    AFDR.inputs[0] = 74; AFDR.inputs[1] = 74; AFDR.inputs[2] = 17; AFDR.inputs[3] = 20; AFDR.inputs[4] = 74; AFDR.inputs[5] = 17; AFDR.inputs[6] = 6; AFDR.inputs[7] = 17; AFDR.inputs[8] = 198; AFDR.inputs[9] = 17; AFDR.inputs[10] = 74; AFDR.inputs[11] = 74; AFDR.inputs[12] = 17; AFDR.inputs[13] = 74; AFDR.inputs[14] = 74; AFDR.inputs[15] = 74; AFDR.inputs[16] = 74; AFDR.inputs[17] = 74; AFDR.inputs[18] = 17; AFDR.inputs[19] = 41; AFDR.inputs[20] = 41; AFDR.inputs[21] = 41; AFDR.inputs[22] = 40; AFDR.inputs[23] = 18; AFDR.inputs[24] = 74; AFDR.inputs[25] = 40; AFDR.inputs[26] = 17; AFDR.inputs[27] = 17; AFDR.inputs[28] = 74; AFDR.inputs[29] = 74; AFDR.inputs[30] = 204; AFDR.inputs[31] = 40; AFDR.inputs[32] = 18; AFDR.inputs[33] = 17; AFDR.inputs[34] = 40; AFDR.inputs[35] = 254; AFDR.inputs[36] = 41; AFDR.inputs[37] = 45; AFDR.inputs[38] = 78; AFDR.inputs[39] = 45; AFDR.inputs[40] = 213;
    AFDR.weightsLen = 41;
    AFDR.weights[0] = 1; AFDR.weights[1] = 1; AFDR.weights[2] = 1; AFDR.weights[3] = 1; AFDR.weights[4] = 1; AFDR.weights[5] = 1; AFDR.weights[6] = 1; AFDR.weights[7] = 1; AFDR.weights[8] = 1; AFDR.weights[9] = 1; AFDR.weights[10] = 1; AFDR.weights[11] = 1; AFDR.weights[12] = 1; AFDR.weights[13] = 1; AFDR.weights[14] = 1; AFDR.weights[15] = 1; AFDR.weights[16] = 1; AFDR.weights[17] = 1; AFDR.weights[18] = 1; AFDR.weights[19] = 1; AFDR.weights[20] = 1; AFDR.weights[21] = 1; AFDR.weights[22] = 1; AFDR.weights[23] = 1; AFDR.weights[24] = 1; AFDR.weights[25] = 1; AFDR.weights[26] = 1; AFDR.weights[27] = 1; AFDR.weights[28] = 1; AFDR.weights[29] = 1; AFDR.weights[30] = 1; AFDR.weights[31] = 1; AFDR.weights[32] = 1; AFDR.weights[33] = 1; AFDR.weights[34] = 1; AFDR.weights[35] = 1; AFDR.weights[36] = 1; AFDR.weights[37] = 1; AFDR.weights[38] = 1; AFDR.weights[39] = 1; AFDR.weights[40] = 1;
    if (id == 10) {
        return AFDR;
    }


    neuron AIAL;
    AIAL.cellID = 11;
    AIAL.threshold = 1;
    AIAL.inputsLen = 113;
    AIAL.inputs[0] = 42; AIAL.inputs[1] = 15; AIAL.inputs[2] = 50; AIAL.inputs[3] = 15; AIAL.inputs[4] = 50; AIAL.inputs[5] = 42; AIAL.inputs[6] = 182; AIAL.inputs[7] = 44; AIAL.inputs[8] = 50; AIAL.inputs[9] = 50; AIAL.inputs[10] = 42; AIAL.inputs[11] = 50; AIAL.inputs[12] = 50; AIAL.inputs[13] = 50; AIAL.inputs[14] = 44; AIAL.inputs[15] = 41; AIAL.inputs[16] = 7; AIAL.inputs[17] = 42; AIAL.inputs[18] = 42; AIAL.inputs[19] = 7; AIAL.inputs[20] = 42; AIAL.inputs[21] = 7; AIAL.inputs[22] = 44; AIAL.inputs[23] = 44; AIAL.inputs[24] = 7; AIAL.inputs[25] = 50; AIAL.inputs[26] = 50; AIAL.inputs[27] = 7; AIAL.inputs[28] = 41; AIAL.inputs[29] = 21; AIAL.inputs[30] = 50; AIAL.inputs[31] = 7; AIAL.inputs[32] = 44; AIAL.inputs[33] = 7; AIAL.inputs[34] = 21; AIAL.inputs[35] = 21; AIAL.inputs[36] = 21; AIAL.inputs[37] = 40; AIAL.inputs[38] = 44; AIAL.inputs[39] = 40; AIAL.inputs[40] = 50; AIAL.inputs[41] = 75; AIAL.inputs[42] = 21; AIAL.inputs[43] = 5; AIAL.inputs[44] = 7; AIAL.inputs[45] = 7; AIAL.inputs[46] = 50; AIAL.inputs[47] = 50; AIAL.inputs[48] = 42; AIAL.inputs[49] = 41; AIAL.inputs[50] = 21; AIAL.inputs[51] = 46; AIAL.inputs[52] = 75; AIAL.inputs[53] = 40; AIAL.inputs[54] = 40; AIAL.inputs[55] = 41; AIAL.inputs[56] = 41; AIAL.inputs[57] = 21; AIAL.inputs[58] = 21; AIAL.inputs[59] = 183; AIAL.inputs[60] = 77; AIAL.inputs[61] = 78; AIAL.inputs[62] = 41; AIAL.inputs[63] = 47; AIAL.inputs[64] = 51; AIAL.inputs[65] = 50; AIAL.inputs[66] = 50; AIAL.inputs[67] = 50; AIAL.inputs[68] = 50; AIAL.inputs[69] = 182; AIAL.inputs[70] = 117; AIAL.inputs[71] = 44; AIAL.inputs[72] = 117; AIAL.inputs[73] = 116; AIAL.inputs[74] = 42; AIAL.inputs[75] = 44; AIAL.inputs[76] = 44; AIAL.inputs[77] = 50; AIAL.inputs[78] = 63; AIAL.inputs[79] = 116; AIAL.inputs[80] = 7; AIAL.inputs[81] = 77; AIAL.inputs[82] = 42; AIAL.inputs[83] = 15; AIAL.inputs[84] = 42; AIAL.inputs[85] = 42; AIAL.inputs[86] = 182; AIAL.inputs[87] = 1; AIAL.inputs[88] = 44; AIAL.inputs[89] = 44; AIAL.inputs[90] = 42; AIAL.inputs[91] = 42; AIAL.inputs[92] = 44; AIAL.inputs[93] = 44; AIAL.inputs[94] = 18; AIAL.inputs[95] = 18; AIAL.inputs[96] = 116; AIAL.inputs[97] = 116; AIAL.inputs[98] = 182; AIAL.inputs[99] = 50; AIAL.inputs[100] = 50; AIAL.inputs[101] = 50; AIAL.inputs[102] = 182; AIAL.inputs[103] = 50; AIAL.inputs[104] = 78; AIAL.inputs[105] = 12; AIAL.inputs[106] = 13; AIAL.inputs[107] = 48; AIAL.inputs[108] = 47; AIAL.inputs[109] = 50; AIAL.inputs[110] = 13; AIAL.inputs[111] = 75; AIAL.inputs[112] = 46;
    AIAL.weightsLen = 113;
    AIAL.weights[0] = 1; AIAL.weights[1] = 1; AIAL.weights[2] = 1; AIAL.weights[3] = 1; AIAL.weights[4] = 1; AIAL.weights[5] = 1; AIAL.weights[6] = 1; AIAL.weights[7] = 1; AIAL.weights[8] = 1; AIAL.weights[9] = 1; AIAL.weights[10] = 1; AIAL.weights[11] = 1; AIAL.weights[12] = 1; AIAL.weights[13] = 1; AIAL.weights[14] = 1; AIAL.weights[15] = 1; AIAL.weights[16] = 1; AIAL.weights[17] = 1; AIAL.weights[18] = 1; AIAL.weights[19] = 1; AIAL.weights[20] = 1; AIAL.weights[21] = 1; AIAL.weights[22] = 1; AIAL.weights[23] = 1; AIAL.weights[24] = 1; AIAL.weights[25] = 1; AIAL.weights[26] = 1; AIAL.weights[27] = 1; AIAL.weights[28] = 1; AIAL.weights[29] = 1; AIAL.weights[30] = 1; AIAL.weights[31] = 1; AIAL.weights[32] = 1; AIAL.weights[33] = 1; AIAL.weights[34] = 1; AIAL.weights[35] = 1; AIAL.weights[36] = 1; AIAL.weights[37] = 1; AIAL.weights[38] = 1; AIAL.weights[39] = 1; AIAL.weights[40] = 1; AIAL.weights[41] = 1; AIAL.weights[42] = 1; AIAL.weights[43] = 1; AIAL.weights[44] = 1; AIAL.weights[45] = 1; AIAL.weights[46] = 1; AIAL.weights[47] = 1; AIAL.weights[48] = 1; AIAL.weights[49] = 1; AIAL.weights[50] = 1; AIAL.weights[51] = 1; AIAL.weights[52] = 1; AIAL.weights[53] = 1; AIAL.weights[54] = 1; AIAL.weights[55] = 1; AIAL.weights[56] = 1; AIAL.weights[57] = 1; AIAL.weights[58] = 1; AIAL.weights[59] = 1; AIAL.weights[60] = 1; AIAL.weights[61] = 1; AIAL.weights[62] = 1; AIAL.weights[63] = 1; AIAL.weights[64] = 1; AIAL.weights[65] = 1; AIAL.weights[66] = 1; AIAL.weights[67] = 1; AIAL.weights[68] = 1; AIAL.weights[69] = 1; AIAL.weights[70] = 1; AIAL.weights[71] = 1; AIAL.weights[72] = 1; AIAL.weights[73] = 1; AIAL.weights[74] = 1; AIAL.weights[75] = 1; AIAL.weights[76] = 1; AIAL.weights[77] = 1; AIAL.weights[78] = 1; AIAL.weights[79] = 1; AIAL.weights[80] = 1; AIAL.weights[81] = 1; AIAL.weights[82] = 1; AIAL.weights[83] = 1; AIAL.weights[84] = 1; AIAL.weights[85] = 1; AIAL.weights[86] = 1; AIAL.weights[87] = 1; AIAL.weights[88] = 1; AIAL.weights[89] = 1; AIAL.weights[90] = 1; AIAL.weights[91] = 1; AIAL.weights[92] = 1; AIAL.weights[93] = 1; AIAL.weights[94] = 1; AIAL.weights[95] = 1; AIAL.weights[96] = 1; AIAL.weights[97] = 1; AIAL.weights[98] = 1; AIAL.weights[99] = 1; AIAL.weights[100] = 1; AIAL.weights[101] = 1; AIAL.weights[102] = 1; AIAL.weights[103] = 1; AIAL.weights[104] = 1; AIAL.weights[105] = 1; AIAL.weights[106] = 1; AIAL.weights[107] = 1; AIAL.weights[108] = 1; AIAL.weights[109] = 1; AIAL.weights[110] = 1; AIAL.weights[111] = 1; AIAL.weights[112] = 1;
    if (id == 11) {
        return AIAL;
    }


    neuron AIAR;
    AIAR.cellID = 12;
    AIAR.threshold = 1;
    AIAR.inputsLen = 111;
    AIAR.inputs[0] = 45; AIAR.inputs[1] = 43; AIAR.inputs[2] = 45; AIAR.inputs[3] = 45; AIAR.inputs[4] = 8; AIAR.inputs[5] = 45; AIAR.inputs[6] = 45; AIAR.inputs[7] = 51; AIAR.inputs[8] = 51; AIAR.inputs[9] = 45; AIAR.inputs[10] = 8; AIAR.inputs[11] = 51; AIAR.inputs[12] = 51; AIAR.inputs[13] = 8; AIAR.inputs[14] = 16; AIAR.inputs[15] = 51; AIAR.inputs[16] = 16; AIAR.inputs[17] = 16; AIAR.inputs[18] = 51; AIAR.inputs[19] = 183; AIAR.inputs[20] = 51; AIAR.inputs[21] = 51; AIAR.inputs[22] = 51; AIAR.inputs[23] = 51; AIAR.inputs[24] = 183; AIAR.inputs[25] = 51; AIAR.inputs[26] = 51; AIAR.inputs[27] = 51; AIAR.inputs[28] = 183; AIAR.inputs[29] = 183; AIAR.inputs[30] = 45; AIAR.inputs[31] = 45; AIAR.inputs[32] = 43; AIAR.inputs[33] = 51; AIAR.inputs[34] = 43; AIAR.inputs[35] = 183; AIAR.inputs[36] = 183; AIAR.inputs[37] = 43; AIAR.inputs[38] = 43; AIAR.inputs[39] = 43; AIAR.inputs[40] = 43; AIAR.inputs[41] = 8; AIAR.inputs[42] = 8; AIAR.inputs[43] = 8; AIAR.inputs[44] = 51; AIAR.inputs[45] = 43; AIAR.inputs[46] = 8; AIAR.inputs[47] = 45; AIAR.inputs[48] = 8; AIAR.inputs[49] = 47; AIAR.inputs[50] = 16; AIAR.inputs[51] = 43; AIAR.inputs[52] = 183; AIAR.inputs[53] = 45; AIAR.inputs[54] = 45; AIAR.inputs[55] = 43; AIAR.inputs[56] = 43; AIAR.inputs[57] = 43; AIAR.inputs[58] = 43; AIAR.inputs[59] = 78; AIAR.inputs[60] = 22; AIAR.inputs[61] = 74; AIAR.inputs[62] = 22; AIAR.inputs[63] = 41; AIAR.inputs[64] = 22; AIAR.inputs[65] = 22; AIAR.inputs[66] = 78; AIAR.inputs[67] = 41; AIAR.inputs[68] = 22; AIAR.inputs[69] = 77; AIAR.inputs[70] = 74; AIAR.inputs[71] = 41; AIAR.inputs[72] = 8; AIAR.inputs[73] = 77; AIAR.inputs[74] = 47; AIAR.inputs[75] = 78; AIAR.inputs[76] = 51; AIAR.inputs[77] = 51; AIAR.inputs[78] = 8; AIAR.inputs[79] = 16; AIAR.inputs[80] = 51; AIAR.inputs[81] = 51; AIAR.inputs[82] = 45; AIAR.inputs[83] = 43; AIAR.inputs[84] = 47; AIAR.inputs[85] = 77; AIAR.inputs[86] = 51; AIAR.inputs[87] = 183; AIAR.inputs[88] = 14; AIAR.inputs[89] = 78; AIAR.inputs[90] = 74; AIAR.inputs[91] = 8; AIAR.inputs[92] = 51; AIAR.inputs[93] = 43; AIAR.inputs[94] = 43; AIAR.inputs[95] = 43; AIAR.inputs[96] = 17; AIAR.inputs[97] = 16; AIAR.inputs[98] = 183; AIAR.inputs[99] = 45; AIAR.inputs[100] = 16; AIAR.inputs[101] = 51; AIAR.inputs[102] = 183; AIAR.inputs[103] = 43; AIAR.inputs[104] = 47; AIAR.inputs[105] = 78; AIAR.inputs[106] = 43; AIAR.inputs[107] = 45; AIAR.inputs[108] = 51; AIAR.inputs[109] = 74; AIAR.inputs[110] = 12;
    AIAR.weightsLen = 111;
    AIAR.weights[0] = 1; AIAR.weights[1] = 1; AIAR.weights[2] = 1; AIAR.weights[3] = 1; AIAR.weights[4] = 1; AIAR.weights[5] = 1; AIAR.weights[6] = 1; AIAR.weights[7] = 1; AIAR.weights[8] = 1; AIAR.weights[9] = 1; AIAR.weights[10] = 1; AIAR.weights[11] = 1; AIAR.weights[12] = 1; AIAR.weights[13] = 1; AIAR.weights[14] = 1; AIAR.weights[15] = 1; AIAR.weights[16] = 1; AIAR.weights[17] = 1; AIAR.weights[18] = 1; AIAR.weights[19] = 1; AIAR.weights[20] = 1; AIAR.weights[21] = 1; AIAR.weights[22] = 1; AIAR.weights[23] = 1; AIAR.weights[24] = 1; AIAR.weights[25] = 1; AIAR.weights[26] = 1; AIAR.weights[27] = 1; AIAR.weights[28] = 1; AIAR.weights[29] = 1; AIAR.weights[30] = 1; AIAR.weights[31] = 1; AIAR.weights[32] = 1; AIAR.weights[33] = 1; AIAR.weights[34] = 1; AIAR.weights[35] = 1; AIAR.weights[36] = 1; AIAR.weights[37] = 1; AIAR.weights[38] = 1; AIAR.weights[39] = 1; AIAR.weights[40] = 1; AIAR.weights[41] = 1; AIAR.weights[42] = 1; AIAR.weights[43] = 1; AIAR.weights[44] = 1; AIAR.weights[45] = 1; AIAR.weights[46] = 1; AIAR.weights[47] = 1; AIAR.weights[48] = 1; AIAR.weights[49] = 1; AIAR.weights[50] = 1; AIAR.weights[51] = 1; AIAR.weights[52] = 1; AIAR.weights[53] = 1; AIAR.weights[54] = 1; AIAR.weights[55] = 1; AIAR.weights[56] = 1; AIAR.weights[57] = 1; AIAR.weights[58] = 1; AIAR.weights[59] = 1; AIAR.weights[60] = 1; AIAR.weights[61] = 1; AIAR.weights[62] = 1; AIAR.weights[63] = 1; AIAR.weights[64] = 1; AIAR.weights[65] = 1; AIAR.weights[66] = 1; AIAR.weights[67] = 1; AIAR.weights[68] = 1; AIAR.weights[69] = 1; AIAR.weights[70] = 1; AIAR.weights[71] = 1; AIAR.weights[72] = 1; AIAR.weights[73] = 1; AIAR.weights[74] = 1; AIAR.weights[75] = 1; AIAR.weights[76] = 1; AIAR.weights[77] = 1; AIAR.weights[78] = 1; AIAR.weights[79] = 1; AIAR.weights[80] = 1; AIAR.weights[81] = 1; AIAR.weights[82] = 1; AIAR.weights[83] = 1; AIAR.weights[84] = 1; AIAR.weights[85] = 1; AIAR.weights[86] = 1; AIAR.weights[87] = 1; AIAR.weights[88] = 1; AIAR.weights[89] = 1; AIAR.weights[90] = 1; AIAR.weights[91] = 1; AIAR.weights[92] = 1; AIAR.weights[93] = 1; AIAR.weights[94] = 1; AIAR.weights[95] = 1; AIAR.weights[96] = 1; AIAR.weights[97] = 1; AIAR.weights[98] = 1; AIAR.weights[99] = 1; AIAR.weights[100] = 1; AIAR.weights[101] = 1; AIAR.weights[102] = 1; AIAR.weights[103] = 1; AIAR.weights[104] = 1; AIAR.weights[105] = 1; AIAR.weights[106] = 1; AIAR.weights[107] = 1; AIAR.weights[108] = 1; AIAR.weights[109] = 1; AIAR.weights[110] = 1;
    if (id == 12) {
        return AIAR;
    }


    neuron AIBL;
    AIBL.cellID = 13;
    AIBL.threshold = 1;
    AIBL.inputsLen = 144;
    AIBL.inputs[0] = 232; AIBL.inputs[1] = 232; AIBL.inputs[2] = 11; AIBL.inputs[3] = 77; AIBL.inputs[4] = 7; AIBL.inputs[5] = 232; AIBL.inputs[6] = 185; AIBL.inputs[7] = 201; AIBL.inputs[8] = 44; AIBL.inputs[9] = 7; AIBL.inputs[10] = 11; AIBL.inputs[11] = 22; AIBL.inputs[12] = 22; AIBL.inputs[13] = 22; AIBL.inputs[14] = 22; AIBL.inputs[15] = 22; AIBL.inputs[16] = 22; AIBL.inputs[17] = 22; AIBL.inputs[18] = 201; AIBL.inputs[19] = 200; AIBL.inputs[20] = 40; AIBL.inputs[21] = 22; AIBL.inputs[22] = 226; AIBL.inputs[23] = 201; AIBL.inputs[24] = 193; AIBL.inputs[25] = 201; AIBL.inputs[26] = 201; AIBL.inputs[27] = 13; AIBL.inputs[28] = 22; AIBL.inputs[29] = 11; AIBL.inputs[30] = 11; AIBL.inputs[31] = 44; AIBL.inputs[32] = 7; AIBL.inputs[33] = 41; AIBL.inputs[34] = 42; AIBL.inputs[35] = 42; AIBL.inputs[36] = 7; AIBL.inputs[37] = 50; AIBL.inputs[38] = 21; AIBL.inputs[39] = 22; AIBL.inputs[40] = 50; AIBL.inputs[41] = 11; AIBL.inputs[42] = 7; AIBL.inputs[43] = 44; AIBL.inputs[44] = 21; AIBL.inputs[45] = 19; AIBL.inputs[46] = 7; AIBL.inputs[47] = 22; AIBL.inputs[48] = 22; AIBL.inputs[49] = 11; AIBL.inputs[50] = 11; AIBL.inputs[51] = 21; AIBL.inputs[52] = 11; AIBL.inputs[53] = 40; AIBL.inputs[54] = 7; AIBL.inputs[55] = 40; AIBL.inputs[56] = 19; AIBL.inputs[57] = 22; AIBL.inputs[58] = 77; AIBL.inputs[59] = 5; AIBL.inputs[60] = 7; AIBL.inputs[61] = 7; AIBL.inputs[62] = 50; AIBL.inputs[63] = 42; AIBL.inputs[64] = 21; AIBL.inputs[65] = 11; AIBL.inputs[66] = 40; AIBL.inputs[67] = 11; AIBL.inputs[68] = 40; AIBL.inputs[69] = 41; AIBL.inputs[70] = 21; AIBL.inputs[71] = 21; AIBL.inputs[72] = 11; AIBL.inputs[73] = 11; AIBL.inputs[74] = 77; AIBL.inputs[75] = 11; AIBL.inputs[76] = 113; AIBL.inputs[77] = 79; AIBL.inputs[78] = 79; AIBL.inputs[79] = 201; AIBL.inputs[80] = 201; AIBL.inputs[81] = 191; AIBL.inputs[82] = 191; AIBL.inputs[83] = 224; AIBL.inputs[84] = 225; AIBL.inputs[85] = 22; AIBL.inputs[86] = 50; AIBL.inputs[87] = 50; AIBL.inputs[88] = 50; AIBL.inputs[89] = 50; AIBL.inputs[90] = 40; AIBL.inputs[91] = 77; AIBL.inputs[92] = 77; AIBL.inputs[93] = 40; AIBL.inputs[94] = 19; AIBL.inputs[95] = 78; AIBL.inputs[96] = 11; AIBL.inputs[97] = 117; AIBL.inputs[98] = 44; AIBL.inputs[99] = 77; AIBL.inputs[100] = 78; AIBL.inputs[101] = 9; AIBL.inputs[102] = 44; AIBL.inputs[103] = 22; AIBL.inputs[104] = 40; AIBL.inputs[105] = 77; AIBL.inputs[106] = 40; AIBL.inputs[107] = 41; AIBL.inputs[108] = 42; AIBL.inputs[109] = 77; AIBL.inputs[110] = 46; AIBL.inputs[111] = 46; AIBL.inputs[112] = 201; AIBL.inputs[113] = 198; AIBL.inputs[114] = 7; AIBL.inputs[115] = 7; AIBL.inputs[116] = 77; AIBL.inputs[117] = 232; AIBL.inputs[118] = 40; AIBL.inputs[119] = 1; AIBL.inputs[120] = 44; AIBL.inputs[121] = 185; AIBL.inputs[122] = 44; AIBL.inputs[123] = 18; AIBL.inputs[124] = 11; AIBL.inputs[125] = 114; AIBL.inputs[126] = 18; AIBL.inputs[127] = 2; AIBL.inputs[128] = 11; AIBL.inputs[129] = 7; AIBL.inputs[130] = 50; AIBL.inputs[131] = 205; AIBL.inputs[132] = 22; AIBL.inputs[133] = 246; AIBL.inputs[134] = 214; AIBL.inputs[135] = 22; AIBL.inputs[136] = 232; AIBL.inputs[137] = 234; AIBL.inputs[138] = 198; AIBL.inputs[139] = 113; AIBL.inputs[140] = 198; AIBL.inputs[141] = 201; AIBL.inputs[142] = 114; AIBL.inputs[143] = 206;
    AIBL.weightsLen = 144;
    AIBL.weights[0] = 1; AIBL.weights[1] = 1; AIBL.weights[2] = 1; AIBL.weights[3] = 1; AIBL.weights[4] = 1; AIBL.weights[5] = 1; AIBL.weights[6] = 1; AIBL.weights[7] = 1; AIBL.weights[8] = 1; AIBL.weights[9] = 1; AIBL.weights[10] = 1; AIBL.weights[11] = 1; AIBL.weights[12] = 1; AIBL.weights[13] = 1; AIBL.weights[14] = 1; AIBL.weights[15] = 1; AIBL.weights[16] = 1; AIBL.weights[17] = 1; AIBL.weights[18] = 1; AIBL.weights[19] = 1; AIBL.weights[20] = 1; AIBL.weights[21] = 1; AIBL.weights[22] = 1; AIBL.weights[23] = 1; AIBL.weights[24] = 1; AIBL.weights[25] = 1; AIBL.weights[26] = 1; AIBL.weights[27] = 1; AIBL.weights[28] = 1; AIBL.weights[29] = 1; AIBL.weights[30] = 1; AIBL.weights[31] = 1; AIBL.weights[32] = 1; AIBL.weights[33] = 1; AIBL.weights[34] = 1; AIBL.weights[35] = 1; AIBL.weights[36] = 1; AIBL.weights[37] = 1; AIBL.weights[38] = 1; AIBL.weights[39] = 1; AIBL.weights[40] = 1; AIBL.weights[41] = 1; AIBL.weights[42] = 1; AIBL.weights[43] = 1; AIBL.weights[44] = 1; AIBL.weights[45] = 1; AIBL.weights[46] = 1; AIBL.weights[47] = 1; AIBL.weights[48] = 1; AIBL.weights[49] = 1; AIBL.weights[50] = 1; AIBL.weights[51] = 1; AIBL.weights[52] = 1; AIBL.weights[53] = 1; AIBL.weights[54] = 1; AIBL.weights[55] = 1; AIBL.weights[56] = 1; AIBL.weights[57] = 1; AIBL.weights[58] = 1; AIBL.weights[59] = 1; AIBL.weights[60] = 1; AIBL.weights[61] = 1; AIBL.weights[62] = 1; AIBL.weights[63] = 1; AIBL.weights[64] = 1; AIBL.weights[65] = 1; AIBL.weights[66] = 1; AIBL.weights[67] = 1; AIBL.weights[68] = 1; AIBL.weights[69] = 1; AIBL.weights[70] = 1; AIBL.weights[71] = 1; AIBL.weights[72] = 1; AIBL.weights[73] = 1; AIBL.weights[74] = 1; AIBL.weights[75] = 1; AIBL.weights[76] = 1; AIBL.weights[77] = 1; AIBL.weights[78] = 1; AIBL.weights[79] = 1; AIBL.weights[80] = 1; AIBL.weights[81] = 1; AIBL.weights[82] = 1; AIBL.weights[83] = 1; AIBL.weights[84] = 1; AIBL.weights[85] = 1; AIBL.weights[86] = 1; AIBL.weights[87] = 1; AIBL.weights[88] = 1; AIBL.weights[89] = 1; AIBL.weights[90] = 1; AIBL.weights[91] = 1; AIBL.weights[92] = 1; AIBL.weights[93] = 1; AIBL.weights[94] = 1; AIBL.weights[95] = 1; AIBL.weights[96] = 1; AIBL.weights[97] = 1; AIBL.weights[98] = 1; AIBL.weights[99] = 1; AIBL.weights[100] = 1; AIBL.weights[101] = 1; AIBL.weights[102] = 1; AIBL.weights[103] = 1; AIBL.weights[104] = 1; AIBL.weights[105] = 1; AIBL.weights[106] = 1; AIBL.weights[107] = 1; AIBL.weights[108] = 1; AIBL.weights[109] = 1; AIBL.weights[110] = 1; AIBL.weights[111] = 1; AIBL.weights[112] = 1; AIBL.weights[113] = 1; AIBL.weights[114] = 1; AIBL.weights[115] = 1; AIBL.weights[116] = 1; AIBL.weights[117] = 1; AIBL.weights[118] = 1; AIBL.weights[119] = 1; AIBL.weights[120] = 1; AIBL.weights[121] = 1; AIBL.weights[122] = 1; AIBL.weights[123] = 1; AIBL.weights[124] = 1; AIBL.weights[125] = 1; AIBL.weights[126] = 1; AIBL.weights[127] = 1; AIBL.weights[128] = 1; AIBL.weights[129] = 1; AIBL.weights[130] = 1; AIBL.weights[131] = 1; AIBL.weights[132] = 1; AIBL.weights[133] = 1; AIBL.weights[134] = 1; AIBL.weights[135] = 1; AIBL.weights[136] = 1; AIBL.weights[137] = 1; AIBL.weights[138] = 1; AIBL.weights[139] = 1; AIBL.weights[140] = 1; AIBL.weights[141] = 1; AIBL.weights[142] = 1; AIBL.weights[143] = 1;
    if (id == 13) {
        return AIBL;
    }


    neuron AIBR;
    AIBR.cellID = 14;
    AIBR.threshold = 1;
    AIBR.inputsLen = 171;
    AIBR.inputs[0] = 21; AIBR.inputs[1] = 200; AIBR.inputs[2] = 41; AIBR.inputs[3] = 231; AIBR.inputs[4] = 41; AIBR.inputs[5] = 45; AIBR.inputs[6] = 78; AIBR.inputs[7] = 41; AIBR.inputs[8] = 21; AIBR.inputs[9] = 78; AIBR.inputs[10] = 41; AIBR.inputs[11] = 21; AIBR.inputs[12] = 41; AIBR.inputs[13] = 40; AIBR.inputs[14] = 8; AIBR.inputs[15] = 185; AIBR.inputs[16] = 193; AIBR.inputs[17] = 21; AIBR.inputs[18] = 21; AIBR.inputs[19] = 21; AIBR.inputs[20] = 21; AIBR.inputs[21] = 185; AIBR.inputs[22] = 21; AIBR.inputs[23] = 21; AIBR.inputs[24] = 12; AIBR.inputs[25] = 41; AIBR.inputs[26] = 8; AIBR.inputs[27] = 78; AIBR.inputs[28] = 40; AIBR.inputs[29] = 41; AIBR.inputs[30] = 8; AIBR.inputs[31] = 41; AIBR.inputs[32] = 21; AIBR.inputs[33] = 8; AIBR.inputs[34] = 8; AIBR.inputs[35] = 78; AIBR.inputs[36] = 41; AIBR.inputs[37] = 21; AIBR.inputs[38] = 8; AIBR.inputs[39] = 21; AIBR.inputs[40] = 21; AIBR.inputs[41] = 113; AIBR.inputs[42] = 12; AIBR.inputs[43] = 200; AIBR.inputs[44] = 5; AIBR.inputs[45] = 8; AIBR.inputs[46] = 8; AIBR.inputs[47] = 12; AIBR.inputs[48] = 8; AIBR.inputs[49] = 21; AIBR.inputs[50] = 21; AIBR.inputs[51] = 200; AIBR.inputs[52] = 248; AIBR.inputs[53] = 8; AIBR.inputs[54] = 12; AIBR.inputs[55] = 43; AIBR.inputs[56] = 45; AIBR.inputs[57] = 43; AIBR.inputs[58] = 43; AIBR.inputs[59] = 12; AIBR.inputs[60] = 12; AIBR.inputs[61] = 43; AIBR.inputs[62] = 43; AIBR.inputs[63] = 12; AIBR.inputs[64] = 22; AIBR.inputs[65] = 22; AIBR.inputs[66] = 12; AIBR.inputs[67] = 41; AIBR.inputs[68] = 22; AIBR.inputs[69] = 12; AIBR.inputs[70] = 41; AIBR.inputs[71] = 8; AIBR.inputs[72] = 12; AIBR.inputs[73] = 77; AIBR.inputs[74] = 47; AIBR.inputs[75] = 12; AIBR.inputs[76] = 12; AIBR.inputs[77] = 78; AIBR.inputs[78] = 223; AIBR.inputs[79] = 21; AIBR.inputs[80] = 185; AIBR.inputs[81] = 197; AIBR.inputs[82] = 197; AIBR.inputs[83] = 200; AIBR.inputs[84] = 200; AIBR.inputs[85] = 57; AIBR.inputs[86] = 200; AIBR.inputs[87] = 200; AIBR.inputs[88] = 200; AIBR.inputs[89] = 200; AIBR.inputs[90] = 200; AIBR.inputs[91] = 200; AIBR.inputs[92] = 227; AIBR.inputs[93] = 190; AIBR.inputs[94] = 190; AIBR.inputs[95] = 52; AIBR.inputs[96] = 197; AIBR.inputs[97] = 21; AIBR.inputs[98] = 225; AIBR.inputs[99] = 21; AIBR.inputs[100] = 185; AIBR.inputs[101] = 200; AIBR.inputs[102] = 21; AIBR.inputs[103] = 21; AIBR.inputs[104] = 197; AIBR.inputs[105] = 75; AIBR.inputs[106] = 40; AIBR.inputs[107] = 8; AIBR.inputs[108] = 40; AIBR.inputs[109] = 77; AIBR.inputs[110] = 12; AIBR.inputs[111] = 8; AIBR.inputs[112] = 40; AIBR.inputs[113] = 41; AIBR.inputs[114] = 78; AIBR.inputs[115] = 41; AIBR.inputs[116] = 40; AIBR.inputs[117] = 40; AIBR.inputs[118] = 40; AIBR.inputs[119] = 41; AIBR.inputs[120] = 78; AIBR.inputs[121] = 41; AIBR.inputs[122] = 21; AIBR.inputs[123] = 21; AIBR.inputs[124] = 41; AIBR.inputs[125] = 12; AIBR.inputs[126] = 45; AIBR.inputs[127] = 40; AIBR.inputs[128] = 41; AIBR.inputs[129] = 8; AIBR.inputs[130] = 51; AIBR.inputs[131] = 51; AIBR.inputs[132] = 78; AIBR.inputs[133] = 21; AIBR.inputs[134] = 185; AIBR.inputs[135] = 21; AIBR.inputs[136] = 8; AIBR.inputs[137] = 113; AIBR.inputs[138] = 200; AIBR.inputs[139] = 12; AIBR.inputs[140] = 12; AIBR.inputs[141] = 47; AIBR.inputs[142] = 114; AIBR.inputs[143] = 43; AIBR.inputs[144] = 12; AIBR.inputs[145] = 2; AIBR.inputs[146] = 2; AIBR.inputs[147] = 12; AIBR.inputs[148] = 113; AIBR.inputs[149] = 114; AIBR.inputs[150] = 12; AIBR.inputs[151] = 1; AIBR.inputs[152] = 1; AIBR.inputs[153] = 51; AIBR.inputs[154] = 51; AIBR.inputs[155] = 197; AIBR.inputs[156] = 21; AIBR.inputs[157] = 193; AIBR.inputs[158] = 21; AIBR.inputs[159] = 205; AIBR.inputs[160] = 245; AIBR.inputs[161] = 245; AIBR.inputs[162] = 235; AIBR.inputs[163] = 207; AIBR.inputs[164] = 185; AIBR.inputs[165] = 180; AIBR.inputs[166] = 113; AIBR.inputs[167] = 200; AIBR.inputs[168] = 197; AIBR.inputs[169] = 113; AIBR.inputs[170] = 113;
    AIBR.weightsLen = 171;
    AIBR.weights[0] = 1; AIBR.weights[1] = 1; AIBR.weights[2] = 1; AIBR.weights[3] = 1; AIBR.weights[4] = 1; AIBR.weights[5] = 1; AIBR.weights[6] = 1; AIBR.weights[7] = 1; AIBR.weights[8] = 1; AIBR.weights[9] = 1; AIBR.weights[10] = 1; AIBR.weights[11] = 1; AIBR.weights[12] = 1; AIBR.weights[13] = 1; AIBR.weights[14] = 1; AIBR.weights[15] = 1; AIBR.weights[16] = 1; AIBR.weights[17] = 1; AIBR.weights[18] = 1; AIBR.weights[19] = 1; AIBR.weights[20] = 1; AIBR.weights[21] = 1; AIBR.weights[22] = 1; AIBR.weights[23] = 1; AIBR.weights[24] = 1; AIBR.weights[25] = 1; AIBR.weights[26] = 1; AIBR.weights[27] = 1; AIBR.weights[28] = 1; AIBR.weights[29] = 1; AIBR.weights[30] = 1; AIBR.weights[31] = 1; AIBR.weights[32] = 1; AIBR.weights[33] = 1; AIBR.weights[34] = 1; AIBR.weights[35] = 1; AIBR.weights[36] = 1; AIBR.weights[37] = 1; AIBR.weights[38] = 1; AIBR.weights[39] = 1; AIBR.weights[40] = 1; AIBR.weights[41] = 1; AIBR.weights[42] = 1; AIBR.weights[43] = 1; AIBR.weights[44] = 1; AIBR.weights[45] = 1; AIBR.weights[46] = 1; AIBR.weights[47] = 1; AIBR.weights[48] = 1; AIBR.weights[49] = 1; AIBR.weights[50] = 1; AIBR.weights[51] = 1; AIBR.weights[52] = 1; AIBR.weights[53] = 1; AIBR.weights[54] = 1; AIBR.weights[55] = 1; AIBR.weights[56] = 1; AIBR.weights[57] = 1; AIBR.weights[58] = 1; AIBR.weights[59] = 1; AIBR.weights[60] = 1; AIBR.weights[61] = 1; AIBR.weights[62] = 1; AIBR.weights[63] = 1; AIBR.weights[64] = 1; AIBR.weights[65] = 1; AIBR.weights[66] = 1; AIBR.weights[67] = 1; AIBR.weights[68] = 1; AIBR.weights[69] = 1; AIBR.weights[70] = 1; AIBR.weights[71] = 1; AIBR.weights[72] = 1; AIBR.weights[73] = 1; AIBR.weights[74] = 1; AIBR.weights[75] = 1; AIBR.weights[76] = 1; AIBR.weights[77] = 1; AIBR.weights[78] = 1; AIBR.weights[79] = 1; AIBR.weights[80] = 1; AIBR.weights[81] = 1; AIBR.weights[82] = 1; AIBR.weights[83] = 1; AIBR.weights[84] = 1; AIBR.weights[85] = 1; AIBR.weights[86] = 1; AIBR.weights[87] = 1; AIBR.weights[88] = 1; AIBR.weights[89] = 1; AIBR.weights[90] = 1; AIBR.weights[91] = 1; AIBR.weights[92] = 1; AIBR.weights[93] = 1; AIBR.weights[94] = 1; AIBR.weights[95] = 1; AIBR.weights[96] = 1; AIBR.weights[97] = 1; AIBR.weights[98] = 1; AIBR.weights[99] = 1; AIBR.weights[100] = 1; AIBR.weights[101] = 1; AIBR.weights[102] = 1; AIBR.weights[103] = 1; AIBR.weights[104] = 1; AIBR.weights[105] = 1; AIBR.weights[106] = 1; AIBR.weights[107] = 1; AIBR.weights[108] = 1; AIBR.weights[109] = 1; AIBR.weights[110] = 1; AIBR.weights[111] = 1; AIBR.weights[112] = 1; AIBR.weights[113] = 1; AIBR.weights[114] = 1; AIBR.weights[115] = 1; AIBR.weights[116] = 1; AIBR.weights[117] = 1; AIBR.weights[118] = 1; AIBR.weights[119] = 1; AIBR.weights[120] = 1; AIBR.weights[121] = 1; AIBR.weights[122] = 1; AIBR.weights[123] = 1; AIBR.weights[124] = 1; AIBR.weights[125] = 1; AIBR.weights[126] = 1; AIBR.weights[127] = 1; AIBR.weights[128] = 1; AIBR.weights[129] = 1; AIBR.weights[130] = 1; AIBR.weights[131] = 1; AIBR.weights[132] = 1; AIBR.weights[133] = 1; AIBR.weights[134] = 1; AIBR.weights[135] = 1; AIBR.weights[136] = 1; AIBR.weights[137] = 1; AIBR.weights[138] = 1; AIBR.weights[139] = 1; AIBR.weights[140] = 1; AIBR.weights[141] = 1; AIBR.weights[142] = 1; AIBR.weights[143] = 1; AIBR.weights[144] = 1; AIBR.weights[145] = 1; AIBR.weights[146] = 1; AIBR.weights[147] = 1; AIBR.weights[148] = 1; AIBR.weights[149] = 1; AIBR.weights[150] = 1; AIBR.weights[151] = 1; AIBR.weights[152] = 1; AIBR.weights[153] = 1; AIBR.weights[154] = 1; AIBR.weights[155] = 1; AIBR.weights[156] = 1; AIBR.weights[157] = 1; AIBR.weights[158] = 1; AIBR.weights[159] = 1; AIBR.weights[160] = 1; AIBR.weights[161] = 1; AIBR.weights[162] = 1; AIBR.weights[163] = 1; AIBR.weights[164] = 1; AIBR.weights[165] = 1; AIBR.weights[166] = 1; AIBR.weights[167] = 1; AIBR.weights[168] = 1; AIBR.weights[169] = 1; AIBR.weights[170] = 1;
    if (id == 14) {
        return AIBR;
    }


    neuron AIML;
    AIML.cellID = 15;
    AIML.threshold = 1;
    AIML.inputsLen = 16;
    AIML.inputs[0] = 11; AIML.inputs[1] = 11; AIML.inputs[2] = 50; AIML.inputs[3] = 11; AIML.inputs[4] = 50; AIML.inputs[5] = 63; AIML.inputs[6] = 50; AIML.inputs[7] = 255; AIML.inputs[8] = 255; AIML.inputs[9] = 24; AIML.inputs[10] = 62; AIML.inputs[11] = 243; AIML.inputs[12] = 11; AIML.inputs[13] = 50; AIML.inputs[14] = 240; AIML.inputs[15] = 42;
    AIML.weightsLen = 16;
    AIML.weights[0] = 1; AIML.weights[1] = 1; AIML.weights[2] = 1; AIML.weights[3] = 1; AIML.weights[4] = 1; AIML.weights[5] = 1; AIML.weights[6] = 1; AIML.weights[7] = 1; AIML.weights[8] = 1; AIML.weights[9] = 1; AIML.weights[10] = 1; AIML.weights[11] = 1; AIML.weights[12] = 1; AIML.weights[13] = 1; AIML.weights[14] = 1; AIML.weights[15] = 1;
    if (id == 15) {
        return AIML;
    }


    neuron AIMR;
    AIMR.cellID = 16;
    AIMR.threshold = 1;
    AIMR.inputsLen = 16;
    AIMR.inputs[0] = 51; AIMR.inputs[1] = 51; AIMR.inputs[2] = 51; AIMR.inputs[3] = 116; AIMR.inputs[4] = 16; AIMR.inputs[5] = 51; AIMR.inputs[6] = 221; AIMR.inputs[7] = 256; AIMR.inputs[8] = 256; AIMR.inputs[9] = 76; AIMR.inputs[10] = 204; AIMR.inputs[11] = 183; AIMR.inputs[12] = 244; AIMR.inputs[13] = 88; AIMR.inputs[14] = 49; AIMR.inputs[15] = 70;
    AIMR.weightsLen = 16;
    AIMR.weights[0] = 1; AIMR.weights[1] = 1; AIMR.weights[2] = 1; AIMR.weights[3] = 1; AIMR.weights[4] = 1; AIMR.weights[5] = 1; AIMR.weights[6] = 1; AIMR.weights[7] = 1; AIMR.weights[8] = 1; AIMR.weights[9] = 1; AIMR.weights[10] = 1; AIMR.weights[11] = 1; AIMR.weights[12] = 1; AIMR.weights[13] = 1; AIMR.weights[14] = 1; AIMR.weights[15] = 1;
    if (id == 16) {
        return AIMR;
    }


    neuron AINL;
    AINL.cellID = 17;
    AINL.threshold = 1;
    AINL.inputsLen = 10;
    AINL.inputs[0] = 20; AINL.inputs[1] = 67; AINL.inputs[2] = 53; AINL.inputs[3] = 79; AINL.inputs[4] = 191; AINL.inputs[5] = 18; AINL.inputs[6] = 85; AINL.inputs[7] = 18; AINL.inputs[8] = 53; AINL.inputs[9] = 43;
    AINL.weightsLen = 10;
    AINL.weights[0] = 1; AINL.weights[1] = 1; AINL.weights[2] = 1; AINL.weights[3] = 1; AINL.weights[4] = 1; AINL.weights[5] = 1; AINL.weights[6] = 1; AINL.weights[7] = 1; AINL.weights[8] = 1; AINL.weights[9] = 1;
    if (id == 17) {
        return AINL;
    }


    neuron AINR;
    AINR.cellID = 18;
    AINR.threshold = 1;
    AINR.inputsLen = 10;
    AINR.inputs[0] = 18; AINR.inputs[1] = 9; AINR.inputs[2] = 9; AINR.inputs[3] = 53; AINR.inputs[4] = 42; AINR.inputs[5] = 79; AINR.inputs[6] = 188; AINR.inputs[7] = 46; AINR.inputs[8] = 52; AINR.inputs[9] = 42;
    AINR.weightsLen = 10;
    AINR.weights[0] = 1; AINR.weights[1] = 1; AINR.weights[2] = 1; AINR.weights[3] = 1; AINR.weights[4] = 1; AINR.weights[5] = 1; AINR.weights[6] = 1; AINR.weights[7] = 1; AINR.weights[8] = 1; AINR.weights[9] = 1;
    if (id == 18) {
        return AINR;
    }


    neuron AIYL;
    AIYL.cellID = 19;
    AIYL.threshold = 1;
    AIYL.inputsLen = 70;
    AIYL.inputs[0] = 40; AIYL.inputs[1] = 77; AIYL.inputs[2] = 40; AIYL.inputs[3] = 46; AIYL.inputs[4] = 40; AIYL.inputs[5] = 40; AIYL.inputs[6] = 78; AIYL.inputs[7] = 9; AIYL.inputs[8] = 46; AIYL.inputs[9] = 41; AIYL.inputs[10] = 40; AIYL.inputs[11] = 77; AIYL.inputs[12] = 9; AIYL.inputs[13] = 78; AIYL.inputs[14] = 77; AIYL.inputs[15] = 41; AIYL.inputs[16] = 41; AIYL.inputs[17] = 77; AIYL.inputs[18] = 77; AIYL.inputs[19] = 78; AIYL.inputs[20] = 9; AIYL.inputs[21] = 41; AIYL.inputs[22] = 77; AIYL.inputs[23] = 9; AIYL.inputs[24] = 9; AIYL.inputs[25] = 9; AIYL.inputs[26] = 9; AIYL.inputs[27] = 9; AIYL.inputs[28] = 9; AIYL.inputs[29] = 9; AIYL.inputs[30] = 77; AIYL.inputs[31] = 40; AIYL.inputs[32] = 77; AIYL.inputs[33] = 77; AIYL.inputs[34] = 40; AIYL.inputs[35] = 40; AIYL.inputs[36] = 78; AIYL.inputs[37] = 41; AIYL.inputs[38] = 40; AIYL.inputs[39] = 77; AIYL.inputs[40] = 40; AIYL.inputs[41] = 40; AIYL.inputs[42] = 40; AIYL.inputs[43] = 41; AIYL.inputs[44] = 77; AIYL.inputs[45] = 78; AIYL.inputs[46] = 78; AIYL.inputs[47] = 40; AIYL.inputs[48] = 77; AIYL.inputs[49] = 40; AIYL.inputs[50] = 75; AIYL.inputs[51] = 40; AIYL.inputs[52] = 77; AIYL.inputs[53] = 77; AIYL.inputs[54] = 52; AIYL.inputs[55] = 80; AIYL.inputs[56] = 77; AIYL.inputs[57] = 40; AIYL.inputs[58] = 199; AIYL.inputs[59] = 40; AIYL.inputs[60] = 9; AIYL.inputs[61] = 73; AIYL.inputs[62] = 20; AIYL.inputs[63] = 77; AIYL.inputs[64] = 20; AIYL.inputs[65] = 73; AIYL.inputs[66] = 73; AIYL.inputs[67] = 20; AIYL.inputs[68] = 200; AIYL.inputs[69] = 69;
    AIYL.weightsLen = 70;
    AIYL.weights[0] = 1; AIYL.weights[1] = 1; AIYL.weights[2] = 1; AIYL.weights[3] = 1; AIYL.weights[4] = 1; AIYL.weights[5] = 1; AIYL.weights[6] = 1; AIYL.weights[7] = 1; AIYL.weights[8] = 1; AIYL.weights[9] = 1; AIYL.weights[10] = 1; AIYL.weights[11] = 1; AIYL.weights[12] = 1; AIYL.weights[13] = 1; AIYL.weights[14] = 1; AIYL.weights[15] = 1; AIYL.weights[16] = 1; AIYL.weights[17] = 1; AIYL.weights[18] = 1; AIYL.weights[19] = 1; AIYL.weights[20] = 1; AIYL.weights[21] = 1; AIYL.weights[22] = 1; AIYL.weights[23] = 1; AIYL.weights[24] = 1; AIYL.weights[25] = 1; AIYL.weights[26] = 1; AIYL.weights[27] = 1; AIYL.weights[28] = 1; AIYL.weights[29] = 1; AIYL.weights[30] = 1; AIYL.weights[31] = 1; AIYL.weights[32] = 1; AIYL.weights[33] = 1; AIYL.weights[34] = 1; AIYL.weights[35] = 1; AIYL.weights[36] = 1; AIYL.weights[37] = 1; AIYL.weights[38] = 1; AIYL.weights[39] = 1; AIYL.weights[40] = 1; AIYL.weights[41] = 1; AIYL.weights[42] = 1; AIYL.weights[43] = 1; AIYL.weights[44] = 1; AIYL.weights[45] = 1; AIYL.weights[46] = 1; AIYL.weights[47] = 1; AIYL.weights[48] = 1; AIYL.weights[49] = 1; AIYL.weights[50] = 1; AIYL.weights[51] = 1; AIYL.weights[52] = 1; AIYL.weights[53] = 1; AIYL.weights[54] = 1; AIYL.weights[55] = 1; AIYL.weights[56] = 1; AIYL.weights[57] = 1; AIYL.weights[58] = 1; AIYL.weights[59] = 1; AIYL.weights[60] = 1; AIYL.weights[61] = 1; AIYL.weights[62] = 1; AIYL.weights[63] = 1; AIYL.weights[64] = 1; AIYL.weights[65] = 1; AIYL.weights[66] = 1; AIYL.weights[67] = 1; AIYL.weights[68] = 1; AIYL.weights[69] = 1;
    if (id == 19) {
        return AIYL;
    }


    neuron AIYR;
    AIYR.cellID = 20;
    AIYR.threshold = 1;
    AIYR.inputsLen = 80;
    AIYR.inputs[0] = 74; AIYR.inputs[1] = 41; AIYR.inputs[2] = 41; AIYR.inputs[3] = 10; AIYR.inputs[4] = 41; AIYR.inputs[5] = 78; AIYR.inputs[6] = 41; AIYR.inputs[7] = 10; AIYR.inputs[8] = 6; AIYR.inputs[9] = 78; AIYR.inputs[10] = 41; AIYR.inputs[11] = 10; AIYR.inputs[12] = 41; AIYR.inputs[13] = 40; AIYR.inputs[14] = 41; AIYR.inputs[15] = 78; AIYR.inputs[16] = 74; AIYR.inputs[17] = 78; AIYR.inputs[18] = 41; AIYR.inputs[19] = 78; AIYR.inputs[20] = 41; AIYR.inputs[21] = 10; AIYR.inputs[22] = 10; AIYR.inputs[23] = 78; AIYR.inputs[24] = 14; AIYR.inputs[25] = 6; AIYR.inputs[26] = 10; AIYR.inputs[27] = 10; AIYR.inputs[28] = 10; AIYR.inputs[29] = 10; AIYR.inputs[30] = 40; AIYR.inputs[31] = 10; AIYR.inputs[32] = 10; AIYR.inputs[33] = 10; AIYR.inputs[34] = 41; AIYR.inputs[35] = 41; AIYR.inputs[36] = 10; AIYR.inputs[37] = 40; AIYR.inputs[38] = 40; AIYR.inputs[39] = 199; AIYR.inputs[40] = 199; AIYR.inputs[41] = 41; AIYR.inputs[42] = 78; AIYR.inputs[43] = 41; AIYR.inputs[44] = 40; AIYR.inputs[45] = 78; AIYR.inputs[46] = 41; AIYR.inputs[47] = 46; AIYR.inputs[48] = 41; AIYR.inputs[49] = 40; AIYR.inputs[50] = 41; AIYR.inputs[51] = 40; AIYR.inputs[52] = 40; AIYR.inputs[53] = 41; AIYR.inputs[54] = 40; AIYR.inputs[55] = 41; AIYR.inputs[56] = 40; AIYR.inputs[57] = 10; AIYR.inputs[58] = 40; AIYR.inputs[59] = 40; AIYR.inputs[60] = 40; AIYR.inputs[61] = 43; AIYR.inputs[62] = 74; AIYR.inputs[63] = 10; AIYR.inputs[64] = 40; AIYR.inputs[65] = 41; AIYR.inputs[66] = 40; AIYR.inputs[67] = 41; AIYR.inputs[68] = 78; AIYR.inputs[69] = 41; AIYR.inputs[70] = 53; AIYR.inputs[71] = 46; AIYR.inputs[72] = 76; AIYR.inputs[73] = 41; AIYR.inputs[74] = 74; AIYR.inputs[75] = 78; AIYR.inputs[76] = 53; AIYR.inputs[77] = 47; AIYR.inputs[78] = 201; AIYR.inputs[79] = 201;
    AIYR.weightsLen = 80;
    AIYR.weights[0] = 1; AIYR.weights[1] = 1; AIYR.weights[2] = 1; AIYR.weights[3] = 1; AIYR.weights[4] = 1; AIYR.weights[5] = 1; AIYR.weights[6] = 1; AIYR.weights[7] = 1; AIYR.weights[8] = 1; AIYR.weights[9] = 1; AIYR.weights[10] = 1; AIYR.weights[11] = 1; AIYR.weights[12] = 1; AIYR.weights[13] = 1; AIYR.weights[14] = 1; AIYR.weights[15] = 1; AIYR.weights[16] = 1; AIYR.weights[17] = 1; AIYR.weights[18] = 1; AIYR.weights[19] = 1; AIYR.weights[20] = 1; AIYR.weights[21] = 1; AIYR.weights[22] = 1; AIYR.weights[23] = 1; AIYR.weights[24] = 1; AIYR.weights[25] = 1; AIYR.weights[26] = 1; AIYR.weights[27] = 1; AIYR.weights[28] = 1; AIYR.weights[29] = 1; AIYR.weights[30] = 1; AIYR.weights[31] = 1; AIYR.weights[32] = 1; AIYR.weights[33] = 1; AIYR.weights[34] = 1; AIYR.weights[35] = 1; AIYR.weights[36] = 1; AIYR.weights[37] = 1; AIYR.weights[38] = 1; AIYR.weights[39] = 1; AIYR.weights[40] = 1; AIYR.weights[41] = 1; AIYR.weights[42] = 1; AIYR.weights[43] = 1; AIYR.weights[44] = 1; AIYR.weights[45] = 1; AIYR.weights[46] = 1; AIYR.weights[47] = 1; AIYR.weights[48] = 1; AIYR.weights[49] = 1; AIYR.weights[50] = 1; AIYR.weights[51] = 1; AIYR.weights[52] = 1; AIYR.weights[53] = 1; AIYR.weights[54] = 1; AIYR.weights[55] = 1; AIYR.weights[56] = 1; AIYR.weights[57] = 1; AIYR.weights[58] = 1; AIYR.weights[59] = 1; AIYR.weights[60] = 1; AIYR.weights[61] = 1; AIYR.weights[62] = 1; AIYR.weights[63] = 1; AIYR.weights[64] = 1; AIYR.weights[65] = 1; AIYR.weights[66] = 1; AIYR.weights[67] = 1; AIYR.weights[68] = 1; AIYR.weights[69] = 1; AIYR.weights[70] = 1; AIYR.weights[71] = 1; AIYR.weights[72] = 1; AIYR.weights[73] = 1; AIYR.weights[74] = 1; AIYR.weights[75] = 1; AIYR.weights[76] = 1; AIYR.weights[77] = 1; AIYR.weights[78] = 1; AIYR.weights[79] = 1;
    if (id == 20) {
        return AIYR;
    }


    neuron AIZL;
    AIZL.cellID = 21;
    AIZL.threshold = 1;
    AIZL.inputsLen = 120;
    AIZL.inputs[0] = 5; AIZL.inputs[1] = 199; AIZL.inputs[2] = 193; AIZL.inputs[3] = 199; AIZL.inputs[4] = 199; AIZL.inputs[5] = 5; AIZL.inputs[6] = 73; AIZL.inputs[7] = 111; AIZL.inputs[8] = 5; AIZL.inputs[9] = 5; AIZL.inputs[10] = 199; AIZL.inputs[11] = 5; AIZL.inputs[12] = 5; AIZL.inputs[13] = 204; AIZL.inputs[14] = 11; AIZL.inputs[15] = 75; AIZL.inputs[16] = 11; AIZL.inputs[17] = 73; AIZL.inputs[18] = 73; AIZL.inputs[19] = 75; AIZL.inputs[20] = 188; AIZL.inputs[21] = 5; AIZL.inputs[22] = 5; AIZL.inputs[23] = 75; AIZL.inputs[24] = 75; AIZL.inputs[25] = 75; AIZL.inputs[26] = 5; AIZL.inputs[27] = 75; AIZL.inputs[28] = 5; AIZL.inputs[29] = 5; AIZL.inputs[30] = 5; AIZL.inputs[31] = 5; AIZL.inputs[32] = 111; AIZL.inputs[33] = 257; AIZL.inputs[34] = 255; AIZL.inputs[35] = 5; AIZL.inputs[36] = 73; AIZL.inputs[37] = 77; AIZL.inputs[38] = 75; AIZL.inputs[39] = 241; AIZL.inputs[40] = 197; AIZL.inputs[41] = 197; AIZL.inputs[42] = 75; AIZL.inputs[43] = 73; AIZL.inputs[44] = 19; AIZL.inputs[45] = 19; AIZL.inputs[46] = 19; AIZL.inputs[47] = 19; AIZL.inputs[48] = 19; AIZL.inputs[49] = 19; AIZL.inputs[50] = 19; AIZL.inputs[51] = 19; AIZL.inputs[52] = 19; AIZL.inputs[53] = 73; AIZL.inputs[54] = 73; AIZL.inputs[55] = 73; AIZL.inputs[56] = 41; AIZL.inputs[57] = 197; AIZL.inputs[58] = 117; AIZL.inputs[59] = 116; AIZL.inputs[60] = 75; AIZL.inputs[61] = 73; AIZL.inputs[62] = 73; AIZL.inputs[63] = 117; AIZL.inputs[64] = 116; AIZL.inputs[65] = 44; AIZL.inputs[66] = 73; AIZL.inputs[67] = 19; AIZL.inputs[68] = 204; AIZL.inputs[69] = 204; AIZL.inputs[70] = 204; AIZL.inputs[71] = 204; AIZL.inputs[72] = 197; AIZL.inputs[73] = 40; AIZL.inputs[74] = 197; AIZL.inputs[75] = 197; AIZL.inputs[76] = 197; AIZL.inputs[77] = 197; AIZL.inputs[78] = 111; AIZL.inputs[79] = 204; AIZL.inputs[80] = 204; AIZL.inputs[81] = 197; AIZL.inputs[82] = 44; AIZL.inputs[83] = 204; AIZL.inputs[84] = 52; AIZL.inputs[85] = 52; AIZL.inputs[86] = 5; AIZL.inputs[87] = 196; AIZL.inputs[88] = 19; AIZL.inputs[89] = 116; AIZL.inputs[90] = 19; AIZL.inputs[91] = 5; AIZL.inputs[92] = 5; AIZL.inputs[93] = 19; AIZL.inputs[94] = 19; AIZL.inputs[95] = 19; AIZL.inputs[96] = 19; AIZL.inputs[97] = 73; AIZL.inputs[98] = 5; AIZL.inputs[99] = 199; AIZL.inputs[100] = 5; AIZL.inputs[101] = 73; AIZL.inputs[102] = 19; AIZL.inputs[103] = 5; AIZL.inputs[104] = 5; AIZL.inputs[105] = 46; AIZL.inputs[106] = 73; AIZL.inputs[107] = 73; AIZL.inputs[108] = 19; AIZL.inputs[109] = 19; AIZL.inputs[110] = 19; AIZL.inputs[111] = 19; AIZL.inputs[112] = 73; AIZL.inputs[113] = 199; AIZL.inputs[114] = 22; AIZL.inputs[115] = 197; AIZL.inputs[116] = 22; AIZL.inputs[117] = 73; AIZL.inputs[118] = 42; AIZL.inputs[119] = 44;
    AIZL.weightsLen = 120;
    AIZL.weights[0] = 1; AIZL.weights[1] = 1; AIZL.weights[2] = 1; AIZL.weights[3] = 1; AIZL.weights[4] = 1; AIZL.weights[5] = 1; AIZL.weights[6] = 1; AIZL.weights[7] = 1; AIZL.weights[8] = 1; AIZL.weights[9] = 1; AIZL.weights[10] = 1; AIZL.weights[11] = 1; AIZL.weights[12] = 1; AIZL.weights[13] = 1; AIZL.weights[14] = 1; AIZL.weights[15] = 1; AIZL.weights[16] = 1; AIZL.weights[17] = 1; AIZL.weights[18] = 1; AIZL.weights[19] = 1; AIZL.weights[20] = 1; AIZL.weights[21] = 1; AIZL.weights[22] = 1; AIZL.weights[23] = 1; AIZL.weights[24] = 1; AIZL.weights[25] = 1; AIZL.weights[26] = 1; AIZL.weights[27] = 1; AIZL.weights[28] = 1; AIZL.weights[29] = 1; AIZL.weights[30] = 1; AIZL.weights[31] = 1; AIZL.weights[32] = 1; AIZL.weights[33] = 1; AIZL.weights[34] = 1; AIZL.weights[35] = 1; AIZL.weights[36] = 1; AIZL.weights[37] = 1; AIZL.weights[38] = 1; AIZL.weights[39] = 1; AIZL.weights[40] = 1; AIZL.weights[41] = 1; AIZL.weights[42] = 1; AIZL.weights[43] = 1; AIZL.weights[44] = 1; AIZL.weights[45] = 1; AIZL.weights[46] = 1; AIZL.weights[47] = 1; AIZL.weights[48] = 1; AIZL.weights[49] = 1; AIZL.weights[50] = 1; AIZL.weights[51] = 1; AIZL.weights[52] = 1; AIZL.weights[53] = 1; AIZL.weights[54] = 1; AIZL.weights[55] = 1; AIZL.weights[56] = 1; AIZL.weights[57] = 1; AIZL.weights[58] = 1; AIZL.weights[59] = 1; AIZL.weights[60] = 1; AIZL.weights[61] = 1; AIZL.weights[62] = 1; AIZL.weights[63] = 1; AIZL.weights[64] = 1; AIZL.weights[65] = 1; AIZL.weights[66] = 1; AIZL.weights[67] = 1; AIZL.weights[68] = 1; AIZL.weights[69] = 1; AIZL.weights[70] = 1; AIZL.weights[71] = 1; AIZL.weights[72] = 1; AIZL.weights[73] = 1; AIZL.weights[74] = 1; AIZL.weights[75] = 1; AIZL.weights[76] = 1; AIZL.weights[77] = 1; AIZL.weights[78] = 1; AIZL.weights[79] = 1; AIZL.weights[80] = 1; AIZL.weights[81] = 1; AIZL.weights[82] = 1; AIZL.weights[83] = 1; AIZL.weights[84] = 1; AIZL.weights[85] = 1; AIZL.weights[86] = 1; AIZL.weights[87] = 1; AIZL.weights[88] = 1; AIZL.weights[89] = 1; AIZL.weights[90] = 1; AIZL.weights[91] = 1; AIZL.weights[92] = 1; AIZL.weights[93] = 1; AIZL.weights[94] = 1; AIZL.weights[95] = 1; AIZL.weights[96] = 1; AIZL.weights[97] = 1; AIZL.weights[98] = 1; AIZL.weights[99] = 1; AIZL.weights[100] = 1; AIZL.weights[101] = 1; AIZL.weights[102] = 1; AIZL.weights[103] = 1; AIZL.weights[104] = 1; AIZL.weights[105] = 1; AIZL.weights[106] = 1; AIZL.weights[107] = 1; AIZL.weights[108] = 1; AIZL.weights[109] = 1; AIZL.weights[110] = 1; AIZL.weights[111] = 1; AIZL.weights[112] = 1; AIZL.weights[113] = 1; AIZL.weights[114] = 1; AIZL.weights[115] = 1; AIZL.weights[116] = 1; AIZL.weights[117] = 1; AIZL.weights[118] = 1; AIZL.weights[119] = 1;
    if (id == 21) {
        return AIZL;
    }


    neuron AIZR;
    AIZR.cellID = 22;
    AIZR.threshold = 1;
    AIZR.inputsLen = 90;
    AIZR.inputs[0] = 191; AIZR.inputs[1] = 20; AIZR.inputs[2] = 74; AIZR.inputs[3] = 20; AIZR.inputs[4] = 20; AIZR.inputs[5] = 6; AIZR.inputs[6] = 20; AIZR.inputs[7] = 199; AIZR.inputs[8] = 13; AIZR.inputs[9] = 199; AIZR.inputs[10] = 6; AIZR.inputs[11] = 13; AIZR.inputs[12] = 6; AIZR.inputs[13] = 117; AIZR.inputs[14] = 116; AIZR.inputs[15] = 204; AIZR.inputs[16] = 191; AIZR.inputs[17] = 204; AIZR.inputs[18] = 198; AIZR.inputs[19] = 198; AIZR.inputs[20] = 198; AIZR.inputs[21] = 198; AIZR.inputs[22] = 111; AIZR.inputs[23] = 13; AIZR.inputs[24] = 199; AIZR.inputs[25] = 199; AIZR.inputs[26] = 20; AIZR.inputs[27] = 76; AIZR.inputs[28] = 6; AIZR.inputs[29] = 76; AIZR.inputs[30] = 6; AIZR.inputs[31] = 76; AIZR.inputs[32] = 6; AIZR.inputs[33] = 20; AIZR.inputs[34] = 6; AIZR.inputs[35] = 6; AIZR.inputs[36] = 6; AIZR.inputs[37] = 204; AIZR.inputs[38] = 197; AIZR.inputs[39] = 197; AIZR.inputs[40] = 198; AIZR.inputs[41] = 74; AIZR.inputs[42] = 74; AIZR.inputs[43] = 74; AIZR.inputs[44] = 74; AIZR.inputs[45] = 74; AIZR.inputs[46] = 74; AIZR.inputs[47] = 12; AIZR.inputs[48] = 74; AIZR.inputs[49] = 20; AIZR.inputs[50] = 20; AIZR.inputs[51] = 20; AIZR.inputs[52] = 204; AIZR.inputs[53] = 74; AIZR.inputs[54] = 74; AIZR.inputs[55] = 74; AIZR.inputs[56] = 74; AIZR.inputs[57] = 204; AIZR.inputs[58] = 199; AIZR.inputs[59] = 111; AIZR.inputs[60] = 76; AIZR.inputs[61] = 204; AIZR.inputs[62] = 204; AIZR.inputs[63] = 76; AIZR.inputs[64] = 204; AIZR.inputs[65] = 204; AIZR.inputs[66] = 53; AIZR.inputs[67] = 6; AIZR.inputs[68] = 6; AIZR.inputs[69] = 61; AIZR.inputs[70] = 246; AIZR.inputs[71] = 74; AIZR.inputs[72] = 79; AIZR.inputs[73] = 116; AIZR.inputs[74] = 79; AIZR.inputs[75] = 6; AIZR.inputs[76] = 20; AIZR.inputs[77] = 20; AIZR.inputs[78] = 20; AIZR.inputs[79] = 20; AIZR.inputs[80] = 20; AIZR.inputs[81] = 20; AIZR.inputs[82] = 20; AIZR.inputs[83] = 20; AIZR.inputs[84] = 76; AIZR.inputs[85] = 239; AIZR.inputs[86] = 45; AIZR.inputs[87] = 43; AIZR.inputs[88] = 45; AIZR.inputs[89] = 74;
    AIZR.weightsLen = 90;
    AIZR.weights[0] = 1; AIZR.weights[1] = 1; AIZR.weights[2] = 1; AIZR.weights[3] = 1; AIZR.weights[4] = 1; AIZR.weights[5] = 1; AIZR.weights[6] = 1; AIZR.weights[7] = 1; AIZR.weights[8] = 1; AIZR.weights[9] = 1; AIZR.weights[10] = 1; AIZR.weights[11] = 1; AIZR.weights[12] = 1; AIZR.weights[13] = 1; AIZR.weights[14] = 1; AIZR.weights[15] = 1; AIZR.weights[16] = 1; AIZR.weights[17] = 1; AIZR.weights[18] = 1; AIZR.weights[19] = 1; AIZR.weights[20] = 1; AIZR.weights[21] = 1; AIZR.weights[22] = 1; AIZR.weights[23] = 1; AIZR.weights[24] = 1; AIZR.weights[25] = 1; AIZR.weights[26] = 1; AIZR.weights[27] = 1; AIZR.weights[28] = 1; AIZR.weights[29] = 1; AIZR.weights[30] = 1; AIZR.weights[31] = 1; AIZR.weights[32] = 1; AIZR.weights[33] = 1; AIZR.weights[34] = 1; AIZR.weights[35] = 1; AIZR.weights[36] = 1; AIZR.weights[37] = 1; AIZR.weights[38] = 1; AIZR.weights[39] = 1; AIZR.weights[40] = 1; AIZR.weights[41] = 1; AIZR.weights[42] = 1; AIZR.weights[43] = 1; AIZR.weights[44] = 1; AIZR.weights[45] = 1; AIZR.weights[46] = 1; AIZR.weights[47] = 1; AIZR.weights[48] = 1; AIZR.weights[49] = 1; AIZR.weights[50] = 1; AIZR.weights[51] = 1; AIZR.weights[52] = 1; AIZR.weights[53] = 1; AIZR.weights[54] = 1; AIZR.weights[55] = 1; AIZR.weights[56] = 1; AIZR.weights[57] = 1; AIZR.weights[58] = 1; AIZR.weights[59] = 1; AIZR.weights[60] = 1; AIZR.weights[61] = 1; AIZR.weights[62] = 1; AIZR.weights[63] = 1; AIZR.weights[64] = 1; AIZR.weights[65] = 1; AIZR.weights[66] = 1; AIZR.weights[67] = 1; AIZR.weights[68] = 1; AIZR.weights[69] = 1; AIZR.weights[70] = 1; AIZR.weights[71] = 1; AIZR.weights[72] = 1; AIZR.weights[73] = 1; AIZR.weights[74] = 1; AIZR.weights[75] = 1; AIZR.weights[76] = 1; AIZR.weights[77] = 1; AIZR.weights[78] = 1; AIZR.weights[79] = 1; AIZR.weights[80] = 1; AIZR.weights[81] = 1; AIZR.weights[82] = 1; AIZR.weights[83] = 1; AIZR.weights[84] = 1; AIZR.weights[85] = 1; AIZR.weights[86] = 1; AIZR.weights[87] = 1; AIZR.weights[88] = 1; AIZR.weights[89] = 1;
    if (id == 22) {
        return AIZR;
    }


    neuron ALA;
    ALA.cellID = 23;
    ALA.threshold = 1;
    ALA.inputsLen = 16;
    ALA.inputs[0] = 51; ALA.inputs[1] = 48; ALA.inputs[2] = 7; ALA.inputs[3] = 16; ALA.inputs[4] = 59; ALA.inputs[5] = 7; ALA.inputs[6] = 7; ALA.inputs[7] = 194; ALA.inputs[8] = 61; ALA.inputs[9] = 194; ALA.inputs[10] = 194; ALA.inputs[11] = 54; ALA.inputs[12] = 117; ALA.inputs[13] = 48; ALA.inputs[14] = 194; ALA.inputs[15] = 51;
    ALA.weightsLen = 16;
    ALA.weights[0] = 1; ALA.weights[1] = 1; ALA.weights[2] = 1; ALA.weights[3] = 1; ALA.weights[4] = 1; ALA.weights[5] = 1; ALA.weights[6] = 1; ALA.weights[7] = 1; ALA.weights[8] = 1; ALA.weights[9] = 1; ALA.weights[10] = 1; ALA.weights[11] = 1; ALA.weights[12] = 1; ALA.weights[13] = 1; ALA.weights[14] = 1; ALA.weights[15] = 1;
    if (id == 23) {
        return ALA;
    }


    neuron ALML;
    ALML.cellID = 24;
    ALML.threshold = 1;
    ALML.inputsLen = 23;
    ALML.inputs[0] = 195; ALML.inputs[1] = 195; ALML.inputs[2] = 195; ALML.inputs[3] = 179; ALML.inputs[4] = 60; ALML.inputs[5] = 85; ALML.inputs[6] = 15; ALML.inputs[7] = 234; ALML.inputs[8] = 24; ALML.inputs[9] = 3; ALML.inputs[10] = 85; ALML.inputs[11] = 232; ALML.inputs[12] = 195; ALML.inputs[13] = 195; ALML.inputs[14] = 231; ALML.inputs[15] = 81; ALML.inputs[16] = 72; ALML.inputs[17] = 72; ALML.inputs[18] = 184; ALML.inputs[19] = 242; ALML.inputs[20] = 209; ALML.inputs[21] = 81; ALML.inputs[22] = 184;
    ALML.weightsLen = 23;
    ALML.weights[0] = 1; ALML.weights[1] = 1; ALML.weights[2] = 1; ALML.weights[3] = 1; ALML.weights[4] = 1; ALML.weights[5] = 1; ALML.weights[6] = 1; ALML.weights[7] = 1; ALML.weights[8] = 1; ALML.weights[9] = 1; ALML.weights[10] = 1; ALML.weights[11] = 1; ALML.weights[12] = 1; ALML.weights[13] = 1; ALML.weights[14] = 1; ALML.weights[15] = 1; ALML.weights[16] = 1; ALML.weights[17] = 1; ALML.weights[18] = 1; ALML.weights[19] = 1; ALML.weights[20] = 1; ALML.weights[21] = 1; ALML.weights[22] = 1;
    if (id == 24) {
        return ALML;
    }


    neuron ALMR;
    ALMR.cellID = 25;
    ALMR.threshold = 1;
    ALMR.inputsLen = 12;
    ALMR.inputs[0] = 82; ALMR.inputs[1] = 184; ALMR.inputs[2] = 256; ALMR.inputs[3] = 221; ALMR.inputs[4] = 82; ALMR.inputs[5] = 82; ALMR.inputs[6] = 72; ALMR.inputs[7] = 184; ALMR.inputs[8] = 232; ALMR.inputs[9] = 59; ALMR.inputs[10] = 59; ALMR.inputs[11] = 82;
    ALMR.weightsLen = 12;
    ALMR.weights[0] = 1; ALMR.weights[1] = 1; ALMR.weights[2] = 1; ALMR.weights[3] = 1; ALMR.weights[4] = 1; ALMR.weights[5] = 1; ALMR.weights[6] = 1; ALMR.weights[7] = 1; ALMR.weights[8] = 1; ALMR.weights[9] = 1; ALMR.weights[10] = 1; ALMR.weights[11] = 1;
    if (id == 25) {
        return ALMR;
    }


    neuron ALNL;
    ALNL.cellID = 26;
    ALNL.threshold = 1;
    ALNL.inputsLen = 10;
    ALNL.inputs[0] = 242; ALNL.inputs[1] = 246; ALNL.inputs[2] = 247; ALNL.inputs[3] = 242; ALNL.inputs[4] = 242; ALNL.inputs[5] = 197; ALNL.inputs[6] = 242; ALNL.inputs[7] = 247; ALNL.inputs[8] = 246; ALNL.inputs[9] = 242;
    ALNL.weightsLen = 10;
    ALNL.weights[0] = 1; ALNL.weights[1] = 1; ALNL.weights[2] = 1; ALNL.weights[3] = 1; ALNL.weights[4] = 1; ALNL.weights[5] = 1; ALNL.weights[6] = 1; ALNL.weights[7] = 1; ALNL.weights[8] = 1; ALNL.weights[9] = 1;
    if (id == 26) {
        return ALNL;
    }


    neuron ALNR;
    ALNR.cellID = 27;
    ALNR.threshold = 1;
    ALNR.inputsLen = 21;
    ALNR.inputs[0] = 221; ALNR.inputs[1] = 4; ALNR.inputs[2] = 239; ALNR.inputs[3] = 221; ALNR.inputs[4] = 233; ALNR.inputs[5] = 233; ALNR.inputs[6] = 227; ALNR.inputs[7] = 198; ALNR.inputs[8] = 198; ALNR.inputs[9] = 246; ALNR.inputs[10] = 246; ALNR.inputs[11] = 241; ALNR.inputs[12] = 26; ALNR.inputs[13] = 221; ALNR.inputs[14] = 221; ALNR.inputs[15] = 245; ALNR.inputs[16] = 178; ALNR.inputs[17] = 184; ALNR.inputs[18] = 184; ALNR.inputs[19] = 184; ALNR.inputs[20] = 184;
    ALNR.weightsLen = 21;
    ALNR.weights[0] = 1; ALNR.weights[1] = 1; ALNR.weights[2] = 1; ALNR.weights[3] = 1; ALNR.weights[4] = 1; ALNR.weights[5] = 1; ALNR.weights[6] = 1; ALNR.weights[7] = 1; ALNR.weights[8] = 1; ALNR.weights[9] = 1; ALNR.weights[10] = 1; ALNR.weights[11] = 1; ALNR.weights[12] = 1; ALNR.weights[13] = 1; ALNR.weights[14] = 1; ALNR.weights[15] = 1; ALNR.weights[16] = 1; ALNR.weights[17] = 1; ALNR.weights[18] = 1; ALNR.weights[19] = 1; ALNR.weights[20] = 1;
    if (id == 27) {
        return ALNR;
    }


    neuron AQR;
    AQR.cellID = 28;
    AQR.threshold = 1;
    AQR.inputsLen = 60;
    AQR.inputs[0] = 237; AQR.inputs[1] = 181; AQR.inputs[2] = 204; AQR.inputs[3] = 188; AQR.inputs[4] = 111; AQR.inputs[5] = 204; AQR.inputs[6] = 111; AQR.inputs[7] = 180; AQR.inputs[8] = 188; AQR.inputs[9] = 188; AQR.inputs[10] = 180; AQR.inputs[11] = 14; AQR.inputs[12] = 111; AQR.inputs[13] = 111; AQR.inputs[14] = 181; AQR.inputs[15] = 181; AQR.inputs[16] = 80; AQR.inputs[17] = 181; AQR.inputs[18] = 174; AQR.inputs[19] = 111; AQR.inputs[20] = 66; AQR.inputs[21] = 174; AQR.inputs[22] = 180; AQR.inputs[23] = 180; AQR.inputs[24] = 180; AQR.inputs[25] = 180; AQR.inputs[26] = 180; AQR.inputs[27] = 180; AQR.inputs[28] = 181; AQR.inputs[29] = 181; AQR.inputs[30] = 181; AQR.inputs[31] = 180; AQR.inputs[32] = 180; AQR.inputs[33] = 181; AQR.inputs[34] = 181; AQR.inputs[35] = 181; AQR.inputs[36] = 181; AQR.inputs[37] = 181; AQR.inputs[38] = 180; AQR.inputs[39] = 180; AQR.inputs[40] = 181; AQR.inputs[41] = 69; AQR.inputs[42] = 70; AQR.inputs[43] = 180; AQR.inputs[44] = 181; AQR.inputs[45] = 181; AQR.inputs[46] = 181; AQR.inputs[47] = 181; AQR.inputs[48] = 181; AQR.inputs[49] = 56; AQR.inputs[50] = 69; AQR.inputs[51] = 181; AQR.inputs[52] = 181; AQR.inputs[53] = 181; AQR.inputs[54] = 181; AQR.inputs[55] = 181; AQR.inputs[56] = 181; AQR.inputs[57] = 198; AQR.inputs[58] = 180; AQR.inputs[59] = 180;
    AQR.weightsLen = 60;
    AQR.weights[0] = 1; AQR.weights[1] = 1; AQR.weights[2] = 1; AQR.weights[3] = 1; AQR.weights[4] = 1; AQR.weights[5] = 1; AQR.weights[6] = 1; AQR.weights[7] = 1; AQR.weights[8] = 1; AQR.weights[9] = 1; AQR.weights[10] = 1; AQR.weights[11] = 1; AQR.weights[12] = 1; AQR.weights[13] = 1; AQR.weights[14] = 1; AQR.weights[15] = 1; AQR.weights[16] = 1; AQR.weights[17] = 1; AQR.weights[18] = 1; AQR.weights[19] = 1; AQR.weights[20] = 1; AQR.weights[21] = 1; AQR.weights[22] = 1; AQR.weights[23] = 1; AQR.weights[24] = 1; AQR.weights[25] = 1; AQR.weights[26] = 1; AQR.weights[27] = 1; AQR.weights[28] = 1; AQR.weights[29] = 1; AQR.weights[30] = 1; AQR.weights[31] = 1; AQR.weights[32] = 1; AQR.weights[33] = 1; AQR.weights[34] = 1; AQR.weights[35] = 1; AQR.weights[36] = 1; AQR.weights[37] = 1; AQR.weights[38] = 1; AQR.weights[39] = 1; AQR.weights[40] = 1; AQR.weights[41] = 1; AQR.weights[42] = 1; AQR.weights[43] = 1; AQR.weights[44] = 1; AQR.weights[45] = 1; AQR.weights[46] = 1; AQR.weights[47] = 1; AQR.weights[48] = 1; AQR.weights[49] = 1; AQR.weights[50] = 1; AQR.weights[51] = 1; AQR.weights[52] = 1; AQR.weights[53] = 1; AQR.weights[54] = 1; AQR.weights[55] = 1; AQR.weights[56] = 1; AQR.weights[57] = 1; AQR.weights[58] = 1; AQR.weights[59] = 1;
    if (id == 28) {
        return AQR;
    }


    neuron AS1;
    AS1.cellID = 29;
    AS1.threshold = 1;
    AS1.inputsLen = 0;

    AS1.weightsLen = 0;
    AS1.weights[0] = 1; AS1.weights[1] = 1; AS1.weights[2] = 1; AS1.weights[3] = 1; AS1.weights[4] = 1; AS1.weights[5] = 1; AS1.weights[6] = 1; AS1.weights[7] = 1; AS1.weights[8] = 1; AS1.weights[9] = 1; AS1.weights[10] = 1; AS1.weights[11] = 1; AS1.weights[12] = 1; AS1.weights[13] = 1; AS1.weights[14] = 1; AS1.weights[15] = 1; AS1.weights[16] = 1; AS1.weights[17] = 1; AS1.weights[18] = 1; AS1.weights[19] = 1; AS1.weights[20] = 1; AS1.weights[21] = 1; AS1.weights[22] = 1; AS1.weights[23] = 1; AS1.weights[24] = 1; AS1.weights[25] = 1; AS1.weights[26] = 1; AS1.weights[27] = 1; AS1.weights[28] = 1; AS1.weights[29] = 1; AS1.weights[30] = 1; AS1.weights[31] = 1; AS1.weights[32] = 1; AS1.weights[33] = 1; AS1.weights[34] = 1; AS1.weights[35] = 1; AS1.weights[36] = 1; AS1.weights[37] = 1; AS1.weights[38] = 1; AS1.weights[39] = 1; AS1.weights[40] = 1; AS1.weights[41] = 1; AS1.weights[42] = 1; AS1.weights[43] = 1; AS1.weights[44] = 1; AS1.weights[45] = 1; AS1.weights[46] = 1; AS1.weights[47] = 1; AS1.weights[48] = 1; AS1.weights[49] = 1; AS1.weights[50] = 1; AS1.weights[51] = 1; AS1.weights[52] = 1; AS1.weights[53] = 1; AS1.weights[54] = 1; AS1.weights[55] = 1; AS1.weights[56] = 1; AS1.weights[57] = 1; AS1.weights[58] = 1; AS1.weights[59] = 1;
    if (id == 29) {
        return AS1;
    }


    neuron AS10;
    AS10.cellID = 30;
    AS10.threshold = 1;
    AS10.inputsLen = 11;
    AS10.inputs[0] = 54; AS10.inputs[1] = 57; AS10.inputs[2] = 172; AS10.inputs[3] = 54; AS10.inputs[4] = 56; AS10.inputs[5] = 262; AS10.inputs[6] = 181; AS10.inputs[7] = 54; AS10.inputs[8] = 59; AS10.inputs[9] = 59; AS10.inputs[10] = 55;
    AS10.weightsLen = 11;
    AS10.weights[0] = 1; AS10.weights[1] = 1; AS10.weights[2] = 1; AS10.weights[3] = 1; AS10.weights[4] = 1; AS10.weights[5] = 1; AS10.weights[6] = 1; AS10.weights[7] = 1; AS10.weights[8] = 1; AS10.weights[9] = 1; AS10.weights[10] = 1;
    if (id == 30) {
        return AS10;
    }


    neuron AS11;
    AS11.cellID = 31;
    AS11.threshold = 1;
    AS11.inputsLen = 56;
    AS11.inputs[0] = 58; AS11.inputs[1] = 58; AS11.inputs[2] = 55; AS11.inputs[3] = 55; AS11.inputs[4] = 59; AS11.inputs[5] = 59; AS11.inputs[6] = 54; AS11.inputs[7] = 55; AS11.inputs[8] = 158; AS11.inputs[9] = 159; AS11.inputs[10] = 158; AS11.inputs[11] = 159; AS11.inputs[12] = 159; AS11.inputs[13] = 158; AS11.inputs[14] = 293; AS11.inputs[15] = 264; AS11.inputs[16] = 264; AS11.inputs[17] = 54; AS11.inputs[18] = 264; AS11.inputs[19] = 264; AS11.inputs[20] = 54; AS11.inputs[21] = 55; AS11.inputs[22] = 55; AS11.inputs[23] = 55; AS11.inputs[24] = 164; AS11.inputs[25] = 54; AS11.inputs[26] = 58; AS11.inputs[27] = 58; AS11.inputs[28] = 55; AS11.inputs[29] = 54; AS11.inputs[30] = 59; AS11.inputs[31] = 66; AS11.inputs[32] = 112; AS11.inputs[33] = 64; AS11.inputs[34] = 66; AS11.inputs[35] = 65; AS11.inputs[36] = 66; AS11.inputs[37] = 66; AS11.inputs[38] = 62; AS11.inputs[39] = 66; AS11.inputs[40] = 65; AS11.inputs[41] = 66; AS11.inputs[42] = 180; AS11.inputs[43] = 65; AS11.inputs[44] = 180; AS11.inputs[45] = 180; AS11.inputs[46] = 66; AS11.inputs[47] = 180; AS11.inputs[48] = 62; AS11.inputs[49] = 66; AS11.inputs[50] = 180; AS11.inputs[51] = 66; AS11.inputs[52] = 66; AS11.inputs[53] = 69; AS11.inputs[54] = 111; AS11.inputs[55] = 275;
    AS11.weightsLen = 56;
    AS11.weights[0] = 1; AS11.weights[1] = 1; AS11.weights[2] = 1; AS11.weights[3] = 1; AS11.weights[4] = 1; AS11.weights[5] = 1; AS11.weights[6] = 1; AS11.weights[7] = 1; AS11.weights[8] = 1; AS11.weights[9] = 1; AS11.weights[10] = 1; AS11.weights[11] = 1; AS11.weights[12] = 1; AS11.weights[13] = 1; AS11.weights[14] = 1; AS11.weights[15] = 1; AS11.weights[16] = 1; AS11.weights[17] = 1; AS11.weights[18] = 1; AS11.weights[19] = 1; AS11.weights[20] = 1; AS11.weights[21] = 1; AS11.weights[22] = 1; AS11.weights[23] = 1; AS11.weights[24] = 1; AS11.weights[25] = 1; AS11.weights[26] = 1; AS11.weights[27] = 1; AS11.weights[28] = 1; AS11.weights[29] = 1; AS11.weights[30] = 1; AS11.weights[31] = 1; AS11.weights[32] = 1; AS11.weights[33] = 1; AS11.weights[34] = 1; AS11.weights[35] = 1; AS11.weights[36] = 1; AS11.weights[37] = 1; AS11.weights[38] = 1; AS11.weights[39] = 1; AS11.weights[40] = 1; AS11.weights[41] = 1; AS11.weights[42] = 1; AS11.weights[43] = 1; AS11.weights[44] = 1; AS11.weights[45] = 1; AS11.weights[46] = 1; AS11.weights[47] = 1; AS11.weights[48] = 1; AS11.weights[49] = 1; AS11.weights[50] = 1; AS11.weights[51] = 1; AS11.weights[52] = 1; AS11.weights[53] = 1; AS11.weights[54] = 1; AS11.weights[55] = 1;
    if (id == 31) {
        return AS11;
    }


    neuron AS2;
    AS2.cellID = 32;
    AS2.threshold = 1;
    AS2.inputsLen = 0;

    AS2.weightsLen = 0;
    AS2.weights[0] = 1; AS2.weights[1] = 1; AS2.weights[2] = 1; AS2.weights[3] = 1; AS2.weights[4] = 1; AS2.weights[5] = 1; AS2.weights[6] = 1; AS2.weights[7] = 1; AS2.weights[8] = 1; AS2.weights[9] = 1; AS2.weights[10] = 1; AS2.weights[11] = 1; AS2.weights[12] = 1; AS2.weights[13] = 1; AS2.weights[14] = 1; AS2.weights[15] = 1; AS2.weights[16] = 1; AS2.weights[17] = 1; AS2.weights[18] = 1; AS2.weights[19] = 1; AS2.weights[20] = 1; AS2.weights[21] = 1; AS2.weights[22] = 1; AS2.weights[23] = 1; AS2.weights[24] = 1; AS2.weights[25] = 1; AS2.weights[26] = 1; AS2.weights[27] = 1; AS2.weights[28] = 1; AS2.weights[29] = 1; AS2.weights[30] = 1; AS2.weights[31] = 1; AS2.weights[32] = 1; AS2.weights[33] = 1; AS2.weights[34] = 1; AS2.weights[35] = 1; AS2.weights[36] = 1; AS2.weights[37] = 1; AS2.weights[38] = 1; AS2.weights[39] = 1; AS2.weights[40] = 1; AS2.weights[41] = 1; AS2.weights[42] = 1; AS2.weights[43] = 1; AS2.weights[44] = 1; AS2.weights[45] = 1; AS2.weights[46] = 1; AS2.weights[47] = 1; AS2.weights[48] = 1; AS2.weights[49] = 1; AS2.weights[50] = 1; AS2.weights[51] = 1; AS2.weights[52] = 1; AS2.weights[53] = 1; AS2.weights[54] = 1; AS2.weights[55] = 1;
    if (id == 32) {
        return AS2;
    }


    neuron AS3;
    AS3.cellID = 33;
    AS3.threshold = 1;
    AS3.inputsLen = 0;

    AS3.weightsLen = 0;
    AS3.weights[0] = 1; AS3.weights[1] = 1; AS3.weights[2] = 1; AS3.weights[3] = 1; AS3.weights[4] = 1; AS3.weights[5] = 1; AS3.weights[6] = 1; AS3.weights[7] = 1; AS3.weights[8] = 1; AS3.weights[9] = 1; AS3.weights[10] = 1; AS3.weights[11] = 1; AS3.weights[12] = 1; AS3.weights[13] = 1; AS3.weights[14] = 1; AS3.weights[15] = 1; AS3.weights[16] = 1; AS3.weights[17] = 1; AS3.weights[18] = 1; AS3.weights[19] = 1; AS3.weights[20] = 1; AS3.weights[21] = 1; AS3.weights[22] = 1; AS3.weights[23] = 1; AS3.weights[24] = 1; AS3.weights[25] = 1; AS3.weights[26] = 1; AS3.weights[27] = 1; AS3.weights[28] = 1; AS3.weights[29] = 1; AS3.weights[30] = 1; AS3.weights[31] = 1; AS3.weights[32] = 1; AS3.weights[33] = 1; AS3.weights[34] = 1; AS3.weights[35] = 1; AS3.weights[36] = 1; AS3.weights[37] = 1; AS3.weights[38] = 1; AS3.weights[39] = 1; AS3.weights[40] = 1; AS3.weights[41] = 1; AS3.weights[42] = 1; AS3.weights[43] = 1; AS3.weights[44] = 1; AS3.weights[45] = 1; AS3.weights[46] = 1; AS3.weights[47] = 1; AS3.weights[48] = 1; AS3.weights[49] = 1; AS3.weights[50] = 1; AS3.weights[51] = 1; AS3.weights[52] = 1; AS3.weights[53] = 1; AS3.weights[54] = 1; AS3.weights[55] = 1;
    if (id == 33) {
        return AS3;
    }


    neuron AS4;
    AS4.cellID = 34;
    AS4.threshold = 1;
    AS4.inputsLen = 0;

    AS4.weightsLen = 0;
    AS4.weights[0] = 1; AS4.weights[1] = 1; AS4.weights[2] = 1; AS4.weights[3] = 1; AS4.weights[4] = 1; AS4.weights[5] = 1; AS4.weights[6] = 1; AS4.weights[7] = 1; AS4.weights[8] = 1; AS4.weights[9] = 1; AS4.weights[10] = 1; AS4.weights[11] = 1; AS4.weights[12] = 1; AS4.weights[13] = 1; AS4.weights[14] = 1; AS4.weights[15] = 1; AS4.weights[16] = 1; AS4.weights[17] = 1; AS4.weights[18] = 1; AS4.weights[19] = 1; AS4.weights[20] = 1; AS4.weights[21] = 1; AS4.weights[22] = 1; AS4.weights[23] = 1; AS4.weights[24] = 1; AS4.weights[25] = 1; AS4.weights[26] = 1; AS4.weights[27] = 1; AS4.weights[28] = 1; AS4.weights[29] = 1; AS4.weights[30] = 1; AS4.weights[31] = 1; AS4.weights[32] = 1; AS4.weights[33] = 1; AS4.weights[34] = 1; AS4.weights[35] = 1; AS4.weights[36] = 1; AS4.weights[37] = 1; AS4.weights[38] = 1; AS4.weights[39] = 1; AS4.weights[40] = 1; AS4.weights[41] = 1; AS4.weights[42] = 1; AS4.weights[43] = 1; AS4.weights[44] = 1; AS4.weights[45] = 1; AS4.weights[46] = 1; AS4.weights[47] = 1; AS4.weights[48] = 1; AS4.weights[49] = 1; AS4.weights[50] = 1; AS4.weights[51] = 1; AS4.weights[52] = 1; AS4.weights[53] = 1; AS4.weights[54] = 1; AS4.weights[55] = 1;
    if (id == 34) {
        return AS4;
    }


    neuron AS5;
    AS5.cellID = 35;
    AS5.threshold = 1;
    AS5.inputsLen = 0;

    AS5.weightsLen = 0;
    AS5.weights[0] = 1; AS5.weights[1] = 1; AS5.weights[2] = 1; AS5.weights[3] = 1; AS5.weights[4] = 1; AS5.weights[5] = 1; AS5.weights[6] = 1; AS5.weights[7] = 1; AS5.weights[8] = 1; AS5.weights[9] = 1; AS5.weights[10] = 1; AS5.weights[11] = 1; AS5.weights[12] = 1; AS5.weights[13] = 1; AS5.weights[14] = 1; AS5.weights[15] = 1; AS5.weights[16] = 1; AS5.weights[17] = 1; AS5.weights[18] = 1; AS5.weights[19] = 1; AS5.weights[20] = 1; AS5.weights[21] = 1; AS5.weights[22] = 1; AS5.weights[23] = 1; AS5.weights[24] = 1; AS5.weights[25] = 1; AS5.weights[26] = 1; AS5.weights[27] = 1; AS5.weights[28] = 1; AS5.weights[29] = 1; AS5.weights[30] = 1; AS5.weights[31] = 1; AS5.weights[32] = 1; AS5.weights[33] = 1; AS5.weights[34] = 1; AS5.weights[35] = 1; AS5.weights[36] = 1; AS5.weights[37] = 1; AS5.weights[38] = 1; AS5.weights[39] = 1; AS5.weights[40] = 1; AS5.weights[41] = 1; AS5.weights[42] = 1; AS5.weights[43] = 1; AS5.weights[44] = 1; AS5.weights[45] = 1; AS5.weights[46] = 1; AS5.weights[47] = 1; AS5.weights[48] = 1; AS5.weights[49] = 1; AS5.weights[50] = 1; AS5.weights[51] = 1; AS5.weights[52] = 1; AS5.weights[53] = 1; AS5.weights[54] = 1; AS5.weights[55] = 1;
    if (id == 35) {
        return AS5;
    }


    neuron AS6;
    AS6.cellID = 36;
    AS6.threshold = 1;
    AS6.inputsLen = 0;

    AS6.weightsLen = 0;
    AS6.weights[0] = 1; AS6.weights[1] = 1; AS6.weights[2] = 1; AS6.weights[3] = 1; AS6.weights[4] = 1; AS6.weights[5] = 1; AS6.weights[6] = 1; AS6.weights[7] = 1; AS6.weights[8] = 1; AS6.weights[9] = 1; AS6.weights[10] = 1; AS6.weights[11] = 1; AS6.weights[12] = 1; AS6.weights[13] = 1; AS6.weights[14] = 1; AS6.weights[15] = 1; AS6.weights[16] = 1; AS6.weights[17] = 1; AS6.weights[18] = 1; AS6.weights[19] = 1; AS6.weights[20] = 1; AS6.weights[21] = 1; AS6.weights[22] = 1; AS6.weights[23] = 1; AS6.weights[24] = 1; AS6.weights[25] = 1; AS6.weights[26] = 1; AS6.weights[27] = 1; AS6.weights[28] = 1; AS6.weights[29] = 1; AS6.weights[30] = 1; AS6.weights[31] = 1; AS6.weights[32] = 1; AS6.weights[33] = 1; AS6.weights[34] = 1; AS6.weights[35] = 1; AS6.weights[36] = 1; AS6.weights[37] = 1; AS6.weights[38] = 1; AS6.weights[39] = 1; AS6.weights[40] = 1; AS6.weights[41] = 1; AS6.weights[42] = 1; AS6.weights[43] = 1; AS6.weights[44] = 1; AS6.weights[45] = 1; AS6.weights[46] = 1; AS6.weights[47] = 1; AS6.weights[48] = 1; AS6.weights[49] = 1; AS6.weights[50] = 1; AS6.weights[51] = 1; AS6.weights[52] = 1; AS6.weights[53] = 1; AS6.weights[54] = 1; AS6.weights[55] = 1;
    if (id == 36) {
        return AS6;
    }


    neuron AS7;
    AS7.cellID = 37;
    AS7.threshold = 1;
    AS7.inputsLen = 0;

    AS7.weightsLen = 0;
    AS7.weights[0] = 1; AS7.weights[1] = 1; AS7.weights[2] = 1; AS7.weights[3] = 1; AS7.weights[4] = 1; AS7.weights[5] = 1; AS7.weights[6] = 1; AS7.weights[7] = 1; AS7.weights[8] = 1; AS7.weights[9] = 1; AS7.weights[10] = 1; AS7.weights[11] = 1; AS7.weights[12] = 1; AS7.weights[13] = 1; AS7.weights[14] = 1; AS7.weights[15] = 1; AS7.weights[16] = 1; AS7.weights[17] = 1; AS7.weights[18] = 1; AS7.weights[19] = 1; AS7.weights[20] = 1; AS7.weights[21] = 1; AS7.weights[22] = 1; AS7.weights[23] = 1; AS7.weights[24] = 1; AS7.weights[25] = 1; AS7.weights[26] = 1; AS7.weights[27] = 1; AS7.weights[28] = 1; AS7.weights[29] = 1; AS7.weights[30] = 1; AS7.weights[31] = 1; AS7.weights[32] = 1; AS7.weights[33] = 1; AS7.weights[34] = 1; AS7.weights[35] = 1; AS7.weights[36] = 1; AS7.weights[37] = 1; AS7.weights[38] = 1; AS7.weights[39] = 1; AS7.weights[40] = 1; AS7.weights[41] = 1; AS7.weights[42] = 1; AS7.weights[43] = 1; AS7.weights[44] = 1; AS7.weights[45] = 1; AS7.weights[46] = 1; AS7.weights[47] = 1; AS7.weights[48] = 1; AS7.weights[49] = 1; AS7.weights[50] = 1; AS7.weights[51] = 1; AS7.weights[52] = 1; AS7.weights[53] = 1; AS7.weights[54] = 1; AS7.weights[55] = 1;
    if (id == 37) {
        return AS7;
    }


    neuron AS8;
    AS8.cellID = 38;
    AS8.threshold = 1;
    AS8.inputsLen = 0;

    AS8.weightsLen = 0;
    AS8.weights[0] = 1; AS8.weights[1] = 1; AS8.weights[2] = 1; AS8.weights[3] = 1; AS8.weights[4] = 1; AS8.weights[5] = 1; AS8.weights[6] = 1; AS8.weights[7] = 1; AS8.weights[8] = 1; AS8.weights[9] = 1; AS8.weights[10] = 1; AS8.weights[11] = 1; AS8.weights[12] = 1; AS8.weights[13] = 1; AS8.weights[14] = 1; AS8.weights[15] = 1; AS8.weights[16] = 1; AS8.weights[17] = 1; AS8.weights[18] = 1; AS8.weights[19] = 1; AS8.weights[20] = 1; AS8.weights[21] = 1; AS8.weights[22] = 1; AS8.weights[23] = 1; AS8.weights[24] = 1; AS8.weights[25] = 1; AS8.weights[26] = 1; AS8.weights[27] = 1; AS8.weights[28] = 1; AS8.weights[29] = 1; AS8.weights[30] = 1; AS8.weights[31] = 1; AS8.weights[32] = 1; AS8.weights[33] = 1; AS8.weights[34] = 1; AS8.weights[35] = 1; AS8.weights[36] = 1; AS8.weights[37] = 1; AS8.weights[38] = 1; AS8.weights[39] = 1; AS8.weights[40] = 1; AS8.weights[41] = 1; AS8.weights[42] = 1; AS8.weights[43] = 1; AS8.weights[44] = 1; AS8.weights[45] = 1; AS8.weights[46] = 1; AS8.weights[47] = 1; AS8.weights[48] = 1; AS8.weights[49] = 1; AS8.weights[50] = 1; AS8.weights[51] = 1; AS8.weights[52] = 1; AS8.weights[53] = 1; AS8.weights[54] = 1; AS8.weights[55] = 1;
    if (id == 38) {
        return AS8;
    }


    neuron AS9;
    AS9.cellID = 39;
    AS9.threshold = 1;
    AS9.inputsLen = 0;

    AS9.weightsLen = 0;
    AS9.weights[0] = 1; AS9.weights[1] = 1; AS9.weights[2] = 1; AS9.weights[3] = 1; AS9.weights[4] = 1; AS9.weights[5] = 1; AS9.weights[6] = 1; AS9.weights[7] = 1; AS9.weights[8] = 1; AS9.weights[9] = 1; AS9.weights[10] = 1; AS9.weights[11] = 1; AS9.weights[12] = 1; AS9.weights[13] = 1; AS9.weights[14] = 1; AS9.weights[15] = 1; AS9.weights[16] = 1; AS9.weights[17] = 1; AS9.weights[18] = 1; AS9.weights[19] = 1; AS9.weights[20] = 1; AS9.weights[21] = 1; AS9.weights[22] = 1; AS9.weights[23] = 1; AS9.weights[24] = 1; AS9.weights[25] = 1; AS9.weights[26] = 1; AS9.weights[27] = 1; AS9.weights[28] = 1; AS9.weights[29] = 1; AS9.weights[30] = 1; AS9.weights[31] = 1; AS9.weights[32] = 1; AS9.weights[33] = 1; AS9.weights[34] = 1; AS9.weights[35] = 1; AS9.weights[36] = 1; AS9.weights[37] = 1; AS9.weights[38] = 1; AS9.weights[39] = 1; AS9.weights[40] = 1; AS9.weights[41] = 1; AS9.weights[42] = 1; AS9.weights[43] = 1; AS9.weights[44] = 1; AS9.weights[45] = 1; AS9.weights[46] = 1; AS9.weights[47] = 1; AS9.weights[48] = 1; AS9.weights[49] = 1; AS9.weights[50] = 1; AS9.weights[51] = 1; AS9.weights[52] = 1; AS9.weights[53] = 1; AS9.weights[54] = 1; AS9.weights[55] = 1;
    if (id == 39) {
        return AS9;
    }


    neuron ASEL;
    ASEL.cellID = 40;
    ASEL.threshold = 1;
    ASEL.inputsLen = 27;
    ASEL.inputs[0] = 41; ASEL.inputs[1] = 78; ASEL.inputs[2] = 78; ASEL.inputs[3] = 21; ASEL.inputs[4] = 21; ASEL.inputs[5] = 21; ASEL.inputs[6] = 7; ASEL.inputs[7] = 18; ASEL.inputs[8] = 11; ASEL.inputs[9] = 9; ASEL.inputs[10] = 75; ASEL.inputs[11] = 17; ASEL.inputs[12] = 20; ASEL.inputs[13] = 78; ASEL.inputs[14] = 73; ASEL.inputs[15] = 73; ASEL.inputs[16] = 73; ASEL.inputs[17] = 41; ASEL.inputs[18] = 10; ASEL.inputs[19] = 47; ASEL.inputs[20] = 47; ASEL.inputs[21] = 78; ASEL.inputs[22] = 73; ASEL.inputs[23] = 42; ASEL.inputs[24] = 78; ASEL.inputs[25] = 78; ASEL.inputs[26] = 77;
    ASEL.weightsLen = 27;
    ASEL.weights[0] = 1; ASEL.weights[1] = 1; ASEL.weights[2] = 1; ASEL.weights[3] = 1; ASEL.weights[4] = 1; ASEL.weights[5] = 1; ASEL.weights[6] = 1; ASEL.weights[7] = 1; ASEL.weights[8] = 1; ASEL.weights[9] = 1; ASEL.weights[10] = 1; ASEL.weights[11] = 1; ASEL.weights[12] = 1; ASEL.weights[13] = 1; ASEL.weights[14] = 1; ASEL.weights[15] = 1; ASEL.weights[16] = 1; ASEL.weights[17] = 1; ASEL.weights[18] = 1; ASEL.weights[19] = 1; ASEL.weights[20] = 1; ASEL.weights[21] = 1; ASEL.weights[22] = 1; ASEL.weights[23] = 1; ASEL.weights[24] = 1; ASEL.weights[25] = 1; ASEL.weights[26] = 1;
    if (id == 40) {
        return ASEL;
    }


    neuron ASER;
    ASER.cellID = 41;
    ASER.threshold = 1;
    ASER.inputsLen = 51;
    ASER.inputs[0] = 40; ASER.inputs[1] = 183; ASER.inputs[2] = 77; ASER.inputs[3] = 50; ASER.inputs[4] = 7; ASER.inputs[5] = 7; ASER.inputs[6] = 7; ASER.inputs[7] = 7; ASER.inputs[8] = 7; ASER.inputs[9] = 11; ASER.inputs[10] = 18; ASER.inputs[11] = 18; ASER.inputs[12] = 19; ASER.inputs[13] = 7; ASER.inputs[14] = 8; ASER.inputs[15] = 46; ASER.inputs[16] = 10; ASER.inputs[17] = 46; ASER.inputs[18] = 11; ASER.inputs[19] = 11; ASER.inputs[20] = 43; ASER.inputs[21] = 12; ASER.inputs[22] = 12; ASER.inputs[23] = 43; ASER.inputs[24] = 12; ASER.inputs[25] = 22; ASER.inputs[26] = 22; ASER.inputs[27] = 46; ASER.inputs[28] = 50; ASER.inputs[29] = 11; ASER.inputs[30] = 78; ASER.inputs[31] = 9; ASER.inputs[32] = 20; ASER.inputs[33] = 74; ASER.inputs[34] = 78; ASER.inputs[35] = 46; ASER.inputs[36] = 76; ASER.inputs[37] = 74; ASER.inputs[38] = 51; ASER.inputs[39] = 183; ASER.inputs[40] = 74; ASER.inputs[41] = 10; ASER.inputs[42] = 20; ASER.inputs[43] = 46; ASER.inputs[44] = 46; ASER.inputs[45] = 46; ASER.inputs[46] = 74; ASER.inputs[47] = 47; ASER.inputs[48] = 183; ASER.inputs[49] = 76; ASER.inputs[50] = 43;
    ASER.weightsLen = 51;
    ASER.weights[0] = 1; ASER.weights[1] = 1; ASER.weights[2] = 1; ASER.weights[3] = 1; ASER.weights[4] = 1; ASER.weights[5] = 1; ASER.weights[6] = 1; ASER.weights[7] = 1; ASER.weights[8] = 1; ASER.weights[9] = 1; ASER.weights[10] = 1; ASER.weights[11] = 1; ASER.weights[12] = 1; ASER.weights[13] = 1; ASER.weights[14] = 1; ASER.weights[15] = 1; ASER.weights[16] = 1; ASER.weights[17] = 1; ASER.weights[18] = 1; ASER.weights[19] = 1; ASER.weights[20] = 1; ASER.weights[21] = 1; ASER.weights[22] = 1; ASER.weights[23] = 1; ASER.weights[24] = 1; ASER.weights[25] = 1; ASER.weights[26] = 1; ASER.weights[27] = 1; ASER.weights[28] = 1; ASER.weights[29] = 1; ASER.weights[30] = 1; ASER.weights[31] = 1; ASER.weights[32] = 1; ASER.weights[33] = 1; ASER.weights[34] = 1; ASER.weights[35] = 1; ASER.weights[36] = 1; ASER.weights[37] = 1; ASER.weights[38] = 1; ASER.weights[39] = 1; ASER.weights[40] = 1; ASER.weights[41] = 1; ASER.weights[42] = 1; ASER.weights[43] = 1; ASER.weights[44] = 1; ASER.weights[45] = 1; ASER.weights[46] = 1; ASER.weights[47] = 1; ASER.weights[48] = 1; ASER.weights[49] = 1; ASER.weights[50] = 1;
    if (id == 41) {
        return ASER;
    }


    neuron ASGL;
    ASGL.cellID = 42;
    ASGL.threshold = 1;
    ASGL.inputsLen = 13;
    ASGL.inputs[0] = 7; ASGL.inputs[1] = 15; ASGL.inputs[2] = 11; ASGL.inputs[3] = 46; ASGL.inputs[4] = 15; ASGL.inputs[5] = 46; ASGL.inputs[6] = 46; ASGL.inputs[7] = 206; ASGL.inputs[8] = 15; ASGL.inputs[9] = 18; ASGL.inputs[10] = 73; ASGL.inputs[11] = 75; ASGL.inputs[12] = 206;
    ASGL.weightsLen = 13;
    ASGL.weights[0] = 1; ASGL.weights[1] = 1; ASGL.weights[2] = 1; ASGL.weights[3] = 1; ASGL.weights[4] = 1; ASGL.weights[5] = 1; ASGL.weights[6] = 1; ASGL.weights[7] = 1; ASGL.weights[8] = 1; ASGL.weights[9] = 1; ASGL.weights[10] = 1; ASGL.weights[11] = 1; ASGL.weights[12] = 1;
    if (id == 42) {
        return ASGL;
    }


    neuron ASGR;
    ASGR.cellID = 43;
    ASGR.threshold = 1;
    ASGR.inputsLen = 24;
    ASGR.inputs[0] = 88; ASGR.inputs[1] = 88; ASGR.inputs[2] = 76; ASGR.inputs[3] = 51; ASGR.inputs[4] = 78; ASGR.inputs[5] = 12; ASGR.inputs[6] = 12; ASGR.inputs[7] = 16; ASGR.inputs[8] = 12; ASGR.inputs[9] = 74; ASGR.inputs[10] = 47; ASGR.inputs[11] = 47; ASGR.inputs[12] = 77; ASGR.inputs[13] = 20; ASGR.inputs[14] = 47; ASGR.inputs[15] = 17; ASGR.inputs[16] = 16; ASGR.inputs[17] = 12; ASGR.inputs[18] = 16; ASGR.inputs[19] = 16; ASGR.inputs[20] = 47; ASGR.inputs[21] = 47; ASGR.inputs[22] = 47; ASGR.inputs[23] = 78;
    ASGR.weightsLen = 24;
    ASGR.weights[0] = 1; ASGR.weights[1] = 1; ASGR.weights[2] = 1; ASGR.weights[3] = 1; ASGR.weights[4] = 1; ASGR.weights[5] = 1; ASGR.weights[6] = 1; ASGR.weights[7] = 1; ASGR.weights[8] = 1; ASGR.weights[9] = 1; ASGR.weights[10] = 1; ASGR.weights[11] = 1; ASGR.weights[12] = 1; ASGR.weights[13] = 1; ASGR.weights[14] = 1; ASGR.weights[15] = 1; ASGR.weights[16] = 1; ASGR.weights[17] = 1; ASGR.weights[18] = 1; ASGR.weights[19] = 1; ASGR.weights[20] = 1; ASGR.weights[21] = 1; ASGR.weights[22] = 1; ASGR.weights[23] = 1;
    if (id == 43) {
        return ASGR;
    }


    neuron ASHL;
    ASHL.cellID = 44;
    ASHL.threshold = 1;
    ASHL.inputsLen = 23;
    ASHL.inputs[0] = 7; ASHL.inputs[1] = 255; ASHL.inputs[2] = 117; ASHL.inputs[3] = 204; ASHL.inputs[4] = 117; ASHL.inputs[5] = 75; ASHL.inputs[6] = 116; ASHL.inputs[7] = 7; ASHL.inputs[8] = 73; ASHL.inputs[9] = 73; ASHL.inputs[10] = 11; ASHL.inputs[11] = 13; ASHL.inputs[12] = 45; ASHL.inputs[13] = 50; ASHL.inputs[14] = 50; ASHL.inputs[15] = 50; ASHL.inputs[16] = 50; ASHL.inputs[17] = 50; ASHL.inputs[18] = 50; ASHL.inputs[19] = 45; ASHL.inputs[20] = 192; ASHL.inputs[21] = 192; ASHL.inputs[22] = 50;
    ASHL.weightsLen = 23;
    ASHL.weights[0] = 1; ASHL.weights[1] = 1; ASHL.weights[2] = 1; ASHL.weights[3] = 1; ASHL.weights[4] = 1; ASHL.weights[5] = 1; ASHL.weights[6] = 1; ASHL.weights[7] = 1; ASHL.weights[8] = 1; ASHL.weights[9] = 1; ASHL.weights[10] = 1; ASHL.weights[11] = 1; ASHL.weights[12] = 1; ASHL.weights[13] = 1; ASHL.weights[14] = 1; ASHL.weights[15] = 1; ASHL.weights[16] = 1; ASHL.weights[17] = 1; ASHL.weights[18] = 1; ASHL.weights[19] = 1; ASHL.weights[20] = 1; ASHL.weights[21] = 1; ASHL.weights[22] = 1;
    if (id == 44) {
        return ASHL;
    }


    neuron ASHR;
    ASHR.cellID = 45;
    ASHR.threshold = 1;
    ASHR.inputsLen = 34;
    ASHR.inputs[0] = 181; ASHR.inputs[1] = 8; ASHR.inputs[2] = 67; ASHR.inputs[3] = 78; ASHR.inputs[4] = 2; ASHR.inputs[5] = 196; ASHR.inputs[6] = 173; ASHR.inputs[7] = 221; ASHR.inputs[8] = 196; ASHR.inputs[9] = 63; ASHR.inputs[10] = 41; ASHR.inputs[11] = 41; ASHR.inputs[12] = 65; ASHR.inputs[13] = 76; ASHR.inputs[14] = 116; ASHR.inputs[15] = 196; ASHR.inputs[16] = 45; ASHR.inputs[17] = 8; ASHR.inputs[18] = 45; ASHR.inputs[19] = 2; ASHR.inputs[20] = 8; ASHR.inputs[21] = 204; ASHR.inputs[22] = 47; ASHR.inputs[23] = 6; ASHR.inputs[24] = 13; ASHR.inputs[25] = 76; ASHR.inputs[26] = 6; ASHR.inputs[27] = 221; ASHR.inputs[28] = 221; ASHR.inputs[29] = 51; ASHR.inputs[30] = 61; ASHR.inputs[31] = 65; ASHR.inputs[32] = 193; ASHR.inputs[33] = 193;
    ASHR.weightsLen = 34;
    ASHR.weights[0] = 1; ASHR.weights[1] = 1; ASHR.weights[2] = 1; ASHR.weights[3] = 1; ASHR.weights[4] = 1; ASHR.weights[5] = 1; ASHR.weights[6] = 1; ASHR.weights[7] = 1; ASHR.weights[8] = 1; ASHR.weights[9] = 1; ASHR.weights[10] = 1; ASHR.weights[11] = 1; ASHR.weights[12] = 1; ASHR.weights[13] = 1; ASHR.weights[14] = 1; ASHR.weights[15] = 1; ASHR.weights[16] = 1; ASHR.weights[17] = 1; ASHR.weights[18] = 1; ASHR.weights[19] = 1; ASHR.weights[20] = 1; ASHR.weights[21] = 1; ASHR.weights[22] = 1; ASHR.weights[23] = 1; ASHR.weights[24] = 1; ASHR.weights[25] = 1; ASHR.weights[26] = 1; ASHR.weights[27] = 1; ASHR.weights[28] = 1; ASHR.weights[29] = 1; ASHR.weights[30] = 1; ASHR.weights[31] = 1; ASHR.weights[32] = 1; ASHR.weights[33] = 1;
    if (id == 45) {
        return ASHR;
    }


    neuron ASIL;
    ASIL.cellID = 46;
    ASIL.threshold = 1;
    ASIL.inputsLen = 12;
    ASIL.inputs[0] = 17; ASIL.inputs[1] = 17; ASIL.inputs[2] = 17; ASIL.inputs[3] = 77; ASIL.inputs[4] = 17; ASIL.inputs[5] = 255; ASIL.inputs[6] = 74; ASIL.inputs[7] = 17; ASIL.inputs[8] = 78; ASIL.inputs[9] = 17; ASIL.inputs[10] = 17; ASIL.inputs[11] = 17;
    ASIL.weightsLen = 12;
    ASIL.weights[0] = 1; ASIL.weights[1] = 1; ASIL.weights[2] = 1; ASIL.weights[3] = 1; ASIL.weights[4] = 1; ASIL.weights[5] = 1; ASIL.weights[6] = 1; ASIL.weights[7] = 1; ASIL.weights[8] = 1; ASIL.weights[9] = 1; ASIL.weights[10] = 1; ASIL.weights[11] = 1;
    if (id == 46) {
        return ASIL;
    }


    neuron ASIR;
    ASIR.cellID = 47;
    ASIR.threshold = 1;
    ASIR.inputsLen = 4;
    ASIR.inputs[0] = 4; ASIR.inputs[1] = 12; ASIR.inputs[2] = 78; ASIR.inputs[3] = 227;
    ASIR.weightsLen = 4;
    ASIR.weights[0] = 1; ASIR.weights[1] = 1; ASIR.weights[2] = 1; ASIR.weights[3] = 1;
    if (id == 47) {
        return ASIR;
    }


    neuron ASJL;
    ASJL.cellID = 48;
    ASJL.threshold = 1;
    ASJL.inputsLen = 14;
    ASJL.inputs[0] = 11; ASJL.inputs[1] = 50; ASJL.inputs[2] = 40; ASJL.inputs[3] = 183; ASJL.inputs[4] = 11; ASJL.inputs[5] = 15; ASJL.inputs[6] = 15; ASJL.inputs[7] = 182; ASJL.inputs[8] = 206; ASJL.inputs[9] = 182; ASJL.inputs[10] = 49; ASJL.inputs[11] = 182; ASJL.inputs[12] = 206; ASJL.inputs[13] = 134;
    ASJL.weightsLen = 14;
    ASJL.weights[0] = 1; ASJL.weights[1] = 1; ASJL.weights[2] = 1; ASJL.weights[3] = 1; ASJL.weights[4] = 1; ASJL.weights[5] = 1; ASJL.weights[6] = 1; ASJL.weights[7] = 1; ASJL.weights[8] = 1; ASJL.weights[9] = 1; ASJL.weights[10] = 1; ASJL.weights[11] = 1; ASJL.weights[12] = 1; ASJL.weights[13] = 1;
    if (id == 48) {
        return ASJL;
    }


    neuron ASJR;
    ASJR.cellID = 49;
    ASJR.threshold = 1;
    ASJR.inputsLen = 8;
    ASJR.inputs[0] = 116; ASJR.inputs[1] = 16; ASJR.inputs[2] = 16; ASJR.inputs[3] = 16; ASJR.inputs[4] = 23; ASJR.inputs[5] = 48; ASJR.inputs[6] = 183; ASJR.inputs[7] = 183;
    ASJR.weightsLen = 8;
    ASJR.weights[0] = 1; ASJR.weights[1] = 1; ASJR.weights[2] = 1; ASJR.weights[3] = 1; ASJR.weights[4] = 1; ASJR.weights[5] = 1; ASJR.weights[6] = 1; ASJR.weights[7] = 1;
    if (id == 49) {
        return ASJR;
    }


    neuron ASKL;
    ASKL.cellID = 50;
    ASKL.threshold = 1;
    ASKL.inputsLen = 38;
    ASKL.inputs[0] = 48; ASKL.inputs[1] = 11; ASKL.inputs[2] = 15; ASKL.inputs[3] = 48; ASKL.inputs[4] = 11; ASKL.inputs[5] = 15; ASKL.inputs[6] = 11; ASKL.inputs[7] = 116; ASKL.inputs[8] = 11; ASKL.inputs[9] = 11; ASKL.inputs[10] = 182; ASKL.inputs[11] = 48; ASKL.inputs[12] = 48; ASKL.inputs[13] = 44; ASKL.inputs[14] = 48; ASKL.inputs[15] = 48; ASKL.inputs[16] = 182; ASKL.inputs[17] = 41; ASKL.inputs[18] = 48; ASKL.inputs[19] = 11; ASKL.inputs[20] = 182; ASKL.inputs[21] = 116; ASKL.inputs[22] = 182; ASKL.inputs[23] = 11; ASKL.inputs[24] = 182; ASKL.inputs[25] = 42; ASKL.inputs[26] = 46; ASKL.inputs[27] = 46; ASKL.inputs[28] = 182; ASKL.inputs[29] = 182; ASKL.inputs[30] = 51; ASKL.inputs[31] = 182; ASKL.inputs[32] = 51; ASKL.inputs[33] = 65; ASKL.inputs[34] = 65; ASKL.inputs[35] = 116; ASKL.inputs[36] = 182; ASKL.inputs[37] = 182;
    ASKL.weightsLen = 38;
    ASKL.weights[0] = 1; ASKL.weights[1] = 1; ASKL.weights[2] = 1; ASKL.weights[3] = 1; ASKL.weights[4] = 1; ASKL.weights[5] = 1; ASKL.weights[6] = 1; ASKL.weights[7] = 1; ASKL.weights[8] = 1; ASKL.weights[9] = 1; ASKL.weights[10] = 1; ASKL.weights[11] = 1; ASKL.weights[12] = 1; ASKL.weights[13] = 1; ASKL.weights[14] = 1; ASKL.weights[15] = 1; ASKL.weights[16] = 1; ASKL.weights[17] = 1; ASKL.weights[18] = 1; ASKL.weights[19] = 1; ASKL.weights[20] = 1; ASKL.weights[21] = 1; ASKL.weights[22] = 1; ASKL.weights[23] = 1; ASKL.weights[24] = 1; ASKL.weights[25] = 1; ASKL.weights[26] = 1; ASKL.weights[27] = 1; ASKL.weights[28] = 1; ASKL.weights[29] = 1; ASKL.weights[30] = 1; ASKL.weights[31] = 1; ASKL.weights[32] = 1; ASKL.weights[33] = 1; ASKL.weights[34] = 1; ASKL.weights[35] = 1; ASKL.weights[36] = 1; ASKL.weights[37] = 1;
    if (id == 50) {
        return ASKL;
    }


    neuron ASKR;
    ASKR.cellID = 51;
    ASKR.threshold = 1;
    ASKR.inputsLen = 28;
    ASKR.inputs[0] = 183; ASKR.inputs[1] = 183; ASKR.inputs[2] = 16; ASKR.inputs[3] = 16; ASKR.inputs[4] = 49; ASKR.inputs[5] = 16; ASKR.inputs[6] = 49; ASKR.inputs[7] = 116; ASKR.inputs[8] = 183; ASKR.inputs[9] = 49; ASKR.inputs[10] = 183; ASKR.inputs[11] = 49; ASKR.inputs[12] = 48; ASKR.inputs[13] = 66; ASKR.inputs[14] = 183; ASKR.inputs[15] = 49; ASKR.inputs[16] = 49; ASKR.inputs[17] = 117; ASKR.inputs[18] = 183; ASKR.inputs[19] = 66; ASKR.inputs[20] = 66; ASKR.inputs[21] = 183; ASKR.inputs[22] = 51; ASKR.inputs[23] = 117; ASKR.inputs[24] = 221; ASKR.inputs[25] = 183; ASKR.inputs[26] = 183; ASKR.inputs[27] = 183;
    ASKR.weightsLen = 28;
    ASKR.weights[0] = 1; ASKR.weights[1] = 1; ASKR.weights[2] = 1; ASKR.weights[3] = 1; ASKR.weights[4] = 1; ASKR.weights[5] = 1; ASKR.weights[6] = 1; ASKR.weights[7] = 1; ASKR.weights[8] = 1; ASKR.weights[9] = 1; ASKR.weights[10] = 1; ASKR.weights[11] = 1; ASKR.weights[12] = 1; ASKR.weights[13] = 1; ASKR.weights[14] = 1; ASKR.weights[15] = 1; ASKR.weights[16] = 1; ASKR.weights[17] = 1; ASKR.weights[18] = 1; ASKR.weights[19] = 1; ASKR.weights[20] = 1; ASKR.weights[21] = 1; ASKR.weights[22] = 1; ASKR.weights[23] = 1; ASKR.weights[24] = 1; ASKR.weights[25] = 1; ASKR.weights[26] = 1; ASKR.weights[27] = 1;
    if (id == 51) {
        return ASKR;
    }


    neuron AUAL;
    AUAL.cellID = 52;
    AUAL.threshold = 1;
    AUAL.inputsLen = 37;
    AUAL.inputs[0] = 5; AUAL.inputs[1] = 5; AUAL.inputs[2] = 190; AUAL.inputs[3] = 5; AUAL.inputs[4] = 5; AUAL.inputs[5] = 255; AUAL.inputs[6] = 5; AUAL.inputs[7] = 5; AUAL.inputs[8] = 5; AUAL.inputs[9] = 255; AUAL.inputs[10] = 255; AUAL.inputs[11] = 255; AUAL.inputs[12] = 255; AUAL.inputs[13] = 18; AUAL.inputs[14] = 190; AUAL.inputs[15] = 14; AUAL.inputs[16] = 204; AUAL.inputs[17] = 111; AUAL.inputs[18] = 204; AUAL.inputs[19] = 255; AUAL.inputs[20] = 204; AUAL.inputs[21] = 5; AUAL.inputs[22] = 5; AUAL.inputs[23] = 255; AUAL.inputs[24] = 255; AUAL.inputs[25] = 255; AUAL.inputs[26] = 255; AUAL.inputs[27] = 255; AUAL.inputs[28] = 132; AUAL.inputs[29] = 111; AUAL.inputs[30] = 111; AUAL.inputs[31] = 190; AUAL.inputs[32] = 77; AUAL.inputs[33] = 212; AUAL.inputs[34] = 212; AUAL.inputs[35] = 75; AUAL.inputs[36] = 53;
    AUAL.weightsLen = 37;
    AUAL.weights[0] = 1; AUAL.weights[1] = 1; AUAL.weights[2] = 1; AUAL.weights[3] = 1; AUAL.weights[4] = 1; AUAL.weights[5] = 1; AUAL.weights[6] = 1; AUAL.weights[7] = 1; AUAL.weights[8] = 1; AUAL.weights[9] = 1; AUAL.weights[10] = 1; AUAL.weights[11] = 1; AUAL.weights[12] = 1; AUAL.weights[13] = 1; AUAL.weights[14] = 1; AUAL.weights[15] = 1; AUAL.weights[16] = 1; AUAL.weights[17] = 1; AUAL.weights[18] = 1; AUAL.weights[19] = 1; AUAL.weights[20] = 1; AUAL.weights[21] = 1; AUAL.weights[22] = 1; AUAL.weights[23] = 1; AUAL.weights[24] = 1; AUAL.weights[25] = 1; AUAL.weights[26] = 1; AUAL.weights[27] = 1; AUAL.weights[28] = 1; AUAL.weights[29] = 1; AUAL.weights[30] = 1; AUAL.weights[31] = 1; AUAL.weights[32] = 1; AUAL.weights[33] = 1; AUAL.weights[34] = 1; AUAL.weights[35] = 1; AUAL.weights[36] = 1;
    if (id == 52) {
        return AUAL;
    }


    neuron AUAR;
    AUAR.cellID = 53;
    AUAR.threshold = 1;
    AUAR.inputsLen = 30;
    AUAR.inputs[0] = 191; AUAR.inputs[1] = 6; AUAR.inputs[2] = 256; AUAR.inputs[3] = 111; AUAR.inputs[4] = 199; AUAR.inputs[5] = 6; AUAR.inputs[6] = 6; AUAR.inputs[7] = 189; AUAR.inputs[8] = 6; AUAR.inputs[9] = 6; AUAR.inputs[10] = 111; AUAR.inputs[11] = 111; AUAR.inputs[12] = 74; AUAR.inputs[13] = 111; AUAR.inputs[14] = 256; AUAR.inputs[15] = 256; AUAR.inputs[16] = 256; AUAR.inputs[17] = 256; AUAR.inputs[18] = 256; AUAR.inputs[19] = 256; AUAR.inputs[20] = 256; AUAR.inputs[21] = 17; AUAR.inputs[22] = 17; AUAR.inputs[23] = 6; AUAR.inputs[24] = 256; AUAR.inputs[25] = 18; AUAR.inputs[26] = 79; AUAR.inputs[27] = 6; AUAR.inputs[28] = 256; AUAR.inputs[29] = 76;
    AUAR.weightsLen = 30;
    AUAR.weights[0] = 1; AUAR.weights[1] = 1; AUAR.weights[2] = 1; AUAR.weights[3] = 1; AUAR.weights[4] = 1; AUAR.weights[5] = 1; AUAR.weights[6] = 1; AUAR.weights[7] = 1; AUAR.weights[8] = 1; AUAR.weights[9] = 1; AUAR.weights[10] = 1; AUAR.weights[11] = 1; AUAR.weights[12] = 1; AUAR.weights[13] = 1; AUAR.weights[14] = 1; AUAR.weights[15] = 1; AUAR.weights[16] = 1; AUAR.weights[17] = 1; AUAR.weights[18] = 1; AUAR.weights[19] = 1; AUAR.weights[20] = 1; AUAR.weights[21] = 1; AUAR.weights[22] = 1; AUAR.weights[23] = 1; AUAR.weights[24] = 1; AUAR.weights[25] = 1; AUAR.weights[26] = 1; AUAR.weights[27] = 1; AUAR.weights[28] = 1; AUAR.weights[29] = 1;
    if (id == 53) {
        return AUAR;
    }


    neuron AVAL;
    AVAL.cellID = 54;
    AVAL.threshold = 1;
    AVAL.inputsLen = 495;
    AVAL.inputs[0] = 72; AVAL.inputs[1] = 232; AVAL.inputs[2] = 232; AVAL.inputs[3] = 232; AVAL.inputs[4] = 13; AVAL.inputs[5] = 226; AVAL.inputs[6] = 226; AVAL.inputs[7] = 226; AVAL.inputs[8] = 226; AVAL.inputs[9] = 192; AVAL.inputs[10] = 226; AVAL.inputs[11] = 192; AVAL.inputs[12] = 192; AVAL.inputs[13] = 226; AVAL.inputs[14] = 192; AVAL.inputs[15] = 226; AVAL.inputs[16] = 192; AVAL.inputs[17] = 226; AVAL.inputs[18] = 226; AVAL.inputs[19] = 226; AVAL.inputs[20] = 260; AVAL.inputs[21] = 193; AVAL.inputs[22] = 201; AVAL.inputs[23] = 226; AVAL.inputs[24] = 201; AVAL.inputs[25] = 226; AVAL.inputs[26] = 226; AVAL.inputs[27] = 201; AVAL.inputs[28] = 226; AVAL.inputs[29] = 226; AVAL.inputs[30] = 226; AVAL.inputs[31] = 193; AVAL.inputs[32] = 193; AVAL.inputs[33] = 192; AVAL.inputs[34] = 226; AVAL.inputs[35] = 226; AVAL.inputs[36] = 192; AVAL.inputs[37] = 137; AVAL.inputs[38] = 201; AVAL.inputs[39] = 193; AVAL.inputs[40] = 193; AVAL.inputs[41] = 193; AVAL.inputs[42] = 226; AVAL.inputs[43] = 226; AVAL.inputs[44] = 226; AVAL.inputs[45] = 226; AVAL.inputs[46] = 226; AVAL.inputs[47] = 226; AVAL.inputs[48] = 188; AVAL.inputs[49] = 44; AVAL.inputs[50] = 7; AVAL.inputs[51] = 7; AVAL.inputs[52] = 44; AVAL.inputs[53] = 255; AVAL.inputs[54] = 28; AVAL.inputs[55] = 13; AVAL.inputs[56] = 234; AVAL.inputs[57] = 111; AVAL.inputs[58] = 190; AVAL.inputs[59] = 190; AVAL.inputs[60] = 200; AVAL.inputs[61] = 242; AVAL.inputs[62] = 180; AVAL.inputs[63] = 28; AVAL.inputs[64] = 28; AVAL.inputs[65] = 224; AVAL.inputs[66] = 224; AVAL.inputs[67] = 224; AVAL.inputs[68] = 224; AVAL.inputs[69] = 224; AVAL.inputs[70] = 7; AVAL.inputs[71] = 44; AVAL.inputs[72] = 44; AVAL.inputs[73] = 44; AVAL.inputs[74] = 44; AVAL.inputs[75] = 44; AVAL.inputs[76] = 44; AVAL.inputs[77] = 44; AVAL.inputs[78] = 44; AVAL.inputs[79] = 192; AVAL.inputs[80] = 44; AVAL.inputs[81] = 192; AVAL.inputs[82] = 180; AVAL.inputs[83] = 80; AVAL.inputs[84] = 52; AVAL.inputs[85] = 52; AVAL.inputs[86] = 66; AVAL.inputs[87] = 52; AVAL.inputs[88] = 52; AVAL.inputs[89] = 77; AVAL.inputs[90] = 52; AVAL.inputs[91] = 80; AVAL.inputs[92] = 52; AVAL.inputs[93] = 225; AVAL.inputs[94] = 27; AVAL.inputs[95] = 7; AVAL.inputs[96] = 7; AVAL.inputs[97] = 68; AVAL.inputs[98] = 44; AVAL.inputs[99] = 174; AVAL.inputs[100] = 52; AVAL.inputs[101] = 188; AVAL.inputs[102] = 1; AVAL.inputs[103] = 201; AVAL.inputs[104] = 224; AVAL.inputs[105] = 224; AVAL.inputs[106] = 27; AVAL.inputs[107] = 193; AVAL.inputs[108] = 7; AVAL.inputs[109] = 201; AVAL.inputs[110] = 201; AVAL.inputs[111] = 201; AVAL.inputs[112] = 190; AVAL.inputs[113] = 200; AVAL.inputs[114] = 156; AVAL.inputs[115] = 1; AVAL.inputs[116] = 28; AVAL.inputs[117] = 111; AVAL.inputs[118] = 190; AVAL.inputs[119] = 232; AVAL.inputs[120] = 113; AVAL.inputs[121] = 231; AVAL.inputs[122] = 231; AVAL.inputs[123] = 111; AVAL.inputs[124] = 113; AVAL.inputs[125] = 113; AVAL.inputs[126] = 114; AVAL.inputs[127] = 115; AVAL.inputs[128] = 114; AVAL.inputs[129] = 113; AVAL.inputs[130] = 114; AVAL.inputs[131] = 114; AVAL.inputs[132] = 115; AVAL.inputs[133] = 114; AVAL.inputs[134] = 115; AVAL.inputs[135] = 4; AVAL.inputs[136] = 3; AVAL.inputs[137] = 4; AVAL.inputs[138] = 4; AVAL.inputs[139] = 181; AVAL.inputs[140] = 4; AVAL.inputs[141] = 115; AVAL.inputs[142] = 115; AVAL.inputs[143] = 114; AVAL.inputs[144] = 82; AVAL.inputs[145] = 115; AVAL.inputs[146] = 114; AVAL.inputs[147] = 82; AVAL.inputs[148] = 115; AVAL.inputs[149] = 115; AVAL.inputs[150] = 114; AVAL.inputs[151] = 221; AVAL.inputs[152] = 164; AVAL.inputs[153] = 112; AVAL.inputs[154] = 55; AVAL.inputs[155] = 167; AVAL.inputs[156] = 163; AVAL.inputs[157] = 167; AVAL.inputs[158] = 59; AVAL.inputs[159] = 173; AVAL.inputs[160] = 60; AVAL.inputs[161] = 58; AVAL.inputs[162] = 59; AVAL.inputs[163] = 60; AVAL.inputs[164] = 58; AVAL.inputs[165] = 59; AVAL.inputs[166] = 61; AVAL.inputs[167] = 57; AVAL.inputs[168] = 60; AVAL.inputs[169] = 54; AVAL.inputs[170] = 172; AVAL.inputs[171] = 174; AVAL.inputs[172] = 56; AVAL.inputs[173] = 165; AVAL.inputs[174] = 58; AVAL.inputs[175] = 58; AVAL.inputs[176] = 172; AVAL.inputs[177] = 172; AVAL.inputs[178] = 172; AVAL.inputs[179] = 172; AVAL.inputs[180] = 172; AVAL.inputs[181] = 58; AVAL.inputs[182] = 57; AVAL.inputs[183] = 264; AVAL.inputs[184] = 164; AVAL.inputs[185] = 164; AVAL.inputs[186] = 138; AVAL.inputs[187] = 56; AVAL.inputs[188] = 56; AVAL.inputs[189] = 59; AVAL.inputs[190] = 57; AVAL.inputs[191] = 57; AVAL.inputs[192] = 59; AVAL.inputs[193] = 56; AVAL.inputs[194] = 56; AVAL.inputs[195] = 59; AVAL.inputs[196] = 57; AVAL.inputs[197] = 59; AVAL.inputs[198] = 174; AVAL.inputs[199] = 58; AVAL.inputs[200] = 263; AVAL.inputs[201] = 31; AVAL.inputs[202] = 54; AVAL.inputs[203] = 58; AVAL.inputs[204] = 58; AVAL.inputs[205] = 64; AVAL.inputs[206] = 59; AVAL.inputs[207] = 64; AVAL.inputs[208] = 114; AVAL.inputs[209] = 115; AVAL.inputs[210] = 115; AVAL.inputs[211] = 263; AVAL.inputs[212] = 263; AVAL.inputs[213] = 54; AVAL.inputs[214] = 54; AVAL.inputs[215] = 54; AVAL.inputs[216] = 115; AVAL.inputs[217] = 82; AVAL.inputs[218] = 174; AVAL.inputs[219] = 63; AVAL.inputs[220] = 4; AVAL.inputs[221] = 13; AVAL.inputs[222] = 114; AVAL.inputs[223] = 114; AVAL.inputs[224] = 114; AVAL.inputs[225] = 114; AVAL.inputs[226] = 115; AVAL.inputs[227] = 192; AVAL.inputs[228] = 114; AVAL.inputs[229] = 59; AVAL.inputs[230] = 57; AVAL.inputs[231] = 57; AVAL.inputs[232] = 55; AVAL.inputs[233] = 59; AVAL.inputs[234] = 58; AVAL.inputs[235] = 172; AVAL.inputs[236] = 56; AVAL.inputs[237] = 172; AVAL.inputs[238] = 56; AVAL.inputs[239] = 172; AVAL.inputs[240] = 172; AVAL.inputs[241] = 172; AVAL.inputs[242] = 59; AVAL.inputs[243] = 56; AVAL.inputs[244] = 175; AVAL.inputs[245] = 175; AVAL.inputs[246] = 59; AVAL.inputs[247] = 59; AVAL.inputs[248] = 57; AVAL.inputs[249] = 172; AVAL.inputs[250] = 58; AVAL.inputs[251] = 58; AVAL.inputs[252] = 172; AVAL.inputs[253] = 172; AVAL.inputs[254] = 172; AVAL.inputs[255] = 172; AVAL.inputs[256] = 59; AVAL.inputs[257] = 174; AVAL.inputs[258] = 175; AVAL.inputs[259] = 59; AVAL.inputs[260] = 56; AVAL.inputs[261] = 172; AVAL.inputs[262] = 58; AVAL.inputs[263] = 59; AVAL.inputs[264] = 176; AVAL.inputs[265] = 176; AVAL.inputs[266] = 176; AVAL.inputs[267] = 176; AVAL.inputs[268] = 176; AVAL.inputs[269] = 175; AVAL.inputs[270] = 55; AVAL.inputs[271] = 55; AVAL.inputs[272] = 59; AVAL.inputs[273] = 168; AVAL.inputs[274] = 172; AVAL.inputs[275] = 172; AVAL.inputs[276] = 172; AVAL.inputs[277] = 55; AVAL.inputs[278] = 169; AVAL.inputs[279] = 55; AVAL.inputs[280] = 169; AVAL.inputs[281] = 172; AVAL.inputs[282] = 69; AVAL.inputs[283] = 59; AVAL.inputs[284] = 58; AVAL.inputs[285] = 172; AVAL.inputs[286] = 138; AVAL.inputs[287] = 165; AVAL.inputs[288] = 138; AVAL.inputs[289] = 165; AVAL.inputs[290] = 59; AVAL.inputs[291] = 138; AVAL.inputs[292] = 264; AVAL.inputs[293] = 264; AVAL.inputs[294] = 139; AVAL.inputs[295] = 172; AVAL.inputs[296] = 139; AVAL.inputs[297] = 172; AVAL.inputs[298] = 165; AVAL.inputs[299] = 138; AVAL.inputs[300] = 172; AVAL.inputs[301] = 68; AVAL.inputs[302] = 164; AVAL.inputs[303] = 164; AVAL.inputs[304] = 172; AVAL.inputs[305] = 172; AVAL.inputs[306] = 58; AVAL.inputs[307] = 139; AVAL.inputs[308] = 139; AVAL.inputs[309] = 139; AVAL.inputs[310] = 174; AVAL.inputs[311] = 59; AVAL.inputs[312] = 179; AVAL.inputs[313] = 179; AVAL.inputs[314] = 260; AVAL.inputs[315] = 180; AVAL.inputs[316] = 201; AVAL.inputs[317] = 257; AVAL.inputs[318] = 173; AVAL.inputs[319] = 58; AVAL.inputs[320] = 230; AVAL.inputs[321] = 228; AVAL.inputs[322] = 228; AVAL.inputs[323] = 228; AVAL.inputs[324] = 228; AVAL.inputs[325] = 174; AVAL.inputs[326] = 228; AVAL.inputs[327] = 60; AVAL.inputs[328] = 181; AVAL.inputs[329] = 180; AVAL.inputs[330] = 181; AVAL.inputs[331] = 58; AVAL.inputs[332] = 181; AVAL.inputs[333] = 292; AVAL.inputs[334] = 184; AVAL.inputs[335] = 174; AVAL.inputs[336] = 263; AVAL.inputs[337] = 59; AVAL.inputs[338] = 262; AVAL.inputs[339] = 263; AVAL.inputs[340] = 263; AVAL.inputs[341] = 59; AVAL.inputs[342] = 173; AVAL.inputs[343] = 174; AVAL.inputs[344] = 54; AVAL.inputs[345] = 201; AVAL.inputs[346] = 201; AVAL.inputs[347] = 55; AVAL.inputs[348] = 262; AVAL.inputs[349] = 55; AVAL.inputs[350] = 55; AVAL.inputs[351] = 262; AVAL.inputs[352] = 262; AVAL.inputs[353] = 59; AVAL.inputs[354] = 59; AVAL.inputs[355] = 55; AVAL.inputs[356] = 59; AVAL.inputs[357] = 274; AVAL.inputs[358] = 274; AVAL.inputs[359] = 262; AVAL.inputs[360] = 274; AVAL.inputs[361] = 274; AVAL.inputs[362] = 274; AVAL.inputs[363] = 274; AVAL.inputs[364] = 262; AVAL.inputs[365] = 274; AVAL.inputs[366] = 262; AVAL.inputs[367] = 262; AVAL.inputs[368] = 262; AVAL.inputs[369] = 174; AVAL.inputs[370] = 262; AVAL.inputs[371] = 262; AVAL.inputs[372] = 262; AVAL.inputs[373] = 262; AVAL.inputs[374] = 262; AVAL.inputs[375] = 174; AVAL.inputs[376] = 59; AVAL.inputs[377] = 59; AVAL.inputs[378] = 58; AVAL.inputs[379] = 58; AVAL.inputs[380] = 55; AVAL.inputs[381] = 55; AVAL.inputs[382] = 55; AVAL.inputs[383] = 55; AVAL.inputs[384] = 55; AVAL.inputs[385] = 59; AVAL.inputs[386] = 55; AVAL.inputs[387] = 59; AVAL.inputs[388] = 59; AVAL.inputs[389] = 59; AVAL.inputs[390] = 58; AVAL.inputs[391] = 172; AVAL.inputs[392] = 59; AVAL.inputs[393] = 58; AVAL.inputs[394] = 59; AVAL.inputs[395] = 59; AVAL.inputs[396] = 55; AVAL.inputs[397] = 174; AVAL.inputs[398] = 174; AVAL.inputs[399] = 174; AVAL.inputs[400] = 173; AVAL.inputs[401] = 174; AVAL.inputs[402] = 173; AVAL.inputs[403] = 176; AVAL.inputs[404] = 174; AVAL.inputs[405] = 173; AVAL.inputs[406] = 173; AVAL.inputs[407] = 173; AVAL.inputs[408] = 173; AVAL.inputs[409] = 173; AVAL.inputs[410] = 264; AVAL.inputs[411] = 176; AVAL.inputs[412] = 174; AVAL.inputs[413] = 174; AVAL.inputs[414] = 173; AVAL.inputs[415] = 174; AVAL.inputs[416] = 174; AVAL.inputs[417] = 173; AVAL.inputs[418] = 173; AVAL.inputs[419] = 176; AVAL.inputs[420] = 173; AVAL.inputs[421] = 176; AVAL.inputs[422] = 174; AVAL.inputs[423] = 174; AVAL.inputs[424] = 174; AVAL.inputs[425] = 55; AVAL.inputs[426] = 55; AVAL.inputs[427] = 174; AVAL.inputs[428] = 174; AVAL.inputs[429] = 174; AVAL.inputs[430] = 55; AVAL.inputs[431] = 55; AVAL.inputs[432] = 55; AVAL.inputs[433] = 55; AVAL.inputs[434] = 55; AVAL.inputs[435] = 59; AVAL.inputs[436] = 168; AVAL.inputs[437] = 168; AVAL.inputs[438] = 174; AVAL.inputs[439] = 174; AVAL.inputs[440] = 174; AVAL.inputs[441] = 172; AVAL.inputs[442] = 55; AVAL.inputs[443] = 174; AVAL.inputs[444] = 55; AVAL.inputs[445] = 174; AVAL.inputs[446] = 55; AVAL.inputs[447] = 174; AVAL.inputs[448] = 174; AVAL.inputs[449] = 174; AVAL.inputs[450] = 174; AVAL.inputs[451] = 174; AVAL.inputs[452] = 174; AVAL.inputs[453] = 174; AVAL.inputs[454] = 174; AVAL.inputs[455] = 174; AVAL.inputs[456] = 55; AVAL.inputs[457] = 55; AVAL.inputs[458] = 169; AVAL.inputs[459] = 174; AVAL.inputs[460] = 58; AVAL.inputs[461] = 55; AVAL.inputs[462] = 55; AVAL.inputs[463] = 55; AVAL.inputs[464] = 174; AVAL.inputs[465] = 55; AVAL.inputs[466] = 55; AVAL.inputs[467] = 55; AVAL.inputs[468] = 59; AVAL.inputs[469] = 58; AVAL.inputs[470] = 58; AVAL.inputs[471] = 59; AVAL.inputs[472] = 58; AVAL.inputs[473] = 55; AVAL.inputs[474] = 58; AVAL.inputs[475] = 55; AVAL.inputs[476] = 55; AVAL.inputs[477] = 55; AVAL.inputs[478] = 55; AVAL.inputs[479] = 55; AVAL.inputs[480] = 55; AVAL.inputs[481] = 55; AVAL.inputs[482] = 55; AVAL.inputs[483] = 55; AVAL.inputs[484] = 55; AVAL.inputs[485] = 139; AVAL.inputs[486] = 139; AVAL.inputs[487] = 67; AVAL.inputs[488] = 174; AVAL.inputs[489] = 67; AVAL.inputs[490] = 59; AVAL.inputs[491] = 173; AVAL.inputs[492] = 138; AVAL.inputs[493] = 67; AVAL.inputs[494] = 174;
    AVAL.weightsLen = 495;
    AVAL.weights[0] = 1; AVAL.weights[1] = 1; AVAL.weights[2] = 1; AVAL.weights[3] = 1; AVAL.weights[4] = 1; AVAL.weights[5] = 1; AVAL.weights[6] = 1; AVAL.weights[7] = 1; AVAL.weights[8] = 1; AVAL.weights[9] = 1; AVAL.weights[10] = 1; AVAL.weights[11] = 1; AVAL.weights[12] = 1; AVAL.weights[13] = 1; AVAL.weights[14] = 1; AVAL.weights[15] = 1; AVAL.weights[16] = 1; AVAL.weights[17] = 1; AVAL.weights[18] = 1; AVAL.weights[19] = 1; AVAL.weights[20] = 1; AVAL.weights[21] = 1; AVAL.weights[22] = 1; AVAL.weights[23] = 1; AVAL.weights[24] = 1; AVAL.weights[25] = 1; AVAL.weights[26] = 1; AVAL.weights[27] = 1; AVAL.weights[28] = 1; AVAL.weights[29] = 1; AVAL.weights[30] = 1; AVAL.weights[31] = 1; AVAL.weights[32] = 1; AVAL.weights[33] = 1; AVAL.weights[34] = 1; AVAL.weights[35] = 1; AVAL.weights[36] = 1; AVAL.weights[37] = 1; AVAL.weights[38] = 1; AVAL.weights[39] = 1; AVAL.weights[40] = 1; AVAL.weights[41] = 1; AVAL.weights[42] = 1; AVAL.weights[43] = 1; AVAL.weights[44] = 1; AVAL.weights[45] = 1; AVAL.weights[46] = 1; AVAL.weights[47] = 1; AVAL.weights[48] = 1; AVAL.weights[49] = 1; AVAL.weights[50] = 1; AVAL.weights[51] = 1; AVAL.weights[52] = 1; AVAL.weights[53] = 1; AVAL.weights[54] = 1; AVAL.weights[55] = 1; AVAL.weights[56] = 1; AVAL.weights[57] = 1; AVAL.weights[58] = 1; AVAL.weights[59] = 1; AVAL.weights[60] = 1; AVAL.weights[61] = 1; AVAL.weights[62] = 1; AVAL.weights[63] = 1; AVAL.weights[64] = 1; AVAL.weights[65] = 1; AVAL.weights[66] = 1; AVAL.weights[67] = 1; AVAL.weights[68] = 1; AVAL.weights[69] = 1; AVAL.weights[70] = 1; AVAL.weights[71] = 1; AVAL.weights[72] = 1; AVAL.weights[73] = 1; AVAL.weights[74] = 1; AVAL.weights[75] = 1; AVAL.weights[76] = 1; AVAL.weights[77] = 1; AVAL.weights[78] = 1; AVAL.weights[79] = 1; AVAL.weights[80] = 1; AVAL.weights[81] = 1; AVAL.weights[82] = 1; AVAL.weights[83] = 1; AVAL.weights[84] = 1; AVAL.weights[85] = 1; AVAL.weights[86] = 1; AVAL.weights[87] = 1; AVAL.weights[88] = 1; AVAL.weights[89] = 1; AVAL.weights[90] = 1; AVAL.weights[91] = 1; AVAL.weights[92] = 1; AVAL.weights[93] = 1; AVAL.weights[94] = 1; AVAL.weights[95] = 1; AVAL.weights[96] = 1; AVAL.weights[97] = 1; AVAL.weights[98] = 1; AVAL.weights[99] = 1; AVAL.weights[100] = 1; AVAL.weights[101] = 1; AVAL.weights[102] = 1; AVAL.weights[103] = 1; AVAL.weights[104] = 1; AVAL.weights[105] = 1; AVAL.weights[106] = 1; AVAL.weights[107] = 1; AVAL.weights[108] = 1; AVAL.weights[109] = 1; AVAL.weights[110] = 1; AVAL.weights[111] = 1; AVAL.weights[112] = 1; AVAL.weights[113] = 1; AVAL.weights[114] = 1; AVAL.weights[115] = 1; AVAL.weights[116] = 1; AVAL.weights[117] = 1; AVAL.weights[118] = 1; AVAL.weights[119] = 1; AVAL.weights[120] = 1; AVAL.weights[121] = 1; AVAL.weights[122] = 1; AVAL.weights[123] = 1; AVAL.weights[124] = 1; AVAL.weights[125] = 1; AVAL.weights[126] = 1; AVAL.weights[127] = 1; AVAL.weights[128] = 1; AVAL.weights[129] = 1; AVAL.weights[130] = 1; AVAL.weights[131] = 1; AVAL.weights[132] = 1; AVAL.weights[133] = 1; AVAL.weights[134] = 1; AVAL.weights[135] = 1; AVAL.weights[136] = 1; AVAL.weights[137] = 1; AVAL.weights[138] = 1; AVAL.weights[139] = 1; AVAL.weights[140] = 1; AVAL.weights[141] = 1; AVAL.weights[142] = 1; AVAL.weights[143] = 1; AVAL.weights[144] = 1; AVAL.weights[145] = 1; AVAL.weights[146] = 1; AVAL.weights[147] = 1; AVAL.weights[148] = 1; AVAL.weights[149] = 1; AVAL.weights[150] = 1; AVAL.weights[151] = 1; AVAL.weights[152] = 1; AVAL.weights[153] = 1; AVAL.weights[154] = 1; AVAL.weights[155] = 1; AVAL.weights[156] = 1; AVAL.weights[157] = 1; AVAL.weights[158] = 1; AVAL.weights[159] = 1; AVAL.weights[160] = 1; AVAL.weights[161] = 1; AVAL.weights[162] = 1; AVAL.weights[163] = 1; AVAL.weights[164] = 1; AVAL.weights[165] = 1; AVAL.weights[166] = 1; AVAL.weights[167] = 1; AVAL.weights[168] = 1; AVAL.weights[169] = 1; AVAL.weights[170] = 1; AVAL.weights[171] = 1; AVAL.weights[172] = 1; AVAL.weights[173] = 1; AVAL.weights[174] = 1; AVAL.weights[175] = 1; AVAL.weights[176] = 1; AVAL.weights[177] = 1; AVAL.weights[178] = 1; AVAL.weights[179] = 1; AVAL.weights[180] = 1; AVAL.weights[181] = 1; AVAL.weights[182] = 1; AVAL.weights[183] = 1; AVAL.weights[184] = 1; AVAL.weights[185] = 1; AVAL.weights[186] = 1; AVAL.weights[187] = 1; AVAL.weights[188] = 1; AVAL.weights[189] = 1; AVAL.weights[190] = 1; AVAL.weights[191] = 1; AVAL.weights[192] = 1; AVAL.weights[193] = 1; AVAL.weights[194] = 1; AVAL.weights[195] = 1; AVAL.weights[196] = 1; AVAL.weights[197] = 1; AVAL.weights[198] = 1; AVAL.weights[199] = 1; AVAL.weights[200] = 1; AVAL.weights[201] = 1; AVAL.weights[202] = 1; AVAL.weights[203] = 1; AVAL.weights[204] = 1; AVAL.weights[205] = 1; AVAL.weights[206] = 1; AVAL.weights[207] = 1; AVAL.weights[208] = 1; AVAL.weights[209] = 1; AVAL.weights[210] = 1; AVAL.weights[211] = 1; AVAL.weights[212] = 1; AVAL.weights[213] = 1; AVAL.weights[214] = 1; AVAL.weights[215] = 1; AVAL.weights[216] = 1; AVAL.weights[217] = 1; AVAL.weights[218] = 1; AVAL.weights[219] = 1; AVAL.weights[220] = 1; AVAL.weights[221] = 1; AVAL.weights[222] = 1; AVAL.weights[223] = 1; AVAL.weights[224] = 1; AVAL.weights[225] = 1; AVAL.weights[226] = 1; AVAL.weights[227] = 1; AVAL.weights[228] = 1; AVAL.weights[229] = 1; AVAL.weights[230] = 1; AVAL.weights[231] = 1; AVAL.weights[232] = 1; AVAL.weights[233] = 1; AVAL.weights[234] = 1; AVAL.weights[235] = 1; AVAL.weights[236] = 1; AVAL.weights[237] = 1; AVAL.weights[238] = 1; AVAL.weights[239] = 1; AVAL.weights[240] = 1; AVAL.weights[241] = 1; AVAL.weights[242] = 1; AVAL.weights[243] = 1; AVAL.weights[244] = 1; AVAL.weights[245] = 1; AVAL.weights[246] = 1; AVAL.weights[247] = 1; AVAL.weights[248] = 1; AVAL.weights[249] = 1; AVAL.weights[250] = 1; AVAL.weights[251] = 1; AVAL.weights[252] = 1; AVAL.weights[253] = 1; AVAL.weights[254] = 1; AVAL.weights[255] = 1; AVAL.weights[256] = 1; AVAL.weights[257] = 1; AVAL.weights[258] = 1; AVAL.weights[259] = 1; AVAL.weights[260] = 1; AVAL.weights[261] = 1; AVAL.weights[262] = 1; AVAL.weights[263] = 1; AVAL.weights[264] = 1; AVAL.weights[265] = 1; AVAL.weights[266] = 1; AVAL.weights[267] = 1; AVAL.weights[268] = 1; AVAL.weights[269] = 1; AVAL.weights[270] = 1; AVAL.weights[271] = 1; AVAL.weights[272] = 1; AVAL.weights[273] = 1; AVAL.weights[274] = 1; AVAL.weights[275] = 1; AVAL.weights[276] = 1; AVAL.weights[277] = 1; AVAL.weights[278] = 1; AVAL.weights[279] = 1; AVAL.weights[280] = 1; AVAL.weights[281] = 1; AVAL.weights[282] = 1; AVAL.weights[283] = 1; AVAL.weights[284] = 1; AVAL.weights[285] = 1; AVAL.weights[286] = 1; AVAL.weights[287] = 1; AVAL.weights[288] = 1; AVAL.weights[289] = 1; AVAL.weights[290] = 1; AVAL.weights[291] = 1; AVAL.weights[292] = 1; AVAL.weights[293] = 1; AVAL.weights[294] = 1; AVAL.weights[295] = 1; AVAL.weights[296] = 1; AVAL.weights[297] = 1; AVAL.weights[298] = 1; AVAL.weights[299] = 1; AVAL.weights[300] = 1; AVAL.weights[301] = 1; AVAL.weights[302] = 1; AVAL.weights[303] = 1; AVAL.weights[304] = 1; AVAL.weights[305] = 1; AVAL.weights[306] = 1; AVAL.weights[307] = 1; AVAL.weights[308] = 1; AVAL.weights[309] = 1; AVAL.weights[310] = 1; AVAL.weights[311] = 1; AVAL.weights[312] = 1; AVAL.weights[313] = 1; AVAL.weights[314] = 1; AVAL.weights[315] = 1; AVAL.weights[316] = 1; AVAL.weights[317] = 1; AVAL.weights[318] = 1; AVAL.weights[319] = 1; AVAL.weights[320] = 1; AVAL.weights[321] = 1; AVAL.weights[322] = 1; AVAL.weights[323] = 1; AVAL.weights[324] = 1; AVAL.weights[325] = 1; AVAL.weights[326] = 1; AVAL.weights[327] = 1; AVAL.weights[328] = 1; AVAL.weights[329] = 1; AVAL.weights[330] = 1; AVAL.weights[331] = 1; AVAL.weights[332] = 1; AVAL.weights[333] = 1; AVAL.weights[334] = 1; AVAL.weights[335] = 1; AVAL.weights[336] = 1; AVAL.weights[337] = 1; AVAL.weights[338] = 1; AVAL.weights[339] = 1; AVAL.weights[340] = 1; AVAL.weights[341] = 1; AVAL.weights[342] = 1; AVAL.weights[343] = 1; AVAL.weights[344] = 1; AVAL.weights[345] = 1; AVAL.weights[346] = 1; AVAL.weights[347] = 1; AVAL.weights[348] = 1; AVAL.weights[349] = 1; AVAL.weights[350] = 1; AVAL.weights[351] = 1; AVAL.weights[352] = 1; AVAL.weights[353] = 1; AVAL.weights[354] = 1; AVAL.weights[355] = 1; AVAL.weights[356] = 1; AVAL.weights[357] = 1; AVAL.weights[358] = 1; AVAL.weights[359] = 1; AVAL.weights[360] = 1; AVAL.weights[361] = 1; AVAL.weights[362] = 1; AVAL.weights[363] = 1; AVAL.weights[364] = 1; AVAL.weights[365] = 1; AVAL.weights[366] = 1; AVAL.weights[367] = 1; AVAL.weights[368] = 1; AVAL.weights[369] = 1; AVAL.weights[370] = 1; AVAL.weights[371] = 1; AVAL.weights[372] = 1; AVAL.weights[373] = 1; AVAL.weights[374] = 1; AVAL.weights[375] = 1; AVAL.weights[376] = 1; AVAL.weights[377] = 1; AVAL.weights[378] = 1; AVAL.weights[379] = 1; AVAL.weights[380] = 1; AVAL.weights[381] = 1; AVAL.weights[382] = 1; AVAL.weights[383] = 1; AVAL.weights[384] = 1; AVAL.weights[385] = 1; AVAL.weights[386] = 1; AVAL.weights[387] = 1; AVAL.weights[388] = 1; AVAL.weights[389] = 1; AVAL.weights[390] = 1; AVAL.weights[391] = 1; AVAL.weights[392] = 1; AVAL.weights[393] = 1; AVAL.weights[394] = 1; AVAL.weights[395] = 1; AVAL.weights[396] = 1; AVAL.weights[397] = 1; AVAL.weights[398] = 1; AVAL.weights[399] = 1; AVAL.weights[400] = 1; AVAL.weights[401] = 1; AVAL.weights[402] = 1; AVAL.weights[403] = 1; AVAL.weights[404] = 1; AVAL.weights[405] = 1; AVAL.weights[406] = 1; AVAL.weights[407] = 1; AVAL.weights[408] = 1; AVAL.weights[409] = 1; AVAL.weights[410] = 1; AVAL.weights[411] = 1; AVAL.weights[412] = 1; AVAL.weights[413] = 1; AVAL.weights[414] = 1; AVAL.weights[415] = 1; AVAL.weights[416] = 1; AVAL.weights[417] = 1; AVAL.weights[418] = 1; AVAL.weights[419] = 1; AVAL.weights[420] = 1; AVAL.weights[421] = 1; AVAL.weights[422] = 1; AVAL.weights[423] = 1; AVAL.weights[424] = 1; AVAL.weights[425] = 1; AVAL.weights[426] = 1; AVAL.weights[427] = 1; AVAL.weights[428] = 1; AVAL.weights[429] = 1; AVAL.weights[430] = 1; AVAL.weights[431] = 1; AVAL.weights[432] = 1; AVAL.weights[433] = 1; AVAL.weights[434] = 1; AVAL.weights[435] = 1; AVAL.weights[436] = 1; AVAL.weights[437] = 1; AVAL.weights[438] = 1; AVAL.weights[439] = 1; AVAL.weights[440] = 1; AVAL.weights[441] = 1; AVAL.weights[442] = 1; AVAL.weights[443] = 1; AVAL.weights[444] = 1; AVAL.weights[445] = 1; AVAL.weights[446] = 1; AVAL.weights[447] = 1; AVAL.weights[448] = 1; AVAL.weights[449] = 1; AVAL.weights[450] = 1; AVAL.weights[451] = 1; AVAL.weights[452] = 1; AVAL.weights[453] = 1; AVAL.weights[454] = 1; AVAL.weights[455] = 1; AVAL.weights[456] = 1; AVAL.weights[457] = 1; AVAL.weights[458] = 1; AVAL.weights[459] = 1; AVAL.weights[460] = 1; AVAL.weights[461] = 1; AVAL.weights[462] = 1; AVAL.weights[463] = 1; AVAL.weights[464] = 1; AVAL.weights[465] = 1; AVAL.weights[466] = 1; AVAL.weights[467] = 1; AVAL.weights[468] = 1; AVAL.weights[469] = 1; AVAL.weights[470] = 1; AVAL.weights[471] = 1; AVAL.weights[472] = 1; AVAL.weights[473] = 1; AVAL.weights[474] = 1; AVAL.weights[475] = 1; AVAL.weights[476] = 1; AVAL.weights[477] = 1; AVAL.weights[478] = 1; AVAL.weights[479] = 1; AVAL.weights[480] = 1; AVAL.weights[481] = 1; AVAL.weights[482] = 1; AVAL.weights[483] = 1; AVAL.weights[484] = 1; AVAL.weights[485] = 1; AVAL.weights[486] = 1; AVAL.weights[487] = 1; AVAL.weights[488] = 1; AVAL.weights[489] = 1; AVAL.weights[490] = 1; AVAL.weights[491] = 1; AVAL.weights[492] = 1; AVAL.weights[493] = 1; AVAL.weights[494] = 1;
    if (id == 54) {
        return AVAL;
    }


    neuron AVAR;
    AVAR.cellID = 55;
    AVAR.threshold = 1;
    AVAR.inputsLen = 309;
    AVAR.inputs[0] = 23; AVAR.inputs[1] = 167; AVAR.inputs[2] = 59; AVAR.inputs[3] = 172; AVAR.inputs[4] = 274; AVAR.inputs[5] = 174; AVAR.inputs[6] = 292; AVAR.inputs[7] = 263; AVAR.inputs[8] = 58; AVAR.inputs[9] = 292; AVAR.inputs[10] = 54; AVAR.inputs[11] = 56; AVAR.inputs[12] = 187; AVAR.inputs[13] = 59; AVAR.inputs[14] = 54; AVAR.inputs[15] = 59; AVAR.inputs[16] = 172; AVAR.inputs[17] = 172; AVAR.inputs[18] = 172; AVAR.inputs[19] = 172; AVAR.inputs[20] = 58; AVAR.inputs[21] = 57; AVAR.inputs[22] = 68; AVAR.inputs[23] = 56; AVAR.inputs[24] = 262; AVAR.inputs[25] = 59; AVAR.inputs[26] = 262; AVAR.inputs[27] = 59; AVAR.inputs[28] = 174; AVAR.inputs[29] = 54; AVAR.inputs[30] = 59; AVAR.inputs[31] = 58; AVAR.inputs[32] = 172; AVAR.inputs[33] = 58; AVAR.inputs[34] = 172; AVAR.inputs[35] = 172; AVAR.inputs[36] = 172; AVAR.inputs[37] = 176; AVAR.inputs[38] = 176; AVAR.inputs[39] = 176; AVAR.inputs[40] = 59; AVAR.inputs[41] = 176; AVAR.inputs[42] = 176; AVAR.inputs[43] = 176; AVAR.inputs[44] = 176; AVAR.inputs[45] = 176; AVAR.inputs[46] = 175; AVAR.inputs[47] = 175; AVAR.inputs[48] = 176; AVAR.inputs[49] = 176; AVAR.inputs[50] = 174; AVAR.inputs[51] = 175; AVAR.inputs[52] = 175; AVAR.inputs[53] = 175; AVAR.inputs[54] = 59; AVAR.inputs[55] = 175; AVAR.inputs[56] = 56; AVAR.inputs[57] = 174; AVAR.inputs[58] = 174; AVAR.inputs[59] = 175; AVAR.inputs[60] = 58; AVAR.inputs[61] = 59; AVAR.inputs[62] = 174; AVAR.inputs[63] = 175; AVAR.inputs[64] = 59; AVAR.inputs[65] = 172; AVAR.inputs[66] = 172; AVAR.inputs[67] = 172; AVAR.inputs[68] = 56; AVAR.inputs[69] = 169; AVAR.inputs[70] = 169; AVAR.inputs[71] = 58; AVAR.inputs[72] = 169; AVAR.inputs[73] = 54; AVAR.inputs[74] = 169; AVAR.inputs[75] = 172; AVAR.inputs[76] = 56; AVAR.inputs[77] = 59; AVAR.inputs[78] = 175; AVAR.inputs[79] = 58; AVAR.inputs[80] = 111; AVAR.inputs[81] = 172; AVAR.inputs[82] = 139; AVAR.inputs[83] = 138; AVAR.inputs[84] = 165; AVAR.inputs[85] = 164; AVAR.inputs[86] = 172; AVAR.inputs[87] = 172; AVAR.inputs[88] = 165; AVAR.inputs[89] = 164; AVAR.inputs[90] = 59; AVAR.inputs[91] = 165; AVAR.inputs[92] = 165; AVAR.inputs[93] = 58; AVAR.inputs[94] = 138; AVAR.inputs[95] = 164; AVAR.inputs[96] = 164; AVAR.inputs[97] = 164; AVAR.inputs[98] = 164; AVAR.inputs[99] = 165; AVAR.inputs[100] = 164; AVAR.inputs[101] = 172; AVAR.inputs[102] = 54; AVAR.inputs[103] = 139; AVAR.inputs[104] = 165; AVAR.inputs[105] = 164; AVAR.inputs[106] = 172; AVAR.inputs[107] = 164; AVAR.inputs[108] = 138; AVAR.inputs[109] = 165; AVAR.inputs[110] = 59; AVAR.inputs[111] = 68; AVAR.inputs[112] = 164; AVAR.inputs[113] = 164; AVAR.inputs[114] = 54; AVAR.inputs[115] = 58; AVAR.inputs[116] = 58; AVAR.inputs[117] = 139; AVAR.inputs[118] = 139; AVAR.inputs[119] = 139; AVAR.inputs[120] = 139; AVAR.inputs[121] = 294; AVAR.inputs[122] = 174; AVAR.inputs[123] = 59; AVAR.inputs[124] = 172; AVAR.inputs[125] = 173; AVAR.inputs[126] = 112; AVAR.inputs[127] = 59; AVAR.inputs[128] = 59; AVAR.inputs[129] = 59; AVAR.inputs[130] = 292; AVAR.inputs[131] = 174; AVAR.inputs[132] = 263; AVAR.inputs[133] = 174; AVAR.inputs[134] = 174; AVAR.inputs[135] = 263; AVAR.inputs[136] = 174; AVAR.inputs[137] = 174; AVAR.inputs[138] = 262; AVAR.inputs[139] = 174; AVAR.inputs[140] = 59; AVAR.inputs[141] = 174; AVAR.inputs[142] = 174; AVAR.inputs[143] = 262; AVAR.inputs[144] = 174; AVAR.inputs[145] = 262; AVAR.inputs[146] = 174; AVAR.inputs[147] = 174; AVAR.inputs[148] = 174; AVAR.inputs[149] = 174; AVAR.inputs[150] = 174; AVAR.inputs[151] = 174; AVAR.inputs[152] = 174; AVAR.inputs[153] = 174; AVAR.inputs[154] = 172; AVAR.inputs[155] = 172; AVAR.inputs[156] = 172; AVAR.inputs[157] = 174; AVAR.inputs[158] = 172; AVAR.inputs[159] = 174; AVAR.inputs[160] = 174; AVAR.inputs[161] = 274; AVAR.inputs[162] = 274; AVAR.inputs[163] = 263; AVAR.inputs[164] = 59; AVAR.inputs[165] = 58; AVAR.inputs[166] = 59; AVAR.inputs[167] = 173; AVAR.inputs[168] = 173; AVAR.inputs[169] = 173; AVAR.inputs[170] = 174; AVAR.inputs[171] = 173; AVAR.inputs[172] = 173; AVAR.inputs[173] = 173; AVAR.inputs[174] = 173; AVAR.inputs[175] = 174; AVAR.inputs[176] = 173; AVAR.inputs[177] = 173; AVAR.inputs[178] = 174; AVAR.inputs[179] = 174; AVAR.inputs[180] = 274; AVAR.inputs[181] = 173; AVAR.inputs[182] = 174; AVAR.inputs[183] = 173; AVAR.inputs[184] = 174; AVAR.inputs[185] = 173; AVAR.inputs[186] = 174; AVAR.inputs[187] = 174; AVAR.inputs[188] = 174; AVAR.inputs[189] = 173; AVAR.inputs[190] = 174; AVAR.inputs[191] = 174; AVAR.inputs[192] = 174; AVAR.inputs[193] = 173; AVAR.inputs[194] = 173; AVAR.inputs[195] = 173; AVAR.inputs[196] = 262; AVAR.inputs[197] = 174; AVAR.inputs[198] = 58; AVAR.inputs[199] = 262; AVAR.inputs[200] = 264; AVAR.inputs[201] = 174; AVAR.inputs[202] = 174; AVAR.inputs[203] = 58; AVAR.inputs[204] = 174; AVAR.inputs[205] = 59; AVAR.inputs[206] = 174; AVAR.inputs[207] = 175; AVAR.inputs[208] = 59; AVAR.inputs[209] = 174; AVAR.inputs[210] = 175; AVAR.inputs[211] = 59; AVAR.inputs[212] = 59; AVAR.inputs[213] = 174; AVAR.inputs[214] = 172; AVAR.inputs[215] = 59; AVAR.inputs[216] = 174; AVAR.inputs[217] = 174; AVAR.inputs[218] = 58; AVAR.inputs[219] = 59; AVAR.inputs[220] = 172; AVAR.inputs[221] = 174; AVAR.inputs[222] = 59; AVAR.inputs[223] = 172; AVAR.inputs[224] = 174; AVAR.inputs[225] = 58; AVAR.inputs[226] = 59; AVAR.inputs[227] = 58; AVAR.inputs[228] = 59; AVAR.inputs[229] = 59; AVAR.inputs[230] = 58; AVAR.inputs[231] = 59; AVAR.inputs[232] = 58; AVAR.inputs[233] = 174; AVAR.inputs[234] = 174; AVAR.inputs[235] = 174; AVAR.inputs[236] = 174; AVAR.inputs[237] = 58; AVAR.inputs[238] = 58; AVAR.inputs[239] = 174; AVAR.inputs[240] = 175; AVAR.inputs[241] = 168; AVAR.inputs[242] = 168; AVAR.inputs[243] = 59; AVAR.inputs[244] = 172; AVAR.inputs[245] = 172; AVAR.inputs[246] = 58; AVAR.inputs[247] = 59; AVAR.inputs[248] = 59; AVAR.inputs[249] = 58; AVAR.inputs[250] = 58; AVAR.inputs[251] = 59; AVAR.inputs[252] = 58; AVAR.inputs[253] = 58; AVAR.inputs[254] = 58; AVAR.inputs[255] = 58; AVAR.inputs[256] = 58; AVAR.inputs[257] = 172; AVAR.inputs[258] = 58; AVAR.inputs[259] = 172; AVAR.inputs[260] = 58; AVAR.inputs[261] = 59; AVAR.inputs[262] = 58; AVAR.inputs[263] = 59; AVAR.inputs[264] = 59; AVAR.inputs[265] = 58; AVAR.inputs[266] = 174; AVAR.inputs[267] = 59; AVAR.inputs[268] = 58; AVAR.inputs[269] = 174; AVAR.inputs[270] = 59; AVAR.inputs[271] = 58; AVAR.inputs[272] = 174; AVAR.inputs[273] = 58; AVAR.inputs[274] = 58; AVAR.inputs[275] = 174; AVAR.inputs[276] = 174; AVAR.inputs[277] = 58; AVAR.inputs[278] = 174; AVAR.inputs[279] = 69; AVAR.inputs[280] = 264; AVAR.inputs[281] = 58; AVAR.inputs[282] = 59; AVAR.inputs[283] = 172; AVAR.inputs[284] = 172; AVAR.inputs[285] = 59; AVAR.inputs[286] = 172; AVAR.inputs[287] = 173; AVAR.inputs[288] = 173; AVAR.inputs[289] = 139; AVAR.inputs[290] = 264; AVAR.inputs[291] = 264; AVAR.inputs[292] = 263; AVAR.inputs[293] = 139; AVAR.inputs[294] = 263; AVAR.inputs[295] = 139; AVAR.inputs[296] = 174; AVAR.inputs[297] = 263; AVAR.inputs[298] = 263; AVAR.inputs[299] = 264; AVAR.inputs[300] = 263; AVAR.inputs[301] = 174; AVAR.inputs[302] = 263; AVAR.inputs[303] = 263; AVAR.inputs[304] = 174; AVAR.inputs[305] = 59; AVAR.inputs[306] = 174; AVAR.inputs[307] = 185; AVAR.inputs[308] = 164;
    AVAR.weightsLen = 309;
    AVAR.weights[0] = 1; AVAR.weights[1] = 1; AVAR.weights[2] = 1; AVAR.weights[3] = 1; AVAR.weights[4] = 1; AVAR.weights[5] = 1; AVAR.weights[6] = 1; AVAR.weights[7] = 1; AVAR.weights[8] = 1; AVAR.weights[9] = 1; AVAR.weights[10] = 1; AVAR.weights[11] = 1; AVAR.weights[12] = 1; AVAR.weights[13] = 1; AVAR.weights[14] = 1; AVAR.weights[15] = 1; AVAR.weights[16] = 1; AVAR.weights[17] = 1; AVAR.weights[18] = 1; AVAR.weights[19] = 1; AVAR.weights[20] = 1; AVAR.weights[21] = 1; AVAR.weights[22] = 1; AVAR.weights[23] = 1; AVAR.weights[24] = 1; AVAR.weights[25] = 1; AVAR.weights[26] = 1; AVAR.weights[27] = 1; AVAR.weights[28] = 1; AVAR.weights[29] = 1; AVAR.weights[30] = 1; AVAR.weights[31] = 1; AVAR.weights[32] = 1; AVAR.weights[33] = 1; AVAR.weights[34] = 1; AVAR.weights[35] = 1; AVAR.weights[36] = 1; AVAR.weights[37] = 1; AVAR.weights[38] = 1; AVAR.weights[39] = 1; AVAR.weights[40] = 1; AVAR.weights[41] = 1; AVAR.weights[42] = 1; AVAR.weights[43] = 1; AVAR.weights[44] = 1; AVAR.weights[45] = 1; AVAR.weights[46] = 1; AVAR.weights[47] = 1; AVAR.weights[48] = 1; AVAR.weights[49] = 1; AVAR.weights[50] = 1; AVAR.weights[51] = 1; AVAR.weights[52] = 1; AVAR.weights[53] = 1; AVAR.weights[54] = 1; AVAR.weights[55] = 1; AVAR.weights[56] = 1; AVAR.weights[57] = 1; AVAR.weights[58] = 1; AVAR.weights[59] = 1; AVAR.weights[60] = 1; AVAR.weights[61] = 1; AVAR.weights[62] = 1; AVAR.weights[63] = 1; AVAR.weights[64] = 1; AVAR.weights[65] = 1; AVAR.weights[66] = 1; AVAR.weights[67] = 1; AVAR.weights[68] = 1; AVAR.weights[69] = 1; AVAR.weights[70] = 1; AVAR.weights[71] = 1; AVAR.weights[72] = 1; AVAR.weights[73] = 1; AVAR.weights[74] = 1; AVAR.weights[75] = 1; AVAR.weights[76] = 1; AVAR.weights[77] = 1; AVAR.weights[78] = 1; AVAR.weights[79] = 1; AVAR.weights[80] = 1; AVAR.weights[81] = 1; AVAR.weights[82] = 1; AVAR.weights[83] = 1; AVAR.weights[84] = 1; AVAR.weights[85] = 1; AVAR.weights[86] = 1; AVAR.weights[87] = 1; AVAR.weights[88] = 1; AVAR.weights[89] = 1; AVAR.weights[90] = 1; AVAR.weights[91] = 1; AVAR.weights[92] = 1; AVAR.weights[93] = 1; AVAR.weights[94] = 1; AVAR.weights[95] = 1; AVAR.weights[96] = 1; AVAR.weights[97] = 1; AVAR.weights[98] = 1; AVAR.weights[99] = 1; AVAR.weights[100] = 1; AVAR.weights[101] = 1; AVAR.weights[102] = 1; AVAR.weights[103] = 1; AVAR.weights[104] = 1; AVAR.weights[105] = 1; AVAR.weights[106] = 1; AVAR.weights[107] = 1; AVAR.weights[108] = 1; AVAR.weights[109] = 1; AVAR.weights[110] = 1; AVAR.weights[111] = 1; AVAR.weights[112] = 1; AVAR.weights[113] = 1; AVAR.weights[114] = 1; AVAR.weights[115] = 1; AVAR.weights[116] = 1; AVAR.weights[117] = 1; AVAR.weights[118] = 1; AVAR.weights[119] = 1; AVAR.weights[120] = 1; AVAR.weights[121] = 1; AVAR.weights[122] = 1; AVAR.weights[123] = 1; AVAR.weights[124] = 1; AVAR.weights[125] = 1; AVAR.weights[126] = 1; AVAR.weights[127] = 1; AVAR.weights[128] = 1; AVAR.weights[129] = 1; AVAR.weights[130] = 1; AVAR.weights[131] = 1; AVAR.weights[132] = 1; AVAR.weights[133] = 1; AVAR.weights[134] = 1; AVAR.weights[135] = 1; AVAR.weights[136] = 1; AVAR.weights[137] = 1; AVAR.weights[138] = 1; AVAR.weights[139] = 1; AVAR.weights[140] = 1; AVAR.weights[141] = 1; AVAR.weights[142] = 1; AVAR.weights[143] = 1; AVAR.weights[144] = 1; AVAR.weights[145] = 1; AVAR.weights[146] = 1; AVAR.weights[147] = 1; AVAR.weights[148] = 1; AVAR.weights[149] = 1; AVAR.weights[150] = 1; AVAR.weights[151] = 1; AVAR.weights[152] = 1; AVAR.weights[153] = 1; AVAR.weights[154] = 1; AVAR.weights[155] = 1; AVAR.weights[156] = 1; AVAR.weights[157] = 1; AVAR.weights[158] = 1; AVAR.weights[159] = 1; AVAR.weights[160] = 1; AVAR.weights[161] = 1; AVAR.weights[162] = 1; AVAR.weights[163] = 1; AVAR.weights[164] = 1; AVAR.weights[165] = 1; AVAR.weights[166] = 1; AVAR.weights[167] = 1; AVAR.weights[168] = 1; AVAR.weights[169] = 1; AVAR.weights[170] = 1; AVAR.weights[171] = 1; AVAR.weights[172] = 1; AVAR.weights[173] = 1; AVAR.weights[174] = 1; AVAR.weights[175] = 1; AVAR.weights[176] = 1; AVAR.weights[177] = 1; AVAR.weights[178] = 1; AVAR.weights[179] = 1; AVAR.weights[180] = 1; AVAR.weights[181] = 1; AVAR.weights[182] = 1; AVAR.weights[183] = 1; AVAR.weights[184] = 1; AVAR.weights[185] = 1; AVAR.weights[186] = 1; AVAR.weights[187] = 1; AVAR.weights[188] = 1; AVAR.weights[189] = 1; AVAR.weights[190] = 1; AVAR.weights[191] = 1; AVAR.weights[192] = 1; AVAR.weights[193] = 1; AVAR.weights[194] = 1; AVAR.weights[195] = 1; AVAR.weights[196] = 1; AVAR.weights[197] = 1; AVAR.weights[198] = 1; AVAR.weights[199] = 1; AVAR.weights[200] = 1; AVAR.weights[201] = 1; AVAR.weights[202] = 1; AVAR.weights[203] = 1; AVAR.weights[204] = 1; AVAR.weights[205] = 1; AVAR.weights[206] = 1; AVAR.weights[207] = 1; AVAR.weights[208] = 1; AVAR.weights[209] = 1; AVAR.weights[210] = 1; AVAR.weights[211] = 1; AVAR.weights[212] = 1; AVAR.weights[213] = 1; AVAR.weights[214] = 1; AVAR.weights[215] = 1; AVAR.weights[216] = 1; AVAR.weights[217] = 1; AVAR.weights[218] = 1; AVAR.weights[219] = 1; AVAR.weights[220] = 1; AVAR.weights[221] = 1; AVAR.weights[222] = 1; AVAR.weights[223] = 1; AVAR.weights[224] = 1; AVAR.weights[225] = 1; AVAR.weights[226] = 1; AVAR.weights[227] = 1; AVAR.weights[228] = 1; AVAR.weights[229] = 1; AVAR.weights[230] = 1; AVAR.weights[231] = 1; AVAR.weights[232] = 1; AVAR.weights[233] = 1; AVAR.weights[234] = 1; AVAR.weights[235] = 1; AVAR.weights[236] = 1; AVAR.weights[237] = 1; AVAR.weights[238] = 1; AVAR.weights[239] = 1; AVAR.weights[240] = 1; AVAR.weights[241] = 1; AVAR.weights[242] = 1; AVAR.weights[243] = 1; AVAR.weights[244] = 1; AVAR.weights[245] = 1; AVAR.weights[246] = 1; AVAR.weights[247] = 1; AVAR.weights[248] = 1; AVAR.weights[249] = 1; AVAR.weights[250] = 1; AVAR.weights[251] = 1; AVAR.weights[252] = 1; AVAR.weights[253] = 1; AVAR.weights[254] = 1; AVAR.weights[255] = 1; AVAR.weights[256] = 1; AVAR.weights[257] = 1; AVAR.weights[258] = 1; AVAR.weights[259] = 1; AVAR.weights[260] = 1; AVAR.weights[261] = 1; AVAR.weights[262] = 1; AVAR.weights[263] = 1; AVAR.weights[264] = 1; AVAR.weights[265] = 1; AVAR.weights[266] = 1; AVAR.weights[267] = 1; AVAR.weights[268] = 1; AVAR.weights[269] = 1; AVAR.weights[270] = 1; AVAR.weights[271] = 1; AVAR.weights[272] = 1; AVAR.weights[273] = 1; AVAR.weights[274] = 1; AVAR.weights[275] = 1; AVAR.weights[276] = 1; AVAR.weights[277] = 1; AVAR.weights[278] = 1; AVAR.weights[279] = 1; AVAR.weights[280] = 1; AVAR.weights[281] = 1; AVAR.weights[282] = 1; AVAR.weights[283] = 1; AVAR.weights[284] = 1; AVAR.weights[285] = 1; AVAR.weights[286] = 1; AVAR.weights[287] = 1; AVAR.weights[288] = 1; AVAR.weights[289] = 1; AVAR.weights[290] = 1; AVAR.weights[291] = 1; AVAR.weights[292] = 1; AVAR.weights[293] = 1; AVAR.weights[294] = 1; AVAR.weights[295] = 1; AVAR.weights[296] = 1; AVAR.weights[297] = 1; AVAR.weights[298] = 1; AVAR.weights[299] = 1; AVAR.weights[300] = 1; AVAR.weights[301] = 1; AVAR.weights[302] = 1; AVAR.weights[303] = 1; AVAR.weights[304] = 1; AVAR.weights[305] = 1; AVAR.weights[306] = 1; AVAR.weights[307] = 1; AVAR.weights[308] = 1;
    if (id == 55) {
        return AVAR;
    }


    neuron AVBL;
    AVBL.cellID = 56;
    AVBL.threshold = 1;
    AVBL.inputsLen = 169;
    AVBL.inputs[0] = 72; AVBL.inputs[1] = 68; AVBL.inputs[2] = 28; AVBL.inputs[3] = 195; AVBL.inputs[4] = 62; AVBL.inputs[5] = 44; AVBL.inputs[6] = 44; AVBL.inputs[7] = 232; AVBL.inputs[8] = 232; AVBL.inputs[9] = 232; AVBL.inputs[10] = 174; AVBL.inputs[11] = 260; AVBL.inputs[12] = 184; AVBL.inputs[13] = 174; AVBL.inputs[14] = 221; AVBL.inputs[15] = 221; AVBL.inputs[16] = 180; AVBL.inputs[17] = 180; AVBL.inputs[18] = 180; AVBL.inputs[19] = 180; AVBL.inputs[20] = 13; AVBL.inputs[21] = 13; AVBL.inputs[22] = 201; AVBL.inputs[23] = 195; AVBL.inputs[24] = 195; AVBL.inputs[25] = 232; AVBL.inputs[26] = 44; AVBL.inputs[27] = 184; AVBL.inputs[28] = 195; AVBL.inputs[29] = 44; AVBL.inputs[30] = 232; AVBL.inputs[31] = 7; AVBL.inputs[32] = 7; AVBL.inputs[33] = 8; AVBL.inputs[34] = 258; AVBL.inputs[35] = 256; AVBL.inputs[36] = 256; AVBL.inputs[37] = 255; AVBL.inputs[38] = 13; AVBL.inputs[39] = 13; AVBL.inputs[40] = 13; AVBL.inputs[41] = 13; AVBL.inputs[42] = 231; AVBL.inputs[43] = 232; AVBL.inputs[44] = 173; AVBL.inputs[45] = 260; AVBL.inputs[46] = 184; AVBL.inputs[47] = 44; AVBL.inputs[48] = 7; AVBL.inputs[49] = 7; AVBL.inputs[50] = 68; AVBL.inputs[51] = 227; AVBL.inputs[52] = 184; AVBL.inputs[53] = 28; AVBL.inputs[54] = 28; AVBL.inputs[55] = 75; AVBL.inputs[56] = 62; AVBL.inputs[57] = 63; AVBL.inputs[58] = 44; AVBL.inputs[59] = 44; AVBL.inputs[60] = 44; AVBL.inputs[61] = 44; AVBL.inputs[62] = 2; AVBL.inputs[63] = 180; AVBL.inputs[64] = 1; AVBL.inputs[65] = 174; AVBL.inputs[66] = 68; AVBL.inputs[67] = 174; AVBL.inputs[68] = 1; AVBL.inputs[69] = 68; AVBL.inputs[70] = 253; AVBL.inputs[71] = 191; AVBL.inputs[72] = 195; AVBL.inputs[73] = 195; AVBL.inputs[74] = 232; AVBL.inputs[75] = 7; AVBL.inputs[76] = 8; AVBL.inputs[77] = 195; AVBL.inputs[78] = 66; AVBL.inputs[79] = 184; AVBL.inputs[80] = 196; AVBL.inputs[81] = 181; AVBL.inputs[82] = 184; AVBL.inputs[83] = 195; AVBL.inputs[84] = 1; AVBL.inputs[85] = 180; AVBL.inputs[86] = 66; AVBL.inputs[87] = 63; AVBL.inputs[88] = 67; AVBL.inputs[89] = 181; AVBL.inputs[90] = 184; AVBL.inputs[91] = 184; AVBL.inputs[92] = 195; AVBL.inputs[93] = 195; AVBL.inputs[94] = 72; AVBL.inputs[95] = 72; AVBL.inputs[96] = 232; AVBL.inputs[97] = 232; AVBL.inputs[98] = 195; AVBL.inputs[99] = 72; AVBL.inputs[100] = 200; AVBL.inputs[101] = 13; AVBL.inputs[102] = 201; AVBL.inputs[103] = 68; AVBL.inputs[104] = 2; AVBL.inputs[105] = 181; AVBL.inputs[106] = 181; AVBL.inputs[107] = 113; AVBL.inputs[108] = 69; AVBL.inputs[109] = 69; AVBL.inputs[110] = 174; AVBL.inputs[111] = 72; AVBL.inputs[112] = 115; AVBL.inputs[113] = 195; AVBL.inputs[114] = 195; AVBL.inputs[115] = 115; AVBL.inputs[116] = 111; AVBL.inputs[117] = 67; AVBL.inputs[118] = 114; AVBL.inputs[119] = 174; AVBL.inputs[120] = 114; AVBL.inputs[121] = 114; AVBL.inputs[122] = 173; AVBL.inputs[123] = 173; AVBL.inputs[124] = 59; AVBL.inputs[125] = 67; AVBL.inputs[126] = 65; AVBL.inputs[127] = 172; AVBL.inputs[128] = 274; AVBL.inputs[129] = 174; AVBL.inputs[130] = 292; AVBL.inputs[131] = 54; AVBL.inputs[132] = 64; AVBL.inputs[133] = 64; AVBL.inputs[134] = 183; AVBL.inputs[135] = 292; AVBL.inputs[136] = 115; AVBL.inputs[137] = 67; AVBL.inputs[138] = 173; AVBL.inputs[139] = 115; AVBL.inputs[140] = 115; AVBL.inputs[141] = 201; AVBL.inputs[142] = 200; AVBL.inputs[143] = 195; AVBL.inputs[144] = 65; AVBL.inputs[145] = 195; AVBL.inputs[146] = 195; AVBL.inputs[147] = 57; AVBL.inputs[148] = 64; AVBL.inputs[149] = 239; AVBL.inputs[150] = 191; AVBL.inputs[151] = 111; AVBL.inputs[152] = 232; AVBL.inputs[153] = 57; AVBL.inputs[154] = 57; AVBL.inputs[155] = 194; AVBL.inputs[156] = 57; AVBL.inputs[157] = 59; AVBL.inputs[158] = 55; AVBL.inputs[159] = 174; AVBL.inputs[160] = 57; AVBL.inputs[161] = 57; AVBL.inputs[162] = 190; AVBL.inputs[163] = 57; AVBL.inputs[164] = 274; AVBL.inputs[165] = 274; AVBL.inputs[166] = 57; AVBL.inputs[167] = 64; AVBL.inputs[168] = 57;
    AVBL.weightsLen = 169;
    AVBL.weights[0] = 1; AVBL.weights[1] = 1; AVBL.weights[2] = 1; AVBL.weights[3] = 1; AVBL.weights[4] = 1; AVBL.weights[5] = 1; AVBL.weights[6] = 1; AVBL.weights[7] = 1; AVBL.weights[8] = 1; AVBL.weights[9] = 1; AVBL.weights[10] = 1; AVBL.weights[11] = 1; AVBL.weights[12] = 1; AVBL.weights[13] = 1; AVBL.weights[14] = 1; AVBL.weights[15] = 1; AVBL.weights[16] = 1; AVBL.weights[17] = 1; AVBL.weights[18] = 1; AVBL.weights[19] = 1; AVBL.weights[20] = 1; AVBL.weights[21] = 1; AVBL.weights[22] = 1; AVBL.weights[23] = 1; AVBL.weights[24] = 1; AVBL.weights[25] = 1; AVBL.weights[26] = 1; AVBL.weights[27] = 1; AVBL.weights[28] = 1; AVBL.weights[29] = 1; AVBL.weights[30] = 1; AVBL.weights[31] = 1; AVBL.weights[32] = 1; AVBL.weights[33] = 1; AVBL.weights[34] = 1; AVBL.weights[35] = 1; AVBL.weights[36] = 1; AVBL.weights[37] = 1; AVBL.weights[38] = 1; AVBL.weights[39] = 1; AVBL.weights[40] = 1; AVBL.weights[41] = 1; AVBL.weights[42] = 1; AVBL.weights[43] = 1; AVBL.weights[44] = 1; AVBL.weights[45] = 1; AVBL.weights[46] = 1; AVBL.weights[47] = 1; AVBL.weights[48] = 1; AVBL.weights[49] = 1; AVBL.weights[50] = 1; AVBL.weights[51] = 1; AVBL.weights[52] = 1; AVBL.weights[53] = 1; AVBL.weights[54] = 1; AVBL.weights[55] = 1; AVBL.weights[56] = 1; AVBL.weights[57] = 1; AVBL.weights[58] = 1; AVBL.weights[59] = 1; AVBL.weights[60] = 1; AVBL.weights[61] = 1; AVBL.weights[62] = 1; AVBL.weights[63] = 1; AVBL.weights[64] = 1; AVBL.weights[65] = 1; AVBL.weights[66] = 1; AVBL.weights[67] = 1; AVBL.weights[68] = 1; AVBL.weights[69] = 1; AVBL.weights[70] = 1; AVBL.weights[71] = 1; AVBL.weights[72] = 1; AVBL.weights[73] = 1; AVBL.weights[74] = 1; AVBL.weights[75] = 1; AVBL.weights[76] = 1; AVBL.weights[77] = 1; AVBL.weights[78] = 1; AVBL.weights[79] = 1; AVBL.weights[80] = 1; AVBL.weights[81] = 1; AVBL.weights[82] = 1; AVBL.weights[83] = 1; AVBL.weights[84] = 1; AVBL.weights[85] = 1; AVBL.weights[86] = 1; AVBL.weights[87] = 1; AVBL.weights[88] = 1; AVBL.weights[89] = 1; AVBL.weights[90] = 1; AVBL.weights[91] = 1; AVBL.weights[92] = 1; AVBL.weights[93] = 1; AVBL.weights[94] = 1; AVBL.weights[95] = 1; AVBL.weights[96] = 1; AVBL.weights[97] = 1; AVBL.weights[98] = 1; AVBL.weights[99] = 1; AVBL.weights[100] = 1; AVBL.weights[101] = 1; AVBL.weights[102] = 1; AVBL.weights[103] = 1; AVBL.weights[104] = 1; AVBL.weights[105] = 1; AVBL.weights[106] = 1; AVBL.weights[107] = 1; AVBL.weights[108] = 1; AVBL.weights[109] = 1; AVBL.weights[110] = 1; AVBL.weights[111] = 1; AVBL.weights[112] = 1; AVBL.weights[113] = 1; AVBL.weights[114] = 1; AVBL.weights[115] = 1; AVBL.weights[116] = 1; AVBL.weights[117] = 1; AVBL.weights[118] = 1; AVBL.weights[119] = 1; AVBL.weights[120] = 1; AVBL.weights[121] = 1; AVBL.weights[122] = 1; AVBL.weights[123] = 1; AVBL.weights[124] = 1; AVBL.weights[125] = 1; AVBL.weights[126] = 1; AVBL.weights[127] = 1; AVBL.weights[128] = 1; AVBL.weights[129] = 1; AVBL.weights[130] = 1; AVBL.weights[131] = 1; AVBL.weights[132] = 1; AVBL.weights[133] = 1; AVBL.weights[134] = 1; AVBL.weights[135] = 1; AVBL.weights[136] = 1; AVBL.weights[137] = 1; AVBL.weights[138] = 1; AVBL.weights[139] = 1; AVBL.weights[140] = 1; AVBL.weights[141] = 1; AVBL.weights[142] = 1; AVBL.weights[143] = 1; AVBL.weights[144] = 1; AVBL.weights[145] = 1; AVBL.weights[146] = 1; AVBL.weights[147] = 1; AVBL.weights[148] = 1; AVBL.weights[149] = 1; AVBL.weights[150] = 1; AVBL.weights[151] = 1; AVBL.weights[152] = 1; AVBL.weights[153] = 1; AVBL.weights[154] = 1; AVBL.weights[155] = 1; AVBL.weights[156] = 1; AVBL.weights[157] = 1; AVBL.weights[158] = 1; AVBL.weights[159] = 1; AVBL.weights[160] = 1; AVBL.weights[161] = 1; AVBL.weights[162] = 1; AVBL.weights[163] = 1; AVBL.weights[164] = 1; AVBL.weights[165] = 1; AVBL.weights[166] = 1; AVBL.weights[167] = 1; AVBL.weights[168] = 1;
    if (id == 56) {
        return AVBL;
    }


    neuron AVBR;
    AVBR.cellID = 57;
    AVBR.threshold = 1;
    AVBR.inputsLen = 194;
    AVBR.inputs[0] = 181; AVBR.inputs[1] = 181; AVBR.inputs[2] = 232; AVBR.inputs[3] = 232; AVBR.inputs[4] = 232; AVBR.inputs[5] = 196; AVBR.inputs[6] = 183; AVBR.inputs[7] = 196; AVBR.inputs[8] = 1; AVBR.inputs[9] = 28; AVBR.inputs[10] = 231; AVBR.inputs[11] = 232; AVBR.inputs[12] = 174; AVBR.inputs[13] = 174; AVBR.inputs[14] = 256; AVBR.inputs[15] = 8; AVBR.inputs[16] = 184; AVBR.inputs[17] = 184; AVBR.inputs[18] = 180; AVBR.inputs[19] = 180; AVBR.inputs[20] = 181; AVBR.inputs[21] = 174; AVBR.inputs[22] = 181; AVBR.inputs[23] = 67; AVBR.inputs[24] = 259; AVBR.inputs[25] = 173; AVBR.inputs[26] = 196; AVBR.inputs[27] = 254; AVBR.inputs[28] = 2; AVBR.inputs[29] = 132; AVBR.inputs[30] = 184; AVBR.inputs[31] = 243; AVBR.inputs[32] = 196; AVBR.inputs[33] = 196; AVBR.inputs[34] = 181; AVBR.inputs[35] = 221; AVBR.inputs[36] = 221; AVBR.inputs[37] = 28; AVBR.inputs[38] = 231; AVBR.inputs[39] = 173; AVBR.inputs[40] = 196; AVBR.inputs[41] = 196; AVBR.inputs[42] = 173; AVBR.inputs[43] = 1; AVBR.inputs[44] = 28; AVBR.inputs[45] = 200; AVBR.inputs[46] = 14; AVBR.inputs[47] = 190; AVBR.inputs[48] = 14; AVBR.inputs[49] = 14; AVBR.inputs[50] = 14; AVBR.inputs[51] = 200; AVBR.inputs[52] = 200; AVBR.inputs[53] = 224; AVBR.inputs[54] = 28; AVBR.inputs[55] = 184; AVBR.inputs[56] = 184; AVBR.inputs[57] = 180; AVBR.inputs[58] = 63; AVBR.inputs[59] = 63; AVBR.inputs[60] = 45; AVBR.inputs[61] = 45; AVBR.inputs[62] = 45; AVBR.inputs[63] = 76; AVBR.inputs[64] = 196; AVBR.inputs[65] = 184; AVBR.inputs[66] = 63; AVBR.inputs[67] = 195; AVBR.inputs[68] = 2; AVBR.inputs[69] = 173; AVBR.inputs[70] = 173; AVBR.inputs[71] = 8; AVBR.inputs[72] = 196; AVBR.inputs[73] = 181; AVBR.inputs[74] = 181; AVBR.inputs[75] = 196; AVBR.inputs[76] = 67; AVBR.inputs[77] = 174; AVBR.inputs[78] = 196; AVBR.inputs[79] = 173; AVBR.inputs[80] = 111; AVBR.inputs[81] = 174; AVBR.inputs[82] = 180; AVBR.inputs[83] = 1; AVBR.inputs[84] = 1; AVBR.inputs[85] = 173; AVBR.inputs[86] = 173; AVBR.inputs[87] = 173; AVBR.inputs[88] = 67; AVBR.inputs[89] = 184; AVBR.inputs[90] = 8; AVBR.inputs[91] = 196; AVBR.inputs[92] = 8; AVBR.inputs[93] = 2; AVBR.inputs[94] = 45; AVBR.inputs[95] = 196; AVBR.inputs[96] = 68; AVBR.inputs[97] = 184; AVBR.inputs[98] = 184; AVBR.inputs[99] = 2; AVBR.inputs[100] = 2; AVBR.inputs[101] = 56; AVBR.inputs[102] = 196; AVBR.inputs[103] = 203; AVBR.inputs[104] = 8; AVBR.inputs[105] = 196; AVBR.inputs[106] = 45; AVBR.inputs[107] = 196; AVBR.inputs[108] = 180; AVBR.inputs[109] = 196; AVBR.inputs[110] = 45; AVBR.inputs[111] = 173; AVBR.inputs[112] = 184; AVBR.inputs[113] = 184; AVBR.inputs[114] = 72; AVBR.inputs[115] = 72; AVBR.inputs[116] = 28; AVBR.inputs[117] = 196; AVBR.inputs[118] = 65; AVBR.inputs[119] = 232; AVBR.inputs[120] = 114; AVBR.inputs[121] = 180; AVBR.inputs[122] = 1; AVBR.inputs[123] = 1; AVBR.inputs[124] = 2; AVBR.inputs[125] = 201; AVBR.inputs[126] = 2; AVBR.inputs[127] = 196; AVBR.inputs[128] = 196; AVBR.inputs[129] = 201; AVBR.inputs[130] = 200; AVBR.inputs[131] = 14; AVBR.inputs[132] = 114; AVBR.inputs[133] = 115; AVBR.inputs[134] = 201; AVBR.inputs[135] = 201; AVBR.inputs[136] = 173; AVBR.inputs[137] = 173; AVBR.inputs[138] = 173; AVBR.inputs[139] = 173; AVBR.inputs[140] = 72; AVBR.inputs[141] = 180; AVBR.inputs[142] = 180; AVBR.inputs[143] = 66; AVBR.inputs[144] = 114; AVBR.inputs[145] = 114; AVBR.inputs[146] = 114; AVBR.inputs[147] = 179; AVBR.inputs[148] = 179; AVBR.inputs[149] = 179; AVBR.inputs[150] = 63; AVBR.inputs[151] = 67; AVBR.inputs[152] = 64; AVBR.inputs[153] = 56; AVBR.inputs[154] = 292; AVBR.inputs[155] = 72; AVBR.inputs[156] = 115; AVBR.inputs[157] = 115; AVBR.inputs[158] = 115; AVBR.inputs[159] = 115; AVBR.inputs[160] = 201; AVBR.inputs[161] = 114; AVBR.inputs[162] = 178; AVBR.inputs[163] = 2; AVBR.inputs[164] = 67; AVBR.inputs[165] = 72; AVBR.inputs[166] = 76; AVBR.inputs[167] = 82; AVBR.inputs[168] = 174; AVBR.inputs[169] = 180; AVBR.inputs[170] = 1; AVBR.inputs[171] = 114; AVBR.inputs[172] = 56; AVBR.inputs[173] = 237; AVBR.inputs[174] = 194; AVBR.inputs[175] = 111; AVBR.inputs[176] = 191; AVBR.inputs[177] = 59; AVBR.inputs[178] = 55; AVBR.inputs[179] = 181; AVBR.inputs[180] = 174; AVBR.inputs[181] = 185; AVBR.inputs[182] = 194; AVBR.inputs[183] = 190; AVBR.inputs[184] = 194; AVBR.inputs[185] = 291; AVBR.inputs[186] = 64; AVBR.inputs[187] = 274; AVBR.inputs[188] = 274; AVBR.inputs[189] = 172; AVBR.inputs[190] = 178; AVBR.inputs[191] = 179; AVBR.inputs[192] = 178; AVBR.inputs[193] = 179;
    AVBR.weightsLen = 194;
    AVBR.weights[0] = 1; AVBR.weights[1] = 1; AVBR.weights[2] = 1; AVBR.weights[3] = 1; AVBR.weights[4] = 1; AVBR.weights[5] = 1; AVBR.weights[6] = 1; AVBR.weights[7] = 1; AVBR.weights[8] = 1; AVBR.weights[9] = 1; AVBR.weights[10] = 1; AVBR.weights[11] = 1; AVBR.weights[12] = 1; AVBR.weights[13] = 1; AVBR.weights[14] = 1; AVBR.weights[15] = 1; AVBR.weights[16] = 1; AVBR.weights[17] = 1; AVBR.weights[18] = 1; AVBR.weights[19] = 1; AVBR.weights[20] = 1; AVBR.weights[21] = 1; AVBR.weights[22] = 1; AVBR.weights[23] = 1; AVBR.weights[24] = 1; AVBR.weights[25] = 1; AVBR.weights[26] = 1; AVBR.weights[27] = 1; AVBR.weights[28] = 1; AVBR.weights[29] = 1; AVBR.weights[30] = 1; AVBR.weights[31] = 1; AVBR.weights[32] = 1; AVBR.weights[33] = 1; AVBR.weights[34] = 1; AVBR.weights[35] = 1; AVBR.weights[36] = 1; AVBR.weights[37] = 1; AVBR.weights[38] = 1; AVBR.weights[39] = 1; AVBR.weights[40] = 1; AVBR.weights[41] = 1; AVBR.weights[42] = 1; AVBR.weights[43] = 1; AVBR.weights[44] = 1; AVBR.weights[45] = 1; AVBR.weights[46] = 1; AVBR.weights[47] = 1; AVBR.weights[48] = 1; AVBR.weights[49] = 1; AVBR.weights[50] = 1; AVBR.weights[51] = 1; AVBR.weights[52] = 1; AVBR.weights[53] = 1; AVBR.weights[54] = 1; AVBR.weights[55] = 1; AVBR.weights[56] = 1; AVBR.weights[57] = 1; AVBR.weights[58] = 1; AVBR.weights[59] = 1; AVBR.weights[60] = 1; AVBR.weights[61] = 1; AVBR.weights[62] = 1; AVBR.weights[63] = 1; AVBR.weights[64] = 1; AVBR.weights[65] = 1; AVBR.weights[66] = 1; AVBR.weights[67] = 1; AVBR.weights[68] = 1; AVBR.weights[69] = 1; AVBR.weights[70] = 1; AVBR.weights[71] = 1; AVBR.weights[72] = 1; AVBR.weights[73] = 1; AVBR.weights[74] = 1; AVBR.weights[75] = 1; AVBR.weights[76] = 1; AVBR.weights[77] = 1; AVBR.weights[78] = 1; AVBR.weights[79] = 1; AVBR.weights[80] = 1; AVBR.weights[81] = 1; AVBR.weights[82] = 1; AVBR.weights[83] = 1; AVBR.weights[84] = 1; AVBR.weights[85] = 1; AVBR.weights[86] = 1; AVBR.weights[87] = 1; AVBR.weights[88] = 1; AVBR.weights[89] = 1; AVBR.weights[90] = 1; AVBR.weights[91] = 1; AVBR.weights[92] = 1; AVBR.weights[93] = 1; AVBR.weights[94] = 1; AVBR.weights[95] = 1; AVBR.weights[96] = 1; AVBR.weights[97] = 1; AVBR.weights[98] = 1; AVBR.weights[99] = 1; AVBR.weights[100] = 1; AVBR.weights[101] = 1; AVBR.weights[102] = 1; AVBR.weights[103] = 1; AVBR.weights[104] = 1; AVBR.weights[105] = 1; AVBR.weights[106] = 1; AVBR.weights[107] = 1; AVBR.weights[108] = 1; AVBR.weights[109] = 1; AVBR.weights[110] = 1; AVBR.weights[111] = 1; AVBR.weights[112] = 1; AVBR.weights[113] = 1; AVBR.weights[114] = 1; AVBR.weights[115] = 1; AVBR.weights[116] = 1; AVBR.weights[117] = 1; AVBR.weights[118] = 1; AVBR.weights[119] = 1; AVBR.weights[120] = 1; AVBR.weights[121] = 1; AVBR.weights[122] = 1; AVBR.weights[123] = 1; AVBR.weights[124] = 1; AVBR.weights[125] = 1; AVBR.weights[126] = 1; AVBR.weights[127] = 1; AVBR.weights[128] = 1; AVBR.weights[129] = 1; AVBR.weights[130] = 1; AVBR.weights[131] = 1; AVBR.weights[132] = 1; AVBR.weights[133] = 1; AVBR.weights[134] = 1; AVBR.weights[135] = 1; AVBR.weights[136] = 1; AVBR.weights[137] = 1; AVBR.weights[138] = 1; AVBR.weights[139] = 1; AVBR.weights[140] = 1; AVBR.weights[141] = 1; AVBR.weights[142] = 1; AVBR.weights[143] = 1; AVBR.weights[144] = 1; AVBR.weights[145] = 1; AVBR.weights[146] = 1; AVBR.weights[147] = 1; AVBR.weights[148] = 1; AVBR.weights[149] = 1; AVBR.weights[150] = 1; AVBR.weights[151] = 1; AVBR.weights[152] = 1; AVBR.weights[153] = 1; AVBR.weights[154] = 1; AVBR.weights[155] = 1; AVBR.weights[156] = 1; AVBR.weights[157] = 1; AVBR.weights[158] = 1; AVBR.weights[159] = 1; AVBR.weights[160] = 1; AVBR.weights[161] = 1; AVBR.weights[162] = 1; AVBR.weights[163] = 1; AVBR.weights[164] = 1; AVBR.weights[165] = 1; AVBR.weights[166] = 1; AVBR.weights[167] = 1; AVBR.weights[168] = 1; AVBR.weights[169] = 1; AVBR.weights[170] = 1; AVBR.weights[171] = 1; AVBR.weights[172] = 1; AVBR.weights[173] = 1; AVBR.weights[174] = 1; AVBR.weights[175] = 1; AVBR.weights[176] = 1; AVBR.weights[177] = 1; AVBR.weights[178] = 1; AVBR.weights[179] = 1; AVBR.weights[180] = 1; AVBR.weights[181] = 1; AVBR.weights[182] = 1; AVBR.weights[183] = 1; AVBR.weights[184] = 1; AVBR.weights[185] = 1; AVBR.weights[186] = 1; AVBR.weights[187] = 1; AVBR.weights[188] = 1; AVBR.weights[189] = 1; AVBR.weights[190] = 1; AVBR.weights[191] = 1; AVBR.weights[192] = 1; AVBR.weights[193] = 1;
    if (id == 57) {
        return AVBR;
    }


    neuron AVDL;
    AVDL.cellID = 58;
    AVDL.threshold = 1;
    AVDL.inputsLen = 136;
    AVDL.inputs[0] = 28; AVDL.inputs[1] = 232; AVDL.inputs[2] = 114; AVDL.inputs[3] = 3; AVDL.inputs[4] = 198; AVDL.inputs[5] = 174; AVDL.inputs[6] = 8; AVDL.inputs[7] = 45; AVDL.inputs[8] = 8; AVDL.inputs[9] = 8; AVDL.inputs[10] = 8; AVDL.inputs[11] = 45; AVDL.inputs[12] = 8; AVDL.inputs[13] = 45; AVDL.inputs[14] = 45; AVDL.inputs[15] = 57; AVDL.inputs[16] = 174; AVDL.inputs[17] = 7; AVDL.inputs[18] = 7; AVDL.inputs[19] = 8; AVDL.inputs[20] = 254; AVDL.inputs[21] = 65; AVDL.inputs[22] = 8; AVDL.inputs[23] = 45; AVDL.inputs[24] = 45; AVDL.inputs[25] = 45; AVDL.inputs[26] = 45; AVDL.inputs[27] = 231; AVDL.inputs[28] = 231; AVDL.inputs[29] = 173; AVDL.inputs[30] = 15; AVDL.inputs[31] = 174; AVDL.inputs[32] = 68; AVDL.inputs[33] = 44; AVDL.inputs[34] = 44; AVDL.inputs[35] = 44; AVDL.inputs[36] = 44; AVDL.inputs[37] = 45; AVDL.inputs[38] = 8; AVDL.inputs[39] = 45; AVDL.inputs[40] = 45; AVDL.inputs[41] = 45; AVDL.inputs[42] = 72; AVDL.inputs[43] = 8; AVDL.inputs[44] = 8; AVDL.inputs[45] = 173; AVDL.inputs[46] = 173; AVDL.inputs[47] = 8; AVDL.inputs[48] = 45; AVDL.inputs[49] = 8; AVDL.inputs[50] = 8; AVDL.inputs[51] = 8; AVDL.inputs[52] = 221; AVDL.inputs[53] = 8; AVDL.inputs[54] = 1; AVDL.inputs[55] = 45; AVDL.inputs[56] = 8; AVDL.inputs[57] = 114; AVDL.inputs[58] = 115; AVDL.inputs[59] = 174; AVDL.inputs[60] = 115; AVDL.inputs[61] = 115; AVDL.inputs[62] = 114; AVDL.inputs[63] = 115; AVDL.inputs[64] = 115; AVDL.inputs[65] = 114; AVDL.inputs[66] = 115; AVDL.inputs[67] = 61; AVDL.inputs[68] = 59; AVDL.inputs[69] = 172; AVDL.inputs[70] = 179; AVDL.inputs[71] = 172; AVDL.inputs[72] = 68; AVDL.inputs[73] = 67; AVDL.inputs[74] = 59; AVDL.inputs[75] = 57; AVDL.inputs[76] = 262; AVDL.inputs[77] = 264; AVDL.inputs[78] = 115; AVDL.inputs[79] = 115; AVDL.inputs[80] = 115; AVDL.inputs[81] = 173; AVDL.inputs[82] = 115; AVDL.inputs[83] = 2; AVDL.inputs[84] = 114; AVDL.inputs[85] = 169; AVDL.inputs[86] = 169; AVDL.inputs[87] = 169; AVDL.inputs[88] = 169; AVDL.inputs[89] = 169; AVDL.inputs[90] = 169; AVDL.inputs[91] = 69; AVDL.inputs[92] = 138; AVDL.inputs[93] = 172; AVDL.inputs[94] = 138; AVDL.inputs[95] = 165; AVDL.inputs[96] = 178; AVDL.inputs[97] = 164; AVDL.inputs[98] = 172; AVDL.inputs[99] = 139; AVDL.inputs[100] = 178; AVDL.inputs[101] = 178; AVDL.inputs[102] = 165; AVDL.inputs[103] = 139; AVDL.inputs[104] = 139; AVDL.inputs[105] = 139; AVDL.inputs[106] = 178; AVDL.inputs[107] = 55; AVDL.inputs[108] = 179; AVDL.inputs[109] = 172; AVDL.inputs[110] = 114; AVDL.inputs[111] = 195; AVDL.inputs[112] = 72; AVDL.inputs[113] = 65; AVDL.inputs[114] = 65; AVDL.inputs[115] = 72; AVDL.inputs[116] = 115; AVDL.inputs[117] = 112; AVDL.inputs[118] = 59; AVDL.inputs[119] = 59; AVDL.inputs[120] = 174; AVDL.inputs[121] = 292; AVDL.inputs[122] = 174; AVDL.inputs[123] = 67; AVDL.inputs[124] = 115; AVDL.inputs[125] = 114; AVDL.inputs[126] = 59; AVDL.inputs[127] = 172; AVDL.inputs[128] = 168; AVDL.inputs[129] = 168; AVDL.inputs[130] = 168; AVDL.inputs[131] = 174; AVDL.inputs[132] = 59; AVDL.inputs[133] = 174; AVDL.inputs[134] = 179; AVDL.inputs[135] = 185;
    AVDL.weightsLen = 136;
    AVDL.weights[0] = 1; AVDL.weights[1] = 1; AVDL.weights[2] = 1; AVDL.weights[3] = 1; AVDL.weights[4] = 1; AVDL.weights[5] = 1; AVDL.weights[6] = 1; AVDL.weights[7] = 1; AVDL.weights[8] = 1; AVDL.weights[9] = 1; AVDL.weights[10] = 1; AVDL.weights[11] = 1; AVDL.weights[12] = 1; AVDL.weights[13] = 1; AVDL.weights[14] = 1; AVDL.weights[15] = 1; AVDL.weights[16] = 1; AVDL.weights[17] = 1; AVDL.weights[18] = 1; AVDL.weights[19] = 1; AVDL.weights[20] = 1; AVDL.weights[21] = 1; AVDL.weights[22] = 1; AVDL.weights[23] = 1; AVDL.weights[24] = 1; AVDL.weights[25] = 1; AVDL.weights[26] = 1; AVDL.weights[27] = 1; AVDL.weights[28] = 1; AVDL.weights[29] = 1; AVDL.weights[30] = 1; AVDL.weights[31] = 1; AVDL.weights[32] = 1; AVDL.weights[33] = 1; AVDL.weights[34] = 1; AVDL.weights[35] = 1; AVDL.weights[36] = 1; AVDL.weights[37] = 1; AVDL.weights[38] = 1; AVDL.weights[39] = 1; AVDL.weights[40] = 1; AVDL.weights[41] = 1; AVDL.weights[42] = 1; AVDL.weights[43] = 1; AVDL.weights[44] = 1; AVDL.weights[45] = 1; AVDL.weights[46] = 1; AVDL.weights[47] = 1; AVDL.weights[48] = 1; AVDL.weights[49] = 1; AVDL.weights[50] = 1; AVDL.weights[51] = 1; AVDL.weights[52] = 1; AVDL.weights[53] = 1; AVDL.weights[54] = 1; AVDL.weights[55] = 1; AVDL.weights[56] = 1; AVDL.weights[57] = 1; AVDL.weights[58] = 1; AVDL.weights[59] = 1; AVDL.weights[60] = 1; AVDL.weights[61] = 1; AVDL.weights[62] = 1; AVDL.weights[63] = 1; AVDL.weights[64] = 1; AVDL.weights[65] = 1; AVDL.weights[66] = 1; AVDL.weights[67] = 1; AVDL.weights[68] = 1; AVDL.weights[69] = 1; AVDL.weights[70] = 1; AVDL.weights[71] = 1; AVDL.weights[72] = 1; AVDL.weights[73] = 1; AVDL.weights[74] = 1; AVDL.weights[75] = 1; AVDL.weights[76] = 1; AVDL.weights[77] = 1; AVDL.weights[78] = 1; AVDL.weights[79] = 1; AVDL.weights[80] = 1; AVDL.weights[81] = 1; AVDL.weights[82] = 1; AVDL.weights[83] = 1; AVDL.weights[84] = 1; AVDL.weights[85] = 1; AVDL.weights[86] = 1; AVDL.weights[87] = 1; AVDL.weights[88] = 1; AVDL.weights[89] = 1; AVDL.weights[90] = 1; AVDL.weights[91] = 1; AVDL.weights[92] = 1; AVDL.weights[93] = 1; AVDL.weights[94] = 1; AVDL.weights[95] = 1; AVDL.weights[96] = 1; AVDL.weights[97] = 1; AVDL.weights[98] = 1; AVDL.weights[99] = 1; AVDL.weights[100] = 1; AVDL.weights[101] = 1; AVDL.weights[102] = 1; AVDL.weights[103] = 1; AVDL.weights[104] = 1; AVDL.weights[105] = 1; AVDL.weights[106] = 1; AVDL.weights[107] = 1; AVDL.weights[108] = 1; AVDL.weights[109] = 1; AVDL.weights[110] = 1; AVDL.weights[111] = 1; AVDL.weights[112] = 1; AVDL.weights[113] = 1; AVDL.weights[114] = 1; AVDL.weights[115] = 1; AVDL.weights[116] = 1; AVDL.weights[117] = 1; AVDL.weights[118] = 1; AVDL.weights[119] = 1; AVDL.weights[120] = 1; AVDL.weights[121] = 1; AVDL.weights[122] = 1; AVDL.weights[123] = 1; AVDL.weights[124] = 1; AVDL.weights[125] = 1; AVDL.weights[126] = 1; AVDL.weights[127] = 1; AVDL.weights[128] = 1; AVDL.weights[129] = 1; AVDL.weights[130] = 1; AVDL.weights[131] = 1; AVDL.weights[132] = 1; AVDL.weights[133] = 1; AVDL.weights[134] = 1; AVDL.weights[135] = 1;
    if (id == 58) {
        return AVDL;
    }


    neuron AVDR;
    AVDR.cellID = 59;
    AVDR.threshold = 1;
    AVDR.inputsLen = 130;
    AVDR.inputs[0] = 232; AVDR.inputs[1] = 174; AVDR.inputs[2] = 4; AVDR.inputs[3] = 44; AVDR.inputs[4] = 44; AVDR.inputs[5] = 24; AVDR.inputs[6] = 7; AVDR.inputs[7] = 44; AVDR.inputs[8] = 44; AVDR.inputs[9] = 44; AVDR.inputs[10] = 7; AVDR.inputs[11] = 44; AVDR.inputs[12] = 259; AVDR.inputs[13] = 7; AVDR.inputs[14] = 7; AVDR.inputs[15] = 44; AVDR.inputs[16] = 115; AVDR.inputs[17] = 4; AVDR.inputs[18] = 7; AVDR.inputs[19] = 44; AVDR.inputs[20] = 8; AVDR.inputs[21] = 8; AVDR.inputs[22] = 44; AVDR.inputs[23] = 255; AVDR.inputs[24] = 44; AVDR.inputs[25] = 190; AVDR.inputs[26] = 52; AVDR.inputs[27] = 16; AVDR.inputs[28] = 7; AVDR.inputs[29] = 7; AVDR.inputs[30] = 44; AVDR.inputs[31] = 2; AVDR.inputs[32] = 44; AVDR.inputs[33] = 44; AVDR.inputs[34] = 44; AVDR.inputs[35] = 44; AVDR.inputs[36] = 45; AVDR.inputs[37] = 45; AVDR.inputs[38] = 174; AVDR.inputs[39] = 54; AVDR.inputs[40] = 111; AVDR.inputs[41] = 7; AVDR.inputs[42] = 173; AVDR.inputs[43] = 156; AVDR.inputs[44] = 2; AVDR.inputs[45] = 23; AVDR.inputs[46] = 68; AVDR.inputs[47] = 259; AVDR.inputs[48] = 1; AVDR.inputs[49] = 174; AVDR.inputs[50] = 28; AVDR.inputs[51] = 66; AVDR.inputs[52] = 114; AVDR.inputs[53] = 173; AVDR.inputs[54] = 173; AVDR.inputs[55] = 173; AVDR.inputs[56] = 180; AVDR.inputs[57] = 180; AVDR.inputs[58] = 68; AVDR.inputs[59] = 114; AVDR.inputs[60] = 114; AVDR.inputs[61] = 114; AVDR.inputs[62] = 114; AVDR.inputs[63] = 114; AVDR.inputs[64] = 114; AVDR.inputs[65] = 114; AVDR.inputs[66] = 114; AVDR.inputs[67] = 114; AVDR.inputs[68] = 114; AVDR.inputs[69] = 114; AVDR.inputs[70] = 164; AVDR.inputs[71] = 162; AVDR.inputs[72] = 61; AVDR.inputs[73] = 179; AVDR.inputs[74] = 172; AVDR.inputs[75] = 58; AVDR.inputs[76] = 58; AVDR.inputs[77] = 172; AVDR.inputs[78] = 172; AVDR.inputs[79] = 172; AVDR.inputs[80] = 172; AVDR.inputs[81] = 172; AVDR.inputs[82] = 187; AVDR.inputs[83] = 64; AVDR.inputs[84] = 172; AVDR.inputs[85] = 67; AVDR.inputs[86] = 185; AVDR.inputs[87] = 178; AVDR.inputs[88] = 67; AVDR.inputs[89] = 178; AVDR.inputs[90] = 64; AVDR.inputs[91] = 72; AVDR.inputs[92] = 115; AVDR.inputs[93] = 115; AVDR.inputs[94] = 174; AVDR.inputs[95] = 168; AVDR.inputs[96] = 168; AVDR.inputs[97] = 175; AVDR.inputs[98] = 169; AVDR.inputs[99] = 169; AVDR.inputs[100] = 169; AVDR.inputs[101] = 169; AVDR.inputs[102] = 139; AVDR.inputs[103] = 138; AVDR.inputs[104] = 138; AVDR.inputs[105] = 165; AVDR.inputs[106] = 165; AVDR.inputs[107] = 172; AVDR.inputs[108] = 172; AVDR.inputs[109] = 178; AVDR.inputs[110] = 139; AVDR.inputs[111] = 165; AVDR.inputs[112] = 178; AVDR.inputs[113] = 187; AVDR.inputs[114] = 54; AVDR.inputs[115] = 172; AVDR.inputs[116] = 233; AVDR.inputs[117] = 115; AVDR.inputs[118] = 180; AVDR.inputs[119] = 59; AVDR.inputs[120] = 263; AVDR.inputs[121] = 187; AVDR.inputs[122] = 67; AVDR.inputs[123] = 168; AVDR.inputs[124] = 168; AVDR.inputs[125] = 172; AVDR.inputs[126] = 172; AVDR.inputs[127] = 179; AVDR.inputs[128] = 174; AVDR.inputs[129] = 178;
    AVDR.weightsLen = 130;
    AVDR.weights[0] = 1; AVDR.weights[1] = 1; AVDR.weights[2] = 1; AVDR.weights[3] = 1; AVDR.weights[4] = 1; AVDR.weights[5] = 1; AVDR.weights[6] = 1; AVDR.weights[7] = 1; AVDR.weights[8] = 1; AVDR.weights[9] = 1; AVDR.weights[10] = 1; AVDR.weights[11] = 1; AVDR.weights[12] = 1; AVDR.weights[13] = 1; AVDR.weights[14] = 1; AVDR.weights[15] = 1; AVDR.weights[16] = 1; AVDR.weights[17] = 1; AVDR.weights[18] = 1; AVDR.weights[19] = 1; AVDR.weights[20] = 1; AVDR.weights[21] = 1; AVDR.weights[22] = 1; AVDR.weights[23] = 1; AVDR.weights[24] = 1; AVDR.weights[25] = 1; AVDR.weights[26] = 1; AVDR.weights[27] = 1; AVDR.weights[28] = 1; AVDR.weights[29] = 1; AVDR.weights[30] = 1; AVDR.weights[31] = 1; AVDR.weights[32] = 1; AVDR.weights[33] = 1; AVDR.weights[34] = 1; AVDR.weights[35] = 1; AVDR.weights[36] = 1; AVDR.weights[37] = 1; AVDR.weights[38] = 1; AVDR.weights[39] = 1; AVDR.weights[40] = 1; AVDR.weights[41] = 1; AVDR.weights[42] = 1; AVDR.weights[43] = 1; AVDR.weights[44] = 1; AVDR.weights[45] = 1; AVDR.weights[46] = 1; AVDR.weights[47] = 1; AVDR.weights[48] = 1; AVDR.weights[49] = 1; AVDR.weights[50] = 1; AVDR.weights[51] = 1; AVDR.weights[52] = 1; AVDR.weights[53] = 1; AVDR.weights[54] = 1; AVDR.weights[55] = 1; AVDR.weights[56] = 1; AVDR.weights[57] = 1; AVDR.weights[58] = 1; AVDR.weights[59] = 1; AVDR.weights[60] = 1; AVDR.weights[61] = 1; AVDR.weights[62] = 1; AVDR.weights[63] = 1; AVDR.weights[64] = 1; AVDR.weights[65] = 1; AVDR.weights[66] = 1; AVDR.weights[67] = 1; AVDR.weights[68] = 1; AVDR.weights[69] = 1; AVDR.weights[70] = 1; AVDR.weights[71] = 1; AVDR.weights[72] = 1; AVDR.weights[73] = 1; AVDR.weights[74] = 1; AVDR.weights[75] = 1; AVDR.weights[76] = 1; AVDR.weights[77] = 1; AVDR.weights[78] = 1; AVDR.weights[79] = 1; AVDR.weights[80] = 1; AVDR.weights[81] = 1; AVDR.weights[82] = 1; AVDR.weights[83] = 1; AVDR.weights[84] = 1; AVDR.weights[85] = 1; AVDR.weights[86] = 1; AVDR.weights[87] = 1; AVDR.weights[88] = 1; AVDR.weights[89] = 1; AVDR.weights[90] = 1; AVDR.weights[91] = 1; AVDR.weights[92] = 1; AVDR.weights[93] = 1; AVDR.weights[94] = 1; AVDR.weights[95] = 1; AVDR.weights[96] = 1; AVDR.weights[97] = 1; AVDR.weights[98] = 1; AVDR.weights[99] = 1; AVDR.weights[100] = 1; AVDR.weights[101] = 1; AVDR.weights[102] = 1; AVDR.weights[103] = 1; AVDR.weights[104] = 1; AVDR.weights[105] = 1; AVDR.weights[106] = 1; AVDR.weights[107] = 1; AVDR.weights[108] = 1; AVDR.weights[109] = 1; AVDR.weights[110] = 1; AVDR.weights[111] = 1; AVDR.weights[112] = 1; AVDR.weights[113] = 1; AVDR.weights[114] = 1; AVDR.weights[115] = 1; AVDR.weights[116] = 1; AVDR.weights[117] = 1; AVDR.weights[118] = 1; AVDR.weights[119] = 1; AVDR.weights[120] = 1; AVDR.weights[121] = 1; AVDR.weights[122] = 1; AVDR.weights[123] = 1; AVDR.weights[124] = 1; AVDR.weights[125] = 1; AVDR.weights[126] = 1; AVDR.weights[127] = 1; AVDR.weights[128] = 1; AVDR.weights[129] = 1;
    if (id == 59) {
        return AVDR;
    }


    neuron AVEL;
    AVEL.cellID = 60;
    AVEL.threshold = 1;
    AVEL.inputsLen = 160;
    AVEL.inputs[0] = 23; AVEL.inputs[1] = 23; AVEL.inputs[2] = 22; AVEL.inputs[3] = 22; AVEL.inputs[4] = 22; AVEL.inputs[5] = 111; AVEL.inputs[6] = 205; AVEL.inputs[7] = 1; AVEL.inputs[8] = 22; AVEL.inputs[9] = 23; AVEL.inputs[10] = 111; AVEL.inputs[11] = 111; AVEL.inputs[12] = 191; AVEL.inputs[13] = 22; AVEL.inputs[14] = 22; AVEL.inputs[15] = 259; AVEL.inputs[16] = 259; AVEL.inputs[17] = 260; AVEL.inputs[18] = 260; AVEL.inputs[19] = 260; AVEL.inputs[20] = 260; AVEL.inputs[21] = 260; AVEL.inputs[22] = 260; AVEL.inputs[23] = 258; AVEL.inputs[24] = 205; AVEL.inputs[25] = 205; AVEL.inputs[26] = 258; AVEL.inputs[27] = 257; AVEL.inputs[28] = 255; AVEL.inputs[29] = 255; AVEL.inputs[30] = 255; AVEL.inputs[31] = 255; AVEL.inputs[32] = 255; AVEL.inputs[33] = 255; AVEL.inputs[34] = 3; AVEL.inputs[35] = 13; AVEL.inputs[36] = 191; AVEL.inputs[37] = 24; AVEL.inputs[38] = 14; AVEL.inputs[39] = 24; AVEL.inputs[40] = 190; AVEL.inputs[41] = 14; AVEL.inputs[42] = 52; AVEL.inputs[43] = 190; AVEL.inputs[44] = 197; AVEL.inputs[45] = 80; AVEL.inputs[46] = 52; AVEL.inputs[47] = 80; AVEL.inputs[48] = 197; AVEL.inputs[49] = 197; AVEL.inputs[50] = 197; AVEL.inputs[51] = 260; AVEL.inputs[52] = 88; AVEL.inputs[53] = 88; AVEL.inputs[54] = 111; AVEL.inputs[55] = 205; AVEL.inputs[56] = 205; AVEL.inputs[57] = 153; AVEL.inputs[58] = 111; AVEL.inputs[59] = 204; AVEL.inputs[60] = 134; AVEL.inputs[61] = 153; AVEL.inputs[62] = 153; AVEL.inputs[63] = 191; AVEL.inputs[64] = 153; AVEL.inputs[65] = 88; AVEL.inputs[66] = 88; AVEL.inputs[67] = 129; AVEL.inputs[68] = 153; AVEL.inputs[69] = 245; AVEL.inputs[70] = 153; AVEL.inputs[71] = 52; AVEL.inputs[72] = 79; AVEL.inputs[73] = 52; AVEL.inputs[74] = 80; AVEL.inputs[75] = 80; AVEL.inputs[76] = 52; AVEL.inputs[77] = 52; AVEL.inputs[78] = 52; AVEL.inputs[79] = 111; AVEL.inputs[80] = 52; AVEL.inputs[81] = 111; AVEL.inputs[82] = 111; AVEL.inputs[83] = 190; AVEL.inputs[84] = 231; AVEL.inputs[85] = 197; AVEL.inputs[86] = 21; AVEL.inputs[87] = 3; AVEL.inputs[88] = 80; AVEL.inputs[89] = 153; AVEL.inputs[90] = 153; AVEL.inputs[91] = 86; AVEL.inputs[92] = 86; AVEL.inputs[93] = 153; AVEL.inputs[94] = 153; AVEL.inputs[95] = 153; AVEL.inputs[96] = 153; AVEL.inputs[97] = 86; AVEL.inputs[98] = 153; AVEL.inputs[99] = 259; AVEL.inputs[100] = 153; AVEL.inputs[101] = 153; AVEL.inputs[102] = 153; AVEL.inputs[103] = 153; AVEL.inputs[104] = 205; AVEL.inputs[105] = 88; AVEL.inputs[106] = 205; AVEL.inputs[107] = 153; AVEL.inputs[108] = 88; AVEL.inputs[109] = 260; AVEL.inputs[110] = 260; AVEL.inputs[111] = 80; AVEL.inputs[112] = 79; AVEL.inputs[113] = 153; AVEL.inputs[114] = 260; AVEL.inputs[115] = 153; AVEL.inputs[116] = 153; AVEL.inputs[117] = 88; AVEL.inputs[118] = 153; AVEL.inputs[119] = 205; AVEL.inputs[120] = 205; AVEL.inputs[121] = 258; AVEL.inputs[122] = 69; AVEL.inputs[123] = 69; AVEL.inputs[124] = 69; AVEL.inputs[125] = 174; AVEL.inputs[126] = 115; AVEL.inputs[127] = 115; AVEL.inputs[128] = 111; AVEL.inputs[129] = 179; AVEL.inputs[130] = 67; AVEL.inputs[131] = 71; AVEL.inputs[132] = 71; AVEL.inputs[133] = 173; AVEL.inputs[134] = 173; AVEL.inputs[135] = 179; AVEL.inputs[136] = 115; AVEL.inputs[137] = 115; AVEL.inputs[138] = 2; AVEL.inputs[139] = 205; AVEL.inputs[140] = 153; AVEL.inputs[141] = 153; AVEL.inputs[142] = 191; AVEL.inputs[143] = 205; AVEL.inputs[144] = 200; AVEL.inputs[145] = 200; AVEL.inputs[146] = 213; AVEL.inputs[147] = 217; AVEL.inputs[148] = 201; AVEL.inputs[149] = 61; AVEL.inputs[150] = 205; AVEL.inputs[151] = 248; AVEL.inputs[152] = 201; AVEL.inputs[153] = 181; AVEL.inputs[154] = 71; AVEL.inputs[155] = 205; AVEL.inputs[156] = 205; AVEL.inputs[157] = 200; AVEL.inputs[158] = 213; AVEL.inputs[159] = 80;
    AVEL.weightsLen = 160;
    AVEL.weights[0] = 1; AVEL.weights[1] = 1; AVEL.weights[2] = 1; AVEL.weights[3] = 1; AVEL.weights[4] = 1; AVEL.weights[5] = 1; AVEL.weights[6] = 1; AVEL.weights[7] = 1; AVEL.weights[8] = 1; AVEL.weights[9] = 1; AVEL.weights[10] = 1; AVEL.weights[11] = 1; AVEL.weights[12] = 1; AVEL.weights[13] = 1; AVEL.weights[14] = 1; AVEL.weights[15] = 1; AVEL.weights[16] = 1; AVEL.weights[17] = 1; AVEL.weights[18] = 1; AVEL.weights[19] = 1; AVEL.weights[20] = 1; AVEL.weights[21] = 1; AVEL.weights[22] = 1; AVEL.weights[23] = 1; AVEL.weights[24] = 1; AVEL.weights[25] = 1; AVEL.weights[26] = 1; AVEL.weights[27] = 1; AVEL.weights[28] = 1; AVEL.weights[29] = 1; AVEL.weights[30] = 1; AVEL.weights[31] = 1; AVEL.weights[32] = 1; AVEL.weights[33] = 1; AVEL.weights[34] = 1; AVEL.weights[35] = 1; AVEL.weights[36] = 1; AVEL.weights[37] = 1; AVEL.weights[38] = 1; AVEL.weights[39] = 1; AVEL.weights[40] = 1; AVEL.weights[41] = 1; AVEL.weights[42] = 1; AVEL.weights[43] = 1; AVEL.weights[44] = 1; AVEL.weights[45] = 1; AVEL.weights[46] = 1; AVEL.weights[47] = 1; AVEL.weights[48] = 1; AVEL.weights[49] = 1; AVEL.weights[50] = 1; AVEL.weights[51] = 1; AVEL.weights[52] = 1; AVEL.weights[53] = 1; AVEL.weights[54] = 1; AVEL.weights[55] = 1; AVEL.weights[56] = 1; AVEL.weights[57] = 1; AVEL.weights[58] = 1; AVEL.weights[59] = 1; AVEL.weights[60] = 1; AVEL.weights[61] = 1; AVEL.weights[62] = 1; AVEL.weights[63] = 1; AVEL.weights[64] = 1; AVEL.weights[65] = 1; AVEL.weights[66] = 1; AVEL.weights[67] = 1; AVEL.weights[68] = 1; AVEL.weights[69] = 1; AVEL.weights[70] = 1; AVEL.weights[71] = 1; AVEL.weights[72] = 1; AVEL.weights[73] = 1; AVEL.weights[74] = 1; AVEL.weights[75] = 1; AVEL.weights[76] = 1; AVEL.weights[77] = 1; AVEL.weights[78] = 1; AVEL.weights[79] = 1; AVEL.weights[80] = 1; AVEL.weights[81] = 1; AVEL.weights[82] = 1; AVEL.weights[83] = 1; AVEL.weights[84] = 1; AVEL.weights[85] = 1; AVEL.weights[86] = 1; AVEL.weights[87] = 1; AVEL.weights[88] = 1; AVEL.weights[89] = 1; AVEL.weights[90] = 1; AVEL.weights[91] = 1; AVEL.weights[92] = 1; AVEL.weights[93] = 1; AVEL.weights[94] = 1; AVEL.weights[95] = 1; AVEL.weights[96] = 1; AVEL.weights[97] = 1; AVEL.weights[98] = 1; AVEL.weights[99] = 1; AVEL.weights[100] = 1; AVEL.weights[101] = 1; AVEL.weights[102] = 1; AVEL.weights[103] = 1; AVEL.weights[104] = 1; AVEL.weights[105] = 1; AVEL.weights[106] = 1; AVEL.weights[107] = 1; AVEL.weights[108] = 1; AVEL.weights[109] = 1; AVEL.weights[110] = 1; AVEL.weights[111] = 1; AVEL.weights[112] = 1; AVEL.weights[113] = 1; AVEL.weights[114] = 1; AVEL.weights[115] = 1; AVEL.weights[116] = 1; AVEL.weights[117] = 1; AVEL.weights[118] = 1; AVEL.weights[119] = 1; AVEL.weights[120] = 1; AVEL.weights[121] = 1; AVEL.weights[122] = 1; AVEL.weights[123] = 1; AVEL.weights[124] = 1; AVEL.weights[125] = 1; AVEL.weights[126] = 1; AVEL.weights[127] = 1; AVEL.weights[128] = 1; AVEL.weights[129] = 1; AVEL.weights[130] = 1; AVEL.weights[131] = 1; AVEL.weights[132] = 1; AVEL.weights[133] = 1; AVEL.weights[134] = 1; AVEL.weights[135] = 1; AVEL.weights[136] = 1; AVEL.weights[137] = 1; AVEL.weights[138] = 1; AVEL.weights[139] = 1; AVEL.weights[140] = 1; AVEL.weights[141] = 1; AVEL.weights[142] = 1; AVEL.weights[143] = 1; AVEL.weights[144] = 1; AVEL.weights[145] = 1; AVEL.weights[146] = 1; AVEL.weights[147] = 1; AVEL.weights[148] = 1; AVEL.weights[149] = 1; AVEL.weights[150] = 1; AVEL.weights[151] = 1; AVEL.weights[152] = 1; AVEL.weights[153] = 1; AVEL.weights[154] = 1; AVEL.weights[155] = 1; AVEL.weights[156] = 1; AVEL.weights[157] = 1; AVEL.weights[158] = 1; AVEL.weights[159] = 1;
    if (id == 60) {
        return AVEL;
    }


    neuron AVER;
    AVER.cellID = 61;
    AVER.threshold = 1;
    AVER.inputsLen = 166;
    AVER.inputs[0] = 21; AVER.inputs[1] = 200; AVER.inputs[2] = 21; AVER.inputs[3] = 21; AVER.inputs[4] = 21; AVER.inputs[5] = 21; AVER.inputs[6] = 21; AVER.inputs[7] = 21; AVER.inputs[8] = 259; AVER.inputs[9] = 152; AVER.inputs[10] = 205; AVER.inputs[11] = 21; AVER.inputs[12] = 152; AVER.inputs[13] = 22; AVER.inputs[14] = 198; AVER.inputs[15] = 198; AVER.inputs[16] = 198; AVER.inputs[17] = 198; AVER.inputs[18] = 23; AVER.inputs[19] = 23; AVER.inputs[20] = 23; AVER.inputs[21] = 53; AVER.inputs[22] = 174; AVER.inputs[23] = 87; AVER.inputs[24] = 111; AVER.inputs[25] = 4; AVER.inputs[26] = 111; AVER.inputs[27] = 111; AVER.inputs[28] = 152; AVER.inputs[29] = 259; AVER.inputs[30] = 259; AVER.inputs[31] = 259; AVER.inputs[32] = 259; AVER.inputs[33] = 259; AVER.inputs[34] = 258; AVER.inputs[35] = 21; AVER.inputs[36] = 21; AVER.inputs[37] = 111; AVER.inputs[38] = 205; AVER.inputs[39] = 111; AVER.inputs[40] = 259; AVER.inputs[41] = 248; AVER.inputs[42] = 257; AVER.inputs[43] = 257; AVER.inputs[44] = 257; AVER.inputs[45] = 257; AVER.inputs[46] = 257; AVER.inputs[47] = 152; AVER.inputs[48] = 256; AVER.inputs[49] = 87; AVER.inputs[50] = 251; AVER.inputs[51] = 190; AVER.inputs[52] = 190; AVER.inputs[53] = 197; AVER.inputs[54] = 191; AVER.inputs[55] = 191; AVER.inputs[56] = 4; AVER.inputs[57] = 135; AVER.inputs[58] = 221; AVER.inputs[59] = 45; AVER.inputs[60] = 45; AVER.inputs[61] = 221; AVER.inputs[62] = 45; AVER.inputs[63] = 45; AVER.inputs[64] = 21; AVER.inputs[65] = 190; AVER.inputs[66] = 205; AVER.inputs[67] = 190; AVER.inputs[68] = 152; AVER.inputs[69] = 87; AVER.inputs[70] = 205; AVER.inputs[71] = 205; AVER.inputs[72] = 190; AVER.inputs[73] = 205; AVER.inputs[74] = 221; AVER.inputs[75] = 246; AVER.inputs[76] = 245; AVER.inputs[77] = 152; AVER.inputs[78] = 152; AVER.inputs[79] = 152; AVER.inputs[80] = 152; AVER.inputs[81] = 85; AVER.inputs[82] = 85; AVER.inputs[83] = 152; AVER.inputs[84] = 85; AVER.inputs[85] = 129; AVER.inputs[86] = 128; AVER.inputs[87] = 128; AVER.inputs[88] = 152; AVER.inputs[89] = 23; AVER.inputs[90] = 259; AVER.inputs[91] = 152; AVER.inputs[92] = 259; AVER.inputs[93] = 152; AVER.inputs[94] = 152; AVER.inputs[95] = 152; AVER.inputs[96] = 152; AVER.inputs[97] = 152; AVER.inputs[98] = 152; AVER.inputs[99] = 53; AVER.inputs[100] = 79; AVER.inputs[101] = 53; AVER.inputs[102] = 53; AVER.inputs[103] = 79; AVER.inputs[104] = 191; AVER.inputs[105] = 53; AVER.inputs[106] = 53; AVER.inputs[107] = 111; AVER.inputs[108] = 111; AVER.inputs[109] = 111; AVER.inputs[110] = 111; AVER.inputs[111] = 111; AVER.inputs[112] = 205; AVER.inputs[113] = 69; AVER.inputs[114] = 85; AVER.inputs[115] = 85; AVER.inputs[116] = 212; AVER.inputs[117] = 85; AVER.inputs[118] = 85; AVER.inputs[119] = 152; AVER.inputs[120] = 205; AVER.inputs[121] = 152; AVER.inputs[122] = 21; AVER.inputs[123] = 208; AVER.inputs[124] = 45; AVER.inputs[125] = 79; AVER.inputs[126] = 79; AVER.inputs[127] = 152; AVER.inputs[128] = 190; AVER.inputs[129] = 152; AVER.inputs[130] = 85; AVER.inputs[131] = 129; AVER.inputs[132] = 152; AVER.inputs[133] = 135; AVER.inputs[134] = 152; AVER.inputs[135] = 152; AVER.inputs[136] = 152; AVER.inputs[137] = 190; AVER.inputs[138] = 205; AVER.inputs[139] = 258; AVER.inputs[140] = 190; AVER.inputs[141] = 200; AVER.inputs[142] = 173; AVER.inputs[143] = 115; AVER.inputs[144] = 115; AVER.inputs[145] = 59; AVER.inputs[146] = 59; AVER.inputs[147] = 115; AVER.inputs[148] = 115; AVER.inputs[149] = 21; AVER.inputs[150] = 190; AVER.inputs[151] = 213; AVER.inputs[152] = 201; AVER.inputs[153] = 201; AVER.inputs[154] = 246; AVER.inputs[155] = 201; AVER.inputs[156] = 201; AVER.inputs[157] = 208; AVER.inputs[158] = 70; AVER.inputs[159] = 212; AVER.inputs[160] = 200; AVER.inputs[161] = 211; AVER.inputs[162] = 211; AVER.inputs[163] = 217; AVER.inputs[164] = 200; AVER.inputs[165] = 195;
    AVER.weightsLen = 166;
    AVER.weights[0] = 1; AVER.weights[1] = 1; AVER.weights[2] = 1; AVER.weights[3] = 1; AVER.weights[4] = 1; AVER.weights[5] = 1; AVER.weights[6] = 1; AVER.weights[7] = 1; AVER.weights[8] = 1; AVER.weights[9] = 1; AVER.weights[10] = 1; AVER.weights[11] = 1; AVER.weights[12] = 1; AVER.weights[13] = 1; AVER.weights[14] = 1; AVER.weights[15] = 1; AVER.weights[16] = 1; AVER.weights[17] = 1; AVER.weights[18] = 1; AVER.weights[19] = 1; AVER.weights[20] = 1; AVER.weights[21] = 1; AVER.weights[22] = 1; AVER.weights[23] = 1; AVER.weights[24] = 1; AVER.weights[25] = 1; AVER.weights[26] = 1; AVER.weights[27] = 1; AVER.weights[28] = 1; AVER.weights[29] = 1; AVER.weights[30] = 1; AVER.weights[31] = 1; AVER.weights[32] = 1; AVER.weights[33] = 1; AVER.weights[34] = 1; AVER.weights[35] = 1; AVER.weights[36] = 1; AVER.weights[37] = 1; AVER.weights[38] = 1; AVER.weights[39] = 1; AVER.weights[40] = 1; AVER.weights[41] = 1; AVER.weights[42] = 1; AVER.weights[43] = 1; AVER.weights[44] = 1; AVER.weights[45] = 1; AVER.weights[46] = 1; AVER.weights[47] = 1; AVER.weights[48] = 1; AVER.weights[49] = 1; AVER.weights[50] = 1; AVER.weights[51] = 1; AVER.weights[52] = 1; AVER.weights[53] = 1; AVER.weights[54] = 1; AVER.weights[55] = 1; AVER.weights[56] = 1; AVER.weights[57] = 1; AVER.weights[58] = 1; AVER.weights[59] = 1; AVER.weights[60] = 1; AVER.weights[61] = 1; AVER.weights[62] = 1; AVER.weights[63] = 1; AVER.weights[64] = 1; AVER.weights[65] = 1; AVER.weights[66] = 1; AVER.weights[67] = 1; AVER.weights[68] = 1; AVER.weights[69] = 1; AVER.weights[70] = 1; AVER.weights[71] = 1; AVER.weights[72] = 1; AVER.weights[73] = 1; AVER.weights[74] = 1; AVER.weights[75] = 1; AVER.weights[76] = 1; AVER.weights[77] = 1; AVER.weights[78] = 1; AVER.weights[79] = 1; AVER.weights[80] = 1; AVER.weights[81] = 1; AVER.weights[82] = 1; AVER.weights[83] = 1; AVER.weights[84] = 1; AVER.weights[85] = 1; AVER.weights[86] = 1; AVER.weights[87] = 1; AVER.weights[88] = 1; AVER.weights[89] = 1; AVER.weights[90] = 1; AVER.weights[91] = 1; AVER.weights[92] = 1; AVER.weights[93] = 1; AVER.weights[94] = 1; AVER.weights[95] = 1; AVER.weights[96] = 1; AVER.weights[97] = 1; AVER.weights[98] = 1; AVER.weights[99] = 1; AVER.weights[100] = 1; AVER.weights[101] = 1; AVER.weights[102] = 1; AVER.weights[103] = 1; AVER.weights[104] = 1; AVER.weights[105] = 1; AVER.weights[106] = 1; AVER.weights[107] = 1; AVER.weights[108] = 1; AVER.weights[109] = 1; AVER.weights[110] = 1; AVER.weights[111] = 1; AVER.weights[112] = 1; AVER.weights[113] = 1; AVER.weights[114] = 1; AVER.weights[115] = 1; AVER.weights[116] = 1; AVER.weights[117] = 1; AVER.weights[118] = 1; AVER.weights[119] = 1; AVER.weights[120] = 1; AVER.weights[121] = 1; AVER.weights[122] = 1; AVER.weights[123] = 1; AVER.weights[124] = 1; AVER.weights[125] = 1; AVER.weights[126] = 1; AVER.weights[127] = 1; AVER.weights[128] = 1; AVER.weights[129] = 1; AVER.weights[130] = 1; AVER.weights[131] = 1; AVER.weights[132] = 1; AVER.weights[133] = 1; AVER.weights[134] = 1; AVER.weights[135] = 1; AVER.weights[136] = 1; AVER.weights[137] = 1; AVER.weights[138] = 1; AVER.weights[139] = 1; AVER.weights[140] = 1; AVER.weights[141] = 1; AVER.weights[142] = 1; AVER.weights[143] = 1; AVER.weights[144] = 1; AVER.weights[145] = 1; AVER.weights[146] = 1; AVER.weights[147] = 1; AVER.weights[148] = 1; AVER.weights[149] = 1; AVER.weights[150] = 1; AVER.weights[151] = 1; AVER.weights[152] = 1; AVER.weights[153] = 1; AVER.weights[154] = 1; AVER.weights[155] = 1; AVER.weights[156] = 1; AVER.weights[157] = 1; AVER.weights[158] = 1; AVER.weights[159] = 1; AVER.weights[160] = 1; AVER.weights[161] = 1; AVER.weights[162] = 1; AVER.weights[163] = 1; AVER.weights[164] = 1; AVER.weights[165] = 1;
    if (id == 61) {
        return AVER;
    }


    neuron AVFL;
    AVFL.cellID = 62;
    AVFL.threshold = 1;
    AVFL.inputsLen = 57;
    AVFL.inputs[0] = 116; AVFL.inputs[1] = 116; AVFL.inputs[2] = 116; AVFL.inputs[3] = 117; AVFL.inputs[4] = 15; AVFL.inputs[5] = 16; AVFL.inputs[6] = 15; AVFL.inputs[7] = 243; AVFL.inputs[8] = 15; AVFL.inputs[9] = 15; AVFL.inputs[10] = 15; AVFL.inputs[11] = 16; AVFL.inputs[12] = 63; AVFL.inputs[13] = 44; AVFL.inputs[14] = 117; AVFL.inputs[15] = 16; AVFL.inputs[16] = 196; AVFL.inputs[17] = 117; AVFL.inputs[18] = 63; AVFL.inputs[19] = 116; AVFL.inputs[20] = 116; AVFL.inputs[21] = 116; AVFL.inputs[22] = 162; AVFL.inputs[23] = 66; AVFL.inputs[24] = 112; AVFL.inputs[25] = 62; AVFL.inputs[26] = 62; AVFL.inputs[27] = 62; AVFL.inputs[28] = 62; AVFL.inputs[29] = 62; AVFL.inputs[30] = 62; AVFL.inputs[31] = 62; AVFL.inputs[32] = 66; AVFL.inputs[33] = 63; AVFL.inputs[34] = 65; AVFL.inputs[35] = 116; AVFL.inputs[36] = 179; AVFL.inputs[37] = 63; AVFL.inputs[38] = 180; AVFL.inputs[39] = 63; AVFL.inputs[40] = 63; AVFL.inputs[41] = 63; AVFL.inputs[42] = 63; AVFL.inputs[43] = 59; AVFL.inputs[44] = 174; AVFL.inputs[45] = 65; AVFL.inputs[46] = 66; AVFL.inputs[47] = 63; AVFL.inputs[48] = 64; AVFL.inputs[49] = 63; AVFL.inputs[50] = 65; AVFL.inputs[51] = 183; AVFL.inputs[52] = 66; AVFL.inputs[53] = 180; AVFL.inputs[54] = 66; AVFL.inputs[55] = 66; AVFL.inputs[56] = 293;
    AVFL.weightsLen = 57;
    AVFL.weights[0] = 1; AVFL.weights[1] = 1; AVFL.weights[2] = 1; AVFL.weights[3] = 1; AVFL.weights[4] = 1; AVFL.weights[5] = 1; AVFL.weights[6] = 1; AVFL.weights[7] = 1; AVFL.weights[8] = 1; AVFL.weights[9] = 1; AVFL.weights[10] = 1; AVFL.weights[11] = 1; AVFL.weights[12] = 1; AVFL.weights[13] = 1; AVFL.weights[14] = 1; AVFL.weights[15] = 1; AVFL.weights[16] = 1; AVFL.weights[17] = 1; AVFL.weights[18] = 1; AVFL.weights[19] = 1; AVFL.weights[20] = 1; AVFL.weights[21] = 1; AVFL.weights[22] = 1; AVFL.weights[23] = 1; AVFL.weights[24] = 1; AVFL.weights[25] = 1; AVFL.weights[26] = 1; AVFL.weights[27] = 1; AVFL.weights[28] = 1; AVFL.weights[29] = 1; AVFL.weights[30] = 1; AVFL.weights[31] = 1; AVFL.weights[32] = 1; AVFL.weights[33] = 1; AVFL.weights[34] = 1; AVFL.weights[35] = 1; AVFL.weights[36] = 1; AVFL.weights[37] = 1; AVFL.weights[38] = 1; AVFL.weights[39] = 1; AVFL.weights[40] = 1; AVFL.weights[41] = 1; AVFL.weights[42] = 1; AVFL.weights[43] = 1; AVFL.weights[44] = 1; AVFL.weights[45] = 1; AVFL.weights[46] = 1; AVFL.weights[47] = 1; AVFL.weights[48] = 1; AVFL.weights[49] = 1; AVFL.weights[50] = 1; AVFL.weights[51] = 1; AVFL.weights[52] = 1; AVFL.weights[53] = 1; AVFL.weights[54] = 1; AVFL.weights[55] = 1; AVFL.weights[56] = 1;
    if (id == 62) {
        return AVFL;
    }


    neuron AVFR;
    AVFR.cellID = 63;
    AVFR.threshold = 1;
    AVFR.inputsLen = 44;
    AVFR.inputs[0] = 116; AVFR.inputs[1] = 116; AVFR.inputs[2] = 62; AVFR.inputs[3] = 15; AVFR.inputs[4] = 233; AVFR.inputs[5] = 15; AVFR.inputs[6] = 15; AVFR.inputs[7] = 16; AVFR.inputs[8] = 16; AVFR.inputs[9] = 62; AVFR.inputs[10] = 16; AVFR.inputs[11] = 16; AVFR.inputs[12] = 62; AVFR.inputs[13] = 116; AVFR.inputs[14] = 183; AVFR.inputs[15] = 62; AVFR.inputs[16] = 62; AVFR.inputs[17] = 62; AVFR.inputs[18] = 66; AVFR.inputs[19] = 65; AVFR.inputs[20] = 66; AVFR.inputs[21] = 117; AVFR.inputs[22] = 65; AVFR.inputs[23] = 62; AVFR.inputs[24] = 62; AVFR.inputs[25] = 62; AVFR.inputs[26] = 62; AVFR.inputs[27] = 62; AVFR.inputs[28] = 65; AVFR.inputs[29] = 62; AVFR.inputs[30] = 180; AVFR.inputs[31] = 182; AVFR.inputs[32] = 66; AVFR.inputs[33] = 66; AVFR.inputs[34] = 65; AVFR.inputs[35] = 66; AVFR.inputs[36] = 66; AVFR.inputs[37] = 66; AVFR.inputs[38] = 263; AVFR.inputs[39] = 65; AVFR.inputs[40] = 65; AVFR.inputs[41] = 292; AVFR.inputs[42] = 180; AVFR.inputs[43] = 68;
    AVFR.weightsLen = 44;
    AVFR.weights[0] = 1; AVFR.weights[1] = 1; AVFR.weights[2] = 1; AVFR.weights[3] = 1; AVFR.weights[4] = 1; AVFR.weights[5] = 1; AVFR.weights[6] = 1; AVFR.weights[7] = 1; AVFR.weights[8] = 1; AVFR.weights[9] = 1; AVFR.weights[10] = 1; AVFR.weights[11] = 1; AVFR.weights[12] = 1; AVFR.weights[13] = 1; AVFR.weights[14] = 1; AVFR.weights[15] = 1; AVFR.weights[16] = 1; AVFR.weights[17] = 1; AVFR.weights[18] = 1; AVFR.weights[19] = 1; AVFR.weights[20] = 1; AVFR.weights[21] = 1; AVFR.weights[22] = 1; AVFR.weights[23] = 1; AVFR.weights[24] = 1; AVFR.weights[25] = 1; AVFR.weights[26] = 1; AVFR.weights[27] = 1; AVFR.weights[28] = 1; AVFR.weights[29] = 1; AVFR.weights[30] = 1; AVFR.weights[31] = 1; AVFR.weights[32] = 1; AVFR.weights[33] = 1; AVFR.weights[34] = 1; AVFR.weights[35] = 1; AVFR.weights[36] = 1; AVFR.weights[37] = 1; AVFR.weights[38] = 1; AVFR.weights[39] = 1; AVFR.weights[40] = 1; AVFR.weights[41] = 1; AVFR.weights[42] = 1; AVFR.weights[43] = 1;
    if (id == 63) {
        return AVFR;
    }


    neuron AVG;
    AVG.cellID = 64;
    AVG.threshold = 1;
    AVG.inputsLen = 60;
    AVG.inputs[0] = 167; AVG.inputs[1] = 274; AVG.inputs[2] = 111; AVG.inputs[3] = 62; AVG.inputs[4] = 66; AVG.inputs[5] = 173; AVG.inputs[6] = 63; AVG.inputs[7] = 64; AVG.inputs[8] = 178; AVG.inputs[9] = 113; AVG.inputs[10] = 178; AVG.inputs[11] = 26; AVG.inputs[12] = 62; AVG.inputs[13] = 175; AVG.inputs[14] = 175; AVG.inputs[15] = 175; AVG.inputs[16] = 175; AVG.inputs[17] = 163; AVG.inputs[18] = 163; AVG.inputs[19] = 162; AVG.inputs[20] = 162; AVG.inputs[21] = 163; AVG.inputs[22] = 162; AVG.inputs[23] = 164; AVG.inputs[24] = 163; AVG.inputs[25] = 162; AVG.inputs[26] = 162; AVG.inputs[27] = 163; AVG.inputs[28] = 172; AVG.inputs[29] = 187; AVG.inputs[30] = 292; AVG.inputs[31] = 174; AVG.inputs[32] = 113; AVG.inputs[33] = 185; AVG.inputs[34] = 196; AVG.inputs[35] = 196; AVG.inputs[36] = 172; AVG.inputs[37] = 172; AVG.inputs[38] = 172; AVG.inputs[39] = 172; AVG.inputs[40] = 172; AVG.inputs[41] = 175; AVG.inputs[42] = 172; AVG.inputs[43] = 172; AVG.inputs[44] = 172; AVG.inputs[45] = 172; AVG.inputs[46] = 172; AVG.inputs[47] = 172; AVG.inputs[48] = 172; AVG.inputs[49] = 172; AVG.inputs[50] = 172; AVG.inputs[51] = 113; AVG.inputs[52] = 113; AVG.inputs[53] = 113; AVG.inputs[54] = 113; AVG.inputs[55] = 113; AVG.inputs[56] = 113; AVG.inputs[57] = 180; AVG.inputs[58] = 163; AVG.inputs[59] = 180;
    AVG.weightsLen = 60;
    AVG.weights[0] = 1; AVG.weights[1] = 1; AVG.weights[2] = 1; AVG.weights[3] = 1; AVG.weights[4] = 1; AVG.weights[5] = 1; AVG.weights[6] = 1; AVG.weights[7] = 1; AVG.weights[8] = 1; AVG.weights[9] = 1; AVG.weights[10] = 1; AVG.weights[11] = 1; AVG.weights[12] = 1; AVG.weights[13] = 1; AVG.weights[14] = 1; AVG.weights[15] = 1; AVG.weights[16] = 1; AVG.weights[17] = 1; AVG.weights[18] = 1; AVG.weights[19] = 1; AVG.weights[20] = 1; AVG.weights[21] = 1; AVG.weights[22] = 1; AVG.weights[23] = 1; AVG.weights[24] = 1; AVG.weights[25] = 1; AVG.weights[26] = 1; AVG.weights[27] = 1; AVG.weights[28] = 1; AVG.weights[29] = 1; AVG.weights[30] = 1; AVG.weights[31] = 1; AVG.weights[32] = 1; AVG.weights[33] = 1; AVG.weights[34] = 1; AVG.weights[35] = 1; AVG.weights[36] = 1; AVG.weights[37] = 1; AVG.weights[38] = 1; AVG.weights[39] = 1; AVG.weights[40] = 1; AVG.weights[41] = 1; AVG.weights[42] = 1; AVG.weights[43] = 1; AVG.weights[44] = 1; AVG.weights[45] = 1; AVG.weights[46] = 1; AVG.weights[47] = 1; AVG.weights[48] = 1; AVG.weights[49] = 1; AVG.weights[50] = 1; AVG.weights[51] = 1; AVG.weights[52] = 1; AVG.weights[53] = 1; AVG.weights[54] = 1; AVG.weights[55] = 1; AVG.weights[56] = 1; AVG.weights[57] = 1; AVG.weights[58] = 1; AVG.weights[59] = 1;
    if (id == 64) {
        return AVG;
    }


    neuron AVHL;
    AVHL.cellID = 65;
    AVHL.threshold = 1;
    AVHL.inputsLen = 58;
    AVHL.inputs[0] = 244; AVHL.inputs[1] = 3; AVHL.inputs[2] = 81; AVHL.inputs[3] = 81; AVHL.inputs[4] = 244; AVHL.inputs[5] = 15; AVHL.inputs[6] = 15; AVHL.inputs[7] = 45; AVHL.inputs[8] = 67; AVHL.inputs[9] = 117; AVHL.inputs[10] = 174; AVHL.inputs[11] = 72; AVHL.inputs[12] = 181; AVHL.inputs[13] = 181; AVHL.inputs[14] = 162; AVHL.inputs[15] = 55; AVHL.inputs[16] = 113; AVHL.inputs[17] = 67; AVHL.inputs[18] = 292; AVHL.inputs[19] = 63; AVHL.inputs[20] = 65; AVHL.inputs[21] = 65; AVHL.inputs[22] = 65; AVHL.inputs[23] = 65; AVHL.inputs[24] = 180; AVHL.inputs[25] = 58; AVHL.inputs[26] = 66; AVHL.inputs[27] = 82; AVHL.inputs[28] = 62; AVHL.inputs[29] = 62; AVHL.inputs[30] = 63; AVHL.inputs[31] = 6; AVHL.inputs[32] = 162; AVHL.inputs[33] = 62; AVHL.inputs[34] = 172; AVHL.inputs[35] = 178; AVHL.inputs[36] = 59; AVHL.inputs[37] = 55; AVHL.inputs[38] = 181; AVHL.inputs[39] = 181; AVHL.inputs[40] = 292; AVHL.inputs[41] = 66; AVHL.inputs[42] = 66; AVHL.inputs[43] = 112; AVHL.inputs[44] = 164; AVHL.inputs[45] = 68; AVHL.inputs[46] = 68; AVHL.inputs[47] = 68; AVHL.inputs[48] = 66; AVHL.inputs[49] = 66; AVHL.inputs[50] = 181; AVHL.inputs[51] = 181; AVHL.inputs[52] = 162; AVHL.inputs[53] = 165; AVHL.inputs[54] = 293; AVHL.inputs[55] = 293; AVHL.inputs[56] = 293; AVHL.inputs[57] = 293;
    AVHL.weightsLen = 58;
    AVHL.weights[0] = 1; AVHL.weights[1] = 1; AVHL.weights[2] = 1; AVHL.weights[3] = 1; AVHL.weights[4] = 1; AVHL.weights[5] = 1; AVHL.weights[6] = 1; AVHL.weights[7] = 1; AVHL.weights[8] = 1; AVHL.weights[9] = 1; AVHL.weights[10] = 1; AVHL.weights[11] = 1; AVHL.weights[12] = 1; AVHL.weights[13] = 1; AVHL.weights[14] = 1; AVHL.weights[15] = 1; AVHL.weights[16] = 1; AVHL.weights[17] = 1; AVHL.weights[18] = 1; AVHL.weights[19] = 1; AVHL.weights[20] = 1; AVHL.weights[21] = 1; AVHL.weights[22] = 1; AVHL.weights[23] = 1; AVHL.weights[24] = 1; AVHL.weights[25] = 1; AVHL.weights[26] = 1; AVHL.weights[27] = 1; AVHL.weights[28] = 1; AVHL.weights[29] = 1; AVHL.weights[30] = 1; AVHL.weights[31] = 1; AVHL.weights[32] = 1; AVHL.weights[33] = 1; AVHL.weights[34] = 1; AVHL.weights[35] = 1; AVHL.weights[36] = 1; AVHL.weights[37] = 1; AVHL.weights[38] = 1; AVHL.weights[39] = 1; AVHL.weights[40] = 1; AVHL.weights[41] = 1; AVHL.weights[42] = 1; AVHL.weights[43] = 1; AVHL.weights[44] = 1; AVHL.weights[45] = 1; AVHL.weights[46] = 1; AVHL.weights[47] = 1; AVHL.weights[48] = 1; AVHL.weights[49] = 1; AVHL.weights[50] = 1; AVHL.weights[51] = 1; AVHL.weights[52] = 1; AVHL.weights[53] = 1; AVHL.weights[54] = 1; AVHL.weights[55] = 1; AVHL.weights[56] = 1; AVHL.weights[57] = 1;
    if (id == 65) {
        return AVHL;
    }


    neuron AVHR;
    AVHR.cellID = 66;
    AVHR.threshold = 1;
    AVHR.inputsLen = 46;
    AVHR.inputs[0] = 243; AVHR.inputs[1] = 15; AVHR.inputs[2] = 75; AVHR.inputs[3] = 44; AVHR.inputs[4] = 44; AVHR.inputs[5] = 180; AVHR.inputs[6] = 195; AVHR.inputs[7] = 117; AVHR.inputs[8] = 16; AVHR.inputs[9] = 180; AVHR.inputs[10] = 164; AVHR.inputs[11] = 55; AVHR.inputs[12] = 167; AVHR.inputs[13] = 167; AVHR.inputs[14] = 165; AVHR.inputs[15] = 292; AVHR.inputs[16] = 62; AVHR.inputs[17] = 166; AVHR.inputs[18] = 65; AVHR.inputs[19] = 185; AVHR.inputs[20] = 178; AVHR.inputs[21] = 66; AVHR.inputs[22] = 66; AVHR.inputs[23] = 184; AVHR.inputs[24] = 66; AVHR.inputs[25] = 180; AVHR.inputs[26] = 162; AVHR.inputs[27] = 235; AVHR.inputs[28] = 292; AVHR.inputs[29] = 293; AVHR.inputs[30] = 183; AVHR.inputs[31] = 183; AVHR.inputs[32] = 180; AVHR.inputs[33] = 182; AVHR.inputs[34] = 113; AVHR.inputs[35] = 113; AVHR.inputs[36] = 182; AVHR.inputs[37] = 165; AVHR.inputs[38] = 163; AVHR.inputs[39] = 165; AVHR.inputs[40] = 163; AVHR.inputs[41] = 293; AVHR.inputs[42] = 293; AVHR.inputs[43] = 293; AVHR.inputs[44] = 293; AVHR.inputs[45] = 181;
    AVHR.weightsLen = 46;
    AVHR.weights[0] = 1; AVHR.weights[1] = 1; AVHR.weights[2] = 1; AVHR.weights[3] = 1; AVHR.weights[4] = 1; AVHR.weights[5] = 1; AVHR.weights[6] = 1; AVHR.weights[7] = 1; AVHR.weights[8] = 1; AVHR.weights[9] = 1; AVHR.weights[10] = 1; AVHR.weights[11] = 1; AVHR.weights[12] = 1; AVHR.weights[13] = 1; AVHR.weights[14] = 1; AVHR.weights[15] = 1; AVHR.weights[16] = 1; AVHR.weights[17] = 1; AVHR.weights[18] = 1; AVHR.weights[19] = 1; AVHR.weights[20] = 1; AVHR.weights[21] = 1; AVHR.weights[22] = 1; AVHR.weights[23] = 1; AVHR.weights[24] = 1; AVHR.weights[25] = 1; AVHR.weights[26] = 1; AVHR.weights[27] = 1; AVHR.weights[28] = 1; AVHR.weights[29] = 1; AVHR.weights[30] = 1; AVHR.weights[31] = 1; AVHR.weights[32] = 1; AVHR.weights[33] = 1; AVHR.weights[34] = 1; AVHR.weights[35] = 1; AVHR.weights[36] = 1; AVHR.weights[37] = 1; AVHR.weights[38] = 1; AVHR.weights[39] = 1; AVHR.weights[40] = 1; AVHR.weights[41] = 1; AVHR.weights[42] = 1; AVHR.weights[43] = 1; AVHR.weights[44] = 1; AVHR.weights[45] = 1;
    if (id == 66) {
        return AVHR;
    }


    neuron AVJL;
    AVJL.cellID = 67;
    AVJL.threshold = 1;
    AVJL.inputsLen = 95;
    AVJL.inputs[0] = 65; AVJL.inputs[1] = 116; AVJL.inputs[2] = 116; AVJL.inputs[3] = 184; AVJL.inputs[4] = 8; AVJL.inputs[5] = 221; AVJL.inputs[6] = 181; AVJL.inputs[7] = 7; AVJL.inputs[8] = 65; AVJL.inputs[9] = 221; AVJL.inputs[10] = 221; AVJL.inputs[11] = 15; AVJL.inputs[12] = 184; AVJL.inputs[13] = 28; AVJL.inputs[14] = 117; AVJL.inputs[15] = 196; AVJL.inputs[16] = 2; AVJL.inputs[17] = 63; AVJL.inputs[18] = 2; AVJL.inputs[19] = 2; AVJL.inputs[20] = 173; AVJL.inputs[21] = 173; AVJL.inputs[22] = 2; AVJL.inputs[23] = 184; AVJL.inputs[24] = 57; AVJL.inputs[25] = 68; AVJL.inputs[26] = 184; AVJL.inputs[27] = 2; AVJL.inputs[28] = 58; AVJL.inputs[29] = 2; AVJL.inputs[30] = 2; AVJL.inputs[31] = 184; AVJL.inputs[32] = 184; AVJL.inputs[33] = 196; AVJL.inputs[34] = 65; AVJL.inputs[35] = 2; AVJL.inputs[36] = 62; AVJL.inputs[37] = 178; AVJL.inputs[38] = 184; AVJL.inputs[39] = 82; AVJL.inputs[40] = 201; AVJL.inputs[41] = 82; AVJL.inputs[42] = 201; AVJL.inputs[43] = 115; AVJL.inputs[44] = 55; AVJL.inputs[45] = 167; AVJL.inputs[46] = 65; AVJL.inputs[47] = 172; AVJL.inputs[48] = 186; AVJL.inputs[49] = 64; AVJL.inputs[50] = 64; AVJL.inputs[51] = 64; AVJL.inputs[52] = 64; AVJL.inputs[53] = 54; AVJL.inputs[54] = 185; AVJL.inputs[55] = 184; AVJL.inputs[56] = 179; AVJL.inputs[57] = 178; AVJL.inputs[58] = 82; AVJL.inputs[59] = 138; AVJL.inputs[60] = 138; AVJL.inputs[61] = 178; AVJL.inputs[62] = 174; AVJL.inputs[63] = 174; AVJL.inputs[64] = 174; AVJL.inputs[65] = 205; AVJL.inputs[66] = 196; AVJL.inputs[67] = 174; AVJL.inputs[68] = 174; AVJL.inputs[69] = 68; AVJL.inputs[70] = 59; AVJL.inputs[71] = 186; AVJL.inputs[72] = 185; AVJL.inputs[73] = 181; AVJL.inputs[74] = 174; AVJL.inputs[75] = 68; AVJL.inputs[76] = 68; AVJL.inputs[77] = 69; AVJL.inputs[78] = 173; AVJL.inputs[79] = 205; AVJL.inputs[80] = 205; AVJL.inputs[81] = 205; AVJL.inputs[82] = 174; AVJL.inputs[83] = 68; AVJL.inputs[84] = 205; AVJL.inputs[85] = 174; AVJL.inputs[86] = 68; AVJL.inputs[87] = 178; AVJL.inputs[88] = 187; AVJL.inputs[89] = 68; AVJL.inputs[90] = 172; AVJL.inputs[91] = 172; AVJL.inputs[92] = 138; AVJL.inputs[93] = 138; AVJL.inputs[94] = 68;
    AVJL.weightsLen = 95;
    AVJL.weights[0] = 1; AVJL.weights[1] = 1; AVJL.weights[2] = 1; AVJL.weights[3] = 1; AVJL.weights[4] = 1; AVJL.weights[5] = 1; AVJL.weights[6] = 1; AVJL.weights[7] = 1; AVJL.weights[8] = 1; AVJL.weights[9] = 1; AVJL.weights[10] = 1; AVJL.weights[11] = 1; AVJL.weights[12] = 1; AVJL.weights[13] = 1; AVJL.weights[14] = 1; AVJL.weights[15] = 1; AVJL.weights[16] = 1; AVJL.weights[17] = 1; AVJL.weights[18] = 1; AVJL.weights[19] = 1; AVJL.weights[20] = 1; AVJL.weights[21] = 1; AVJL.weights[22] = 1; AVJL.weights[23] = 1; AVJL.weights[24] = 1; AVJL.weights[25] = 1; AVJL.weights[26] = 1; AVJL.weights[27] = 1; AVJL.weights[28] = 1; AVJL.weights[29] = 1; AVJL.weights[30] = 1; AVJL.weights[31] = 1; AVJL.weights[32] = 1; AVJL.weights[33] = 1; AVJL.weights[34] = 1; AVJL.weights[35] = 1; AVJL.weights[36] = 1; AVJL.weights[37] = 1; AVJL.weights[38] = 1; AVJL.weights[39] = 1; AVJL.weights[40] = 1; AVJL.weights[41] = 1; AVJL.weights[42] = 1; AVJL.weights[43] = 1; AVJL.weights[44] = 1; AVJL.weights[45] = 1; AVJL.weights[46] = 1; AVJL.weights[47] = 1; AVJL.weights[48] = 1; AVJL.weights[49] = 1; AVJL.weights[50] = 1; AVJL.weights[51] = 1; AVJL.weights[52] = 1; AVJL.weights[53] = 1; AVJL.weights[54] = 1; AVJL.weights[55] = 1; AVJL.weights[56] = 1; AVJL.weights[57] = 1; AVJL.weights[58] = 1; AVJL.weights[59] = 1; AVJL.weights[60] = 1; AVJL.weights[61] = 1; AVJL.weights[62] = 1; AVJL.weights[63] = 1; AVJL.weights[64] = 1; AVJL.weights[65] = 1; AVJL.weights[66] = 1; AVJL.weights[67] = 1; AVJL.weights[68] = 1; AVJL.weights[69] = 1; AVJL.weights[70] = 1; AVJL.weights[71] = 1; AVJL.weights[72] = 1; AVJL.weights[73] = 1; AVJL.weights[74] = 1; AVJL.weights[75] = 1; AVJL.weights[76] = 1; AVJL.weights[77] = 1; AVJL.weights[78] = 1; AVJL.weights[79] = 1; AVJL.weights[80] = 1; AVJL.weights[81] = 1; AVJL.weights[82] = 1; AVJL.weights[83] = 1; AVJL.weights[84] = 1; AVJL.weights[85] = 1; AVJL.weights[86] = 1; AVJL.weights[87] = 1; AVJL.weights[88] = 1; AVJL.weights[89] = 1; AVJL.weights[90] = 1; AVJL.weights[91] = 1; AVJL.weights[92] = 1; AVJL.weights[93] = 1; AVJL.weights[94] = 1;
    if (id == 67) {
        return AVJL;
    }


    neuron AVJR;
    AVJR.cellID = 68;
    AVJR.threshold = 1;
    AVJR.inputsLen = 60;
    AVJR.inputs[0] = 195; AVJR.inputs[1] = 1; AVJR.inputs[2] = 7; AVJR.inputs[3] = 66; AVJR.inputs[4] = 4; AVJR.inputs[5] = 7; AVJR.inputs[6] = 8; AVJR.inputs[7] = 8; AVJR.inputs[8] = 66; AVJR.inputs[9] = 255; AVJR.inputs[10] = 243; AVJR.inputs[11] = 16; AVJR.inputs[12] = 173; AVJR.inputs[13] = 184; AVJR.inputs[14] = 1; AVJR.inputs[15] = 1; AVJR.inputs[16] = 1; AVJR.inputs[17] = 7; AVJR.inputs[18] = 1; AVJR.inputs[19] = 196; AVJR.inputs[20] = 196; AVJR.inputs[21] = 195; AVJR.inputs[22] = 1; AVJR.inputs[23] = 1; AVJR.inputs[24] = 259; AVJR.inputs[25] = 66; AVJR.inputs[26] = 115; AVJR.inputs[27] = 178; AVJR.inputs[28] = 184; AVJR.inputs[29] = 184; AVJR.inputs[30] = 195; AVJR.inputs[31] = 195; AVJR.inputs[32] = 179; AVJR.inputs[33] = 81; AVJR.inputs[34] = 72; AVJR.inputs[35] = 178; AVJR.inputs[36] = 59; AVJR.inputs[37] = 65; AVJR.inputs[38] = 179; AVJR.inputs[39] = 178; AVJR.inputs[40] = 56; AVJR.inputs[41] = 67; AVJR.inputs[42] = 64; AVJR.inputs[43] = 187; AVJR.inputs[44] = 71; AVJR.inputs[45] = 66; AVJR.inputs[46] = 178; AVJR.inputs[47] = 178; AVJR.inputs[48] = 81; AVJR.inputs[49] = 195; AVJR.inputs[50] = 138; AVJR.inputs[51] = 172; AVJR.inputs[52] = 173; AVJR.inputs[53] = 173; AVJR.inputs[54] = 178; AVJR.inputs[55] = 161; AVJR.inputs[56] = 112; AVJR.inputs[57] = 174; AVJR.inputs[58] = 172; AVJR.inputs[59] = 164;
    AVJR.weightsLen = 60;
    AVJR.weights[0] = 1; AVJR.weights[1] = 1; AVJR.weights[2] = 1; AVJR.weights[3] = 1; AVJR.weights[4] = 1; AVJR.weights[5] = 1; AVJR.weights[6] = 1; AVJR.weights[7] = 1; AVJR.weights[8] = 1; AVJR.weights[9] = 1; AVJR.weights[10] = 1; AVJR.weights[11] = 1; AVJR.weights[12] = 1; AVJR.weights[13] = 1; AVJR.weights[14] = 1; AVJR.weights[15] = 1; AVJR.weights[16] = 1; AVJR.weights[17] = 1; AVJR.weights[18] = 1; AVJR.weights[19] = 1; AVJR.weights[20] = 1; AVJR.weights[21] = 1; AVJR.weights[22] = 1; AVJR.weights[23] = 1; AVJR.weights[24] = 1; AVJR.weights[25] = 1; AVJR.weights[26] = 1; AVJR.weights[27] = 1; AVJR.weights[28] = 1; AVJR.weights[29] = 1; AVJR.weights[30] = 1; AVJR.weights[31] = 1; AVJR.weights[32] = 1; AVJR.weights[33] = 1; AVJR.weights[34] = 1; AVJR.weights[35] = 1; AVJR.weights[36] = 1; AVJR.weights[37] = 1; AVJR.weights[38] = 1; AVJR.weights[39] = 1; AVJR.weights[40] = 1; AVJR.weights[41] = 1; AVJR.weights[42] = 1; AVJR.weights[43] = 1; AVJR.weights[44] = 1; AVJR.weights[45] = 1; AVJR.weights[46] = 1; AVJR.weights[47] = 1; AVJR.weights[48] = 1; AVJR.weights[49] = 1; AVJR.weights[50] = 1; AVJR.weights[51] = 1; AVJR.weights[52] = 1; AVJR.weights[53] = 1; AVJR.weights[54] = 1; AVJR.weights[55] = 1; AVJR.weights[56] = 1; AVJR.weights[57] = 1; AVJR.weights[58] = 1; AVJR.weights[59] = 1;
    if (id == 68) {
        return AVJR;
    }


    neuron AVKL;
    AVKL.cellID = 69;
    AVKL.threshold = 1;
    AVKL.inputsLen = 109;
    AVKL.inputs[0] = 198; AVKL.inputs[1] = 219; AVKL.inputs[2] = 205; AVKL.inputs[3] = 185; AVKL.inputs[4] = 219; AVKL.inputs[5] = 219; AVKL.inputs[6] = 219; AVKL.inputs[7] = 205; AVKL.inputs[8] = 218; AVKL.inputs[9] = 198; AVKL.inputs[10] = 201; AVKL.inputs[11] = 198; AVKL.inputs[12] = 218; AVKL.inputs[13] = 218; AVKL.inputs[14] = 218; AVKL.inputs[15] = 218; AVKL.inputs[16] = 185; AVKL.inputs[17] = 185; AVKL.inputs[18] = 185; AVKL.inputs[19] = 205; AVKL.inputs[20] = 205; AVKL.inputs[21] = 185; AVKL.inputs[22] = 185; AVKL.inputs[23] = 70; AVKL.inputs[24] = 113; AVKL.inputs[25] = 113; AVKL.inputs[26] = 185; AVKL.inputs[27] = 60; AVKL.inputs[28] = 177; AVKL.inputs[29] = 177; AVKL.inputs[30] = 161; AVKL.inputs[31] = 160; AVKL.inputs[32] = 177; AVKL.inputs[33] = 161; AVKL.inputs[34] = 160; AVKL.inputs[35] = 161; AVKL.inputs[36] = 177; AVKL.inputs[37] = 69; AVKL.inputs[38] = 186; AVKL.inputs[39] = 69; AVKL.inputs[40] = 72; AVKL.inputs[41] = 177; AVKL.inputs[42] = 177; AVKL.inputs[43] = 161; AVKL.inputs[44] = 161; AVKL.inputs[45] = 218; AVKL.inputs[46] = 160; AVKL.inputs[47] = 161; AVKL.inputs[48] = 161; AVKL.inputs[49] = 161; AVKL.inputs[50] = 160; AVKL.inputs[51] = 161; AVKL.inputs[52] = 161; AVKL.inputs[53] = 161; AVKL.inputs[54] = 161; AVKL.inputs[55] = 177; AVKL.inputs[56] = 177; AVKL.inputs[57] = 177; AVKL.inputs[58] = 160; AVKL.inputs[59] = 161; AVKL.inputs[60] = 161; AVKL.inputs[61] = 177; AVKL.inputs[62] = 177; AVKL.inputs[63] = 177; AVKL.inputs[64] = 177; AVKL.inputs[65] = 160; AVKL.inputs[66] = 177; AVKL.inputs[67] = 177; AVKL.inputs[68] = 161; AVKL.inputs[69] = 161; AVKL.inputs[70] = 71; AVKL.inputs[71] = 71; AVKL.inputs[72] = 185; AVKL.inputs[73] = 70; AVKL.inputs[74] = 242; AVKL.inputs[75] = 244; AVKL.inputs[76] = 198; AVKL.inputs[77] = 241; AVKL.inputs[78] = 185; AVKL.inputs[79] = 70; AVKL.inputs[80] = 180; AVKL.inputs[81] = 180; AVKL.inputs[82] = 70; AVKL.inputs[83] = 243; AVKL.inputs[84] = 243; AVKL.inputs[85] = 181; AVKL.inputs[86] = 181; AVKL.inputs[87] = 292; AVKL.inputs[88] = 111; AVKL.inputs[89] = 275; AVKL.inputs[90] = 111; AVKL.inputs[91] = 197; AVKL.inputs[92] = 160; AVKL.inputs[93] = 111; AVKL.inputs[94] = 111; AVKL.inputs[95] = 111; AVKL.inputs[96] = 177; AVKL.inputs[97] = 111; AVKL.inputs[98] = 111; AVKL.inputs[99] = 111; AVKL.inputs[100] = 111; AVKL.inputs[101] = 111; AVKL.inputs[102] = 111; AVKL.inputs[103] = 161; AVKL.inputs[104] = 111; AVKL.inputs[105] = 111; AVKL.inputs[106] = 111; AVKL.inputs[107] = 111; AVKL.inputs[108] = 111;
    AVKL.weightsLen = 109;
    AVKL.weights[0] = 1; AVKL.weights[1] = 1; AVKL.weights[2] = 1; AVKL.weights[3] = 1; AVKL.weights[4] = 1; AVKL.weights[5] = 1; AVKL.weights[6] = 1; AVKL.weights[7] = 1; AVKL.weights[8] = 1; AVKL.weights[9] = 1; AVKL.weights[10] = 1; AVKL.weights[11] = 1; AVKL.weights[12] = 1; AVKL.weights[13] = 1; AVKL.weights[14] = 1; AVKL.weights[15] = 1; AVKL.weights[16] = 1; AVKL.weights[17] = 1; AVKL.weights[18] = 1; AVKL.weights[19] = 1; AVKL.weights[20] = 1; AVKL.weights[21] = 1; AVKL.weights[22] = 1; AVKL.weights[23] = 1; AVKL.weights[24] = 1; AVKL.weights[25] = 1; AVKL.weights[26] = 1; AVKL.weights[27] = 1; AVKL.weights[28] = 1; AVKL.weights[29] = 1; AVKL.weights[30] = 1; AVKL.weights[31] = 1; AVKL.weights[32] = 1; AVKL.weights[33] = 1; AVKL.weights[34] = 1; AVKL.weights[35] = 1; AVKL.weights[36] = 1; AVKL.weights[37] = 1; AVKL.weights[38] = 1; AVKL.weights[39] = 1; AVKL.weights[40] = 1; AVKL.weights[41] = 1; AVKL.weights[42] = 1; AVKL.weights[43] = 1; AVKL.weights[44] = 1; AVKL.weights[45] = 1; AVKL.weights[46] = 1; AVKL.weights[47] = 1; AVKL.weights[48] = 1; AVKL.weights[49] = 1; AVKL.weights[50] = 1; AVKL.weights[51] = 1; AVKL.weights[52] = 1; AVKL.weights[53] = 1; AVKL.weights[54] = 1; AVKL.weights[55] = 1; AVKL.weights[56] = 1; AVKL.weights[57] = 1; AVKL.weights[58] = 1; AVKL.weights[59] = 1; AVKL.weights[60] = 1; AVKL.weights[61] = 1; AVKL.weights[62] = 1; AVKL.weights[63] = 1; AVKL.weights[64] = 1; AVKL.weights[65] = 1; AVKL.weights[66] = 1; AVKL.weights[67] = 1; AVKL.weights[68] = 1; AVKL.weights[69] = 1; AVKL.weights[70] = 1; AVKL.weights[71] = 1; AVKL.weights[72] = 1; AVKL.weights[73] = 1; AVKL.weights[74] = 1; AVKL.weights[75] = 1; AVKL.weights[76] = 1; AVKL.weights[77] = 1; AVKL.weights[78] = 1; AVKL.weights[79] = 1; AVKL.weights[80] = 1; AVKL.weights[81] = 1; AVKL.weights[82] = 1; AVKL.weights[83] = 1; AVKL.weights[84] = 1; AVKL.weights[85] = 1; AVKL.weights[86] = 1; AVKL.weights[87] = 1; AVKL.weights[88] = 1; AVKL.weights[89] = 1; AVKL.weights[90] = 1; AVKL.weights[91] = 1; AVKL.weights[92] = 1; AVKL.weights[93] = 1; AVKL.weights[94] = 1; AVKL.weights[95] = 1; AVKL.weights[96] = 1; AVKL.weights[97] = 1; AVKL.weights[98] = 1; AVKL.weights[99] = 1; AVKL.weights[100] = 1; AVKL.weights[101] = 1; AVKL.weights[102] = 1; AVKL.weights[103] = 1; AVKL.weights[104] = 1; AVKL.weights[105] = 1; AVKL.weights[106] = 1; AVKL.weights[107] = 1; AVKL.weights[108] = 1;
    if (id == 69) {
        return AVKL;
    }


    neuron AVKR;
    AVKR.cellID = 70;
    AVKR.threshold = 1;
    AVKR.inputsLen = 60;
    AVKR.inputs[0] = 198; AVKR.inputs[1] = 219; AVKR.inputs[2] = 185; AVKR.inputs[3] = 200; AVKR.inputs[4] = 205; AVKR.inputs[5] = 185; AVKR.inputs[6] = 205; AVKR.inputs[7] = 193; AVKR.inputs[8] = 219; AVKR.inputs[9] = 219; AVKR.inputs[10] = 219; AVKR.inputs[11] = 210; AVKR.inputs[12] = 219; AVKR.inputs[13] = 205; AVKR.inputs[14] = 205; AVKR.inputs[15] = 205; AVKR.inputs[16] = 205; AVKR.inputs[17] = 211; AVKR.inputs[18] = 205; AVKR.inputs[19] = 197; AVKR.inputs[20] = 197; AVKR.inputs[21] = 71; AVKR.inputs[22] = 21; AVKR.inputs[23] = 218; AVKR.inputs[24] = 185; AVKR.inputs[25] = 218; AVKR.inputs[26] = 205; AVKR.inputs[27] = 218; AVKR.inputs[28] = 218; AVKR.inputs[29] = 218; AVKR.inputs[30] = 218; AVKR.inputs[31] = 185; AVKR.inputs[32] = 218; AVKR.inputs[33] = 185; AVKR.inputs[34] = 185; AVKR.inputs[35] = 56; AVKR.inputs[36] = 56; AVKR.inputs[37] = 70; AVKR.inputs[38] = 244; AVKR.inputs[39] = 192; AVKR.inputs[40] = 241; AVKR.inputs[41] = 201; AVKR.inputs[42] = 242; AVKR.inputs[43] = 185; AVKR.inputs[44] = 242; AVKR.inputs[45] = 180; AVKR.inputs[46] = 244; AVKR.inputs[47] = 180; AVKR.inputs[48] = 198; AVKR.inputs[49] = 182; AVKR.inputs[50] = 180; AVKR.inputs[51] = 180; AVKR.inputs[52] = 180; AVKR.inputs[53] = 180; AVKR.inputs[54] = 180; AVKR.inputs[55] = 180; AVKR.inputs[56] = 182; AVKR.inputs[57] = 180; AVKR.inputs[58] = 160; AVKR.inputs[59] = 182;
    AVKR.weightsLen = 60;
    AVKR.weights[0] = 1; AVKR.weights[1] = 1; AVKR.weights[2] = 1; AVKR.weights[3] = 1; AVKR.weights[4] = 1; AVKR.weights[5] = 1; AVKR.weights[6] = 1; AVKR.weights[7] = 1; AVKR.weights[8] = 1; AVKR.weights[9] = 1; AVKR.weights[10] = 1; AVKR.weights[11] = 1; AVKR.weights[12] = 1; AVKR.weights[13] = 1; AVKR.weights[14] = 1; AVKR.weights[15] = 1; AVKR.weights[16] = 1; AVKR.weights[17] = 1; AVKR.weights[18] = 1; AVKR.weights[19] = 1; AVKR.weights[20] = 1; AVKR.weights[21] = 1; AVKR.weights[22] = 1; AVKR.weights[23] = 1; AVKR.weights[24] = 1; AVKR.weights[25] = 1; AVKR.weights[26] = 1; AVKR.weights[27] = 1; AVKR.weights[28] = 1; AVKR.weights[29] = 1; AVKR.weights[30] = 1; AVKR.weights[31] = 1; AVKR.weights[32] = 1; AVKR.weights[33] = 1; AVKR.weights[34] = 1; AVKR.weights[35] = 1; AVKR.weights[36] = 1; AVKR.weights[37] = 1; AVKR.weights[38] = 1; AVKR.weights[39] = 1; AVKR.weights[40] = 1; AVKR.weights[41] = 1; AVKR.weights[42] = 1; AVKR.weights[43] = 1; AVKR.weights[44] = 1; AVKR.weights[45] = 1; AVKR.weights[46] = 1; AVKR.weights[47] = 1; AVKR.weights[48] = 1; AVKR.weights[49] = 1; AVKR.weights[50] = 1; AVKR.weights[51] = 1; AVKR.weights[52] = 1; AVKR.weights[53] = 1; AVKR.weights[54] = 1; AVKR.weights[55] = 1; AVKR.weights[56] = 1; AVKR.weights[57] = 1; AVKR.weights[58] = 1; AVKR.weights[59] = 1;
    if (id == 70) {
        return AVKR;
    }


    neuron AVL;
    AVL.cellID = 71;
    AVL.threshold = 1;
    AVL.inputsLen = 68;
    AVL.inputs[0] = 205; AVL.inputs[1] = 185; AVL.inputs[2] = 130; AVL.inputs[3] = 3; AVL.inputs[4] = 260; AVL.inputs[5] = 205; AVL.inputs[6] = 205; AVL.inputs[7] = 205; AVL.inputs[8] = 185; AVL.inputs[9] = 205; AVL.inputs[10] = 174; AVL.inputs[11] = 55; AVL.inputs[12] = 167; AVL.inputs[13] = 181; AVL.inputs[14] = 66; AVL.inputs[15] = 113; AVL.inputs[16] = 181; AVL.inputs[17] = 56; AVL.inputs[18] = 56; AVL.inputs[19] = 112; AVL.inputs[20] = 179; AVL.inputs[21] = 178; AVL.inputs[22] = 55; AVL.inputs[23] = 70; AVL.inputs[24] = 70; AVL.inputs[25] = 57; AVL.inputs[26] = 57; AVL.inputs[27] = 57; AVL.inputs[28] = 71; AVL.inputs[29] = 71; AVL.inputs[30] = 71; AVL.inputs[31] = 64; AVL.inputs[32] = 58; AVL.inputs[33] = 64; AVL.inputs[34] = 63; AVL.inputs[35] = 30; AVL.inputs[36] = 183; AVL.inputs[37] = 112; AVL.inputs[38] = 180; AVL.inputs[39] = 158; AVL.inputs[40] = 181; AVL.inputs[41] = 55; AVL.inputs[42] = 113; AVL.inputs[43] = 112; AVL.inputs[44] = 187; AVL.inputs[45] = 113; AVL.inputs[46] = 158; AVL.inputs[47] = 158; AVL.inputs[48] = 113; AVL.inputs[49] = 113; AVL.inputs[50] = 181; AVL.inputs[51] = 185; AVL.inputs[52] = 185; AVL.inputs[53] = 293; AVL.inputs[54] = 185; AVL.inputs[55] = 293; AVL.inputs[56] = 181; AVL.inputs[57] = 112; AVL.inputs[58] = 112; AVL.inputs[59] = 181; AVL.inputs[60] = 181; AVL.inputs[61] = 294; AVL.inputs[62] = 294; AVL.inputs[63] = 113; AVL.inputs[64] = 113; AVL.inputs[65] = 113; AVL.inputs[66] = 113; AVL.inputs[67] = 113;
    AVL.weightsLen = 68;
    AVL.weights[0] = 1; AVL.weights[1] = 1; AVL.weights[2] = 1; AVL.weights[3] = 1; AVL.weights[4] = 1; AVL.weights[5] = 1; AVL.weights[6] = 1; AVL.weights[7] = 1; AVL.weights[8] = 1; AVL.weights[9] = 1; AVL.weights[10] = 1; AVL.weights[11] = 1; AVL.weights[12] = 1; AVL.weights[13] = 1; AVL.weights[14] = 1; AVL.weights[15] = 1; AVL.weights[16] = 1; AVL.weights[17] = 1; AVL.weights[18] = 1; AVL.weights[19] = 1; AVL.weights[20] = 1; AVL.weights[21] = 1; AVL.weights[22] = 1; AVL.weights[23] = 1; AVL.weights[24] = 1; AVL.weights[25] = 1; AVL.weights[26] = 1; AVL.weights[27] = 1; AVL.weights[28] = 1; AVL.weights[29] = 1; AVL.weights[30] = 1; AVL.weights[31] = 1; AVL.weights[32] = 1; AVL.weights[33] = 1; AVL.weights[34] = 1; AVL.weights[35] = 1; AVL.weights[36] = 1; AVL.weights[37] = 1; AVL.weights[38] = 1; AVL.weights[39] = 1; AVL.weights[40] = 1; AVL.weights[41] = 1; AVL.weights[42] = 1; AVL.weights[43] = 1; AVL.weights[44] = 1; AVL.weights[45] = 1; AVL.weights[46] = 1; AVL.weights[47] = 1; AVL.weights[48] = 1; AVL.weights[49] = 1; AVL.weights[50] = 1; AVL.weights[51] = 1; AVL.weights[52] = 1; AVL.weights[53] = 1; AVL.weights[54] = 1; AVL.weights[55] = 1; AVL.weights[56] = 1; AVL.weights[57] = 1; AVL.weights[58] = 1; AVL.weights[59] = 1; AVL.weights[60] = 1; AVL.weights[61] = 1; AVL.weights[62] = 1; AVL.weights[63] = 1; AVL.weights[64] = 1; AVL.weights[65] = 1; AVL.weights[66] = 1; AVL.weights[67] = 1;
    if (id == 71) {
        return AVL;
    }


    neuron AVM;
    AVM.cellID = 72;
    AVM.threshold = 1;
    AVM.inputsLen = 2;
    AVM.inputs[0] = 68; AVM.inputs[1] = 184;
    AVM.weightsLen = 2;
    AVM.weights[0] = 1; AVM.weights[1] = 1;
    if (id == 72) {
        return AVM;
    }


    neuron AWAL;
    AWAL.cellID = 73;
    AWAL.threshold = 1;
    AWAL.inputsLen = 8;
    AWAL.inputs[0] = 75; AWAL.inputs[1] = 182; AWAL.inputs[2] = 7; AWAL.inputs[3] = 19; AWAL.inputs[4] = 75; AWAL.inputs[5] = 19; AWAL.inputs[6] = 19; AWAL.inputs[7] = 74;
    AWAL.weightsLen = 8;
    AWAL.weights[0] = 1; AWAL.weights[1] = 1; AWAL.weights[2] = 1; AWAL.weights[3] = 1; AWAL.weights[4] = 1; AWAL.weights[5] = 1; AWAL.weights[6] = 1; AWAL.weights[7] = 1;
    if (id == 73) {
        return AWAL;
    }


    neuron AWAR;
    AWAR.cellID = 74;
    AWAR.threshold = 1;
    AWAR.inputsLen = 18;
    AWAR.inputs[0] = 183; AWAR.inputs[1] = 51; AWAR.inputs[2] = 183; AWAR.inputs[3] = 22; AWAR.inputs[4] = 116; AWAR.inputs[5] = 20; AWAR.inputs[6] = 51; AWAR.inputs[7] = 6; AWAR.inputs[8] = 46; AWAR.inputs[9] = 46; AWAR.inputs[10] = 12; AWAR.inputs[11] = 12; AWAR.inputs[12] = 12; AWAR.inputs[13] = 41; AWAR.inputs[14] = 183; AWAR.inputs[15] = 45; AWAR.inputs[16] = 116; AWAR.inputs[17] = 47;
    AWAR.weightsLen = 18;
    AWAR.weights[0] = 1; AWAR.weights[1] = 1; AWAR.weights[2] = 1; AWAR.weights[3] = 1; AWAR.weights[4] = 1; AWAR.weights[5] = 1; AWAR.weights[6] = 1; AWAR.weights[7] = 1; AWAR.weights[8] = 1; AWAR.weights[9] = 1; AWAR.weights[10] = 1; AWAR.weights[11] = 1; AWAR.weights[12] = 1; AWAR.weights[13] = 1; AWAR.weights[14] = 1; AWAR.weights[15] = 1; AWAR.weights[16] = 1; AWAR.weights[17] = 1;
    if (id == 74) {
        return AWAR;
    }


    neuron AWBL;
    AWBL.cellID = 75;
    AWBL.threshold = 1;
    AWBL.inputsLen = 19;
    AWBL.inputs[0] = 45; AWBL.inputs[1] = 7; AWBL.inputs[2] = 7; AWBL.inputs[3] = 40; AWBL.inputs[4] = 9; AWBL.inputs[5] = 9; AWBL.inputs[6] = 9; AWBL.inputs[7] = 66; AWBL.inputs[8] = 73; AWBL.inputs[9] = 73; AWBL.inputs[10] = 73; AWBL.inputs[11] = 117; AWBL.inputs[12] = 73; AWBL.inputs[13] = 116; AWBL.inputs[14] = 7; AWBL.inputs[15] = 73; AWBL.inputs[16] = 116; AWBL.inputs[17] = 73; AWBL.inputs[18] = 76;
    AWBL.weightsLen = 19;
    AWBL.weights[0] = 1; AWBL.weights[1] = 1; AWBL.weights[2] = 1; AWBL.weights[3] = 1; AWBL.weights[4] = 1; AWBL.weights[5] = 1; AWBL.weights[6] = 1; AWBL.weights[7] = 1; AWBL.weights[8] = 1; AWBL.weights[9] = 1; AWBL.weights[10] = 1; AWBL.weights[11] = 1; AWBL.weights[12] = 1; AWBL.weights[13] = 1; AWBL.weights[14] = 1; AWBL.weights[15] = 1; AWBL.weights[16] = 1; AWBL.weights[17] = 1; AWBL.weights[18] = 1;
    if (id == 75) {
        return AWBL;
    }


    neuron AWBR;
    AWBR.cellID = 76;
    AWBR.threshold = 1;
    AWBR.inputsLen = 12;
    AWBR.inputs[0] = 65; AWBR.inputs[1] = 116; AWBR.inputs[2] = 6; AWBR.inputs[3] = 256; AWBR.inputs[4] = 20; AWBR.inputs[5] = 204; AWBR.inputs[6] = 116; AWBR.inputs[7] = 196; AWBR.inputs[8] = 65; AWBR.inputs[9] = 74; AWBR.inputs[10] = 221; AWBR.inputs[11] = 192;
    AWBR.weightsLen = 12;
    AWBR.weights[0] = 1; AWBR.weights[1] = 1; AWBR.weights[2] = 1; AWBR.weights[3] = 1; AWBR.weights[4] = 1; AWBR.weights[5] = 1; AWBR.weights[6] = 1; AWBR.weights[7] = 1; AWBR.weights[8] = 1; AWBR.weights[9] = 1; AWBR.weights[10] = 1; AWBR.weights[11] = 1;
    if (id == 76) {
        return AWBR;
    }


    neuron AWCL;
    AWCL.cellID = 77;
    AWCL.threshold = 1;
    AWCL.inputsLen = 33;
    AWCL.inputs[0] = 46; AWCL.inputs[1] = 40; AWCL.inputs[2] = 7; AWCL.inputs[3] = 40; AWCL.inputs[4] = 78; AWCL.inputs[5] = 40; AWCL.inputs[6] = 78; AWCL.inputs[7] = 78; AWCL.inputs[8] = 75; AWCL.inputs[9] = 258; AWCL.inputs[10] = 11; AWCL.inputs[11] = 12; AWCL.inputs[12] = 41; AWCL.inputs[13] = 12; AWCL.inputs[14] = 12; AWCL.inputs[15] = 19; AWCL.inputs[16] = 78; AWCL.inputs[17] = 78; AWCL.inputs[18] = 18; AWCL.inputs[19] = 78; AWCL.inputs[20] = 40; AWCL.inputs[21] = 19; AWCL.inputs[22] = 40; AWCL.inputs[23] = 19; AWCL.inputs[24] = 78; AWCL.inputs[25] = 78; AWCL.inputs[26] = 40; AWCL.inputs[27] = 46; AWCL.inputs[28] = 47; AWCL.inputs[29] = 40; AWCL.inputs[30] = 12; AWCL.inputs[31] = 78; AWCL.inputs[32] = 40;
    AWCL.weightsLen = 33;
    AWCL.weights[0] = 1; AWCL.weights[1] = 1; AWCL.weights[2] = 1; AWCL.weights[3] = 1; AWCL.weights[4] = 1; AWCL.weights[5] = 1; AWCL.weights[6] = 1; AWCL.weights[7] = 1; AWCL.weights[8] = 1; AWCL.weights[9] = 1; AWCL.weights[10] = 1; AWCL.weights[11] = 1; AWCL.weights[12] = 1; AWCL.weights[13] = 1; AWCL.weights[14] = 1; AWCL.weights[15] = 1; AWCL.weights[16] = 1; AWCL.weights[17] = 1; AWCL.weights[18] = 1; AWCL.weights[19] = 1; AWCL.weights[20] = 1; AWCL.weights[21] = 1; AWCL.weights[22] = 1; AWCL.weights[23] = 1; AWCL.weights[24] = 1; AWCL.weights[25] = 1; AWCL.weights[26] = 1; AWCL.weights[27] = 1; AWCL.weights[28] = 1; AWCL.weights[29] = 1; AWCL.weights[30] = 1; AWCL.weights[31] = 1; AWCL.weights[32] = 1;
    if (id == 77) {
        return AWCL;
    }


    neuron AWCR;
    AWCR.cellID = 78;
    AWCR.threshold = 1;
    AWCR.inputsLen = 41;
    AWCR.inputs[0] = 46; AWCR.inputs[1] = 40; AWCR.inputs[2] = 47; AWCR.inputs[3] = 40; AWCR.inputs[4] = 47; AWCR.inputs[5] = 77; AWCR.inputs[6] = 5; AWCR.inputs[7] = 6; AWCR.inputs[8] = 8; AWCR.inputs[9] = 21; AWCR.inputs[10] = 21; AWCR.inputs[11] = 11; AWCR.inputs[12] = 12; AWCR.inputs[13] = 12; AWCR.inputs[14] = 22; AWCR.inputs[15] = 22; AWCR.inputs[16] = 11; AWCR.inputs[17] = 77; AWCR.inputs[18] = 77; AWCR.inputs[19] = 12; AWCR.inputs[20] = 40; AWCR.inputs[21] = 40; AWCR.inputs[22] = 19; AWCR.inputs[23] = 40; AWCR.inputs[24] = 41; AWCR.inputs[25] = 40; AWCR.inputs[26] = 40; AWCR.inputs[27] = 40; AWCR.inputs[28] = 46; AWCR.inputs[29] = 77; AWCR.inputs[30] = 46; AWCR.inputs[31] = 47; AWCR.inputs[32] = 77; AWCR.inputs[33] = 47; AWCR.inputs[34] = 8; AWCR.inputs[35] = 14; AWCR.inputs[36] = 77; AWCR.inputs[37] = 77; AWCR.inputs[38] = 77; AWCR.inputs[39] = 8; AWCR.inputs[40] = 12;
    AWCR.weightsLen = 41;
    AWCR.weights[0] = 1; AWCR.weights[1] = 1; AWCR.weights[2] = 1; AWCR.weights[3] = 1; AWCR.weights[4] = 1; AWCR.weights[5] = 1; AWCR.weights[6] = 1; AWCR.weights[7] = 1; AWCR.weights[8] = 1; AWCR.weights[9] = 1; AWCR.weights[10] = 1; AWCR.weights[11] = 1; AWCR.weights[12] = 1; AWCR.weights[13] = 1; AWCR.weights[14] = 1; AWCR.weights[15] = 1; AWCR.weights[16] = 1; AWCR.weights[17] = 1; AWCR.weights[18] = 1; AWCR.weights[19] = 1; AWCR.weights[20] = 1; AWCR.weights[21] = 1; AWCR.weights[22] = 1; AWCR.weights[23] = 1; AWCR.weights[24] = 1; AWCR.weights[25] = 1; AWCR.weights[26] = 1; AWCR.weights[27] = 1; AWCR.weights[28] = 1; AWCR.weights[29] = 1; AWCR.weights[30] = 1; AWCR.weights[31] = 1; AWCR.weights[32] = 1; AWCR.weights[33] = 1; AWCR.weights[34] = 1; AWCR.weights[35] = 1; AWCR.weights[36] = 1; AWCR.weights[37] = 1; AWCR.weights[38] = 1; AWCR.weights[39] = 1; AWCR.weights[40] = 1;
    if (id == 78) {
        return AWCR;
    }


    neuron BAGL;
    BAGL.cellID = 79;
    BAGL.threshold = 1;
    BAGL.inputsLen = 26;
    BAGL.inputs[0] = 6; BAGL.inputs[1] = 6; BAGL.inputs[2] = 17; BAGL.inputs[3] = 17; BAGL.inputs[4] = 17; BAGL.inputs[5] = 17; BAGL.inputs[6] = 191; BAGL.inputs[7] = 191; BAGL.inputs[8] = 28; BAGL.inputs[9] = 28; BAGL.inputs[10] = 28; BAGL.inputs[11] = 28; BAGL.inputs[12] = 28; BAGL.inputs[13] = 80; BAGL.inputs[14] = 218; BAGL.inputs[15] = 53; BAGL.inputs[16] = 191; BAGL.inputs[17] = 191; BAGL.inputs[18] = 198; BAGL.inputs[19] = 199; BAGL.inputs[20] = 191; BAGL.inputs[21] = 6; BAGL.inputs[22] = 198; BAGL.inputs[23] = 204; BAGL.inputs[24] = 80; BAGL.inputs[25] = 197;
    BAGL.weightsLen = 26;
    BAGL.weights[0] = 1; BAGL.weights[1] = 1; BAGL.weights[2] = 1; BAGL.weights[3] = 1; BAGL.weights[4] = 1; BAGL.weights[5] = 1; BAGL.weights[6] = 1; BAGL.weights[7] = 1; BAGL.weights[8] = 1; BAGL.weights[9] = 1; BAGL.weights[10] = 1; BAGL.weights[11] = 1; BAGL.weights[12] = 1; BAGL.weights[13] = 1; BAGL.weights[14] = 1; BAGL.weights[15] = 1; BAGL.weights[16] = 1; BAGL.weights[17] = 1; BAGL.weights[18] = 1; BAGL.weights[19] = 1; BAGL.weights[20] = 1; BAGL.weights[21] = 1; BAGL.weights[22] = 1; BAGL.weights[23] = 1; BAGL.weights[24] = 1; BAGL.weights[25] = 1;
    if (id == 79) {
        return BAGL;
    }


    neuron BAGR;
    BAGR.cellID = 80;
    BAGR.threshold = 1;
    BAGR.inputsLen = 25;
    BAGR.inputs[0] = 28; BAGR.inputs[1] = 136; BAGR.inputs[2] = 199; BAGR.inputs[3] = 190; BAGR.inputs[4] = 190; BAGR.inputs[5] = 18; BAGR.inputs[6] = 18; BAGR.inputs[7] = 18; BAGR.inputs[8] = 20; BAGR.inputs[9] = 204; BAGR.inputs[10] = 197; BAGR.inputs[11] = 188; BAGR.inputs[12] = 28; BAGR.inputs[13] = 18; BAGR.inputs[14] = 52; BAGR.inputs[15] = 197; BAGR.inputs[16] = 190; BAGR.inputs[17] = 18; BAGR.inputs[18] = 52; BAGR.inputs[19] = 28; BAGR.inputs[20] = 79; BAGR.inputs[21] = 255; BAGR.inputs[22] = 255; BAGR.inputs[23] = 204; BAGR.inputs[24] = 204;
    BAGR.weightsLen = 25;
    BAGR.weights[0] = 1; BAGR.weights[1] = 1; BAGR.weights[2] = 1; BAGR.weights[3] = 1; BAGR.weights[4] = 1; BAGR.weights[5] = 1; BAGR.weights[6] = 1; BAGR.weights[7] = 1; BAGR.weights[8] = 1; BAGR.weights[9] = 1; BAGR.weights[10] = 1; BAGR.weights[11] = 1; BAGR.weights[12] = 1; BAGR.weights[13] = 1; BAGR.weights[14] = 1; BAGR.weights[15] = 1; BAGR.weights[16] = 1; BAGR.weights[17] = 1; BAGR.weights[18] = 1; BAGR.weights[19] = 1; BAGR.weights[20] = 1; BAGR.weights[21] = 1; BAGR.weights[22] = 1; BAGR.weights[23] = 1; BAGR.weights[24] = 1;
    if (id == 80) {
        return BAGR;
    }


    neuron BDUL;
    BDUL.cellID = 81;
    BDUL.threshold = 1;
    BDUL.inputsLen = 18;
    BDUL.inputs[0] = 24; BDUL.inputs[1] = 24; BDUL.inputs[2] = 24; BDUL.inputs[3] = 24; BDUL.inputs[4] = 24; BDUL.inputs[5] = 24; BDUL.inputs[6] = 24; BDUL.inputs[7] = 24; BDUL.inputs[8] = 24; BDUL.inputs[9] = 72; BDUL.inputs[10] = 72; BDUL.inputs[11] = 179; BDUL.inputs[12] = 72; BDUL.inputs[13] = 178; BDUL.inputs[14] = 178; BDUL.inputs[15] = 70; BDUL.inputs[16] = 3; BDUL.inputs[17] = 178;
    BDUL.weightsLen = 18;
    BDUL.weights[0] = 1; BDUL.weights[1] = 1; BDUL.weights[2] = 1; BDUL.weights[3] = 1; BDUL.weights[4] = 1; BDUL.weights[5] = 1; BDUL.weights[6] = 1; BDUL.weights[7] = 1; BDUL.weights[8] = 1; BDUL.weights[9] = 1; BDUL.weights[10] = 1; BDUL.weights[11] = 1; BDUL.weights[12] = 1; BDUL.weights[13] = 1; BDUL.weights[14] = 1; BDUL.weights[15] = 1; BDUL.weights[16] = 1; BDUL.weights[17] = 1;
    if (id == 81) {
        return BDUL;
    }


    neuron BDUR;
    BDUR.cellID = 82;
    BDUR.threshold = 1;
    BDUR.inputsLen = 21;
    BDUR.inputs[0] = 25; BDUR.inputs[1] = 25; BDUR.inputs[2] = 86; BDUR.inputs[3] = 86; BDUR.inputs[4] = 86; BDUR.inputs[5] = 117; BDUR.inputs[6] = 25; BDUR.inputs[7] = 25; BDUR.inputs[8] = 25; BDUR.inputs[9] = 16; BDUR.inputs[10] = 25; BDUR.inputs[11] = 25; BDUR.inputs[12] = 25; BDUR.inputs[13] = 25; BDUR.inputs[14] = 72; BDUR.inputs[15] = 65; BDUR.inputs[16] = 72; BDUR.inputs[17] = 72; BDUR.inputs[18] = 72; BDUR.inputs[19] = 184; BDUR.inputs[20] = 117;
    BDUR.weightsLen = 21;
    BDUR.weights[0] = 1; BDUR.weights[1] = 1; BDUR.weights[2] = 1; BDUR.weights[3] = 1; BDUR.weights[4] = 1; BDUR.weights[5] = 1; BDUR.weights[6] = 1; BDUR.weights[7] = 1; BDUR.weights[8] = 1; BDUR.weights[9] = 1; BDUR.weights[10] = 1; BDUR.weights[11] = 1; BDUR.weights[12] = 1; BDUR.weights[13] = 1; BDUR.weights[14] = 1; BDUR.weights[15] = 1; BDUR.weights[16] = 1; BDUR.weights[17] = 1; BDUR.weights[18] = 1; BDUR.weights[19] = 1; BDUR.weights[20] = 1;
    if (id == 82) {
        return BDUR;
    }


    neuron CANL;
    CANL.cellID = 83;
    CANL.threshold = 1;
    CANL.inputsLen = 0;

    CANL.weightsLen = 0;
    CANL.weights[0] = 1; CANL.weights[1] = 1; CANL.weights[2] = 1; CANL.weights[3] = 1; CANL.weights[4] = 1; CANL.weights[5] = 1; CANL.weights[6] = 1; CANL.weights[7] = 1; CANL.weights[8] = 1; CANL.weights[9] = 1; CANL.weights[10] = 1; CANL.weights[11] = 1; CANL.weights[12] = 1; CANL.weights[13] = 1; CANL.weights[14] = 1; CANL.weights[15] = 1; CANL.weights[16] = 1; CANL.weights[17] = 1; CANL.weights[18] = 1; CANL.weights[19] = 1; CANL.weights[20] = 1;
    if (id == 83) {
        return CANL;
    }


    neuron CANR;
    CANR.cellID = 84;
    CANR.threshold = 1;
    CANR.inputsLen = 0;

    CANR.weightsLen = 0;
    CANR.weights[0] = 1; CANR.weights[1] = 1; CANR.weights[2] = 1; CANR.weights[3] = 1; CANR.weights[4] = 1; CANR.weights[5] = 1; CANR.weights[6] = 1; CANR.weights[7] = 1; CANR.weights[8] = 1; CANR.weights[9] = 1; CANR.weights[10] = 1; CANR.weights[11] = 1; CANR.weights[12] = 1; CANR.weights[13] = 1; CANR.weights[14] = 1; CANR.weights[15] = 1; CANR.weights[16] = 1; CANR.weights[17] = 1; CANR.weights[18] = 1; CANR.weights[19] = 1; CANR.weights[20] = 1;
    if (id == 84) {
        return CANR;
    }


    neuron CEPDL;
    CEPDL.cellID = 85;
    CEPDL.threshold = 1;
    CEPDL.inputsLen = 29;
    CEPDL.inputs[0] = 152; CEPDL.inputs[1] = 179; CEPDL.inputs[2] = 255; CEPDL.inputs[3] = 18; CEPDL.inputs[4] = 188; CEPDL.inputs[5] = 220; CEPDL.inputs[6] = 48; CEPDL.inputs[7] = 24; CEPDL.inputs[8] = 24; CEPDL.inputs[9] = 234; CEPDL.inputs[10] = 15; CEPDL.inputs[11] = 253; CEPDL.inputs[12] = 237; CEPDL.inputs[13] = 205; CEPDL.inputs[14] = 152; CEPDL.inputs[15] = 199; CEPDL.inputs[16] = 3; CEPDL.inputs[17] = 199; CEPDL.inputs[18] = 15; CEPDL.inputs[19] = 193; CEPDL.inputs[20] = 253; CEPDL.inputs[21] = 192; CEPDL.inputs[22] = 212; CEPDL.inputs[23] = 152; CEPDL.inputs[24] = 205; CEPDL.inputs[25] = 199; CEPDL.inputs[26] = 61; CEPDL.inputs[27] = 154; CEPDL.inputs[28] = 154;
    CEPDL.weightsLen = 29;
    CEPDL.weights[0] = 1; CEPDL.weights[1] = 1; CEPDL.weights[2] = 1; CEPDL.weights[3] = 1; CEPDL.weights[4] = 1; CEPDL.weights[5] = 1; CEPDL.weights[6] = 1; CEPDL.weights[7] = 1; CEPDL.weights[8] = 1; CEPDL.weights[9] = 1; CEPDL.weights[10] = 1; CEPDL.weights[11] = 1; CEPDL.weights[12] = 1; CEPDL.weights[13] = 1; CEPDL.weights[14] = 1; CEPDL.weights[15] = 1; CEPDL.weights[16] = 1; CEPDL.weights[17] = 1; CEPDL.weights[18] = 1; CEPDL.weights[19] = 1; CEPDL.weights[20] = 1; CEPDL.weights[21] = 1; CEPDL.weights[22] = 1; CEPDL.weights[23] = 1; CEPDL.weights[24] = 1; CEPDL.weights[25] = 1; CEPDL.weights[26] = 1; CEPDL.weights[27] = 1; CEPDL.weights[28] = 1;
    if (id == 85) {
        return CEPDL;
    }


    neuron CEPDR;
    CEPDR.cellID = 86;
    CEPDR.threshold = 1;
    CEPDR.inputsLen = 20;
    CEPDR.inputs[0] = 25; CEPDR.inputs[1] = 4; CEPDR.inputs[2] = 4; CEPDR.inputs[3] = 4; CEPDR.inputs[4] = 254; CEPDR.inputs[5] = 256; CEPDR.inputs[6] = 86; CEPDR.inputs[7] = 86; CEPDR.inputs[8] = 133; CEPDR.inputs[9] = 258; CEPDR.inputs[10] = 193; CEPDR.inputs[11] = 86; CEPDR.inputs[12] = 85; CEPDR.inputs[13] = 153; CEPDR.inputs[14] = 153; CEPDR.inputs[15] = 153; CEPDR.inputs[16] = 153; CEPDR.inputs[17] = 88; CEPDR.inputs[18] = 155; CEPDR.inputs[19] = 155;
    CEPDR.weightsLen = 20;
    CEPDR.weights[0] = 1; CEPDR.weights[1] = 1; CEPDR.weights[2] = 1; CEPDR.weights[3] = 1; CEPDR.weights[4] = 1; CEPDR.weights[5] = 1; CEPDR.weights[6] = 1; CEPDR.weights[7] = 1; CEPDR.weights[8] = 1; CEPDR.weights[9] = 1; CEPDR.weights[10] = 1; CEPDR.weights[11] = 1; CEPDR.weights[12] = 1; CEPDR.weights[13] = 1; CEPDR.weights[14] = 1; CEPDR.weights[15] = 1; CEPDR.weights[16] = 1; CEPDR.weights[17] = 1; CEPDR.weights[18] = 1; CEPDR.weights[19] = 1;
    if (id == 86) {
        return CEPDR;
    }


    neuron CEPVL;
    CEPVL.cellID = 87;
    CEPVL.threshold = 1;
    CEPVL.inputsLen = 28;
    CEPVL.inputs[0] = 152; CEPVL.inputs[1] = 24; CEPVL.inputs[2] = 189; CEPVL.inputs[3] = 259; CEPVL.inputs[4] = 251; CEPVL.inputs[5] = 248; CEPVL.inputs[6] = 152; CEPVL.inputs[7] = 192; CEPVL.inputs[8] = 190; CEPVL.inputs[9] = 190; CEPVL.inputs[10] = 205; CEPVL.inputs[11] = 205; CEPVL.inputs[12] = 190; CEPVL.inputs[13] = 205; CEPVL.inputs[14] = 210; CEPVL.inputs[15] = 152; CEPVL.inputs[16] = 152; CEPVL.inputs[17] = 152; CEPVL.inputs[18] = 223; CEPVL.inputs[19] = 199; CEPVL.inputs[20] = 199; CEPVL.inputs[21] = 208; CEPVL.inputs[22] = 192; CEPVL.inputs[23] = 152; CEPVL.inputs[24] = 208; CEPVL.inputs[25] = 199; CEPVL.inputs[26] = 156; CEPVL.inputs[27] = 156;
    CEPVL.weightsLen = 28;
    CEPVL.weights[0] = 1; CEPVL.weights[1] = 1; CEPVL.weights[2] = 1; CEPVL.weights[3] = 1; CEPVL.weights[4] = 1; CEPVL.weights[5] = 1; CEPVL.weights[6] = 1; CEPVL.weights[7] = 1; CEPVL.weights[8] = 1; CEPVL.weights[9] = 1; CEPVL.weights[10] = 1; CEPVL.weights[11] = 1; CEPVL.weights[12] = 1; CEPVL.weights[13] = 1; CEPVL.weights[14] = 1; CEPVL.weights[15] = 1; CEPVL.weights[16] = 1; CEPVL.weights[17] = 1; CEPVL.weights[18] = 1; CEPVL.weights[19] = 1; CEPVL.weights[20] = 1; CEPVL.weights[21] = 1; CEPVL.weights[22] = 1; CEPVL.weights[23] = 1; CEPVL.weights[24] = 1; CEPVL.weights[25] = 1; CEPVL.weights[26] = 1; CEPVL.weights[27] = 1;
    if (id == 87) {
        return CEPVL;
    }


    neuron CEPVR;
    CEPVR.cellID = 88;
    CEPVR.threshold = 1;
    CEPVR.inputsLen = 41;
    CEPVR.inputs[0] = 51; CEPVR.inputs[1] = 25; CEPVR.inputs[2] = 25; CEPVR.inputs[3] = 25; CEPVR.inputs[4] = 244; CEPVR.inputs[5] = 244; CEPVR.inputs[6] = 247; CEPVR.inputs[7] = 184; CEPVR.inputs[8] = 184; CEPVR.inputs[9] = 153; CEPVR.inputs[10] = 153; CEPVR.inputs[11] = 153; CEPVR.inputs[12] = 153; CEPVR.inputs[13] = 153; CEPVR.inputs[14] = 153; CEPVR.inputs[15] = 16; CEPVR.inputs[16] = 4; CEPVR.inputs[17] = 254; CEPVR.inputs[18] = 196; CEPVR.inputs[19] = 244; CEPVR.inputs[20] = 17; CEPVR.inputs[21] = 17; CEPVR.inputs[22] = 205; CEPVR.inputs[23] = 189; CEPVR.inputs[24] = 153; CEPVR.inputs[25] = 46; CEPVR.inputs[26] = 47; CEPVR.inputs[27] = 79; CEPVR.inputs[28] = 199; CEPVR.inputs[29] = 199; CEPVR.inputs[30] = 205; CEPVR.inputs[31] = 153; CEPVR.inputs[32] = 205; CEPVR.inputs[33] = 260; CEPVR.inputs[34] = 82; CEPVR.inputs[35] = 153; CEPVR.inputs[36] = 8; CEPVR.inputs[37] = 153; CEPVR.inputs[38] = 153; CEPVR.inputs[39] = 157; CEPVR.inputs[40] = 137;
    CEPVR.weightsLen = 41;
    CEPVR.weights[0] = 1; CEPVR.weights[1] = 1; CEPVR.weights[2] = 1; CEPVR.weights[3] = 1; CEPVR.weights[4] = 1; CEPVR.weights[5] = 1; CEPVR.weights[6] = 1; CEPVR.weights[7] = 1; CEPVR.weights[8] = 1; CEPVR.weights[9] = 1; CEPVR.weights[10] = 1; CEPVR.weights[11] = 1; CEPVR.weights[12] = 1; CEPVR.weights[13] = 1; CEPVR.weights[14] = 1; CEPVR.weights[15] = 1; CEPVR.weights[16] = 1; CEPVR.weights[17] = 1; CEPVR.weights[18] = 1; CEPVR.weights[19] = 1; CEPVR.weights[20] = 1; CEPVR.weights[21] = 1; CEPVR.weights[22] = 1; CEPVR.weights[23] = 1; CEPVR.weights[24] = 1; CEPVR.weights[25] = 1; CEPVR.weights[26] = 1; CEPVR.weights[27] = 1; CEPVR.weights[28] = 1; CEPVR.weights[29] = 1; CEPVR.weights[30] = 1; CEPVR.weights[31] = 1; CEPVR.weights[32] = 1; CEPVR.weights[33] = 1; CEPVR.weights[34] = 1; CEPVR.weights[35] = 1; CEPVR.weights[36] = 1; CEPVR.weights[37] = 1; CEPVR.weights[38] = 1; CEPVR.weights[39] = 1; CEPVR.weights[40] = 1;
    if (id == 88) {
        return CEPVR;
    }


    neuron DA1;
    DA1.cellID = 89;
    DA1.threshold = 1;
    DA1.inputsLen = 0;

    DA1.weightsLen = 0;
    DA1.weights[0] = 1; DA1.weights[1] = 1; DA1.weights[2] = 1; DA1.weights[3] = 1; DA1.weights[4] = 1; DA1.weights[5] = 1; DA1.weights[6] = 1; DA1.weights[7] = 1; DA1.weights[8] = 1; DA1.weights[9] = 1; DA1.weights[10] = 1; DA1.weights[11] = 1; DA1.weights[12] = 1; DA1.weights[13] = 1; DA1.weights[14] = 1; DA1.weights[15] = 1; DA1.weights[16] = 1; DA1.weights[17] = 1; DA1.weights[18] = 1; DA1.weights[19] = 1; DA1.weights[20] = 1; DA1.weights[21] = 1; DA1.weights[22] = 1; DA1.weights[23] = 1; DA1.weights[24] = 1; DA1.weights[25] = 1; DA1.weights[26] = 1; DA1.weights[27] = 1; DA1.weights[28] = 1; DA1.weights[29] = 1; DA1.weights[30] = 1; DA1.weights[31] = 1; DA1.weights[32] = 1; DA1.weights[33] = 1; DA1.weights[34] = 1; DA1.weights[35] = 1; DA1.weights[36] = 1; DA1.weights[37] = 1; DA1.weights[38] = 1; DA1.weights[39] = 1; DA1.weights[40] = 1;
    if (id == 89) {
        return DA1;
    }


    neuron DA2;
    DA2.cellID = 90;
    DA2.threshold = 1;
    DA2.inputsLen = 0;

    DA2.weightsLen = 0;
    DA2.weights[0] = 1; DA2.weights[1] = 1; DA2.weights[2] = 1; DA2.weights[3] = 1; DA2.weights[4] = 1; DA2.weights[5] = 1; DA2.weights[6] = 1; DA2.weights[7] = 1; DA2.weights[8] = 1; DA2.weights[9] = 1; DA2.weights[10] = 1; DA2.weights[11] = 1; DA2.weights[12] = 1; DA2.weights[13] = 1; DA2.weights[14] = 1; DA2.weights[15] = 1; DA2.weights[16] = 1; DA2.weights[17] = 1; DA2.weights[18] = 1; DA2.weights[19] = 1; DA2.weights[20] = 1; DA2.weights[21] = 1; DA2.weights[22] = 1; DA2.weights[23] = 1; DA2.weights[24] = 1; DA2.weights[25] = 1; DA2.weights[26] = 1; DA2.weights[27] = 1; DA2.weights[28] = 1; DA2.weights[29] = 1; DA2.weights[30] = 1; DA2.weights[31] = 1; DA2.weights[32] = 1; DA2.weights[33] = 1; DA2.weights[34] = 1; DA2.weights[35] = 1; DA2.weights[36] = 1; DA2.weights[37] = 1; DA2.weights[38] = 1; DA2.weights[39] = 1; DA2.weights[40] = 1;
    if (id == 90) {
        return DA2;
    }


    neuron DA3;
    DA3.cellID = 91;
    DA3.threshold = 1;
    DA3.inputsLen = 0;

    DA3.weightsLen = 0;
    DA3.weights[0] = 1; DA3.weights[1] = 1; DA3.weights[2] = 1; DA3.weights[3] = 1; DA3.weights[4] = 1; DA3.weights[5] = 1; DA3.weights[6] = 1; DA3.weights[7] = 1; DA3.weights[8] = 1; DA3.weights[9] = 1; DA3.weights[10] = 1; DA3.weights[11] = 1; DA3.weights[12] = 1; DA3.weights[13] = 1; DA3.weights[14] = 1; DA3.weights[15] = 1; DA3.weights[16] = 1; DA3.weights[17] = 1; DA3.weights[18] = 1; DA3.weights[19] = 1; DA3.weights[20] = 1; DA3.weights[21] = 1; DA3.weights[22] = 1; DA3.weights[23] = 1; DA3.weights[24] = 1; DA3.weights[25] = 1; DA3.weights[26] = 1; DA3.weights[27] = 1; DA3.weights[28] = 1; DA3.weights[29] = 1; DA3.weights[30] = 1; DA3.weights[31] = 1; DA3.weights[32] = 1; DA3.weights[33] = 1; DA3.weights[34] = 1; DA3.weights[35] = 1; DA3.weights[36] = 1; DA3.weights[37] = 1; DA3.weights[38] = 1; DA3.weights[39] = 1; DA3.weights[40] = 1;
    if (id == 91) {
        return DA3;
    }


    neuron DA4;
    DA4.cellID = 92;
    DA4.threshold = 1;
    DA4.inputsLen = 0;

    DA4.weightsLen = 0;
    DA4.weights[0] = 1; DA4.weights[1] = 1; DA4.weights[2] = 1; DA4.weights[3] = 1; DA4.weights[4] = 1; DA4.weights[5] = 1; DA4.weights[6] = 1; DA4.weights[7] = 1; DA4.weights[8] = 1; DA4.weights[9] = 1; DA4.weights[10] = 1; DA4.weights[11] = 1; DA4.weights[12] = 1; DA4.weights[13] = 1; DA4.weights[14] = 1; DA4.weights[15] = 1; DA4.weights[16] = 1; DA4.weights[17] = 1; DA4.weights[18] = 1; DA4.weights[19] = 1; DA4.weights[20] = 1; DA4.weights[21] = 1; DA4.weights[22] = 1; DA4.weights[23] = 1; DA4.weights[24] = 1; DA4.weights[25] = 1; DA4.weights[26] = 1; DA4.weights[27] = 1; DA4.weights[28] = 1; DA4.weights[29] = 1; DA4.weights[30] = 1; DA4.weights[31] = 1; DA4.weights[32] = 1; DA4.weights[33] = 1; DA4.weights[34] = 1; DA4.weights[35] = 1; DA4.weights[36] = 1; DA4.weights[37] = 1; DA4.weights[38] = 1; DA4.weights[39] = 1; DA4.weights[40] = 1;
    if (id == 92) {
        return DA4;
    }


    neuron DA5;
    DA5.cellID = 93;
    DA5.threshold = 1;
    DA5.inputsLen = 0;

    DA5.weightsLen = 0;
    DA5.weights[0] = 1; DA5.weights[1] = 1; DA5.weights[2] = 1; DA5.weights[3] = 1; DA5.weights[4] = 1; DA5.weights[5] = 1; DA5.weights[6] = 1; DA5.weights[7] = 1; DA5.weights[8] = 1; DA5.weights[9] = 1; DA5.weights[10] = 1; DA5.weights[11] = 1; DA5.weights[12] = 1; DA5.weights[13] = 1; DA5.weights[14] = 1; DA5.weights[15] = 1; DA5.weights[16] = 1; DA5.weights[17] = 1; DA5.weights[18] = 1; DA5.weights[19] = 1; DA5.weights[20] = 1; DA5.weights[21] = 1; DA5.weights[22] = 1; DA5.weights[23] = 1; DA5.weights[24] = 1; DA5.weights[25] = 1; DA5.weights[26] = 1; DA5.weights[27] = 1; DA5.weights[28] = 1; DA5.weights[29] = 1; DA5.weights[30] = 1; DA5.weights[31] = 1; DA5.weights[32] = 1; DA5.weights[33] = 1; DA5.weights[34] = 1; DA5.weights[35] = 1; DA5.weights[36] = 1; DA5.weights[37] = 1; DA5.weights[38] = 1; DA5.weights[39] = 1; DA5.weights[40] = 1;
    if (id == 93) {
        return DA5;
    }


    neuron DA6;
    DA6.cellID = 94;
    DA6.threshold = 1;
    DA6.inputsLen = 0;

    DA6.weightsLen = 0;
    DA6.weights[0] = 1; DA6.weights[1] = 1; DA6.weights[2] = 1; DA6.weights[3] = 1; DA6.weights[4] = 1; DA6.weights[5] = 1; DA6.weights[6] = 1; DA6.weights[7] = 1; DA6.weights[8] = 1; DA6.weights[9] = 1; DA6.weights[10] = 1; DA6.weights[11] = 1; DA6.weights[12] = 1; DA6.weights[13] = 1; DA6.weights[14] = 1; DA6.weights[15] = 1; DA6.weights[16] = 1; DA6.weights[17] = 1; DA6.weights[18] = 1; DA6.weights[19] = 1; DA6.weights[20] = 1; DA6.weights[21] = 1; DA6.weights[22] = 1; DA6.weights[23] = 1; DA6.weights[24] = 1; DA6.weights[25] = 1; DA6.weights[26] = 1; DA6.weights[27] = 1; DA6.weights[28] = 1; DA6.weights[29] = 1; DA6.weights[30] = 1; DA6.weights[31] = 1; DA6.weights[32] = 1; DA6.weights[33] = 1; DA6.weights[34] = 1; DA6.weights[35] = 1; DA6.weights[36] = 1; DA6.weights[37] = 1; DA6.weights[38] = 1; DA6.weights[39] = 1; DA6.weights[40] = 1;
    if (id == 94) {
        return DA6;
    }


    neuron DA7;
    DA7.cellID = 95;
    DA7.threshold = 1;
    DA7.inputsLen = 0;

    DA7.weightsLen = 0;
    DA7.weights[0] = 1; DA7.weights[1] = 1; DA7.weights[2] = 1; DA7.weights[3] = 1; DA7.weights[4] = 1; DA7.weights[5] = 1; DA7.weights[6] = 1; DA7.weights[7] = 1; DA7.weights[8] = 1; DA7.weights[9] = 1; DA7.weights[10] = 1; DA7.weights[11] = 1; DA7.weights[12] = 1; DA7.weights[13] = 1; DA7.weights[14] = 1; DA7.weights[15] = 1; DA7.weights[16] = 1; DA7.weights[17] = 1; DA7.weights[18] = 1; DA7.weights[19] = 1; DA7.weights[20] = 1; DA7.weights[21] = 1; DA7.weights[22] = 1; DA7.weights[23] = 1; DA7.weights[24] = 1; DA7.weights[25] = 1; DA7.weights[26] = 1; DA7.weights[27] = 1; DA7.weights[28] = 1; DA7.weights[29] = 1; DA7.weights[30] = 1; DA7.weights[31] = 1; DA7.weights[32] = 1; DA7.weights[33] = 1; DA7.weights[34] = 1; DA7.weights[35] = 1; DA7.weights[36] = 1; DA7.weights[37] = 1; DA7.weights[38] = 1; DA7.weights[39] = 1; DA7.weights[40] = 1;
    if (id == 95) {
        return DA7;
    }


    neuron DA8;
    DA8.cellID = 96;
    DA8.threshold = 1;
    DA8.inputsLen = 0;

    DA8.weightsLen = 0;
    DA8.weights[0] = 1; DA8.weights[1] = 1; DA8.weights[2] = 1; DA8.weights[3] = 1; DA8.weights[4] = 1; DA8.weights[5] = 1; DA8.weights[6] = 1; DA8.weights[7] = 1; DA8.weights[8] = 1; DA8.weights[9] = 1; DA8.weights[10] = 1; DA8.weights[11] = 1; DA8.weights[12] = 1; DA8.weights[13] = 1; DA8.weights[14] = 1; DA8.weights[15] = 1; DA8.weights[16] = 1; DA8.weights[17] = 1; DA8.weights[18] = 1; DA8.weights[19] = 1; DA8.weights[20] = 1; DA8.weights[21] = 1; DA8.weights[22] = 1; DA8.weights[23] = 1; DA8.weights[24] = 1; DA8.weights[25] = 1; DA8.weights[26] = 1; DA8.weights[27] = 1; DA8.weights[28] = 1; DA8.weights[29] = 1; DA8.weights[30] = 1; DA8.weights[31] = 1; DA8.weights[32] = 1; DA8.weights[33] = 1; DA8.weights[34] = 1; DA8.weights[35] = 1; DA8.weights[36] = 1; DA8.weights[37] = 1; DA8.weights[38] = 1; DA8.weights[39] = 1; DA8.weights[40] = 1;
    if (id == 96) {
        return DA8;
    }


    neuron DA9;
    DA9.cellID = 97;
    DA9.threshold = 1;
    DA9.inputsLen = 0;

    DA9.weightsLen = 0;
    DA9.weights[0] = 1; DA9.weights[1] = 1; DA9.weights[2] = 1; DA9.weights[3] = 1; DA9.weights[4] = 1; DA9.weights[5] = 1; DA9.weights[6] = 1; DA9.weights[7] = 1; DA9.weights[8] = 1; DA9.weights[9] = 1; DA9.weights[10] = 1; DA9.weights[11] = 1; DA9.weights[12] = 1; DA9.weights[13] = 1; DA9.weights[14] = 1; DA9.weights[15] = 1; DA9.weights[16] = 1; DA9.weights[17] = 1; DA9.weights[18] = 1; DA9.weights[19] = 1; DA9.weights[20] = 1; DA9.weights[21] = 1; DA9.weights[22] = 1; DA9.weights[23] = 1; DA9.weights[24] = 1; DA9.weights[25] = 1; DA9.weights[26] = 1; DA9.weights[27] = 1; DA9.weights[28] = 1; DA9.weights[29] = 1; DA9.weights[30] = 1; DA9.weights[31] = 1; DA9.weights[32] = 1; DA9.weights[33] = 1; DA9.weights[34] = 1; DA9.weights[35] = 1; DA9.weights[36] = 1; DA9.weights[37] = 1; DA9.weights[38] = 1; DA9.weights[39] = 1; DA9.weights[40] = 1;
    if (id == 97) {
        return DA9;
    }


    neuron DB1;
    DB1.cellID = 98;
    DB1.threshold = 1;
    DB1.inputsLen = 0;

    DB1.weightsLen = 0;
    DB1.weights[0] = 1; DB1.weights[1] = 1; DB1.weights[2] = 1; DB1.weights[3] = 1; DB1.weights[4] = 1; DB1.weights[5] = 1; DB1.weights[6] = 1; DB1.weights[7] = 1; DB1.weights[8] = 1; DB1.weights[9] = 1; DB1.weights[10] = 1; DB1.weights[11] = 1; DB1.weights[12] = 1; DB1.weights[13] = 1; DB1.weights[14] = 1; DB1.weights[15] = 1; DB1.weights[16] = 1; DB1.weights[17] = 1; DB1.weights[18] = 1; DB1.weights[19] = 1; DB1.weights[20] = 1; DB1.weights[21] = 1; DB1.weights[22] = 1; DB1.weights[23] = 1; DB1.weights[24] = 1; DB1.weights[25] = 1; DB1.weights[26] = 1; DB1.weights[27] = 1; DB1.weights[28] = 1; DB1.weights[29] = 1; DB1.weights[30] = 1; DB1.weights[31] = 1; DB1.weights[32] = 1; DB1.weights[33] = 1; DB1.weights[34] = 1; DB1.weights[35] = 1; DB1.weights[36] = 1; DB1.weights[37] = 1; DB1.weights[38] = 1; DB1.weights[39] = 1; DB1.weights[40] = 1;
    if (id == 98) {
        return DB1;
    }


    neuron DB2;
    DB2.cellID = 99;
    DB2.threshold = 1;
    DB2.inputsLen = 0;

    DB2.weightsLen = 0;
    DB2.weights[0] = 1; DB2.weights[1] = 1; DB2.weights[2] = 1; DB2.weights[3] = 1; DB2.weights[4] = 1; DB2.weights[5] = 1; DB2.weights[6] = 1; DB2.weights[7] = 1; DB2.weights[8] = 1; DB2.weights[9] = 1; DB2.weights[10] = 1; DB2.weights[11] = 1; DB2.weights[12] = 1; DB2.weights[13] = 1; DB2.weights[14] = 1; DB2.weights[15] = 1; DB2.weights[16] = 1; DB2.weights[17] = 1; DB2.weights[18] = 1; DB2.weights[19] = 1; DB2.weights[20] = 1; DB2.weights[21] = 1; DB2.weights[22] = 1; DB2.weights[23] = 1; DB2.weights[24] = 1; DB2.weights[25] = 1; DB2.weights[26] = 1; DB2.weights[27] = 1; DB2.weights[28] = 1; DB2.weights[29] = 1; DB2.weights[30] = 1; DB2.weights[31] = 1; DB2.weights[32] = 1; DB2.weights[33] = 1; DB2.weights[34] = 1; DB2.weights[35] = 1; DB2.weights[36] = 1; DB2.weights[37] = 1; DB2.weights[38] = 1; DB2.weights[39] = 1; DB2.weights[40] = 1;
    if (id == 99) {
        return DB2;
    }


    neuron DB3;
    DB3.cellID = 100;
    DB3.threshold = 1;
    DB3.inputsLen = 0;

    DB3.weightsLen = 0;
    DB3.weights[0] = 1; DB3.weights[1] = 1; DB3.weights[2] = 1; DB3.weights[3] = 1; DB3.weights[4] = 1; DB3.weights[5] = 1; DB3.weights[6] = 1; DB3.weights[7] = 1; DB3.weights[8] = 1; DB3.weights[9] = 1; DB3.weights[10] = 1; DB3.weights[11] = 1; DB3.weights[12] = 1; DB3.weights[13] = 1; DB3.weights[14] = 1; DB3.weights[15] = 1; DB3.weights[16] = 1; DB3.weights[17] = 1; DB3.weights[18] = 1; DB3.weights[19] = 1; DB3.weights[20] = 1; DB3.weights[21] = 1; DB3.weights[22] = 1; DB3.weights[23] = 1; DB3.weights[24] = 1; DB3.weights[25] = 1; DB3.weights[26] = 1; DB3.weights[27] = 1; DB3.weights[28] = 1; DB3.weights[29] = 1; DB3.weights[30] = 1; DB3.weights[31] = 1; DB3.weights[32] = 1; DB3.weights[33] = 1; DB3.weights[34] = 1; DB3.weights[35] = 1; DB3.weights[36] = 1; DB3.weights[37] = 1; DB3.weights[38] = 1; DB3.weights[39] = 1; DB3.weights[40] = 1;
    if (id == 100) {
        return DB3;
    }


    neuron DB4;
    DB4.cellID = 101;
    DB4.threshold = 1;
    DB4.inputsLen = 0;

    DB4.weightsLen = 0;
    DB4.weights[0] = 1; DB4.weights[1] = 1; DB4.weights[2] = 1; DB4.weights[3] = 1; DB4.weights[4] = 1; DB4.weights[5] = 1; DB4.weights[6] = 1; DB4.weights[7] = 1; DB4.weights[8] = 1; DB4.weights[9] = 1; DB4.weights[10] = 1; DB4.weights[11] = 1; DB4.weights[12] = 1; DB4.weights[13] = 1; DB4.weights[14] = 1; DB4.weights[15] = 1; DB4.weights[16] = 1; DB4.weights[17] = 1; DB4.weights[18] = 1; DB4.weights[19] = 1; DB4.weights[20] = 1; DB4.weights[21] = 1; DB4.weights[22] = 1; DB4.weights[23] = 1; DB4.weights[24] = 1; DB4.weights[25] = 1; DB4.weights[26] = 1; DB4.weights[27] = 1; DB4.weights[28] = 1; DB4.weights[29] = 1; DB4.weights[30] = 1; DB4.weights[31] = 1; DB4.weights[32] = 1; DB4.weights[33] = 1; DB4.weights[34] = 1; DB4.weights[35] = 1; DB4.weights[36] = 1; DB4.weights[37] = 1; DB4.weights[38] = 1; DB4.weights[39] = 1; DB4.weights[40] = 1;
    if (id == 101) {
        return DB4;
    }


    neuron DB5;
    DB5.cellID = 102;
    DB5.threshold = 1;
    DB5.inputsLen = 0;

    DB5.weightsLen = 0;
    DB5.weights[0] = 1; DB5.weights[1] = 1; DB5.weights[2] = 1; DB5.weights[3] = 1; DB5.weights[4] = 1; DB5.weights[5] = 1; DB5.weights[6] = 1; DB5.weights[7] = 1; DB5.weights[8] = 1; DB5.weights[9] = 1; DB5.weights[10] = 1; DB5.weights[11] = 1; DB5.weights[12] = 1; DB5.weights[13] = 1; DB5.weights[14] = 1; DB5.weights[15] = 1; DB5.weights[16] = 1; DB5.weights[17] = 1; DB5.weights[18] = 1; DB5.weights[19] = 1; DB5.weights[20] = 1; DB5.weights[21] = 1; DB5.weights[22] = 1; DB5.weights[23] = 1; DB5.weights[24] = 1; DB5.weights[25] = 1; DB5.weights[26] = 1; DB5.weights[27] = 1; DB5.weights[28] = 1; DB5.weights[29] = 1; DB5.weights[30] = 1; DB5.weights[31] = 1; DB5.weights[32] = 1; DB5.weights[33] = 1; DB5.weights[34] = 1; DB5.weights[35] = 1; DB5.weights[36] = 1; DB5.weights[37] = 1; DB5.weights[38] = 1; DB5.weights[39] = 1; DB5.weights[40] = 1;
    if (id == 102) {
        return DB5;
    }


    neuron DB6;
    DB6.cellID = 103;
    DB6.threshold = 1;
    DB6.inputsLen = 0;

    DB6.weightsLen = 0;
    DB6.weights[0] = 1; DB6.weights[1] = 1; DB6.weights[2] = 1; DB6.weights[3] = 1; DB6.weights[4] = 1; DB6.weights[5] = 1; DB6.weights[6] = 1; DB6.weights[7] = 1; DB6.weights[8] = 1; DB6.weights[9] = 1; DB6.weights[10] = 1; DB6.weights[11] = 1; DB6.weights[12] = 1; DB6.weights[13] = 1; DB6.weights[14] = 1; DB6.weights[15] = 1; DB6.weights[16] = 1; DB6.weights[17] = 1; DB6.weights[18] = 1; DB6.weights[19] = 1; DB6.weights[20] = 1; DB6.weights[21] = 1; DB6.weights[22] = 1; DB6.weights[23] = 1; DB6.weights[24] = 1; DB6.weights[25] = 1; DB6.weights[26] = 1; DB6.weights[27] = 1; DB6.weights[28] = 1; DB6.weights[29] = 1; DB6.weights[30] = 1; DB6.weights[31] = 1; DB6.weights[32] = 1; DB6.weights[33] = 1; DB6.weights[34] = 1; DB6.weights[35] = 1; DB6.weights[36] = 1; DB6.weights[37] = 1; DB6.weights[38] = 1; DB6.weights[39] = 1; DB6.weights[40] = 1;
    if (id == 103) {
        return DB6;
    }


    neuron DB7;
    DB7.cellID = 104;
    DB7.threshold = 1;
    DB7.inputsLen = 0;

    DB7.weightsLen = 0;
    DB7.weights[0] = 1; DB7.weights[1] = 1; DB7.weights[2] = 1; DB7.weights[3] = 1; DB7.weights[4] = 1; DB7.weights[5] = 1; DB7.weights[6] = 1; DB7.weights[7] = 1; DB7.weights[8] = 1; DB7.weights[9] = 1; DB7.weights[10] = 1; DB7.weights[11] = 1; DB7.weights[12] = 1; DB7.weights[13] = 1; DB7.weights[14] = 1; DB7.weights[15] = 1; DB7.weights[16] = 1; DB7.weights[17] = 1; DB7.weights[18] = 1; DB7.weights[19] = 1; DB7.weights[20] = 1; DB7.weights[21] = 1; DB7.weights[22] = 1; DB7.weights[23] = 1; DB7.weights[24] = 1; DB7.weights[25] = 1; DB7.weights[26] = 1; DB7.weights[27] = 1; DB7.weights[28] = 1; DB7.weights[29] = 1; DB7.weights[30] = 1; DB7.weights[31] = 1; DB7.weights[32] = 1; DB7.weights[33] = 1; DB7.weights[34] = 1; DB7.weights[35] = 1; DB7.weights[36] = 1; DB7.weights[37] = 1; DB7.weights[38] = 1; DB7.weights[39] = 1; DB7.weights[40] = 1;
    if (id == 104) {
        return DB7;
    }


    neuron DD1;
    DD1.cellID = 105;
    DD1.threshold = 1;
    DD1.inputsLen = 0;

    DD1.weightsLen = 0;
    DD1.weights[0] = 1; DD1.weights[1] = 1; DD1.weights[2] = 1; DD1.weights[3] = 1; DD1.weights[4] = 1; DD1.weights[5] = 1; DD1.weights[6] = 1; DD1.weights[7] = 1; DD1.weights[8] = 1; DD1.weights[9] = 1; DD1.weights[10] = 1; DD1.weights[11] = 1; DD1.weights[12] = 1; DD1.weights[13] = 1; DD1.weights[14] = 1; DD1.weights[15] = 1; DD1.weights[16] = 1; DD1.weights[17] = 1; DD1.weights[18] = 1; DD1.weights[19] = 1; DD1.weights[20] = 1; DD1.weights[21] = 1; DD1.weights[22] = 1; DD1.weights[23] = 1; DD1.weights[24] = 1; DD1.weights[25] = 1; DD1.weights[26] = 1; DD1.weights[27] = 1; DD1.weights[28] = 1; DD1.weights[29] = 1; DD1.weights[30] = 1; DD1.weights[31] = 1; DD1.weights[32] = 1; DD1.weights[33] = 1; DD1.weights[34] = 1; DD1.weights[35] = 1; DD1.weights[36] = 1; DD1.weights[37] = 1; DD1.weights[38] = 1; DD1.weights[39] = 1; DD1.weights[40] = 1;
    if (id == 105) {
        return DD1;
    }


    neuron DD2;
    DD2.cellID = 106;
    DD2.threshold = 1;
    DD2.inputsLen = 0;

    DD2.weightsLen = 0;
    DD2.weights[0] = 1; DD2.weights[1] = 1; DD2.weights[2] = 1; DD2.weights[3] = 1; DD2.weights[4] = 1; DD2.weights[5] = 1; DD2.weights[6] = 1; DD2.weights[7] = 1; DD2.weights[8] = 1; DD2.weights[9] = 1; DD2.weights[10] = 1; DD2.weights[11] = 1; DD2.weights[12] = 1; DD2.weights[13] = 1; DD2.weights[14] = 1; DD2.weights[15] = 1; DD2.weights[16] = 1; DD2.weights[17] = 1; DD2.weights[18] = 1; DD2.weights[19] = 1; DD2.weights[20] = 1; DD2.weights[21] = 1; DD2.weights[22] = 1; DD2.weights[23] = 1; DD2.weights[24] = 1; DD2.weights[25] = 1; DD2.weights[26] = 1; DD2.weights[27] = 1; DD2.weights[28] = 1; DD2.weights[29] = 1; DD2.weights[30] = 1; DD2.weights[31] = 1; DD2.weights[32] = 1; DD2.weights[33] = 1; DD2.weights[34] = 1; DD2.weights[35] = 1; DD2.weights[36] = 1; DD2.weights[37] = 1; DD2.weights[38] = 1; DD2.weights[39] = 1; DD2.weights[40] = 1;
    if (id == 106) {
        return DD2;
    }


    neuron DD3;
    DD3.cellID = 107;
    DD3.threshold = 1;
    DD3.inputsLen = 0;

    DD3.weightsLen = 0;

    if (id == 107) {
        return DD3;
    }


    neuron DD4;
    DD4.cellID = 108;
    DD4.threshold = 1;
    DD4.inputsLen = 0;

    DD4.weightsLen = 0;

    if (id == 108) {
        return DD4;
    }


    neuron DD5;
    DD5.cellID = 109;
    DD5.threshold = 1;
    DD5.inputsLen = 0;

    DD5.weightsLen = 0;

    if (id == 109) {
        return DD5;
    }


    neuron DD6;
    DD6.cellID = 110;
    DD6.threshold = 1;
    DD6.inputsLen = 0;

    DD6.weightsLen = 0;

    if (id == 110) {
        return DD6;
    }


    neuron DVA;
    DVA.cellID = 111;
    DVA.threshold = 1;
    DVA.inputsLen = 169;
    DVA.inputs[0] = 28; DVA.inputs[1] = 66; DVA.inputs[2] = 232; DVA.inputs[3] = 22; DVA.inputs[4] = 22; DVA.inputs[5] = 231; DVA.inputs[6] = 232; DVA.inputs[7] = 204; DVA.inputs[8] = 204; DVA.inputs[9] = 204; DVA.inputs[10] = 197; DVA.inputs[11] = 204; DVA.inputs[12] = 204; DVA.inputs[13] = 198; DVA.inputs[14] = 204; DVA.inputs[15] = 28; DVA.inputs[16] = 14; DVA.inputs[17] = 52; DVA.inputs[18] = 52; DVA.inputs[19] = 198; DVA.inputs[20] = 56; DVA.inputs[21] = 22; DVA.inputs[22] = 28; DVA.inputs[23] = 232; DVA.inputs[24] = 232; DVA.inputs[25] = 114; DVA.inputs[26] = 115; DVA.inputs[27] = 115; DVA.inputs[28] = 184; DVA.inputs[29] = 117; DVA.inputs[30] = 164; DVA.inputs[31] = 166; DVA.inputs[32] = 167; DVA.inputs[33] = 167; DVA.inputs[34] = 163; DVA.inputs[35] = 165; DVA.inputs[36] = 173; DVA.inputs[37] = 292; DVA.inputs[38] = 160; DVA.inputs[39] = 56; DVA.inputs[40] = 161; DVA.inputs[41] = 160; DVA.inputs[42] = 160; DVA.inputs[43] = 161; DVA.inputs[44] = 160; DVA.inputs[45] = 264; DVA.inputs[46] = 166; DVA.inputs[47] = 160; DVA.inputs[48] = 161; DVA.inputs[49] = 161; DVA.inputs[50] = 161; DVA.inputs[51] = 161; DVA.inputs[52] = 161; DVA.inputs[53] = 160; DVA.inputs[54] = 160; DVA.inputs[55] = 160; DVA.inputs[56] = 161; DVA.inputs[57] = 161; DVA.inputs[58] = 173; DVA.inputs[59] = 161; DVA.inputs[60] = 160; DVA.inputs[61] = 161; DVA.inputs[62] = 160; DVA.inputs[63] = 161; DVA.inputs[64] = 111; DVA.inputs[65] = 161; DVA.inputs[66] = 111; DVA.inputs[67] = 111; DVA.inputs[68] = 111; DVA.inputs[69] = 173; DVA.inputs[70] = 69; DVA.inputs[71] = 56; DVA.inputs[72] = 177; DVA.inputs[73] = 160; DVA.inputs[74] = 161; DVA.inputs[75] = 161; DVA.inputs[76] = 21; DVA.inputs[77] = 115; DVA.inputs[78] = 161; DVA.inputs[79] = 161; DVA.inputs[80] = 160; DVA.inputs[81] = 161; DVA.inputs[82] = 160; DVA.inputs[83] = 160; DVA.inputs[84] = 161; DVA.inputs[85] = 160; DVA.inputs[86] = 161; DVA.inputs[87] = 176; DVA.inputs[88] = 161; DVA.inputs[89] = 161; DVA.inputs[90] = 161; DVA.inputs[91] = 177; DVA.inputs[92] = 177; DVA.inputs[93] = 177; DVA.inputs[94] = 160; DVA.inputs[95] = 184; DVA.inputs[96] = 161; DVA.inputs[97] = 161; DVA.inputs[98] = 173; DVA.inputs[99] = 176; DVA.inputs[100] = 69; DVA.inputs[101] = 161; DVA.inputs[102] = 161; DVA.inputs[103] = 160; DVA.inputs[104] = 160; DVA.inputs[105] = 168; DVA.inputs[106] = 160; DVA.inputs[107] = 168; DVA.inputs[108] = 177; DVA.inputs[109] = 177; DVA.inputs[110] = 161; DVA.inputs[111] = 169; DVA.inputs[112] = 160; DVA.inputs[113] = 169; DVA.inputs[114] = 169; DVA.inputs[115] = 169; DVA.inputs[116] = 161; DVA.inputs[117] = 69; DVA.inputs[118] = 161; DVA.inputs[119] = 173; DVA.inputs[120] = 227; DVA.inputs[121] = 234; DVA.inputs[122] = 231; DVA.inputs[123] = 236; DVA.inputs[124] = 232; DVA.inputs[125] = 180; DVA.inputs[126] = 178; DVA.inputs[127] = 185; DVA.inputs[128] = 181; DVA.inputs[129] = 55; DVA.inputs[130] = 174; DVA.inputs[131] = 292; DVA.inputs[132] = 161; DVA.inputs[133] = 184; DVA.inputs[134] = 158; DVA.inputs[135] = 274; DVA.inputs[136] = 274; DVA.inputs[137] = 274; DVA.inputs[138] = 274; DVA.inputs[139] = 161; DVA.inputs[140] = 160; DVA.inputs[141] = 161; DVA.inputs[142] = 160; DVA.inputs[143] = 160; DVA.inputs[144] = 161; DVA.inputs[145] = 173; DVA.inputs[146] = 161; DVA.inputs[147] = 173; DVA.inputs[148] = 184; DVA.inputs[149] = 161; DVA.inputs[150] = 161; DVA.inputs[151] = 263; DVA.inputs[152] = 161; DVA.inputs[153] = 161; DVA.inputs[154] = 160; DVA.inputs[155] = 173; DVA.inputs[156] = 177; DVA.inputs[157] = 161; DVA.inputs[158] = 160; DVA.inputs[159] = 160; DVA.inputs[160] = 174; DVA.inputs[161] = 184; DVA.inputs[162] = 184; DVA.inputs[163] = 184; DVA.inputs[164] = 184; DVA.inputs[165] = 184; DVA.inputs[166] = 184; DVA.inputs[167] = 160; DVA.inputs[168] = 185;
    DVA.weightsLen = 169;
    DVA.weights[0] = 1; DVA.weights[1] = 1; DVA.weights[2] = 1; DVA.weights[3] = 1; DVA.weights[4] = 1; DVA.weights[5] = 1; DVA.weights[6] = 1; DVA.weights[7] = 1; DVA.weights[8] = 1; DVA.weights[9] = 1; DVA.weights[10] = 1; DVA.weights[11] = 1; DVA.weights[12] = 1; DVA.weights[13] = 1; DVA.weights[14] = 1; DVA.weights[15] = 1; DVA.weights[16] = 1; DVA.weights[17] = 1; DVA.weights[18] = 1; DVA.weights[19] = 1; DVA.weights[20] = 1; DVA.weights[21] = 1; DVA.weights[22] = 1; DVA.weights[23] = 1; DVA.weights[24] = 1; DVA.weights[25] = 1; DVA.weights[26] = 1; DVA.weights[27] = 1; DVA.weights[28] = 1; DVA.weights[29] = 1; DVA.weights[30] = 1; DVA.weights[31] = 1; DVA.weights[32] = 1; DVA.weights[33] = 1; DVA.weights[34] = 1; DVA.weights[35] = 1; DVA.weights[36] = 1; DVA.weights[37] = 1; DVA.weights[38] = 1; DVA.weights[39] = 1; DVA.weights[40] = 1; DVA.weights[41] = 1; DVA.weights[42] = 1; DVA.weights[43] = 1; DVA.weights[44] = 1; DVA.weights[45] = 1; DVA.weights[46] = 1; DVA.weights[47] = 1; DVA.weights[48] = 1; DVA.weights[49] = 1; DVA.weights[50] = 1; DVA.weights[51] = 1; DVA.weights[52] = 1; DVA.weights[53] = 1; DVA.weights[54] = 1; DVA.weights[55] = 1; DVA.weights[56] = 1; DVA.weights[57] = 1; DVA.weights[58] = 1; DVA.weights[59] = 1; DVA.weights[60] = 1; DVA.weights[61] = 1; DVA.weights[62] = 1; DVA.weights[63] = 1; DVA.weights[64] = 1; DVA.weights[65] = 1; DVA.weights[66] = 1; DVA.weights[67] = 1; DVA.weights[68] = 1; DVA.weights[69] = 1; DVA.weights[70] = 1; DVA.weights[71] = 1; DVA.weights[72] = 1; DVA.weights[73] = 1; DVA.weights[74] = 1; DVA.weights[75] = 1; DVA.weights[76] = 1; DVA.weights[77] = 1; DVA.weights[78] = 1; DVA.weights[79] = 1; DVA.weights[80] = 1; DVA.weights[81] = 1; DVA.weights[82] = 1; DVA.weights[83] = 1; DVA.weights[84] = 1; DVA.weights[85] = 1; DVA.weights[86] = 1; DVA.weights[87] = 1; DVA.weights[88] = 1; DVA.weights[89] = 1; DVA.weights[90] = 1; DVA.weights[91] = 1; DVA.weights[92] = 1; DVA.weights[93] = 1; DVA.weights[94] = 1; DVA.weights[95] = 1; DVA.weights[96] = 1; DVA.weights[97] = 1; DVA.weights[98] = 1; DVA.weights[99] = 1; DVA.weights[100] = 1; DVA.weights[101] = 1; DVA.weights[102] = 1; DVA.weights[103] = 1; DVA.weights[104] = 1; DVA.weights[105] = 1; DVA.weights[106] = 1; DVA.weights[107] = 1; DVA.weights[108] = 1; DVA.weights[109] = 1; DVA.weights[110] = 1; DVA.weights[111] = 1; DVA.weights[112] = 1; DVA.weights[113] = 1; DVA.weights[114] = 1; DVA.weights[115] = 1; DVA.weights[116] = 1; DVA.weights[117] = 1; DVA.weights[118] = 1; DVA.weights[119] = 1; DVA.weights[120] = 1; DVA.weights[121] = 1; DVA.weights[122] = 1; DVA.weights[123] = 1; DVA.weights[124] = 1; DVA.weights[125] = 1; DVA.weights[126] = 1; DVA.weights[127] = 1; DVA.weights[128] = 1; DVA.weights[129] = 1; DVA.weights[130] = 1; DVA.weights[131] = 1; DVA.weights[132] = 1; DVA.weights[133] = 1; DVA.weights[134] = 1; DVA.weights[135] = 1; DVA.weights[136] = 1; DVA.weights[137] = 1; DVA.weights[138] = 1; DVA.weights[139] = 1; DVA.weights[140] = 1; DVA.weights[141] = 1; DVA.weights[142] = 1; DVA.weights[143] = 1; DVA.weights[144] = 1; DVA.weights[145] = 1; DVA.weights[146] = 1; DVA.weights[147] = 1; DVA.weights[148] = 1; DVA.weights[149] = 1; DVA.weights[150] = 1; DVA.weights[151] = 1; DVA.weights[152] = 1; DVA.weights[153] = 1; DVA.weights[154] = 1; DVA.weights[155] = 1; DVA.weights[156] = 1; DVA.weights[157] = 1; DVA.weights[158] = 1; DVA.weights[159] = 1; DVA.weights[160] = 1; DVA.weights[161] = 1; DVA.weights[162] = 1; DVA.weights[163] = 1; DVA.weights[164] = 1; DVA.weights[165] = 1; DVA.weights[166] = 1; DVA.weights[167] = 1; DVA.weights[168] = 1;
    if (id == 111) {
        return DVA;
    }


    neuron DVB;
    DVB.cellID = 112;
    DVB.threshold = 1;
    DVB.inputsLen = 22;
    DVB.inputs[0] = 62; DVB.inputs[1] = 71; DVB.inputs[2] = 112; DVB.inputs[3] = 183; DVB.inputs[4] = 65; DVB.inputs[5] = 70; DVB.inputs[6] = 67; DVB.inputs[7] = 292; DVB.inputs[8] = 113; DVB.inputs[9] = 113; DVB.inputs[10] = 113; DVB.inputs[11] = 181; DVB.inputs[12] = 181; DVB.inputs[13] = 294; DVB.inputs[14] = 181; DVB.inputs[15] = 180; DVB.inputs[16] = 180; DVB.inputs[17] = 185; DVB.inputs[18] = 294; DVB.inputs[19] = 294; DVB.inputs[20] = 294; DVB.inputs[21] = 113;
    DVB.weightsLen = 22;
    DVB.weights[0] = 1; DVB.weights[1] = 1; DVB.weights[2] = 1; DVB.weights[3] = 1; DVB.weights[4] = 1; DVB.weights[5] = 1; DVB.weights[6] = 1; DVB.weights[7] = 1; DVB.weights[8] = 1; DVB.weights[9] = 1; DVB.weights[10] = 1; DVB.weights[11] = 1; DVB.weights[12] = 1; DVB.weights[13] = 1; DVB.weights[14] = 1; DVB.weights[15] = 1; DVB.weights[16] = 1; DVB.weights[17] = 1; DVB.weights[18] = 1; DVB.weights[19] = 1; DVB.weights[20] = 1; DVB.weights[21] = 1;
    if (id == 112) {
        return DVB;
    }


    neuron DVC;
    DVC.cellID = 113;
    DVC.threshold = 1;
    DVC.inputsLen = 54;
    DVC.inputs[0] = 219; DVC.inputs[1] = 185; DVC.inputs[2] = 190; DVC.inputs[3] = 251; DVC.inputs[4] = 136; DVC.inputs[5] = 218; DVC.inputs[6] = 198; DVC.inputs[7] = 185; DVC.inputs[8] = 185; DVC.inputs[9] = 71; DVC.inputs[10] = 184; DVC.inputs[11] = 172; DVC.inputs[12] = 64; DVC.inputs[13] = 64; DVC.inputs[14] = 64; DVC.inputs[15] = 67; DVC.inputs[16] = 181; DVC.inputs[17] = 183; DVC.inputs[18] = 181; DVC.inputs[19] = 55; DVC.inputs[20] = 181; DVC.inputs[21] = 174; DVC.inputs[22] = 292; DVC.inputs[23] = 185; DVC.inputs[24] = 181; DVC.inputs[25] = 181; DVC.inputs[26] = 181; DVC.inputs[27] = 181; DVC.inputs[28] = 181; DVC.inputs[29] = 176; DVC.inputs[30] = 180; DVC.inputs[31] = 180; DVC.inputs[32] = 180; DVC.inputs[33] = 180; DVC.inputs[34] = 180; DVC.inputs[35] = 180; DVC.inputs[36] = 180; DVC.inputs[37] = 180; DVC.inputs[38] = 181; DVC.inputs[39] = 181; DVC.inputs[40] = 181; DVC.inputs[41] = 183; DVC.inputs[42] = 181; DVC.inputs[43] = 185; DVC.inputs[44] = 185; DVC.inputs[45] = 185; DVC.inputs[46] = 294; DVC.inputs[47] = 180; DVC.inputs[48] = 180; DVC.inputs[49] = 180; DVC.inputs[50] = 181; DVC.inputs[51] = 181; DVC.inputs[52] = 181; DVC.inputs[53] = 181;
    DVC.weightsLen = 54;
    DVC.weights[0] = 1; DVC.weights[1] = 1; DVC.weights[2] = 1; DVC.weights[3] = 1; DVC.weights[4] = 1; DVC.weights[5] = 1; DVC.weights[6] = 1; DVC.weights[7] = 1; DVC.weights[8] = 1; DVC.weights[9] = 1; DVC.weights[10] = 1; DVC.weights[11] = 1; DVC.weights[12] = 1; DVC.weights[13] = 1; DVC.weights[14] = 1; DVC.weights[15] = 1; DVC.weights[16] = 1; DVC.weights[17] = 1; DVC.weights[18] = 1; DVC.weights[19] = 1; DVC.weights[20] = 1; DVC.weights[21] = 1; DVC.weights[22] = 1; DVC.weights[23] = 1; DVC.weights[24] = 1; DVC.weights[25] = 1; DVC.weights[26] = 1; DVC.weights[27] = 1; DVC.weights[28] = 1; DVC.weights[29] = 1; DVC.weights[30] = 1; DVC.weights[31] = 1; DVC.weights[32] = 1; DVC.weights[33] = 1; DVC.weights[34] = 1; DVC.weights[35] = 1; DVC.weights[36] = 1; DVC.weights[37] = 1; DVC.weights[38] = 1; DVC.weights[39] = 1; DVC.weights[40] = 1; DVC.weights[41] = 1; DVC.weights[42] = 1; DVC.weights[43] = 1; DVC.weights[44] = 1; DVC.weights[45] = 1; DVC.weights[46] = 1; DVC.weights[47] = 1; DVC.weights[48] = 1; DVC.weights[49] = 1; DVC.weights[50] = 1; DVC.weights[51] = 1; DVC.weights[52] = 1; DVC.weights[53] = 1;
    if (id == 113) {
        return DVC;
    }


    neuron FLPL;
    FLPL.cellID = 114;
    FLPL.threshold = 1;
    FLPL.inputsLen = 22;
    FLPL.inputs[0] = 3; FLPL.inputs[1] = 194; FLPL.inputs[2] = 231; FLPL.inputs[3] = 115; FLPL.inputs[4] = 115; FLPL.inputs[5] = 174; FLPL.inputs[6] = 174; FLPL.inputs[7] = 115; FLPL.inputs[8] = 115; FLPL.inputs[9] = 3; FLPL.inputs[10] = 4; FLPL.inputs[11] = 115; FLPL.inputs[12] = 115; FLPL.inputs[13] = 115; FLPL.inputs[14] = 115; FLPL.inputs[15] = 13; FLPL.inputs[16] = 234; FLPL.inputs[17] = 231; FLPL.inputs[18] = 115; FLPL.inputs[19] = 115; FLPL.inputs[20] = 199; FLPL.inputs[21] = 115;
    FLPL.weightsLen = 22;
    FLPL.weights[0] = 1; FLPL.weights[1] = 1; FLPL.weights[2] = 1; FLPL.weights[3] = 1; FLPL.weights[4] = 1; FLPL.weights[5] = 1; FLPL.weights[6] = 1; FLPL.weights[7] = 1; FLPL.weights[8] = 1; FLPL.weights[9] = 1; FLPL.weights[10] = 1; FLPL.weights[11] = 1; FLPL.weights[12] = 1; FLPL.weights[13] = 1; FLPL.weights[14] = 1; FLPL.weights[15] = 1; FLPL.weights[16] = 1; FLPL.weights[17] = 1; FLPL.weights[18] = 1; FLPL.weights[19] = 1; FLPL.weights[20] = 1; FLPL.weights[21] = 1;
    if (id == 114) {
        return FLPL;
    }


    neuron FLPR;
    FLPR.cellID = 115;
    FLPR.threshold = 1;
    FLPR.inputsLen = 4;
    FLPR.inputs[0] = 4; FLPR.inputs[1] = 68; FLPR.inputs[2] = 114; FLPR.inputs[3] = 114;
    FLPR.weightsLen = 4;
    FLPR.weights[0] = 1; FLPR.weights[1] = 1; FLPR.weights[2] = 1; FLPR.weights[3] = 1;
    if (id == 115) {
        return FLPR;
    }


    neuron HSNL;
    HSNL.cellID = 116;
    HSNL.threshold = 1;
    HSNL.inputsLen = 25;
    HSNL.inputs[0] = 182; HSNL.inputs[1] = 63; HSNL.inputs[2] = 48; HSNL.inputs[3] = 16; HSNL.inputs[4] = 116; HSNL.inputs[5] = 16; HSNL.inputs[6] = 117; HSNL.inputs[7] = 16; HSNL.inputs[8] = 44; HSNL.inputs[9] = 204; HSNL.inputs[10] = 44; HSNL.inputs[11] = 51; HSNL.inputs[12] = 63; HSNL.inputs[13] = 196; HSNL.inputs[14] = 75; HSNL.inputs[15] = 45; HSNL.inputs[16] = 76; HSNL.inputs[17] = 182; HSNL.inputs[18] = 62; HSNL.inputs[19] = 81; HSNL.inputs[20] = 63; HSNL.inputs[21] = 76; HSNL.inputs[22] = 117; HSNL.inputs[23] = 195; HSNL.inputs[24] = 180;
    HSNL.weightsLen = 25;
    HSNL.weights[0] = 1; HSNL.weights[1] = 1; HSNL.weights[2] = 1; HSNL.weights[3] = 1; HSNL.weights[4] = 1; HSNL.weights[5] = 1; HSNL.weights[6] = 1; HSNL.weights[7] = 1; HSNL.weights[8] = 1; HSNL.weights[9] = 1; HSNL.weights[10] = 1; HSNL.weights[11] = 1; HSNL.weights[12] = 1; HSNL.weights[13] = 1; HSNL.weights[14] = 1; HSNL.weights[15] = 1; HSNL.weights[16] = 1; HSNL.weights[17] = 1; HSNL.weights[18] = 1; HSNL.weights[19] = 1; HSNL.weights[20] = 1; HSNL.weights[21] = 1; HSNL.weights[22] = 1; HSNL.weights[23] = 1; HSNL.weights[24] = 1;
    if (id == 116) {
        return HSNL;
    }


    neuron HSNR;
    HSNR.cellID = 117;
    HSNR.threshold = 1;
    HSNR.inputsLen = 33;
    HSNR.inputs[0] = 182; HSNR.inputs[1] = 182; HSNR.inputs[2] = 182; HSNR.inputs[3] = 16; HSNR.inputs[4] = 255; HSNR.inputs[5] = 16; HSNR.inputs[6] = 19; HSNR.inputs[7] = 116; HSNR.inputs[8] = 63; HSNR.inputs[9] = 76; HSNR.inputs[10] = 48; HSNR.inputs[11] = 49; HSNR.inputs[12] = 62; HSNR.inputs[13] = 196; HSNR.inputs[14] = 45; HSNR.inputs[15] = 116; HSNR.inputs[16] = 45; HSNR.inputs[17] = 116; HSNR.inputs[18] = 76; HSNR.inputs[19] = 182; HSNR.inputs[20] = 82; HSNR.inputs[21] = 82; HSNR.inputs[22] = 82; HSNR.inputs[23] = 71; HSNR.inputs[24] = 181; HSNR.inputs[25] = 62; HSNR.inputs[26] = 71; HSNR.inputs[27] = 57; HSNR.inputs[28] = 179; HSNR.inputs[29] = 63; HSNR.inputs[30] = 82; HSNR.inputs[31] = 181; HSNR.inputs[32] = 179;
    HSNR.weightsLen = 33;
    HSNR.weights[0] = 1; HSNR.weights[1] = 1; HSNR.weights[2] = 1; HSNR.weights[3] = 1; HSNR.weights[4] = 1; HSNR.weights[5] = 1; HSNR.weights[6] = 1; HSNR.weights[7] = 1; HSNR.weights[8] = 1; HSNR.weights[9] = 1; HSNR.weights[10] = 1; HSNR.weights[11] = 1; HSNR.weights[12] = 1; HSNR.weights[13] = 1; HSNR.weights[14] = 1; HSNR.weights[15] = 1; HSNR.weights[16] = 1; HSNR.weights[17] = 1; HSNR.weights[18] = 1; HSNR.weights[19] = 1; HSNR.weights[20] = 1; HSNR.weights[21] = 1; HSNR.weights[22] = 1; HSNR.weights[23] = 1; HSNR.weights[24] = 1; HSNR.weights[25] = 1; HSNR.weights[26] = 1; HSNR.weights[27] = 1; HSNR.weights[28] = 1; HSNR.weights[29] = 1; HSNR.weights[30] = 1; HSNR.weights[31] = 1; HSNR.weights[32] = 1;
    if (id == 117) {
        return HSNR;
    }


    neuron I1L;
    I1L.cellID = 118;
    I1L.threshold = 1;
    I1L.inputsLen = 0;

    I1L.weightsLen = 0;
    I1L.weights[0] = 1; I1L.weights[1] = 1; I1L.weights[2] = 1; I1L.weights[3] = 1; I1L.weights[4] = 1; I1L.weights[5] = 1; I1L.weights[6] = 1; I1L.weights[7] = 1; I1L.weights[8] = 1; I1L.weights[9] = 1; I1L.weights[10] = 1; I1L.weights[11] = 1; I1L.weights[12] = 1; I1L.weights[13] = 1; I1L.weights[14] = 1; I1L.weights[15] = 1; I1L.weights[16] = 1; I1L.weights[17] = 1; I1L.weights[18] = 1; I1L.weights[19] = 1; I1L.weights[20] = 1; I1L.weights[21] = 1; I1L.weights[22] = 1; I1L.weights[23] = 1; I1L.weights[24] = 1; I1L.weights[25] = 1; I1L.weights[26] = 1; I1L.weights[27] = 1; I1L.weights[28] = 1; I1L.weights[29] = 1; I1L.weights[30] = 1; I1L.weights[31] = 1; I1L.weights[32] = 1;
    if (id == 118) {
        return I1L;
    }


    neuron I1R;
    I1R.cellID = 119;
    I1R.threshold = 1;
    I1R.inputsLen = 0;

    I1R.weightsLen = 0;
    I1R.weights[0] = 1; I1R.weights[1] = 1; I1R.weights[2] = 1; I1R.weights[3] = 1; I1R.weights[4] = 1; I1R.weights[5] = 1; I1R.weights[6] = 1; I1R.weights[7] = 1; I1R.weights[8] = 1; I1R.weights[9] = 1; I1R.weights[10] = 1; I1R.weights[11] = 1; I1R.weights[12] = 1; I1R.weights[13] = 1; I1R.weights[14] = 1; I1R.weights[15] = 1; I1R.weights[16] = 1; I1R.weights[17] = 1; I1R.weights[18] = 1; I1R.weights[19] = 1; I1R.weights[20] = 1; I1R.weights[21] = 1; I1R.weights[22] = 1; I1R.weights[23] = 1; I1R.weights[24] = 1; I1R.weights[25] = 1; I1R.weights[26] = 1; I1R.weights[27] = 1; I1R.weights[28] = 1; I1R.weights[29] = 1; I1R.weights[30] = 1; I1R.weights[31] = 1; I1R.weights[32] = 1;
    if (id == 119) {
        return I1R;
    }


    neuron I2L;
    I2L.cellID = 120;
    I2L.threshold = 1;
    I2L.inputsLen = 0;

    I2L.weightsLen = 0;
    I2L.weights[0] = 1; I2L.weights[1] = 1; I2L.weights[2] = 1; I2L.weights[3] = 1; I2L.weights[4] = 1; I2L.weights[5] = 1; I2L.weights[6] = 1; I2L.weights[7] = 1; I2L.weights[8] = 1; I2L.weights[9] = 1; I2L.weights[10] = 1; I2L.weights[11] = 1; I2L.weights[12] = 1; I2L.weights[13] = 1; I2L.weights[14] = 1; I2L.weights[15] = 1; I2L.weights[16] = 1; I2L.weights[17] = 1; I2L.weights[18] = 1; I2L.weights[19] = 1; I2L.weights[20] = 1; I2L.weights[21] = 1; I2L.weights[22] = 1; I2L.weights[23] = 1; I2L.weights[24] = 1; I2L.weights[25] = 1; I2L.weights[26] = 1; I2L.weights[27] = 1; I2L.weights[28] = 1; I2L.weights[29] = 1; I2L.weights[30] = 1; I2L.weights[31] = 1; I2L.weights[32] = 1;
    if (id == 120) {
        return I2L;
    }


    neuron I2R;
    I2R.cellID = 121;
    I2R.threshold = 1;
    I2R.inputsLen = 0;

    I2R.weightsLen = 0;
    I2R.weights[0] = 1; I2R.weights[1] = 1; I2R.weights[2] = 1; I2R.weights[3] = 1; I2R.weights[4] = 1; I2R.weights[5] = 1; I2R.weights[6] = 1; I2R.weights[7] = 1; I2R.weights[8] = 1; I2R.weights[9] = 1; I2R.weights[10] = 1; I2R.weights[11] = 1; I2R.weights[12] = 1; I2R.weights[13] = 1;
     I2R.weights[14] = 1; I2R.weights[15] = 1; I2R.weights[16] = 1; I2R.weights[17] = 1; I2R.weights[18] = 1; I2R.weights[19] = 1; I2R.weights[20] = 1; I2R.weights[21] = 1; I2R.weights[22] = 1; I2R.weights[23] = 1; I2R.weights[24] = 1; I2R.weights[25] = 1; I2R.weights[26] = 1; I2R.weights[27] = 1; I2R.weights[28] = 1; I2R.weights[29] = 1; I2R.weights[30] = 1; I2R.weights[31] = 1; I2R.weights[32] = 1;
    if (id == 121) {
        return I2R;
    }


    neuron I3;
    I3.cellID = 122;
    I3.threshold = 1;
    I3.inputsLen = 0;

    I3.weightsLen = 0;
    I3.weights[0] = 1; I3.weights[1] = 1; I3.weights[2] = 1; I3.weights[3] = 1; I3.weights[4] = 1; I3.weights[5] = 1; I3.weights[6] = 1; I3.weights[7] = 1; I3.weights[8] = 1; I3.weights[9] = 1; I3.weights[10] = 1; I3.weights[11] = 1; I3.weights[12] = 1; I3.weights[13] = 1; I3.weights[14] = 1; I3.weights[15] = 1; I3.weights[16] = 1; I3.weights[17] = 1; I3.weights[18] = 1; I3.weights[19] = 1; I3.weights[20] = 1; I3.weights[21] = 1; I3.weights[22] = 1; I3.weights[23] = 1; I3.weights[24] = 1; I3.weights[25] = 1; I3.weights[26] = 1; I3.weights[27] = 1; I3.weights[28] = 1; I3.weights[29] = 1; I3.weights[30] = 1; I3.weights[31] = 1; I3.weights[32] = 1;
    if (id == 122) {
        return I3;
    }


    neuron I4;
    I4.cellID = 123;
    I4.threshold = 1;
    I4.inputsLen = 0;

    I4.weightsLen = 0;
    I4.weights[0] = 1; I4.weights[1] = 1; I4.weights[2] = 1; I4.weights[3] = 1; I4.weights[4] = 1; I4.weights[5] = 1; I4.weights[6] = 1; I4.weights[7] = 1; I4.weights[8] = 1; I4.weights[9] = 1; I4.weights[10] = 1; I4.weights[11] = 1; I4.weights[12] = 1; I4.weights[13] = 1; I4.weights[14] = 1; I4.weights[15] = 1; I4.weights[16] = 1; I4.weights[17] = 1; I4.weights[18] = 1; I4.weights[19] = 1; I4.weights[20] = 1; I4.weights[21] = 1; I4.weights[22] = 1; I4.weights[23] = 1; I4.weights[24] = 1; I4.weights[25] = 1; I4.weights[26] = 1; I4.weights[27] = 1; I4.weights[28] = 1; I4.weights[29] = 1; I4.weights[30] = 1; I4.weights[31] = 1; I4.weights[32] = 1;
    if (id == 123) {
        return I4;
    }


    neuron I5;
    I5.cellID = 124;
    I5.threshold = 1;
    I5.inputsLen = 0;

    I5.weightsLen = 0;
    I5.weights[0] = 1; I5.weights[1] = 1; I5.weights[2] = 1; I5.weights[3] = 1; I5.weights[4] = 1; I5.weights[5] = 1; I5.weights[6] = 1; I5.weights[7] = 1; I5.weights[8] = 1; I5.weights[9] = 1; I5.weights[10] = 1; I5.weights[11] = 1; I5.weights[12] = 1; I5.weights[13] = 1; I5.weights[14] = 1; I5.weights[15] = 1; I5.weights[16] = 1; I5.weights[17] = 1; I5.weights[18] = 1; I5.weights[19] = 1; I5.weights[20] = 1; I5.weights[21] = 1; I5.weights[22] = 1; I5.weights[23] = 1; I5.weights[24] = 1; I5.weights[25] = 1; I5.weights[26] = 1; I5.weights[27] = 1; I5.weights[28] = 1; I5.weights[29] = 1; I5.weights[30] = 1; I5.weights[31] = 1; I5.weights[32] = 1;
    if (id == 124) {
        return I5;
    }


    neuron I6;
    I6.cellID = 125;
    I6.threshold = 1;
    I6.inputsLen = 0;

    I6.weightsLen = 0;
    I6.weights[0] = 1; I6.weights[1] = 1; I6.weights[2] = 1; I6.weights[3] = 1; I6.weights[4] = 1; I6.weights[5] = 1; I6.weights[6] = 1; I6.weights[7] = 1; I6.weights[8] = 1; I6.weights[9] = 1; I6.weights[10] = 1; I6.weights[11] = 1; I6.weights[12] = 1; I6.weights[13] = 1; I6.weights[14] = 1; I6.weights[15] = 1; I6.weights[16] = 1; I6.weights[17] = 1; I6.weights[18] = 1; I6.weights[19] = 1; I6.weights[20] = 1; I6.weights[21] = 1; I6.weights[22] = 1; I6.weights[23] = 1; I6.weights[24] = 1; I6.weights[25] = 1; I6.weights[26] = 1; I6.weights[27] = 1; I6.weights[28] = 1; I6.weights[29] = 1; I6.weights[30] = 1; I6.weights[31] = 1; I6.weights[32] = 1;
    if (id == 125) {
        return I6;
    }


    neuron IL1DL;
    IL1DL.cellID = 126;
    IL1DL.threshold = 1;
    IL1DL.inputsLen = 30;
    IL1DL.inputs[0] = 257; IL1DL.inputs[1] = 257; IL1DL.inputs[2] = 255; IL1DL.inputs[3] = 255; IL1DL.inputs[4] = 249; IL1DL.inputs[5] = 249; IL1DL.inputs[6] = 85; IL1DL.inputs[7] = 227; IL1DL.inputs[8] = 227; IL1DL.inputs[9] = 227; IL1DL.inputs[10] = 85; IL1DL.inputs[11] = 85; IL1DL.inputs[12] = 132; IL1DL.inputs[13] = 132; IL1DL.inputs[14] = 132; IL1DL.inputs[15] = 132; IL1DL.inputs[16] = 132; IL1DL.inputs[17] = 85; IL1DL.inputs[18] = 132; IL1DL.inputs[19] = 132; IL1DL.inputs[20] = 132; IL1DL.inputs[21] = 85; IL1DL.inputs[22] = 85; IL1DL.inputs[23] = 132; IL1DL.inputs[24] = 249; IL1DL.inputs[25] = 132; IL1DL.inputs[26] = 127; IL1DL.inputs[27] = 128; IL1DL.inputs[28] = 217; IL1DL.inputs[29] = 127;
    IL1DL.weightsLen = 30;
    IL1DL.weights[0] = 1; IL1DL.weights[1] = 1; IL1DL.weights[2] = 1; IL1DL.weights[3] = 1; IL1DL.weights[4] = 1; IL1DL.weights[5] = 1; IL1DL.weights[6] = 1; IL1DL.weights[7] = 1; IL1DL.weights[8] = 1; IL1DL.weights[9] = 1; IL1DL.weights[10] = 1; IL1DL.weights[11] = 1; IL1DL.weights[12] = 1; IL1DL.weights[13] = 1; IL1DL.weights[14] = 1; IL1DL.weights[15] = 1; IL1DL.weights[16] = 1; IL1DL.weights[17] = 1; IL1DL.weights[18] = 1; IL1DL.weights[19] = 1; IL1DL.weights[20] = 1; IL1DL.weights[21] = 1; IL1DL.weights[22] = 1; IL1DL.weights[23] = 1; IL1DL.weights[24] = 1; IL1DL.weights[25] = 1; IL1DL.weights[26] = 1; IL1DL.weights[27] = 1; IL1DL.weights[28] = 1; IL1DL.weights[29] = 1;
    if (id == 126) {
        return IL1DL;
    }


    neuron IL1DR;
    IL1DR.cellID = 127;
    IL1DR.threshold = 1;
    IL1DR.inputsLen = 38;
    IL1DR.inputs[0] = 133; IL1DR.inputs[1] = 258; IL1DR.inputs[2] = 258; IL1DR.inputs[3] = 258; IL1DR.inputs[4] = 133; IL1DR.inputs[5] = 250; IL1DR.inputs[6] = 86; IL1DR.inputs[7] = 86; IL1DR.inputs[8] = 86; IL1DR.inputs[9] = 86; IL1DR.inputs[10] = 86; IL1DR.inputs[11] = 153; IL1DR.inputs[12] = 133; IL1DR.inputs[13] = 184; IL1DR.inputs[14] = 133; IL1DR.inputs[15] = 250; IL1DR.inputs[16] = 133; IL1DR.inputs[17] = 133; IL1DR.inputs[18] = 133; IL1DR.inputs[19] = 133; IL1DR.inputs[20] = 133; IL1DR.inputs[21] = 133; IL1DR.inputs[22] = 184; IL1DR.inputs[23] = 86; IL1DR.inputs[24] = 133; IL1DR.inputs[25] = 155; IL1DR.inputs[26] = 86; IL1DR.inputs[27] = 254; IL1DR.inputs[28] = 208; IL1DR.inputs[29] = 208; IL1DR.inputs[30] = 213; IL1DR.inputs[31] = 127; IL1DR.inputs[32] = 250; IL1DR.inputs[33] = 129; IL1DR.inputs[34] = 213; IL1DR.inputs[35] = 217; IL1DR.inputs[36] = 217; IL1DR.inputs[37] = 129;
    IL1DR.weightsLen = 38;
    IL1DR.weights[0] = 1; IL1DR.weights[1] = 1; IL1DR.weights[2] = 1; IL1DR.weights[3] = 1; IL1DR.weights[4] = 1; IL1DR.weights[5] = 1; IL1DR.weights[6] = 1; IL1DR.weights[7] = 1; IL1DR.weights[8] = 1; IL1DR.weights[9] = 1; IL1DR.weights[10] = 1; IL1DR.weights[11] = 1; IL1DR.weights[12] = 1; IL1DR.weights[13] = 1; IL1DR.weights[14] = 1; IL1DR.weights[15] = 1; IL1DR.weights[16] = 1; IL1DR.weights[17] = 1; IL1DR.weights[18] = 1; IL1DR.weights[19] = 1; IL1DR.weights[20] = 1; IL1DR.weights[21] = 1; IL1DR.weights[22] = 1; IL1DR.weights[23] = 1; IL1DR.weights[24] = 1; IL1DR.weights[25] = 1; IL1DR.weights[26] = 1; IL1DR.weights[27] = 1; IL1DR.weights[28] = 1; IL1DR.weights[29] = 1; IL1DR.weights[30] = 1; IL1DR.weights[31] = 1; IL1DR.weights[32] = 1; IL1DR.weights[33] = 1; IL1DR.weights[34] = 1; IL1DR.weights[35] = 1; IL1DR.weights[36] = 1; IL1DR.weights[37] = 1;
    if (id == 127) {
        return IL1DR;
    }


    neuron IL1L;
    IL1L.cellID = 128;
    IL1L.threshold = 1;
    IL1L.inputsLen = 23;
    IL1L.inputs[0] = 213; IL1L.inputs[1] = 253; IL1L.inputs[2] = 253; IL1L.inputs[3] = 251; IL1L.inputs[4] = 253; IL1L.inputs[5] = 134; IL1L.inputs[6] = 134; IL1L.inputs[7] = 130; IL1L.inputs[8] = 211; IL1L.inputs[9] = 134; IL1L.inputs[10] = 3; IL1L.inputs[11] = 134; IL1L.inputs[12] = 216; IL1L.inputs[13] = 3; IL1L.inputs[14] = 210; IL1L.inputs[15] = 216; IL1L.inputs[16] = 216; IL1L.inputs[17] = 253; IL1L.inputs[18] = 202; IL1L.inputs[19] = 130; IL1L.inputs[20] = 130; IL1L.inputs[21] = 130; IL1L.inputs[22] = 216;
    IL1L.weightsLen = 23;
    IL1L.weights[0] = 1; IL1L.weights[1] = 1; IL1L.weights[2] = 1; IL1L.weights[3] = 1; IL1L.weights[4] = 1; IL1L.weights[5] = 1; IL1L.weights[6] = 1; IL1L.weights[7] = 1; IL1L.weights[8] = 1; IL1L.weights[9] = 1; IL1L.weights[10] = 1; IL1L.weights[11] = 1; IL1L.weights[12] = 1; IL1L.weights[13] = 1; IL1L.weights[14] = 1; IL1L.weights[15] = 1; IL1L.weights[16] = 1; IL1L.weights[17] = 1; IL1L.weights[18] = 1; IL1L.weights[19] = 1; IL1L.weights[20] = 1; IL1L.weights[21] = 1; IL1L.weights[22] = 1;
    if (id == 128) {
        return IL1L;
    }


    neuron IL1R;
    IL1R.cellID = 129;
    IL1R.threshold = 1;
    IL1R.inputsLen = 22;
    IL1R.inputs[0] = 208; IL1R.inputs[1] = 4; IL1R.inputs[2] = 210; IL1R.inputs[3] = 254; IL1R.inputs[4] = 252; IL1R.inputs[5] = 131; IL1R.inputs[6] = 135; IL1R.inputs[7] = 212; IL1R.inputs[8] = 222; IL1R.inputs[9] = 189; IL1R.inputs[10] = 127; IL1R.inputs[11] = 86; IL1R.inputs[12] = 222; IL1R.inputs[13] = 215; IL1R.inputs[14] = 215; IL1R.inputs[15] = 131; IL1R.inputs[16] = 127; IL1R.inputs[17] = 254; IL1R.inputs[18] = 131; IL1R.inputs[19] = 131; IL1R.inputs[20] = 131; IL1R.inputs[21] = 131;
    IL1R.weightsLen = 22;
    IL1R.weights[0] = 1; IL1R.weights[1] = 1; IL1R.weights[2] = 1; IL1R.weights[3] = 1; IL1R.weights[4] = 1; IL1R.weights[5] = 1; IL1R.weights[6] = 1; IL1R.weights[7] = 1; IL1R.weights[8] = 1; IL1R.weights[9] = 1; IL1R.weights[10] = 1; IL1R.weights[11] = 1; IL1R.weights[12] = 1; IL1R.weights[13] = 1; IL1R.weights[14] = 1; IL1R.weights[15] = 1; IL1R.weights[16] = 1; IL1R.weights[17] = 1; IL1R.weights[18] = 1; IL1R.weights[19] = 1; IL1R.weights[20] = 1; IL1R.weights[21] = 1;
    if (id == 129) {
        return IL1R;
    }


    neuron IL1VL;
    IL1VL.cellID = 130;
    IL1VL.threshold = 1;
    IL1VL.inputsLen = 22;
    IL1VL.inputs[0] = 136; IL1VL.inputs[1] = 136; IL1VL.inputs[2] = 87; IL1VL.inputs[3] = 251; IL1VL.inputs[4] = 251; IL1VL.inputs[5] = 136; IL1VL.inputs[6] = 136; IL1VL.inputs[7] = 136; IL1VL.inputs[8] = 87; IL1VL.inputs[9] = 136; IL1VL.inputs[10] = 136; IL1VL.inputs[11] = 136; IL1VL.inputs[12] = 136; IL1VL.inputs[13] = 136; IL1VL.inputs[14] = 152; IL1VL.inputs[15] = 184; IL1VL.inputs[16] = 130; IL1VL.inputs[17] = 259; IL1VL.inputs[18] = 208; IL1VL.inputs[19] = 131; IL1VL.inputs[20] = 214; IL1VL.inputs[21] = 214;
    IL1VL.weightsLen = 22;
    IL1VL.weights[0] = 1; IL1VL.weights[1] = 1; IL1VL.weights[2] = 1; IL1VL.weights[3] = 1; IL1VL.weights[4] = 1; IL1VL.weights[5] = 1; IL1VL.weights[6] = 1; IL1VL.weights[7] = 1; IL1VL.weights[8] = 1; IL1VL.weights[9] = 1; IL1VL.weights[10] = 1; IL1VL.weights[11] = 1; IL1VL.weights[12] = 1; IL1VL.weights[13] = 1; IL1VL.weights[14] = 1; IL1VL.weights[15] = 1; IL1VL.weights[16] = 1; IL1VL.weights[17] = 1; IL1VL.weights[18] = 1; IL1VL.weights[19] = 1; IL1VL.weights[20] = 1; IL1VL.weights[21] = 1;
    if (id == 130) {
        return IL1VL;
    }


    neuron IL1VR;
    IL1VR.cellID = 131;
    IL1VR.threshold = 1;
    IL1VR.inputsLen = 29;
    IL1VR.inputs[0] = 88; IL1VR.inputs[1] = 88; IL1VR.inputs[2] = 137; IL1VR.inputs[3] = 137; IL1VR.inputs[4] = 137; IL1VR.inputs[5] = 137; IL1VR.inputs[6] = 137; IL1VR.inputs[7] = 137; IL1VR.inputs[8] = 260; IL1VR.inputs[9] = 252; IL1VR.inputs[10] = 252; IL1VR.inputs[11] = 252; IL1VR.inputs[12] = 137; IL1VR.inputs[13] = 234; IL1VR.inputs[14] = 88; IL1VR.inputs[15] = 260; IL1VR.inputs[16] = 153; IL1VR.inputs[17] = 260; IL1VR.inputs[18] = 157; IL1VR.inputs[19] = 157; IL1VR.inputs[20] = 184; IL1VR.inputs[21] = 137; IL1VR.inputs[22] = 88; IL1VR.inputs[23] = 184; IL1VR.inputs[24] = 252; IL1VR.inputs[25] = 252; IL1VR.inputs[26] = 137; IL1VR.inputs[27] = 252; IL1VR.inputs[28] = 252;
    IL1VR.weightsLen = 29;
    IL1VR.weights[0] = 1; IL1VR.weights[1] = 1; IL1VR.weights[2] = 1; IL1VR.weights[3] = 1; IL1VR.weights[4] = 1; IL1VR.weights[5] = 1; IL1VR.weights[6] = 1; IL1VR.weights[7] = 1; IL1VR.weights[8] = 1; IL1VR.weights[9] = 1; IL1VR.weights[10] = 1; IL1VR.weights[11] = 1; IL1VR.weights[12] = 1; IL1VR.weights[13] = 1; IL1VR.weights[14] = 1; IL1VR.weights[15] = 1; IL1VR.weights[16] = 1; IL1VR.weights[17] = 1; IL1VR.weights[18] = 1; IL1VR.weights[19] = 1; IL1VR.weights[20] = 1; IL1VR.weights[21] = 1; IL1VR.weights[22] = 1; IL1VR.weights[23] = 1; IL1VR.weights[24] = 1; IL1VR.weights[25] = 1; IL1VR.weights[26] = 1; IL1VR.weights[27] = 1; IL1VR.weights[28] = 1;
    if (id == 131) {
        return IL1VR;
    }


    neuron IL2DL;
    IL2DL.cellID = 132;
    IL2DL.threshold = 1;
    IL2DL.inputsLen = 4;
    IL2DL.inputs[0] = 126; IL2DL.inputs[1] = 85; IL2DL.inputs[2] = 132; IL2DL.inputs[3] = 249;
    IL2DL.weightsLen = 4;
    IL2DL.weights[0] = 1; IL2DL.weights[1] = 1; IL2DL.weights[2] = 1; IL2DL.weights[3] = 1;
    if (id == 132) {
        return IL2DL;
    }


    neuron IL2DR;
    IL2DR.cellID = 133;
    IL2DR.threshold = 1;
    IL2DR.inputsLen = 10;
    IL2DR.inputs[0] = 13; IL2DR.inputs[1] = 127; IL2DR.inputs[2] = 27; IL2DR.inputs[3] = 27; IL2DR.inputs[4] = 27; IL2DR.inputs[5] = 127; IL2DR.inputs[6] = 127; IL2DR.inputs[7] = 221; IL2DR.inputs[8] = 250; IL2DR.inputs[9] = 214;
    IL2DR.weightsLen = 10;
    IL2DR.weights[0] = 1; IL2DR.weights[1] = 1; IL2DR.weights[2] = 1; IL2DR.weights[3] = 1; IL2DR.weights[4] = 1; IL2DR.weights[5] = 1; IL2DR.weights[6] = 1; IL2DR.weights[7] = 1; IL2DR.weights[8] = 1; IL2DR.weights[9] = 1;
    if (id == 133) {
        return IL2DR;
    }


    neuron IL2L;
    IL2L.cellID = 134;
    IL2L.threshold = 1;
    IL2L.inputsLen = 19;
    IL2L.inputs[0] = 136; IL2L.inputs[1] = 3; IL2L.inputs[2] = 255; IL2L.inputs[3] = 247; IL2L.inputs[4] = 235; IL2L.inputs[5] = 156; IL2L.inputs[6] = 199; IL2L.inputs[7] = 78; IL2L.inputs[8] = 128; IL2L.inputs[9] = 3; IL2L.inputs[10] = 253; IL2L.inputs[11] = 253; IL2L.inputs[12] = 210; IL2L.inputs[13] = 216; IL2L.inputs[14] = 152; IL2L.inputs[15] = 216; IL2L.inputs[16] = 251; IL2L.inputs[17] = 255; IL2L.inputs[18] = 210;
    IL2L.weightsLen = 19;
    IL2L.weights[0] = 1; IL2L.weights[1] = 1; IL2L.weights[2] = 1; IL2L.weights[3] = 1; IL2L.weights[4] = 1; IL2L.weights[5] = 1; IL2L.weights[6] = 1; IL2L.weights[7] = 1; IL2L.weights[8] = 1; IL2L.weights[9] = 1; IL2L.weights[10] = 1; IL2L.weights[11] = 1; IL2L.weights[12] = 1; IL2L.weights[13] = 1; IL2L.weights[14] = 1; IL2L.weights[15] = 1; IL2L.weights[16] = 1; IL2L.weights[17] = 1; IL2L.weights[18] = 1;
    if (id == 134) {
        return IL2L;
    }


    neuron IL2R;
    IL2R.cellID = 135;
    IL2R.threshold = 1;
    IL2R.inputsLen = 10;
    IL2R.inputs[0] = 40; IL2R.inputs[1] = 4; IL2R.inputs[2] = 254; IL2R.inputs[3] = 221; IL2R.inputs[4] = 153; IL2R.inputs[5] = 199; IL2R.inputs[6] = 256; IL2R.inputs[7] = 254; IL2R.inputs[8] = 221; IL2R.inputs[9] = 256;
    IL2R.weightsLen = 10;
    IL2R.weights[0] = 1; IL2R.weights[1] = 1; IL2R.weights[2] = 1; IL2R.weights[3] = 1; IL2R.weights[4] = 1; IL2R.weights[5] = 1; IL2R.weights[6] = 1; IL2R.weights[7] = 1; IL2R.weights[8] = 1; IL2R.weights[9] = 1;
    if (id == 135) {
        return IL2R;
    }


    neuron IL2VL;
    IL2VL.cellID = 136;
    IL2VL.threshold = 1;
    IL2VL.inputsLen = 5;
    IL2VL.inputs[0] = 199; IL2VL.inputs[1] = 199; IL2VL.inputs[2] = 199; IL2VL.inputs[3] = 251; IL2VL.inputs[4] = 251;
    IL2VL.weightsLen = 5;
    IL2VL.weights[0] = 1; IL2VL.weights[1] = 1; IL2VL.weights[2] = 1; IL2VL.weights[3] = 1; IL2VL.weights[4] = 1;
    if (id == 136) {
        return IL2VL;
    }


    neuron IL2VR;
    IL2VR.cellID = 137;
    IL2VR.threshold = 1;
    IL2VR.inputsLen = 11;
    IL2VR.inputs[0] = 252; IL2VR.inputs[1] = 88; IL2VR.inputs[2] = 131; IL2VR.inputs[3] = 252; IL2VR.inputs[4] = 252; IL2VR.inputs[5] = 212; IL2VR.inputs[6] = 199; IL2VR.inputs[7] = 131; IL2VR.inputs[8] = 199; IL2VR.inputs[9] = 199; IL2VR.inputs[10] = 199;
    IL2VR.weightsLen = 11;
    IL2VR.weights[0] = 1; IL2VR.weights[1] = 1; IL2VR.weights[2] = 1; IL2VR.weights[3] = 1; IL2VR.weights[4] = 1; IL2VR.weights[5] = 1; IL2VR.weights[6] = 1; IL2VR.weights[7] = 1; IL2VR.weights[8] = 1; IL2VR.weights[9] = 1; IL2VR.weights[10] = 1;
    if (id == 137) {
        return IL2VR;
    }


    neuron LUAL;
    LUAL.cellID = 138;
    LUAL.threshold = 1;
    LUAL.inputsLen = 18;
    LUAL.inputs[0] = 164; LUAL.inputs[1] = 163; LUAL.inputs[2] = 55; LUAL.inputs[3] = 54; LUAL.inputs[4] = 166; LUAL.inputs[5] = 59; LUAL.inputs[6] = 264; LUAL.inputs[7] = 264; LUAL.inputs[8] = 58; LUAL.inputs[9] = 55; LUAL.inputs[10] = 180; LUAL.inputs[11] = 178; LUAL.inputs[12] = 178; LUAL.inputs[13] = 173; LUAL.inputs[14] = 168; LUAL.inputs[15] = 138; LUAL.inputs[16] = 168; LUAL.inputs[17] = 184;
    LUAL.weightsLen = 18;
    LUAL.weights[0] = 1; LUAL.weights[1] = 1; LUAL.weights[2] = 1; LUAL.weights[3] = 1; LUAL.weights[4] = 1; LUAL.weights[5] = 1; LUAL.weights[6] = 1; LUAL.weights[7] = 1; LUAL.weights[8] = 1; LUAL.weights[9] = 1; LUAL.weights[10] = 1; LUAL.weights[11] = 1; LUAL.weights[12] = 1; LUAL.weights[13] = 1; LUAL.weights[14] = 1; LUAL.weights[15] = 1; LUAL.weights[16] = 1; LUAL.weights[17] = 1;
    if (id == 138) {
        return LUAL;
    }


    neuron LUAR;
    LUAR.cellID = 139;
    LUAR.threshold = 1;
    LUAR.inputsLen = 19;
    LUAR.inputs[0] = 164; LUAR.inputs[1] = 112; LUAR.inputs[2] = 55; LUAR.inputs[3] = 167; LUAR.inputs[4] = 167; LUAR.inputs[5] = 184; LUAR.inputs[6] = 174; LUAR.inputs[7] = 172; LUAR.inputs[8] = 54; LUAR.inputs[9] = 54; LUAR.inputs[10] = 187; LUAR.inputs[11] = 187; LUAR.inputs[12] = 179; LUAR.inputs[13] = 169; LUAR.inputs[14] = 187; LUAR.inputs[15] = 186; LUAR.inputs[16] = 184; LUAR.inputs[17] = 185; LUAR.inputs[18] = 186;
    LUAR.weightsLen = 19;
    LUAR.weights[0] = 1; LUAR.weights[1] = 1; LUAR.weights[2] = 1; LUAR.weights[3] = 1; LUAR.weights[4] = 1; LUAR.weights[5] = 1; LUAR.weights[6] = 1; LUAR.weights[7] = 1; LUAR.weights[8] = 1; LUAR.weights[9] = 1; LUAR.weights[10] = 1; LUAR.weights[11] = 1; LUAR.weights[12] = 1; LUAR.weights[13] = 1; LUAR.weights[14] = 1; LUAR.weights[15] = 1; LUAR.weights[16] = 1; LUAR.weights[17] = 1; LUAR.weights[18] = 1;
    if (id == 139) {
        return LUAR;
    }


    neuron M1;
    M1.cellID = 140;
    M1.threshold = 1;
    M1.inputsLen = 0;

    M1.weightsLen = 0;
    M1.weights[0] = 1; M1.weights[1] = 1; M1.weights[2] = 1; M1.weights[3] = 1; M1.weights[4] = 1; M1.weights[5] = 1; M1.weights[6] = 1; M1.weights[7] = 1; M1.weights[8] = 1; M1.weights[9] = 1; M1.weights[10] = 1; M1.weights[11] = 1; M1.weights[12] = 1; M1.weights[13] = 1; M1.weights[14] = 1; M1.weights[15] = 1; M1.weights[16] = 1; M1.weights[17] = 1; M1.weights[18] = 1;
    if (id == 140) {
        return M1;
    }


    neuron M2L;
    M2L.cellID = 141;
    M2L.threshold = 1;
    M2L.inputsLen = 0;

    M2L.weightsLen = 0;
    M2L.weights[0] = 1; M2L.weights[1] = 1; M2L.weights[2] = 1; M2L.weights[3] = 1; M2L.weights[4] = 1; M2L.weights[5] = 1; M2L.weights[6] = 1; M2L.weights[7] = 1; M2L.weights[8] = 1; M2L.weights[9] = 1; M2L.weights[10] = 1; M2L.weights[11] = 1; M2L.weights[12] = 1; M2L.weights[13] = 1; M2L.weights[14] = 1; M2L.weights[15] = 1; M2L.weights[16] = 1; M2L.weights[17] = 1; M2L.weights[18] = 1;
    if (id == 141) {
        return M2L;
    }


    neuron M2R;
    M2R.cellID = 142;
    M2R.threshold = 1;
    M2R.inputsLen = 0;

    M2R.weightsLen = 0;
    M2R.weights[0] = 1; M2R.weights[1] = 1; M2R.weights[2] = 1; M2R.weights[3] = 1; M2R.weights[4] = 1; M2R.weights[5] = 1; M2R.weights[6] = 1; M2R.weights[7] = 1; M2R.weights[8] = 1; M2R.weights[9] = 1; M2R.weights[10] = 1; M2R.weights[11] = 1; M2R.weights[12] = 1; M2R.weights[13] = 1; M2R.weights[14] = 1; M2R.weights[15] = 1; M2R.weights[16] = 1; M2R.weights[17] = 1; M2R.weights[18] = 1;
    if (id == 142) {
        return M2R;
    }


    neuron M3L;
    M3L.cellID = 143;
    M3L.threshold = 1;
    M3L.inputsLen = 0;

    M3L.weightsLen = 0;
    M3L.weights[0] = 1; M3L.weights[1] = 1; M3L.weights[2] = 1; M3L.weights[3] = 1; M3L.weights[4] = 1; M3L.weights[5] = 1; M3L.weights[6] = 1; M3L.weights[7] = 1; M3L.weights[8] = 1; M3L.weights[9] = 1; M3L.weights[10] = 1; M3L.weights[11] = 1; M3L.weights[12] = 1; M3L.weights[13] = 1; M3L.weights[14] = 1; M3L.weights[15] = 1; M3L.weights[16] = 1; M3L.weights[17] = 1; M3L.weights[18] = 1;
    if (id == 143) {
        return M3L;
    }


    neuron M3R;
    M3R.cellID = 144;
    M3R.threshold = 1;
    M3R.inputsLen = 0;

    M3R.weightsLen = 0;
    M3R.weights[0] = 1; M3R.weights[1] = 1; M3R.weights[2] = 1; M3R.weights[3] = 1; M3R.weights[4] = 1; M3R.weights[5] = 1; M3R.weights[6] = 1; M3R.weights[7] = 1; M3R.weights[8] = 1; M3R.weights[9] = 1; M3R.weights[10] = 1; M3R.weights[11] = 1; M3R.weights[12] = 1; M3R.weights[13] = 1; M3R.weights[14] = 1; M3R.weights[15] = 1; M3R.weights[16] = 1; M3R.weights[17] = 1; M3R.weights[18] = 1;
    if (id == 144) {
        return M3R;
    }


    neuron M4;
    M4.cellID = 145;
    M4.threshold = 1;
    M4.inputsLen = 0;

    M4.weightsLen = 0;
    M4.weights[0] = 1; M4.weights[1] = 1; M4.weights[2] = 1; M4.weights[3] = 1; M4.weights[4] = 1; M4.weights[5] = 1; M4.weights[6] = 1; M4.weights[7] = 1; M4.weights[8] = 1; M4.weights[9] = 1; M4.weights[10] = 1; M4.weights[11] = 1; M4.weights[12] = 1; M4.weights[13] = 1; M4.weights[14] = 1; M4.weights[15] = 1; M4.weights[16] = 1; M4.weights[17] = 1; M4.weights[18] = 1;
    if (id == 145) {
        return M4;
    }


    neuron M5;
    M5.cellID = 146;
    M5.threshold = 1;
    M5.inputsLen = 0;

    M5.weightsLen = 0;
    M5.weights[0] = 1; M5.weights[1] = 1; M5.weights[2] = 1; M5.weights[3] = 1; M5.weights[4] = 1; M5.weights[5] = 1; M5.weights[6] = 1; M5.weights[7] = 1; M5.weights[8] = 1; M5.weights[9] = 1; M5.weights[10] = 1; M5.weights[11] = 1; M5.weights[12] = 1; M5.weights[13] = 1; M5.weights[14] = 1; M5.weights[15] = 1; M5.weights[16] = 1; M5.weights[17] = 1; M5.weights[18] = 1;
    if (id == 146) {
        return M5;
    }


    neuron MCL;
    MCL.cellID = 147;
    MCL.threshold = 1;
    MCL.inputsLen = 0;

    MCL.weightsLen = 0;
    MCL.weights[0] = 1; MCL.weights[1] = 1; MCL.weights[2] = 1; MCL.weights[3] = 1; MCL.weights[4] = 1; MCL.weights[5] = 1; MCL.weights[6] = 1; MCL.weights[7] = 1; MCL.weights[8] = 1; MCL.weights[9] = 1; MCL.weights[10] = 1; MCL.weights[11] = 1; MCL.weights[12] = 1; MCL.weights[13] = 1; MCL.weights[14] = 1; MCL.weights[15] = 1; MCL.weights[16] = 1; MCL.weights[17] = 1; MCL.weights[18] = 1;
    if (id == 147) {
        return MCL;
    }


    neuron MCR;
    MCR.cellID = 148;
    MCR.threshold = 1;
    MCR.inputsLen = 0;

    MCR.weightsLen = 0;
    MCR.weights[0] = 1; MCR.weights[1] = 1; MCR.weights[2] = 1; MCR.weights[3] = 1; MCR.weights[4] = 1; MCR.weights[5] = 1; MCR.weights[6] = 1; MCR.weights[7] = 1; MCR.weights[8] = 1; MCR.weights[9] = 1; MCR.weights[10] = 1; MCR.weights[11] = 1; MCR.weights[12] = 1; MCR.weights[13] = 1; MCR.weights[14] = 1; MCR.weights[15] = 1; MCR.weights[16] = 1; MCR.weights[17] = 1; MCR.weights[18] = 1;
    if (id == 148) {
        return MCR;
    }


    neuron MI;
    MI.cellID = 149;
    MI.threshold = 1;
    MI.inputsLen = 0;

    MI.weightsLen = 0;
    MI.weights[0] = 1; MI.weights[1] = 1; MI.weights[2] = 1; MI.weights[3] = 1; MI.weights[4] = 1; MI.weights[5] = 1; MI.weights[6] = 1; MI.weights[7] = 1; MI.weights[8] = 1; MI.weights[9] = 1; MI.weights[10] = 1; MI.weights[11] = 1; MI.weights[12] = 1; MI.weights[13] = 1; MI.weights[14] = 1; MI.weights[15] = 1; MI.weights[16] = 1; MI.weights[17] = 1; MI.weights[18] = 1;
    if (id == 149) {
        return MI;
    }


    neuron NSML;
    NSML.cellID = 150;
    NSML.threshold = 1;
    NSML.inputsLen = 0;

    NSML.weightsLen = 0;
    NSML.weights[0] = 1; NSML.weights[1] = 1; NSML.weights[2] = 1; NSML.weights[3] = 1; NSML.weights[4] = 1; NSML.weights[5] = 1; NSML.weights[6] = 1; NSML.weights[7] = 1; NSML.weights[8] = 1; NSML.weights[9] = 1; NSML.weights[10] = 1; NSML.weights[11] = 1; NSML.weights[12] = 1; NSML.weights[13] = 1; NSML.weights[14] = 1; NSML.weights[15] = 1; NSML.weights[16] = 1; NSML.weights[17] = 1; NSML.weights[18] = 1;
    if (id == 150) {
        return NSML;
    }


    neuron NSMR;
    NSMR.cellID = 151;
    NSMR.threshold = 1;
    NSMR.inputsLen = 0;

    NSMR.weightsLen = 0;
    NSMR.weights[0] = 1; NSMR.weights[1] = 1; NSMR.weights[2] = 1; NSMR.weights[3] = 1; NSMR.weights[4] = 1; NSMR.weights[5] = 1; NSMR.weights[6] = 1; NSMR.weights[7] = 1; NSMR.weights[8] = 1; NSMR.weights[9] = 1; NSMR.weights[10] = 1; NSMR.weights[11] = 1; NSMR.weights[12] = 1; NSMR.weights[13] = 1; NSMR.weights[14] = 1; NSMR.weights[15] = 1; NSMR.weights[16] = 1; NSMR.weights[17] = 1; NSMR.weights[18] = 1;
    if (id == 151) {
        return NSMR;
    }


    neuron OLLL;
    OLLL.cellID = 152;
    OLLL.threshold = 1;
    OLLL.inputsLen = 31;
    OLLL.inputs[0] = 225; OLLL.inputs[1] = 225; OLLL.inputs[2] = 210; OLLL.inputs[3] = 259; OLLL.inputs[4] = 257; OLLL.inputs[5] = 257; OLLL.inputs[6] = 253; OLLL.inputs[7] = 257; OLLL.inputs[8] = 152; OLLL.inputs[9] = 152; OLLL.inputs[10] = 87; OLLL.inputs[11] = 3; OLLL.inputs[12] = 3; OLLL.inputs[13] = 85; OLLL.inputs[14] = 259; OLLL.inputs[15] = 85; OLLL.inputs[16] = 85; OLLL.inputs[17] = 85; OLLL.inputs[18] = 3; OLLL.inputs[19] = 128; OLLL.inputs[20] = 3; OLLL.inputs[21] = 87; OLLL.inputs[22] = 61; OLLL.inputs[23] = 87; OLLL.inputs[24] = 153; OLLL.inputs[25] = 197; OLLL.inputs[26] = 197; OLLL.inputs[27] = 153; OLLL.inputs[28] = 153; OLLL.inputs[29] = 153; OLLL.inputs[30] = 153;
    OLLL.weightsLen = 31;
    OLLL.weights[0] = 1; OLLL.weights[1] = 1; OLLL.weights[2] = 1; OLLL.weights[3] = 1; OLLL.weights[4] = 1; OLLL.weights[5] = 1; OLLL.weights[6] = 1; OLLL.weights[7] = 1; OLLL.weights[8] = 1; OLLL.weights[9] = 1; OLLL.weights[10] = 1; OLLL.weights[11] = 1; OLLL.weights[12] = 1; OLLL.weights[13] = 1; OLLL.weights[14] = 1; OLLL.weights[15] = 1; OLLL.weights[16] = 1; OLLL.weights[17] = 1; OLLL.weights[18] = 1; OLLL.weights[19] = 1; OLLL.weights[20] = 1; OLLL.weights[21] = 1; OLLL.weights[22] = 1; OLLL.weights[23] = 1; OLLL.weights[24] = 1; OLLL.weights[25] = 1; OLLL.weights[26] = 1; OLLL.weights[27] = 1; OLLL.weights[28] = 1; OLLL.weights[29] = 1; OLLL.weights[30] = 1;
    if (id == 152) {
        return OLLL;
    }


    neuron OLLR;
    OLLR.cellID = 153;
    OLLR.threshold = 1;
    OLLR.inputsLen = 41;
    OLLR.inputs[0] = 4; OLLR.inputs[1] = 210; OLLR.inputs[2] = 4; OLLR.inputs[3] = 4; OLLR.inputs[4] = 88; OLLR.inputs[5] = 226; OLLR.inputs[6] = 40; OLLR.inputs[7] = 135; OLLR.inputs[8] = 259; OLLR.inputs[9] = 254; OLLR.inputs[10] = 224; OLLR.inputs[11] = 88; OLLR.inputs[12] = 88; OLLR.inputs[13] = 153; OLLR.inputs[14] = 191; OLLR.inputs[15] = 86; OLLR.inputs[16] = 131; OLLR.inputs[17] = 88; OLLR.inputs[18] = 88; OLLR.inputs[19] = 135; OLLR.inputs[20] = 135; OLLR.inputs[21] = 224; OLLR.inputs[22] = 224; OLLR.inputs[23] = 86; OLLR.inputs[24] = 86; OLLR.inputs[25] = 153; OLLR.inputs[26] = 86; OLLR.inputs[27] = 259; OLLR.inputs[28] = 129; OLLR.inputs[29] = 127; OLLR.inputs[30] = 88; OLLR.inputs[31] = 88; OLLR.inputs[32] = 86; OLLR.inputs[33] = 211; OLLR.inputs[34] = 215; OLLR.inputs[35] = 88; OLLR.inputs[36] = 205; OLLR.inputs[37] = 221; OLLR.inputs[38] = 8; OLLR.inputs[39] = 198; OLLR.inputs[40] = 198;
    OLLR.weightsLen = 41;
    OLLR.weights[0] = 1; OLLR.weights[1] = 1; OLLR.weights[2] = 1; OLLR.weights[3] = 1; OLLR.weights[4] = 1; OLLR.weights[5] = 1; OLLR.weights[6] = 1; OLLR.weights[7] = 1; OLLR.weights[8] = 1; OLLR.weights[9] = 1; OLLR.weights[10] = 1; OLLR.weights[11] = 1; OLLR.weights[12] = 1; OLLR.weights[13] = 1; OLLR.weights[14] = 1; OLLR.weights[15] = 1; OLLR.weights[16] = 1; OLLR.weights[17] = 1; OLLR.weights[18] = 1; OLLR.weights[19] = 1; OLLR.weights[20] = 1; OLLR.weights[21] = 1; OLLR.weights[22] = 1; OLLR.weights[23] = 1; OLLR.weights[24] = 1; OLLR.weights[25] = 1; OLLR.weights[26] = 1; OLLR.weights[27] = 1; OLLR.weights[28] = 1; OLLR.weights[29] = 1; OLLR.weights[30] = 1; OLLR.weights[31] = 1; OLLR.weights[32] = 1; OLLR.weights[33] = 1; OLLR.weights[34] = 1; OLLR.weights[35] = 1; OLLR.weights[36] = 1; OLLR.weights[37] = 1; OLLR.weights[38] = 1; OLLR.weights[39] = 1; OLLR.weights[40] = 1;
    if (id == 153) {
        return OLLR;
    }


    neuron OLQDL;
    OLQDL.cellID = 154;
    OLQDL.threshold = 1;
    OLQDL.inputsLen = 33;
    OLQDL.inputs[0] = 85; OLQDL.inputs[1] = 132; OLQDL.inputs[2] = 257; OLQDL.inputs[3] = 257; OLQDL.inputs[4] = 199; OLQDL.inputs[5] = 85; OLQDL.inputs[6] = 134; OLQDL.inputs[7] = 85; OLQDL.inputs[8] = 132; OLQDL.inputs[9] = 85; OLQDL.inputs[10] = 85; OLQDL.inputs[11] = 85; OLQDL.inputs[12] = 85; OLQDL.inputs[13] = 199; OLQDL.inputs[14] = 199; OLQDL.inputs[15] = 85; OLQDL.inputs[16] = 199; OLQDL.inputs[17] = 134; OLQDL.inputs[18] = 134; OLQDL.inputs[19] = 134; OLQDL.inputs[20] = 134; OLQDL.inputs[21] = 199; OLQDL.inputs[22] = 199; OLQDL.inputs[23] = 199; OLQDL.inputs[24] = 134; OLQDL.inputs[25] = 134; OLQDL.inputs[26] = 134; OLQDL.inputs[27] = 134; OLQDL.inputs[28] = 190; OLQDL.inputs[29] = 190; OLQDL.inputs[30] = 253; OLQDL.inputs[31] = 212; OLQDL.inputs[32] = 197;
    OLQDL.weightsLen = 33;
    OLQDL.weights[0] = 1; OLQDL.weights[1] = 1; OLQDL.weights[2] = 1; OLQDL.weights[3] = 1; OLQDL.weights[4] = 1; OLQDL.weights[5] = 1; OLQDL.weights[6] = 1; OLQDL.weights[7] = 1; OLQDL.weights[8] = 1; OLQDL.weights[9] = 1; OLQDL.weights[10] = 1; OLQDL.weights[11] = 1; OLQDL.weights[12] = 1; OLQDL.weights[13] = 1; OLQDL.weights[14] = 1; OLQDL.weights[15] = 1; OLQDL.weights[16] = 1; OLQDL.weights[17] = 1; OLQDL.weights[18] = 1; OLQDL.weights[19] = 1; OLQDL.weights[20] = 1; OLQDL.weights[21] = 1; OLQDL.weights[22] = 1; OLQDL.weights[23] = 1; OLQDL.weights[24] = 1; OLQDL.weights[25] = 1; OLQDL.weights[26] = 1; OLQDL.weights[27] = 1; OLQDL.weights[28] = 1; OLQDL.weights[29] = 1; OLQDL.weights[30] = 1; OLQDL.weights[31] = 1; OLQDL.weights[32] = 1;
    if (id == 154) {
        return OLQDL;
    }


    neuron OLQDR;
    OLQDR.cellID = 155;
    OLQDR.threshold = 1;
    OLQDR.inputsLen = 34;
    OLQDR.inputs[0] = 258; OLQDR.inputs[1] = 86; OLQDR.inputs[2] = 86; OLQDR.inputs[3] = 86; OLQDR.inputs[4] = 16; OLQDR.inputs[5] = 86; OLQDR.inputs[6] = 86; OLQDR.inputs[7] = 86; OLQDR.inputs[8] = 133; OLQDR.inputs[9] = 86; OLQDR.inputs[10] = 203; OLQDR.inputs[11] = 202; OLQDR.inputs[12] = 86; OLQDR.inputs[13] = 199; OLQDR.inputs[14] = 199; OLQDR.inputs[15] = 135; OLQDR.inputs[16] = 86; OLQDR.inputs[17] = 254; OLQDR.inputs[18] = 135; OLQDR.inputs[19] = 135; OLQDR.inputs[20] = 135; OLQDR.inputs[21] = 135; OLQDR.inputs[22] = 199; OLQDR.inputs[23] = 199; OLQDR.inputs[24] = 153; OLQDR.inputs[25] = 254; OLQDR.inputs[26] = 254; OLQDR.inputs[27] = 254; OLQDR.inputs[28] = 213; OLQDR.inputs[29] = 191; OLQDR.inputs[30] = 254; OLQDR.inputs[31] = 199; OLQDR.inputs[32] = 191; OLQDR.inputs[33] = 198;
    OLQDR.weightsLen = 34;
    OLQDR.weights[0] = 1; OLQDR.weights[1] = 1; OLQDR.weights[2] = 1; OLQDR.weights[3] = 1; OLQDR.weights[4] = 1; OLQDR.weights[5] = 1; OLQDR.weights[6] = 1; OLQDR.weights[7] = 1; OLQDR.weights[8] = 1; OLQDR.weights[9] = 1; OLQDR.weights[10] = 1; OLQDR.weights[11] = 1; OLQDR.weights[12] = 1; OLQDR.weights[13] = 1; OLQDR.weights[14] = 1; OLQDR.weights[15] = 1; OLQDR.weights[16] = 1; OLQDR.weights[17] = 1; OLQDR.weights[18] = 1; OLQDR.weights[19] = 1; OLQDR.weights[20] = 1; OLQDR.weights[21] = 1; OLQDR.weights[22] = 1; OLQDR.weights[23] = 1; OLQDR.weights[24] = 1; OLQDR.weights[25] = 1; OLQDR.weights[26] = 1; OLQDR.weights[27] = 1; OLQDR.weights[28] = 1; OLQDR.weights[29] = 1; OLQDR.weights[30] = 1; OLQDR.weights[31] = 1; OLQDR.weights[32] = 1; OLQDR.weights[33] = 1;
    if (id == 155) {
        return OLQDR;
    }


    neuron OLQVL;
    OLQVL.cellID = 156;
    OLQVL.threshold = 1;
    OLQVL.inputsLen = 32;
    OLQVL.inputs[0] = 213; OLQVL.inputs[1] = 136; OLQVL.inputs[2] = 255; OLQVL.inputs[3] = 259; OLQVL.inputs[4] = 136; OLQVL.inputs[5] = 7; OLQVL.inputs[6] = 192; OLQVL.inputs[7] = 87; OLQVL.inputs[8] = 87; OLQVL.inputs[9] = 87; OLQVL.inputs[10] = 259; OLQVL.inputs[11] = 213; OLQVL.inputs[12] = 134; OLQVL.inputs[13] = 199; OLQVL.inputs[14] = 199; OLQVL.inputs[15] = 87; OLQVL.inputs[16] = 87; OLQVL.inputs[17] = 134; OLQVL.inputs[18] = 134; OLQVL.inputs[19] = 134; OLQVL.inputs[20] = 202; OLQVL.inputs[21] = 199; OLQVL.inputs[22] = 197; OLQVL.inputs[23] = 7; OLQVL.inputs[24] = 80; OLQVL.inputs[25] = 130; OLQVL.inputs[26] = 134; OLQVL.inputs[27] = 134; OLQVL.inputs[28] = 208; OLQVL.inputs[29] = 190; OLQVL.inputs[30] = 197; OLQVL.inputs[31] = 208;
    OLQVL.weightsLen = 32;
    OLQVL.weights[0] = 1; OLQVL.weights[1] = 1; OLQVL.weights[2] = 1; OLQVL.weights[3] = 1; OLQVL.weights[4] = 1; OLQVL.weights[5] = 1; OLQVL.weights[6] = 1; OLQVL.weights[7] = 1; OLQVL.weights[8] = 1; OLQVL.weights[9] = 1; OLQVL.weights[10] = 1; OLQVL.weights[11] = 1; OLQVL.weights[12] = 1; OLQVL.weights[13] = 1; OLQVL.weights[14] = 1; OLQVL.weights[15] = 1; OLQVL.weights[16] = 1; OLQVL.weights[17] = 1; OLQVL.weights[18] = 1; OLQVL.weights[19] = 1; OLQVL.weights[20] = 1; OLQVL.weights[21] = 1; OLQVL.weights[22] = 1; OLQVL.weights[23] = 1; OLQVL.weights[24] = 1; OLQVL.weights[25] = 1; OLQVL.weights[26] = 1; OLQVL.weights[27] = 1; OLQVL.weights[28] = 1; OLQVL.weights[29] = 1; OLQVL.weights[30] = 1; OLQVL.weights[31] = 1;
    if (id == 156) {
        return OLQVL;
    }


    neuron OLQVR;
    OLQVR.cellID = 157;
    OLQVR.threshold = 1;
    OLQVR.inputsLen = 41;
    OLQVR.inputs[0] = 88; OLQVR.inputs[1] = 212; OLQVR.inputs[2] = 199; OLQVR.inputs[3] = 88; OLQVR.inputs[4] = 137; OLQVR.inputs[5] = 137; OLQVR.inputs[6] = 6; OLQVR.inputs[7] = 256; OLQVR.inputs[8] = 256; OLQVR.inputs[9] = 88; OLQVR.inputs[10] = 88; OLQVR.inputs[11] = 212; OLQVR.inputs[12] = 240; OLQVR.inputs[13] = 88; OLQVR.inputs[14] = 203; OLQVR.inputs[15] = 199; OLQVR.inputs[16] = 203; OLQVR.inputs[17] = 198; OLQVR.inputs[18] = 199; OLQVR.inputs[19] = 135; OLQVR.inputs[20] = 135; OLQVR.inputs[21] = 135; OLQVR.inputs[22] = 135; OLQVR.inputs[23] = 135; OLQVR.inputs[24] = 135; OLQVR.inputs[25] = 135; OLQVR.inputs[26] = 135; OLQVR.inputs[27] = 199; OLQVR.inputs[28] = 88; OLQVR.inputs[29] = 8; OLQVR.inputs[30] = 131; OLQVR.inputs[31] = 135; OLQVR.inputs[32] = 135; OLQVR.inputs[33] = 135; OLQVR.inputs[34] = 199; OLQVR.inputs[35] = 199; OLQVR.inputs[36] = 212; OLQVR.inputs[37] = 191; OLQVR.inputs[38] = 254; OLQVR.inputs[39] = 198; OLQVR.inputs[40] = 191;
    OLQVR.weightsLen = 41;
    OLQVR.weights[0] = 1; OLQVR.weights[1] = 1; OLQVR.weights[2] = 1; OLQVR.weights[3] = 1; OLQVR.weights[4] = 1; OLQVR.weights[5] = 1; OLQVR.weights[6] = 1; OLQVR.weights[7] = 1; OLQVR.weights[8] = 1; OLQVR.weights[9] = 1; OLQVR.weights[10] = 1; OLQVR.weights[11] = 1; OLQVR.weights[12] = 1; OLQVR.weights[13] = 1; OLQVR.weights[14] = 1; OLQVR.weights[15] = 1; OLQVR.weights[16] = 1; OLQVR.weights[17] = 1; OLQVR.weights[18] = 1; OLQVR.weights[19] = 1; OLQVR.weights[20] = 1; OLQVR.weights[21] = 1; OLQVR.weights[22] = 1; OLQVR.weights[23] = 1; OLQVR.weights[24] = 1; OLQVR.weights[25] = 1; OLQVR.weights[26] = 1; OLQVR.weights[27] = 1; OLQVR.weights[28] = 1; OLQVR.weights[29] = 1; OLQVR.weights[30] = 1; OLQVR.weights[31] = 1; OLQVR.weights[32] = 1; OLQVR.weights[33] = 1; OLQVR.weights[34] = 1; OLQVR.weights[35] = 1; OLQVR.weights[36] = 1; OLQVR.weights[37] = 1; OLQVR.weights[38] = 1; OLQVR.weights[39] = 1; OLQVR.weights[40] = 1;
    if (id == 157) {
        return OLQVR;
    }


    neuron PDA;
    PDA.cellID = 158;
    PDA.threshold = 1;
    PDA.inputsLen = 6;
    PDA.inputs[0] = 112; PDA.inputs[1] = 167; PDA.inputs[2] = 159; PDA.inputs[3] = 159; PDA.inputs[4] = 183; PDA.inputs[5] = 163;
    PDA.weightsLen = 6;
    PDA.weights[0] = 1; PDA.weights[1] = 1; PDA.weights[2] = 1; PDA.weights[3] = 1; PDA.weights[4] = 1; PDA.weights[5] = 1;
    if (id == 158) {
        return PDA;
    }


    neuron PDB;
    PDB.cellID = 159;
    PDB.threshold = 1;
    PDB.inputsLen = 18;
    PDB.inputs[0] = 167; PDB.inputs[1] = 167; PDB.inputs[2] = 181; PDB.inputs[3] = 194; PDB.inputs[4] = 167; PDB.inputs[5] = 172; PDB.inputs[6] = 170; PDB.inputs[7] = 172; PDB.inputs[8] = 31; PDB.inputs[9] = 139; PDB.inputs[10] = 180; PDB.inputs[11] = 184; PDB.inputs[12] = 184; PDB.inputs[13] = 184; PDB.inputs[14] = 184; PDB.inputs[15] = 184; PDB.inputs[16] = 184; PDB.inputs[17] = 184;
    PDB.weightsLen = 18;
    PDB.weights[0] = 1; PDB.weights[1] = 1; PDB.weights[2] = 1; PDB.weights[3] = 1; PDB.weights[4] = 1; PDB.weights[5] = 1; PDB.weights[6] = 1; PDB.weights[7] = 1; PDB.weights[8] = 1; PDB.weights[9] = 1; PDB.weights[10] = 1; PDB.weights[11] = 1; PDB.weights[12] = 1; PDB.weights[13] = 1; PDB.weights[14] = 1; PDB.weights[15] = 1; PDB.weights[16] = 1; PDB.weights[17] = 1;
    if (id == 159) {
        return PDB;
    }


    neuron PDEL;
    PDEL.cellID = 160;
    PDEL.threshold = 1;
    PDEL.inputsLen = 61;
    PDEL.inputs[0] = 60; PDEL.inputs[1] = 174; PDEL.inputs[2] = 173; PDEL.inputs[3] = 111; PDEL.inputs[4] = 177; PDEL.inputs[5] = 177; PDEL.inputs[6] = 69; PDEL.inputs[7] = 177; PDEL.inputs[8] = 177; PDEL.inputs[9] = 177; PDEL.inputs[10] = 177; PDEL.inputs[11] = 111; PDEL.inputs[12] = 177; PDEL.inputs[13] = 161; PDEL.inputs[14] = 70; PDEL.inputs[15] = 177; PDEL.inputs[16] = 177; PDEL.inputs[17] = 168; PDEL.inputs[18] = 168; PDEL.inputs[19] = 169; PDEL.inputs[20] = 169; PDEL.inputs[21] = 169; PDEL.inputs[22] = 169; PDEL.inputs[23] = 181; PDEL.inputs[24] = 174; PDEL.inputs[25] = 161; PDEL.inputs[26] = 161; PDEL.inputs[27] = 161; PDEL.inputs[28] = 161; PDEL.inputs[29] = 174; PDEL.inputs[30] = 161; PDEL.inputs[31] = 177; PDEL.inputs[32] = 161; PDEL.inputs[33] = 161; PDEL.inputs[34] = 161; PDEL.inputs[35] = 177; PDEL.inputs[36] = 161; PDEL.inputs[37] = 177; PDEL.inputs[38] = 161; PDEL.inputs[39] = 177; PDEL.inputs[40] = 177; PDEL.inputs[41] = 177; PDEL.inputs[42] = 274; PDEL.inputs[43] = 161; PDEL.inputs[44] = 177; PDEL.inputs[45] = 177; PDEL.inputs[46] = 161; PDEL.inputs[47] = 161; PDEL.inputs[48] = 168; PDEL.inputs[49] = 161; PDEL.inputs[50] = 161; PDEL.inputs[51] = 161; PDEL.inputs[52] = 161; PDEL.inputs[53] = 161; PDEL.inputs[54] = 169; PDEL.inputs[55] = 169; PDEL.inputs[56] = 169; PDEL.inputs[57] = 161; PDEL.inputs[58] = 177; PDEL.inputs[59] = 177; PDEL.inputs[60] = 184;
    PDEL.weightsLen = 61;
    PDEL.weights[0] = 1; PDEL.weights[1] = 1; PDEL.weights[2] = 1; PDEL.weights[3] = 1; PDEL.weights[4] = 1; PDEL.weights[5] = 1; PDEL.weights[6] = 1; PDEL.weights[7] = 1; PDEL.weights[8] = 1; PDEL.weights[9] = 1; PDEL.weights[10] = 1; PDEL.weights[11] = 1; PDEL.weights[12] = 1; PDEL.weights[13] = 1; PDEL.weights[14] = 1; PDEL.weights[15] = 1; PDEL.weights[16] = 1; PDEL.weights[17] = 1; PDEL.weights[18] = 1; PDEL.weights[19] = 1; PDEL.weights[20] = 1; PDEL.weights[21] = 1; PDEL.weights[22] = 1; PDEL.weights[23] = 1; PDEL.weights[24] = 1; PDEL.weights[25] = 1; PDEL.weights[26] = 1; PDEL.weights[27] = 1; PDEL.weights[28] = 1; PDEL.weights[29] = 1; PDEL.weights[30] = 1; PDEL.weights[31] = 1; PDEL.weights[32] = 1; PDEL.weights[33] = 1; PDEL.weights[34] = 1; PDEL.weights[35] = 1; PDEL.weights[36] = 1; PDEL.weights[37] = 1; PDEL.weights[38] = 1; PDEL.weights[39] = 1; PDEL.weights[40] = 1; PDEL.weights[41] = 1; PDEL.weights[42] = 1; PDEL.weights[43] = 1; PDEL.weights[44] = 1; PDEL.weights[45] = 1; PDEL.weights[46] = 1; PDEL.weights[47] = 1; PDEL.weights[48] = 1; PDEL.weights[49] = 1; PDEL.weights[50] = 1; PDEL.weights[51] = 1; PDEL.weights[52] = 1; PDEL.weights[53] = 1; PDEL.weights[54] = 1; PDEL.weights[55] = 1; PDEL.weights[56] = 1; PDEL.weights[57] = 1; PDEL.weights[58] = 1; PDEL.weights[59] = 1; PDEL.weights[60] = 1;
    if (id == 160) {
        return PDEL;
    }


    neuron PDER;
    PDER.cellID = 161;
    PDER.threshold = 1;
    PDER.inputsLen = 45;
    PDER.inputs[0] = 160; PDER.inputs[1] = 177; PDER.inputs[2] = 160; PDER.inputs[3] = 69; PDER.inputs[4] = 177; PDER.inputs[5] = 177; PDER.inputs[6] = 177; PDER.inputs[7] = 70; PDER.inputs[8] = 161; PDER.inputs[9] = 161; PDER.inputs[10] = 161; PDER.inputs[11] = 264; PDER.inputs[12] = 264; PDER.inputs[13] = 161; PDER.inputs[14] = 161; PDER.inputs[15] = 177; PDER.inputs[16] = 177; PDER.inputs[17] = 168; PDER.inputs[18] = 168; PDER.inputs[19] = 168; PDER.inputs[20] = 262; PDER.inputs[21] = 169; PDER.inputs[22] = 169; PDER.inputs[23] = 177; PDER.inputs[24] = 184; PDER.inputs[25] = 174; PDER.inputs[26] = 264; PDER.inputs[27] = 185; PDER.inputs[28] = 274; PDER.inputs[29] = 274; PDER.inputs[30] = 176; PDER.inputs[31] = 177; PDER.inputs[32] = 177; PDER.inputs[33] = 177; PDER.inputs[34] = 274; PDER.inputs[35] = 274; PDER.inputs[36] = 177; PDER.inputs[37] = 173; PDER.inputs[38] = 168; PDER.inputs[39] = 168; PDER.inputs[40] = 168; PDER.inputs[41] = 169; PDER.inputs[42] = 177; PDER.inputs[43] = 177; PDER.inputs[44] = 184;
    PDER.weightsLen = 45;
    PDER.weights[0] = 1; PDER.weights[1] = 1; PDER.weights[2] = 1; PDER.weights[3] = 1; PDER.weights[4] = 1; PDER.weights[5] = 1; PDER.weights[6] = 1; PDER.weights[7] = 1; PDER.weights[8] = 1; PDER.weights[9] = 1; PDER.weights[10] = 1; PDER.weights[11] = 1; PDER.weights[12] = 1; PDER.weights[13] = 1; PDER.weights[14] = 1; PDER.weights[15] = 1; PDER.weights[16] = 1; PDER.weights[17] = 1; PDER.weights[18] = 1; PDER.weights[19] = 1; PDER.weights[20] = 1; PDER.weights[21] = 1; PDER.weights[22] = 1; PDER.weights[23] = 1; PDER.weights[24] = 1; PDER.weights[25] = 1; PDER.weights[26] = 1; PDER.weights[27] = 1; PDER.weights[28] = 1; PDER.weights[29] = 1; PDER.weights[30] = 1; PDER.weights[31] = 1; PDER.weights[32] = 1; PDER.weights[33] = 1; PDER.weights[34] = 1; PDER.weights[35] = 1; PDER.weights[36] = 1; PDER.weights[37] = 1; PDER.weights[38] = 1; PDER.weights[39] = 1; PDER.weights[40] = 1; PDER.weights[41] = 1; PDER.weights[42] = 1; PDER.weights[43] = 1; PDER.weights[44] = 1;
    if (id == 161) {
        return PDER;
    }


    neuron PHAL;
    PHAL.cellID = 162;
    PHAL.threshold = 1;
    PHAL.inputsLen = 19;
    PHAL.inputs[0] = 164; PHAL.inputs[1] = 173; PHAL.inputs[2] = 163; PHAL.inputs[3] = 64; PHAL.inputs[4] = 170; PHAL.inputs[5] = 64; PHAL.inputs[6] = 159; PHAL.inputs[7] = 64; PHAL.inputs[8] = 163; PHAL.inputs[9] = 163; PHAL.inputs[10] = 228; PHAL.inputs[11] = 264; PHAL.inputs[12] = 183; PHAL.inputs[13] = 163; PHAL.inputs[14] = 163; PHAL.inputs[15] = 181; PHAL.inputs[16] = 181; PHAL.inputs[17] = 181; PHAL.inputs[18] = 181;
    PHAL.weightsLen = 19;
    PHAL.weights[0] = 1; PHAL.weights[1] = 1; PHAL.weights[2] = 1; PHAL.weights[3] = 1; PHAL.weights[4] = 1; PHAL.weights[5] = 1; PHAL.weights[6] = 1; PHAL.weights[7] = 1; PHAL.weights[8] = 1; PHAL.weights[9] = 1; PHAL.weights[10] = 1; PHAL.weights[11] = 1; PHAL.weights[12] = 1; PHAL.weights[13] = 1; PHAL.weights[14] = 1; PHAL.weights[15] = 1; PHAL.weights[16] = 1; PHAL.weights[17] = 1; PHAL.weights[18] = 1;
    if (id == 162) {
        return PHAL;
    }


    neuron PHAR;
    PHAR.cellID = 163;
    PHAR.threshold = 1;
    PHAR.inputsLen = 17;
    PHAR.inputs[0] = 162; PHAR.inputs[1] = 60; PHAR.inputs[2] = 170; PHAR.inputs[3] = 172; PHAR.inputs[4] = 164; PHAR.inputs[5] = 162; PHAR.inputs[6] = 162; PHAR.inputs[7] = 162; PHAR.inputs[8] = 162; PHAR.inputs[9] = 162; PHAR.inputs[10] = 180; PHAR.inputs[11] = 171; PHAR.inputs[12] = 184; PHAR.inputs[13] = 167; PHAR.inputs[14] = 180; PHAR.inputs[15] = 180; PHAR.inputs[16] = 180;
    PHAR.weightsLen = 17;
    PHAR.weights[0] = 1; PHAR.weights[1] = 1; PHAR.weights[2] = 1; PHAR.weights[3] = 1; PHAR.weights[4] = 1; PHAR.weights[5] = 1; PHAR.weights[6] = 1; PHAR.weights[7] = 1; PHAR.weights[8] = 1; PHAR.weights[9] = 1; PHAR.weights[10] = 1; PHAR.weights[11] = 1; PHAR.weights[12] = 1; PHAR.weights[13] = 1; PHAR.weights[14] = 1; PHAR.weights[15] = 1; PHAR.weights[16] = 1;
    if (id == 163) {
        return PHAR;
    }


    neuron PHBL;
    PHBL.cellID = 164;
    PHBL.threshold = 1;
    PHBL.inputsLen = 20;
    PHBL.inputs[0] = 164; PHBL.inputs[1] = 162; PHBL.inputs[2] = 165; PHBL.inputs[3] = 138; PHBL.inputs[4] = 162; PHBL.inputs[5] = 163; PHBL.inputs[6] = 165; PHBL.inputs[7] = 163; PHBL.inputs[8] = 165; PHBL.inputs[9] = 172; PHBL.inputs[10] = 172; PHBL.inputs[11] = 139; PHBL.inputs[12] = 178; PHBL.inputs[13] = 173; PHBL.inputs[14] = 182; PHBL.inputs[15] = 182; PHBL.inputs[16] = 165; PHBL.inputs[17] = 165; PHBL.inputs[18] = 165; PHBL.inputs[19] = 165;
    PHBL.weightsLen = 20;
    PHBL.weights[0] = 1; PHBL.weights[1] = 1; PHBL.weights[2] = 1; PHBL.weights[3] = 1; PHBL.weights[4] = 1; PHBL.weights[5] = 1; PHBL.weights[6] = 1; PHBL.weights[7] = 1; PHBL.weights[8] = 1; PHBL.weights[9] = 1; PHBL.weights[10] = 1; PHBL.weights[11] = 1; PHBL.weights[12] = 1; PHBL.weights[13] = 1; PHBL.weights[14] = 1; PHBL.weights[15] = 1; PHBL.weights[16] = 1; PHBL.weights[17] = 1; PHBL.weights[18] = 1; PHBL.weights[19] = 1;
    if (id == 164) {
        return PHBL;
    }


    neuron PHBR;
    PHBR.cellID = 165;
    PHBR.threshold = 1;
    PHBR.inputsLen = 21;
    PHBR.inputs[0] = 164; PHBR.inputs[1] = 162; PHBR.inputs[2] = 163; PHBR.inputs[3] = 163; PHBR.inputs[4] = 172; PHBR.inputs[5] = 159; PHBR.inputs[6] = 178; PHBR.inputs[7] = 172; PHBR.inputs[8] = 167; PHBR.inputs[9] = 159; PHBR.inputs[10] = 169; PHBR.inputs[11] = 162; PHBR.inputs[12] = 164; PHBR.inputs[13] = 163; PHBR.inputs[14] = 163; PHBR.inputs[15] = 162; PHBR.inputs[16] = 162; PHBR.inputs[17] = 162; PHBR.inputs[18] = 164; PHBR.inputs[19] = 163; PHBR.inputs[20] = 167;
    PHBR.weightsLen = 21;
    PHBR.weights[0] = 1; PHBR.weights[1] = 1; PHBR.weights[2] = 1; PHBR.weights[3] = 1; PHBR.weights[4] = 1; PHBR.weights[5] = 1; PHBR.weights[6] = 1; PHBR.weights[7] = 1; PHBR.weights[8] = 1; PHBR.weights[9] = 1; PHBR.weights[10] = 1; PHBR.weights[11] = 1; PHBR.weights[12] = 1; PHBR.weights[13] = 1; PHBR.weights[14] = 1; PHBR.weights[15] = 1; PHBR.weights[16] = 1; PHBR.weights[17] = 1; PHBR.weights[18] = 1; PHBR.weights[19] = 1; PHBR.weights[20] = 1;
    if (id == 165) {
        return PHBR;
    }


    neuron PHCL;
    PHCL.cellID = 166;
    PHCL.threshold = 1;
    PHCL.inputsLen = 6;
    PHCL.inputs[0] = 167; PHCL.inputs[1] = 165; PHCL.inputs[2] = 112; PHCL.inputs[3] = 171; PHCL.inputs[4] = 170; PHCL.inputs[5] = 167;
    PHCL.weightsLen = 6;
    PHCL.weights[0] = 1; PHCL.weights[1] = 1; PHCL.weights[2] = 1; PHCL.weights[3] = 1; PHCL.weights[4] = 1; PHCL.weights[5] = 1;
    if (id == 166) {
        return PHCL;
    }


    neuron PHCR;
    PHCR.cellID = 167;
    PHCR.threshold = 1;
    PHCR.inputsLen = 6;
    PHCR.inputs[0] = 165; PHCR.inputs[1] = 165; PHCR.inputs[2] = 172; PHCR.inputs[3] = 167; PHCR.inputs[4] = 174; PHCR.inputs[5] = 184;
    PHCR.weightsLen = 6;
    PHCR.weights[0] = 1; PHCR.weights[1] = 1; PHCR.weights[2] = 1; PHCR.weights[3] = 1; PHCR.weights[4] = 1; PHCR.weights[5] = 1;
    if (id == 167) {
        return PHCR;
    }


    neuron PLML;
    PLML.cellID = 168;
    PLML.threshold = 1;
    PLML.inputsLen = 16;
    PLML.inputs[0] = 159; PLML.inputs[1] = 64; PLML.inputs[2] = 162; PLML.inputs[3] = 171; PLML.inputs[4] = 164; PLML.inputs[5] = 170; PLML.inputs[6] = 262; PLML.inputs[7] = 262; PLML.inputs[8] = 167; PLML.inputs[9] = 173; PLML.inputs[10] = 184; PLML.inputs[11] = 184; PLML.inputs[12] = 184; PLML.inputs[13] = 174; PLML.inputs[14] = 174; PLML.inputs[15] = 184;
    PLML.weightsLen = 16;
    PLML.weights[0] = 1; PLML.weights[1] = 1; PLML.weights[2] = 1; PLML.weights[3] = 1; PLML.weights[4] = 1; PLML.weights[5] = 1; PLML.weights[6] = 1; PLML.weights[7] = 1; PLML.weights[8] = 1; PLML.weights[9] = 1; PLML.weights[10] = 1; PLML.weights[11] = 1; PLML.weights[12] = 1; PLML.weights[13] = 1; PLML.weights[14] = 1; PLML.weights[15] = 1;
    if (id == 168) {
        return PLML;
    }


    neuron PLMR;
    PLMR.cellID = 169;
    PLMR.threshold = 1;
    PLMR.inputsLen = 11;
    PLMR.inputs[0] = 26; PLMR.inputs[1] = 179; PLMR.inputs[2] = 171; PLMR.inputs[3] = 184; PLMR.inputs[4] = 174; PLMR.inputs[5] = 174; PLMR.inputs[6] = 184; PLMR.inputs[7] = 174; PLMR.inputs[8] = 184; PLMR.inputs[9] = 184; PLMR.inputs[10] = 184;
    PLMR.weightsLen = 11;
    PLMR.weights[0] = 1; PLMR.weights[1] = 1; PLMR.weights[2] = 1; PLMR.weights[3] = 1; PLMR.weights[4] = 1; PLMR.weights[5] = 1; PLMR.weights[6] = 1; PLMR.weights[7] = 1; PLMR.weights[8] = 1; PLMR.weights[9] = 1; PLMR.weights[10] = 1;
    if (id == 169) {
        return PLMR;
    }


    neuron PLNL;
    PLNL.cellID = 170;
    PLNL.threshold = 1;
    PLNL.inputsLen = 6;
    PLNL.inputs[0] = 244; PLNL.inputs[1] = 244; PLNL.inputs[2] = 244; PLNL.inputs[3] = 240; PLNL.inputs[4] = 225; PLNL.inputs[5] = 244;
    PLNL.weightsLen = 6;
    PLNL.weights[0] = 1; PLNL.weights[1] = 1; PLNL.weights[2] = 1; PLNL.weights[3] = 1; PLNL.weights[4] = 1; PLNL.weights[5] = 1;
    if (id == 170) {
        return PLNL;
    }


    neuron PLNR;
    PLNR.cellID = 171;
    PLNR.threshold = 1;
    PLNR.inputsLen = 1;
    PLNR.inputs[0] = 243;
    PLNR.weightsLen = 1;
    PLNR.weights[0] = 1;
    if (id == 171) {
        return PLNR;
    }


    neuron PQR;
    PQR.cellID = 172;
    PQR.threshold = 1;
    PQR.inputsLen = 35;
    PQR.inputs[0] = 54; PQR.inputs[1] = 172; PQR.inputs[2] = 178; PQR.inputs[3] = 186; PQR.inputs[4] = 159; PQR.inputs[5] = 173; PQR.inputs[6] = 59; PQR.inputs[7] = 172; PQR.inputs[8] = 173; PQR.inputs[9] = 64; PQR.inputs[10] = 64; PQR.inputs[11] = 58; PQR.inputs[12] = 57; PQR.inputs[13] = 139; PQR.inputs[14] = 178; PQR.inputs[15] = 59; PQR.inputs[16] = 181; PQR.inputs[17] = 59; PQR.inputs[18] = 292; PQR.inputs[19] = 292; PQR.inputs[20] = 174; PQR.inputs[21] = 178; PQR.inputs[22] = 178; PQR.inputs[23] = 181; PQR.inputs[24] = 181; PQR.inputs[25] = 274; PQR.inputs[26] = 180; PQR.inputs[27] = 180; PQR.inputs[28] = 180; PQR.inputs[29] = 180; PQR.inputs[30] = 181; PQR.inputs[31] = 181; PQR.inputs[32] = 181; PQR.inputs[33] = 180; PQR.inputs[34] = 173;
    PQR.weightsLen = 35;
    PQR.weights[0] = 1; PQR.weights[1] = 1; PQR.weights[2] = 1; PQR.weights[3] = 1; PQR.weights[4] = 1; PQR.weights[5] = 1; PQR.weights[6] = 1; PQR.weights[7] = 1; PQR.weights[8] = 1; PQR.weights[9] = 1; PQR.weights[10] = 1; PQR.weights[11] = 1; PQR.weights[12] = 1; PQR.weights[13] = 1; PQR.weights[14] = 1; PQR.weights[15] = 1; PQR.weights[16] = 1; PQR.weights[17] = 1; PQR.weights[18] = 1; PQR.weights[19] = 1; PQR.weights[20] = 1; PQR.weights[21] = 1; PQR.weights[22] = 1; PQR.weights[23] = 1; PQR.weights[24] = 1; PQR.weights[25] = 1; PQR.weights[26] = 1; PQR.weights[27] = 1; PQR.weights[28] = 1; PQR.weights[29] = 1; PQR.weights[30] = 1; PQR.weights[31] = 1; PQR.weights[32] = 1; PQR.weights[33] = 1; PQR.weights[34] = 1;
    if (id == 172) {
        return PQR;
    }


    neuron PVCL;
    PVCL.cellID = 173;
    PVCL.threshold = 1;
    PVCL.inputsLen = 180;
    PVCL.inputs[0] = 72; PVCL.inputs[1] = 72; PVCL.inputs[2] = 24; PVCL.inputs[3] = 24; PVCL.inputs[4] = 24; PVCL.inputs[5] = 24; PVCL.inputs[6] = 24; PVCL.inputs[7] = 181; PVCL.inputs[8] = 24; PVCL.inputs[9] = 67; PVCL.inputs[10] = 8; PVCL.inputs[11] = 45; PVCL.inputs[12] = 181; PVCL.inputs[13] = 231; PVCL.inputs[14] = 174; PVCL.inputs[15] = 184; PVCL.inputs[16] = 180; PVCL.inputs[17] = 28; PVCL.inputs[18] = 45; PVCL.inputs[19] = 8; PVCL.inputs[20] = 111; PVCL.inputs[21] = 181; PVCL.inputs[22] = 173; PVCL.inputs[23] = 111; PVCL.inputs[24] = 180; PVCL.inputs[25] = 45; PVCL.inputs[26] = 196; PVCL.inputs[27] = 68; PVCL.inputs[28] = 181; PVCL.inputs[29] = 67; PVCL.inputs[30] = 184; PVCL.inputs[31] = 72; PVCL.inputs[32] = 72; PVCL.inputs[33] = 72; PVCL.inputs[34] = 72; PVCL.inputs[35] = 115; PVCL.inputs[36] = 115; PVCL.inputs[37] = 67; PVCL.inputs[38] = 82; PVCL.inputs[39] = 82; PVCL.inputs[40] = 164; PVCL.inputs[41] = 112; PVCL.inputs[42] = 55; PVCL.inputs[43] = 167; PVCL.inputs[44] = 163; PVCL.inputs[45] = 167; PVCL.inputs[46] = 54; PVCL.inputs[47] = 60; PVCL.inputs[48] = 172; PVCL.inputs[49] = 174; PVCL.inputs[50] = 292; PVCL.inputs[51] = 292; PVCL.inputs[52] = 56; PVCL.inputs[53] = 111; PVCL.inputs[54] = 174; PVCL.inputs[55] = 111; PVCL.inputs[56] = 55; PVCL.inputs[57] = 58; PVCL.inputs[58] = 164; PVCL.inputs[59] = 54; PVCL.inputs[60] = 164; PVCL.inputs[61] = 164; PVCL.inputs[62] = 166; PVCL.inputs[63] = 177; PVCL.inputs[64] = 161; PVCL.inputs[65] = 64; PVCL.inputs[66] = 174; PVCL.inputs[67] = 173; PVCL.inputs[68] = 59; PVCL.inputs[69] = 172; PVCL.inputs[70] = 173; PVCL.inputs[71] = 173; PVCL.inputs[72] = 173; PVCL.inputs[73] = 173; PVCL.inputs[74] = 173; PVCL.inputs[75] = 58; PVCL.inputs[76] = 56; PVCL.inputs[77] = 54; PVCL.inputs[78] = 54; PVCL.inputs[79] = 30; PVCL.inputs[80] = 292; PVCL.inputs[81] = 67; PVCL.inputs[82] = 72; PVCL.inputs[83] = 174; PVCL.inputs[84] = 160; PVCL.inputs[85] = 160; PVCL.inputs[86] = 176; PVCL.inputs[87] = 176; PVCL.inputs[88] = 176; PVCL.inputs[89] = 176; PVCL.inputs[90] = 184; PVCL.inputs[91] = 176; PVCL.inputs[92] = 176; PVCL.inputs[93] = 175; PVCL.inputs[94] = 175; PVCL.inputs[95] = 176; PVCL.inputs[96] = 176; PVCL.inputs[97] = 161; PVCL.inputs[98] = 175; PVCL.inputs[99] = 176; PVCL.inputs[100] = 175; PVCL.inputs[101] = 55; PVCL.inputs[102] = 111; PVCL.inputs[103] = 176; PVCL.inputs[104] = 176; PVCL.inputs[105] = 54; PVCL.inputs[106] = 54; PVCL.inputs[107] = 176; PVCL.inputs[108] = 176; PVCL.inputs[109] = 176; PVCL.inputs[110] = 176; PVCL.inputs[111] = 176; PVCL.inputs[112] = 175; PVCL.inputs[113] = 176; PVCL.inputs[114] = 165; PVCL.inputs[115] = 164; PVCL.inputs[116] = 165; PVCL.inputs[117] = 165; PVCL.inputs[118] = 264; PVCL.inputs[119] = 164; PVCL.inputs[120] = 164; PVCL.inputs[121] = 55; PVCL.inputs[122] = 164; PVCL.inputs[123] = 164; PVCL.inputs[124] = 54; PVCL.inputs[125] = 54; PVCL.inputs[126] = 164; PVCL.inputs[127] = 172; PVCL.inputs[128] = 54; PVCL.inputs[129] = 164; PVCL.inputs[130] = 54; PVCL.inputs[131] = 264; PVCL.inputs[132] = 54; PVCL.inputs[133] = 55; PVCL.inputs[134] = 55; PVCL.inputs[135] = 186; PVCL.inputs[136] = 180; PVCL.inputs[137] = 174; PVCL.inputs[138] = 174; PVCL.inputs[139] = 174; PVCL.inputs[140] = 174; PVCL.inputs[141] = 174; PVCL.inputs[142] = 181; PVCL.inputs[143] = 59; PVCL.inputs[144] = 55; PVCL.inputs[145] = 181; PVCL.inputs[146] = 59; PVCL.inputs[147] = 174; PVCL.inputs[148] = 174; PVCL.inputs[149] = 264; PVCL.inputs[150] = 174; PVCL.inputs[151] = 274; PVCL.inputs[152] = 174; PVCL.inputs[153] = 174; PVCL.inputs[154] = 174; PVCL.inputs[155] = 174; PVCL.inputs[156] = 264; PVCL.inputs[157] = 174; PVCL.inputs[158] = 174; PVCL.inputs[159] = 174; PVCL.inputs[160] = 174; PVCL.inputs[161] = 174; PVCL.inputs[162] = 174; PVCL.inputs[163] = 174; PVCL.inputs[164] = 274; PVCL.inputs[165] = 174; PVCL.inputs[166] = 264; PVCL.inputs[167] = 264; PVCL.inputs[168] = 264; PVCL.inputs[169] = 264; PVCL.inputs[170] = 174; PVCL.inputs[171] = 174; PVCL.inputs[172] = 264; PVCL.inputs[173] = 264; PVCL.inputs[174] = 264; PVCL.inputs[175] = 294; PVCL.inputs[176] = 174; PVCL.inputs[177] = 174; PVCL.inputs[178] = 174; PVCL.inputs[179] = 275;
    PVCL.weightsLen = 180;
    PVCL.weights[0] = 1; PVCL.weights[1] = 1; PVCL.weights[2] = 1; PVCL.weights[3] = 1; PVCL.weights[4] = 1; PVCL.weights[5] = 1; PVCL.weights[6] = 1; PVCL.weights[7] = 1; PVCL.weights[8] = 1; PVCL.weights[9] = 1; PVCL.weights[10] = 1; PVCL.weights[11] = 1; PVCL.weights[12] = 1; PVCL.weights[13] = 1; PVCL.weights[14] = 1; PVCL.weights[15] = 1; PVCL.weights[16] = 1; PVCL.weights[17] = 1; PVCL.weights[18] = 1; PVCL.weights[19] = 1; PVCL.weights[20] = 1; PVCL.weights[21] = 1; PVCL.weights[22] = 1; PVCL.weights[23] = 1; PVCL.weights[24] = 1; PVCL.weights[25] = 1; PVCL.weights[26] = 1; PVCL.weights[27] = 1; PVCL.weights[28] = 1; PVCL.weights[29] = 1; PVCL.weights[30] = 1; PVCL.weights[31] = 1; PVCL.weights[32] = 1; PVCL.weights[33] = 1; PVCL.weights[34] = 1; PVCL.weights[35] = 1; PVCL.weights[36] = 1; PVCL.weights[37] = 1; PVCL.weights[38] = 1; PVCL.weights[39] = 1; PVCL.weights[40] = 1; PVCL.weights[41] = 1; PVCL.weights[42] = 1; PVCL.weights[43] = 1; PVCL.weights[44] = 1; PVCL.weights[45] = 1; PVCL.weights[46] = 1; PVCL.weights[47] = 1; PVCL.weights[48] = 1; PVCL.weights[49] = 1; PVCL.weights[50] = 1; PVCL.weights[51] = 1; PVCL.weights[52] = 1; PVCL.weights[53] = 1; PVCL.weights[54] = 1; PVCL.weights[55] = 1; PVCL.weights[56] = 1; PVCL.weights[57] = 1; PVCL.weights[58] = 1; PVCL.weights[59] = 1; PVCL.weights[60] = 1; PVCL.weights[61] = 1; PVCL.weights[62] = 1; PVCL.weights[63] = 1; PVCL.weights[64] = 1; PVCL.weights[65] = 1; PVCL.weights[66] = 1; PVCL.weights[67] = 1; PVCL.weights[68] = 1; PVCL.weights[69] = 1; PVCL.weights[70] = 1; PVCL.weights[71] = 1; PVCL.weights[72] = 1; PVCL.weights[73] = 1; PVCL.weights[74] = 1; PVCL.weights[75] = 1; PVCL.weights[76] = 1; PVCL.weights[77] = 1; PVCL.weights[78] = 1; PVCL.weights[79] = 1; PVCL.weights[80] = 1; PVCL.weights[81] = 1; PVCL.weights[82] = 1; PVCL.weights[83] = 1; PVCL.weights[84] = 1; PVCL.weights[85] = 1; PVCL.weights[86] = 1; PVCL.weights[87] = 1; PVCL.weights[88] = 1; PVCL.weights[89] = 1; PVCL.weights[90] = 1; PVCL.weights[91] = 1; PVCL.weights[92] = 1; PVCL.weights[93] = 1; PVCL.weights[94] = 1; PVCL.weights[95] = 1; PVCL.weights[96] = 1; PVCL.weights[97] = 1; PVCL.weights[98] = 1; PVCL.weights[99] = 1; PVCL.weights[100] = 1; PVCL.weights[101] = 1; PVCL.weights[102] = 1; PVCL.weights[103] = 1; PVCL.weights[104] = 1; PVCL.weights[105] = 1; PVCL.weights[106] = 1; PVCL.weights[107] = 1; PVCL.weights[108] = 1; PVCL.weights[109] = 1; PVCL.weights[110] = 1; PVCL.weights[111] = 1; PVCL.weights[112] = 1; PVCL.weights[113] = 1; PVCL.weights[114] = 1; PVCL.weights[115] = 1; PVCL.weights[116] = 1; PVCL.weights[117] = 1; PVCL.weights[118] = 1; PVCL.weights[119] = 1; PVCL.weights[120] = 1; PVCL.weights[121] = 1; PVCL.weights[122] = 1; PVCL.weights[123] = 1; PVCL.weights[124] = 1; PVCL.weights[125] = 1; PVCL.weights[126] = 1; PVCL.weights[127] = 1; PVCL.weights[128] = 1; PVCL.weights[129] = 1; PVCL.weights[130] = 1; PVCL.weights[131] = 1; PVCL.weights[132] = 1; PVCL.weights[133] = 1; PVCL.weights[134] = 1; PVCL.weights[135] = 1; PVCL.weights[136] = 1; PVCL.weights[137] = 1; PVCL.weights[138] = 1; PVCL.weights[139] = 1; PVCL.weights[140] = 1; PVCL.weights[141] = 1; PVCL.weights[142] = 1; PVCL.weights[143] = 1; PVCL.weights[144] = 1; PVCL.weights[145] = 1; PVCL.weights[146] = 1; PVCL.weights[147] = 1; PVCL.weights[148] = 1; PVCL.weights[149] = 1; PVCL.weights[150] = 1; PVCL.weights[151] = 1; PVCL.weights[152] = 1; PVCL.weights[153] = 1; PVCL.weights[154] = 1; PVCL.weights[155] = 1; PVCL.weights[156] = 1; PVCL.weights[157] = 1; PVCL.weights[158] = 1; PVCL.weights[159] = 1; PVCL.weights[160] = 1; PVCL.weights[161] = 1; PVCL.weights[162] = 1; PVCL.weights[163] = 1; PVCL.weights[164] = 1; PVCL.weights[165] = 1; PVCL.weights[166] = 1; PVCL.weights[167] = 1; PVCL.weights[168] = 1; PVCL.weights[169] = 1; PVCL.weights[170] = 1; PVCL.weights[171] = 1; PVCL.weights[172] = 1; PVCL.weights[173] = 1; PVCL.weights[174] = 1; PVCL.weights[175] = 1; PVCL.weights[176] = 1; PVCL.weights[177] = 1; PVCL.weights[178] = 1; PVCL.weights[179] = 1;
    if (id == 173) {
        return PVCL;
    }


    neuron PVCR;
    PVCR.cellID = 174;
    PVCR.threshold = 1;
    PVCR.inputsLen = 164;
    PVCR.inputs[0] = 181; PVCR.inputs[1] = 181; PVCR.inputs[2] = 181; PVCR.inputs[3] = 25; PVCR.inputs[4] = 25; PVCR.inputs[5] = 25; PVCR.inputs[6] = 24; PVCR.inputs[7] = 24; PVCR.inputs[8] = 25; PVCR.inputs[9] = 25; PVCR.inputs[10] = 180; PVCR.inputs[11] = 28; PVCR.inputs[12] = 180; PVCR.inputs[13] = 180; PVCR.inputs[14] = 25; PVCR.inputs[15] = 28; PVCR.inputs[16] = 173; PVCR.inputs[17] = 68; PVCR.inputs[18] = 180; PVCR.inputs[19] = 72; PVCR.inputs[20] = 180; PVCR.inputs[21] = 68; PVCR.inputs[22] = 68; PVCR.inputs[23] = 196; PVCR.inputs[24] = 173; PVCR.inputs[25] = 180; PVCR.inputs[26] = 56; PVCR.inputs[27] = 180; PVCR.inputs[28] = 68; PVCR.inputs[29] = 25; PVCR.inputs[30] = 181; PVCR.inputs[31] = 72; PVCR.inputs[32] = 72; PVCR.inputs[33] = 72; PVCR.inputs[34] = 72; PVCR.inputs[35] = 181; PVCR.inputs[36] = 181; PVCR.inputs[37] = 72; PVCR.inputs[38] = 72; PVCR.inputs[39] = 72; PVCR.inputs[40] = 114; PVCR.inputs[41] = 112; PVCR.inputs[42] = 55; PVCR.inputs[43] = 167; PVCR.inputs[44] = 167; PVCR.inputs[45] = 167; PVCR.inputs[46] = 163; PVCR.inputs[47] = 167; PVCR.inputs[48] = 165; PVCR.inputs[49] = 172; PVCR.inputs[50] = 56; PVCR.inputs[51] = 264; PVCR.inputs[52] = 294; PVCR.inputs[53] = 59; PVCR.inputs[54] = 172; PVCR.inputs[55] = 54; PVCR.inputs[56] = 187; PVCR.inputs[57] = 167; PVCR.inputs[58] = 167; PVCR.inputs[59] = 167; PVCR.inputs[60] = 167; PVCR.inputs[61] = 167; PVCR.inputs[62] = 165; PVCR.inputs[63] = 161; PVCR.inputs[64] = 177; PVCR.inputs[65] = 59; PVCR.inputs[66] = 54; PVCR.inputs[67] = 184; PVCR.inputs[68] = 184; PVCR.inputs[69] = 54; PVCR.inputs[70] = 264; PVCR.inputs[71] = 264; PVCR.inputs[72] = 59; PVCR.inputs[73] = 111; PVCR.inputs[74] = 184; PVCR.inputs[75] = 54; PVCR.inputs[76] = 67; PVCR.inputs[77] = 72; PVCR.inputs[78] = 54; PVCR.inputs[79] = 63; PVCR.inputs[80] = 72; PVCR.inputs[81] = 173; PVCR.inputs[82] = 55; PVCR.inputs[83] = 55; PVCR.inputs[84] = 54; PVCR.inputs[85] = 176; PVCR.inputs[86] = 175; PVCR.inputs[87] = 175; PVCR.inputs[88] = 175; PVCR.inputs[89] = 176; PVCR.inputs[90] = 54; PVCR.inputs[91] = 54; PVCR.inputs[92] = 176; PVCR.inputs[93] = 176; PVCR.inputs[94] = 175; PVCR.inputs[95] = 176; PVCR.inputs[96] = 176; PVCR.inputs[97] = 176; PVCR.inputs[98] = 175; PVCR.inputs[99] = 176; PVCR.inputs[100] = 176; PVCR.inputs[101] = 175; PVCR.inputs[102] = 175; PVCR.inputs[103] = 175; PVCR.inputs[104] = 175; PVCR.inputs[105] = 176; PVCR.inputs[106] = 55; PVCR.inputs[107] = 175; PVCR.inputs[108] = 176; PVCR.inputs[109] = 176; PVCR.inputs[110] = 175; PVCR.inputs[111] = 54; PVCR.inputs[112] = 175; PVCR.inputs[113] = 55; PVCR.inputs[114] = 55; PVCR.inputs[115] = 54; PVCR.inputs[116] = 264; PVCR.inputs[117] = 275; PVCR.inputs[118] = 264; PVCR.inputs[119] = 55; PVCR.inputs[120] = 55; PVCR.inputs[121] = 186; PVCR.inputs[122] = 239; PVCR.inputs[123] = 180; PVCR.inputs[124] = 59; PVCR.inputs[125] = 174; PVCR.inputs[126] = 264; PVCR.inputs[127] = 184; PVCR.inputs[128] = 184; PVCR.inputs[129] = 264; PVCR.inputs[130] = 186; PVCR.inputs[131] = 275; PVCR.inputs[132] = 263; PVCR.inputs[133] = 184; PVCR.inputs[134] = 184; PVCR.inputs[135] = 187; PVCR.inputs[136] = 174; PVCR.inputs[137] = 263; PVCR.inputs[138] = 176; PVCR.inputs[139] = 175; PVCR.inputs[140] = 176; PVCR.inputs[141] = 274; PVCR.inputs[142] = 186; PVCR.inputs[143] = 186; PVCR.inputs[144] = 186; PVCR.inputs[145] = 186; PVCR.inputs[146] = 186; PVCR.inputs[147] = 186; PVCR.inputs[148] = 185; PVCR.inputs[149] = 187; PVCR.inputs[150] = 187; PVCR.inputs[151] = 187; PVCR.inputs[152] = 184; PVCR.inputs[153] = 184; PVCR.inputs[154] = 187; PVCR.inputs[155] = 184; PVCR.inputs[156] = 184; PVCR.inputs[157] = 184; PVCR.inputs[158] = 184; PVCR.inputs[159] = 184; PVCR.inputs[160] = 184; PVCR.inputs[161] = 275; PVCR.inputs[162] = 264; PVCR.inputs[163] = 187;
    PVCR.weightsLen = 164;
    PVCR.weights[0] = 1; PVCR.weights[1] = 1; PVCR.weights[2] = 1; PVCR.weights[3] = 1; PVCR.weights[4] = 1; PVCR.weights[5] = 1; PVCR.weights[6] = 1; PVCR.weights[7] = 1; PVCR.weights[8] = 1; PVCR.weights[9] = 1; PVCR.weights[10] = 1; PVCR.weights[11] = 1; PVCR.weights[12] = 1; PVCR.weights[13] = 1; PVCR.weights[14] = 1; PVCR.weights[15] = 1; PVCR.weights[16] = 1; PVCR.weights[17] = 1; PVCR.weights[18] = 1; PVCR.weights[19] = 1; PVCR.weights[20] = 1; PVCR.weights[21] = 1; PVCR.weights[22] = 1; PVCR.weights[23] = 1; PVCR.weights[24] = 1; PVCR.weights[25] = 1; PVCR.weights[26] = 1; PVCR.weights[27] = 1; PVCR.weights[28] = 1; PVCR.weights[29] = 1; PVCR.weights[30] = 1; PVCR.weights[31] = 1; PVCR.weights[32] = 1; PVCR.weights[33] = 1; PVCR.weights[34] = 1; PVCR.weights[35] = 1; PVCR.weights[36] = 1; PVCR.weights[37] = 1; PVCR.weights[38] = 1; PVCR.weights[39] = 1; PVCR.weights[40] = 1; PVCR.weights[41] = 1; PVCR.weights[42] = 1; PVCR.weights[43] = 1; PVCR.weights[44] = 1; PVCR.weights[45] = 1; PVCR.weights[46] = 1; PVCR.weights[47] = 1; PVCR.weights[48] = 1; PVCR.weights[49] = 1; PVCR.weights[50] = 1; PVCR.weights[51] = 1; PVCR.weights[52] = 1; PVCR.weights[53] = 1; PVCR.weights[54] = 1; PVCR.weights[55] = 1; PVCR.weights[56] = 1; PVCR.weights[57] = 1; PVCR.weights[58] = 1; PVCR.weights[59] = 1; PVCR.weights[60] = 1; PVCR.weights[61] = 1; PVCR.weights[62] = 1; PVCR.weights[63] = 1; PVCR.weights[64] = 1; PVCR.weights[65] = 1; PVCR.weights[66] = 1; PVCR.weights[67] = 1; PVCR.weights[68] = 1; PVCR.weights[69] = 1; PVCR.weights[70] = 1; PVCR.weights[71] = 1; PVCR.weights[72] = 1; PVCR.weights[73] = 1; PVCR.weights[74] = 1; PVCR.weights[75] = 1; PVCR.weights[76] = 1; PVCR.weights[77] = 1; PVCR.weights[78] = 1; PVCR.weights[79] = 1; PVCR.weights[80] = 1; PVCR.weights[81] = 1; PVCR.weights[82] = 1; PVCR.weights[83] = 1; PVCR.weights[84] = 1; PVCR.weights[85] = 1; PVCR.weights[86] = 1; PVCR.weights[87] = 1; PVCR.weights[88] = 1; PVCR.weights[89] = 1; PVCR.weights[90] = 1; PVCR.weights[91] = 1; PVCR.weights[92] = 1; PVCR.weights[93] = 1; PVCR.weights[94] = 1; PVCR.weights[95] = 1; PVCR.weights[96] = 1; PVCR.weights[97] = 1; PVCR.weights[98] = 1; PVCR.weights[99] = 1; PVCR.weights[100] = 1; PVCR.weights[101] = 1; PVCR.weights[102] = 1; PVCR.weights[103] = 1; PVCR.weights[104] = 1; PVCR.weights[105] = 1; PVCR.weights[106] = 1; PVCR.weights[107] = 1; PVCR.weights[108] = 1; PVCR.weights[109] = 1; PVCR.weights[110] = 1; PVCR.weights[111] = 1; PVCR.weights[112] = 1; PVCR.weights[113] = 1; PVCR.weights[114] = 1; PVCR.weights[115] = 1; PVCR.weights[116] = 1; PVCR.weights[117] = 1; PVCR.weights[118] = 1; PVCR.weights[119] = 1; PVCR.weights[120] = 1; PVCR.weights[121] = 1; PVCR.weights[122] = 1; PVCR.weights[123] = 1; PVCR.weights[124] = 1; PVCR.weights[125] = 1; PVCR.weights[126] = 1; PVCR.weights[127] = 1; PVCR.weights[128] = 1; PVCR.weights[129] = 1; PVCR.weights[130] = 1; PVCR.weights[131] = 1; PVCR.weights[132] = 1; PVCR.weights[133] = 1; PVCR.weights[134] = 1; PVCR.weights[135] = 1; PVCR.weights[136] = 1; PVCR.weights[137] = 1; PVCR.weights[138] = 1; PVCR.weights[139] = 1; PVCR.weights[140] = 1; PVCR.weights[141] = 1; PVCR.weights[142] = 1; PVCR.weights[143] = 1; PVCR.weights[144] = 1; PVCR.weights[145] = 1; PVCR.weights[146] = 1; PVCR.weights[147] = 1; PVCR.weights[148] = 1; PVCR.weights[149] = 1; PVCR.weights[150] = 1; PVCR.weights[151] = 1; PVCR.weights[152] = 1; PVCR.weights[153] = 1; PVCR.weights[154] = 1; PVCR.weights[155] = 1; PVCR.weights[156] = 1; PVCR.weights[157] = 1; PVCR.weights[158] = 1; PVCR.weights[159] = 1; PVCR.weights[160] = 1; PVCR.weights[161] = 1; PVCR.weights[162] = 1; PVCR.weights[163] = 1;
    if (id == 174) {
        return PVCR;
    }


    neuron PVDL;
    PVDL.cellID = 175;
    PVDL.threshold = 1;
    PVDL.inputsLen = 3;
    PVDL.inputs[0] = 176; PVDL.inputs[1] = 174; PVDL.inputs[2] = 262;
    PVDL.weightsLen = 3;
    PVDL.weights[0] = 1; PVDL.weights[1] = 1; PVDL.weights[2] = 1;
    if (id == 175) {
        return PVDL;
    }


    neuron PVDR;
    PVDR.cellID = 176;
    PVDR.threshold = 1;
    PVDR.inputsLen = 4;
    PVDR.inputs[0] = 174; PVDR.inputs[1] = 175; PVDR.inputs[2] = 113; PVDR.inputs[3] = 175;
    PVDR.weightsLen = 4;
    PVDR.weights[0] = 1; PVDR.weights[1] = 1; PVDR.weights[2] = 1; PVDR.weights[3] = 1;
    if (id == 176) {
        return PVDR;
    }


    neuron PVM;
    PVM.cellID = 177;
    PVM.threshold = 1;
    PVM.inputsLen = 9;
    PVM.inputs[0] = 160; PVM.inputs[1] = 70; PVM.inputs[2] = 160; PVM.inputs[3] = 161; PVM.inputs[4] = 160; PVM.inputs[5] = 177; PVM.inputs[6] = 177; PVM.inputs[7] = 177; PVM.inputs[8] = 184;
    PVM.weightsLen = 9;
    PVM.weights[0] = 1; PVM.weights[1] = 1; PVM.weights[2] = 1; PVM.weights[3] = 1; PVM.weights[4] = 1; PVM.weights[5] = 1; PVM.weights[6] = 1; PVM.weights[7] = 1; PVM.weights[8] = 1;
    if (id == 177) {
        return PVM;
    }


    neuron PVNL;
    PVNL.cellID = 178;
    PVNL.threshold = 1;
    PVNL.inputsLen = 34;
    PVNL.inputs[0] = 72; PVNL.inputs[1] = 82; PVNL.inputs[2] = 81; PVNL.inputs[3] = 82; PVNL.inputs[4] = 82; PVNL.inputs[5] = 82; PVNL.inputs[6] = 72; PVNL.inputs[7] = 72; PVNL.inputs[8] = 82; PVNL.inputs[9] = 81; PVNL.inputs[10] = 62; PVNL.inputs[11] = 138; PVNL.inputs[12] = 54; PVNL.inputs[13] = 186; PVNL.inputs[14] = 172; PVNL.inputs[15] = 66; PVNL.inputs[16] = 66; PVNL.inputs[17] = 178; PVNL.inputs[18] = 66; PVNL.inputs[19] = 66; PVNL.inputs[20] = 57; PVNL.inputs[21] = 187; PVNL.inputs[22] = 66; PVNL.inputs[23] = 139; PVNL.inputs[24] = 172; PVNL.inputs[25] = 164; PVNL.inputs[26] = 179; PVNL.inputs[27] = 185; PVNL.inputs[28] = 185; PVNL.inputs[29] = 179; PVNL.inputs[30] = 179; PVNL.inputs[31] = 185; PVNL.inputs[32] = 180; PVNL.inputs[33] = 179;
    PVNL.weightsLen = 34;
    PVNL.weights[0] = 1; PVNL.weights[1] = 1; PVNL.weights[2] = 1; PVNL.weights[3] = 1; PVNL.weights[4] = 1; PVNL.weights[5] = 1; PVNL.weights[6] = 1; PVNL.weights[7] = 1; PVNL.weights[8] = 1; PVNL.weights[9] = 1; PVNL.weights[10] = 1; PVNL.weights[11] = 1; PVNL.weights[12] = 1; PVNL.weights[13] = 1; PVNL.weights[14] = 1; PVNL.weights[15] = 1; PVNL.weights[16] = 1; PVNL.weights[17] = 1; PVNL.weights[18] = 1; PVNL.weights[19] = 1; PVNL.weights[20] = 1; PVNL.weights[21] = 1; PVNL.weights[22] = 1; PVNL.weights[23] = 1; PVNL.weights[24] = 1; PVNL.weights[25] = 1; PVNL.weights[26] = 1; PVNL.weights[27] = 1; PVNL.weights[28] = 1; PVNL.weights[29] = 1; PVNL.weights[30] = 1; PVNL.weights[31] = 1; PVNL.weights[32] = 1; PVNL.weights[33] = 1;
    if (id == 178) {
        return PVNL;
    }


    neuron PVNR;
    PVNR.cellID = 179;
    PVNR.threshold = 1;
    PVNR.inputsLen = 35;
    PVNR.inputs[0] = 16; PVNR.inputs[1] = 82; PVNR.inputs[2] = 82; PVNR.inputs[3] = 72; PVNR.inputs[4] = 82; PVNR.inputs[5] = 81; PVNR.inputs[6] = 117; PVNR.inputs[7] = 81; PVNR.inputs[8] = 178; PVNR.inputs[9] = 179; PVNR.inputs[10] = 67; PVNR.inputs[11] = 67; PVNR.inputs[12] = 117; PVNR.inputs[13] = 163; PVNR.inputs[14] = 56; PVNR.inputs[15] = 274; PVNR.inputs[16] = 178; PVNR.inputs[17] = 263; PVNR.inputs[18] = 263; PVNR.inputs[19] = 186; PVNR.inputs[20] = 167; PVNR.inputs[21] = 58; PVNR.inputs[22] = 64; PVNR.inputs[23] = 178; PVNR.inputs[24] = 67; PVNR.inputs[25] = 81; PVNR.inputs[26] = 181; PVNR.inputs[27] = 184; PVNR.inputs[28] = 167; PVNR.inputs[29] = 185; PVNR.inputs[30] = 187; PVNR.inputs[31] = 179; PVNR.inputs[32] = 185; PVNR.inputs[33] = 294; PVNR.inputs[34] = 181;
    PVNR.weightsLen = 35;
    PVNR.weights[0] = 1; PVNR.weights[1] = 1; PVNR.weights[2] = 1; PVNR.weights[3] = 1; PVNR.weights[4] = 1; PVNR.weights[5] = 1; PVNR.weights[6] = 1; PVNR.weights[7] = 1; PVNR.weights[8] = 1; PVNR.weights[9] = 1; PVNR.weights[10] = 1; PVNR.weights[11] = 1; PVNR.weights[12] = 1; PVNR.weights[13] = 1; PVNR.weights[14] = 1; PVNR.weights[15] = 1; PVNR.weights[16] = 1; PVNR.weights[17] = 1; PVNR.weights[18] = 1; PVNR.weights[19] = 1; PVNR.weights[20] = 1; PVNR.weights[21] = 1; PVNR.weights[22] = 1; PVNR.weights[23] = 1; PVNR.weights[24] = 1; PVNR.weights[25] = 1; PVNR.weights[26] = 1; PVNR.weights[27] = 1; PVNR.weights[28] = 1; PVNR.weights[29] = 1; PVNR.weights[30] = 1; PVNR.weights[31] = 1; PVNR.weights[32] = 1; PVNR.weights[33] = 1; PVNR.weights[34] = 1;
    if (id == 179) {
        return PVNR;
    }


    neuron PVPL;
    PVPL.cellID = 180;
    PVPL.threshold = 1;
    PVPL.inputsLen = 44;
    PVPL.inputs[0] = 28; PVPL.inputs[1] = 237; PVPL.inputs[2] = 243; PVPL.inputs[3] = 66; PVPL.inputs[4] = 204; PVPL.inputs[5] = 66; PVPL.inputs[6] = 66; PVPL.inputs[7] = 28; PVPL.inputs[8] = 197; PVPL.inputs[9] = 195; PVPL.inputs[10] = 66; PVPL.inputs[11] = 195; PVPL.inputs[12] = 195; PVPL.inputs[13] = 66; PVPL.inputs[14] = 1; PVPL.inputs[15] = 112; PVPL.inputs[16] = 182; PVPL.inputs[17] = 263; PVPL.inputs[18] = 65; PVPL.inputs[19] = 70; PVPL.inputs[20] = 70; PVPL.inputs[21] = 180; PVPL.inputs[22] = 70; PVPL.inputs[23] = 195; PVPL.inputs[24] = 163; PVPL.inputs[25] = 163; PVPL.inputs[26] = 197; PVPL.inputs[27] = 185; PVPL.inputs[28] = 294; PVPL.inputs[29] = 180; PVPL.inputs[30] = 182; PVPL.inputs[31] = 180; PVPL.inputs[32] = 182; PVPL.inputs[33] = 182; PVPL.inputs[34] = 182; PVPL.inputs[35] = 181; PVPL.inputs[36] = 182; PVPL.inputs[37] = 185; PVPL.inputs[38] = 185; PVPL.inputs[39] = 185; PVPL.inputs[40] = 185; PVPL.inputs[41] = 185; PVPL.inputs[42] = 185; PVPL.inputs[43] = 185;
    PVPL.weightsLen = 44;
    PVPL.weights[0] = 1; PVPL.weights[1] = 1; PVPL.weights[2] = 1; PVPL.weights[3] = 1; PVPL.weights[4] = 1; PVPL.weights[5] = 1; PVPL.weights[6] = 1; PVPL.weights[7] = 1; PVPL.weights[8] = 1; PVPL.weights[9] = 1; PVPL.weights[10] = 1; PVPL.weights[11] = 1; PVPL.weights[12] = 1; PVPL.weights[13] = 1; PVPL.weights[14] = 1; PVPL.weights[15] = 1; PVPL.weights[16] = 1; PVPL.weights[17] = 1; PVPL.weights[18] = 1; PVPL.weights[19] = 1; PVPL.weights[20] = 1; PVPL.weights[21] = 1; PVPL.weights[22] = 1; PVPL.weights[23] = 1; PVPL.weights[24] = 1; PVPL.weights[25] = 1; PVPL.weights[26] = 1; PVPL.weights[27] = 1; PVPL.weights[28] = 1; PVPL.weights[29] = 1; PVPL.weights[30] = 1; PVPL.weights[31] = 1; PVPL.weights[32] = 1; PVPL.weights[33] = 1; PVPL.weights[34] = 1; PVPL.weights[35] = 1; PVPL.weights[36] = 1; PVPL.weights[37] = 1; PVPL.weights[38] = 1; PVPL.weights[39] = 1; PVPL.weights[40] = 1; PVPL.weights[41] = 1; PVPL.weights[42] = 1; PVPL.weights[43] = 1;
    if (id == 180) {
        return PVPL;
    }


    neuron PVPR;
    PVPR.cellID = 181;
    PVPR.threshold = 1;
    PVPR.inputsLen = 40;
    PVPR.inputs[0] = 196; PVPR.inputs[1] = 196; PVPR.inputs[2] = 6; PVPR.inputs[3] = 204; PVPR.inputs[4] = 111; PVPR.inputs[5] = 28; PVPR.inputs[6] = 45; PVPR.inputs[7] = 65; PVPR.inputs[8] = 111; PVPR.inputs[9] = 196; PVPR.inputs[10] = 71; PVPR.inputs[11] = 56; PVPR.inputs[12] = 178; PVPR.inputs[13] = 174; PVPR.inputs[14] = 172; PVPR.inputs[15] = 221; PVPR.inputs[16] = 221; PVPR.inputs[17] = 185; PVPR.inputs[18] = 185; PVPR.inputs[19] = 186; PVPR.inputs[20] = 293; PVPR.inputs[21] = 293; PVPR.inputs[22] = 293; PVPR.inputs[23] = 293; PVPR.inputs[24] = 293; PVPR.inputs[25] = 293; PVPR.inputs[26] = 293; PVPR.inputs[27] = 293; PVPR.inputs[28] = 293; PVPR.inputs[29] = 293; PVPR.inputs[30] = 293; PVPR.inputs[31] = 293; PVPR.inputs[32] = 293; PVPR.inputs[33] = 293; PVPR.inputs[34] = 293; PVPR.inputs[35] = 293; PVPR.inputs[36] = 293; PVPR.inputs[37] = 293; PVPR.inputs[38] = 293; PVPR.inputs[39] = 185;
    PVPR.weightsLen = 40;
    PVPR.weights[0] = 1; PVPR.weights[1] = 1; PVPR.weights[2] = 1; PVPR.weights[3] = 1; PVPR.weights[4] = 1; PVPR.weights[5] = 1; PVPR.weights[6] = 1; PVPR.weights[7] = 1; PVPR.weights[8] = 1; PVPR.weights[9] = 1; PVPR.weights[10] = 1; PVPR.weights[11] = 1; PVPR.weights[12] = 1; PVPR.weights[13] = 1; PVPR.weights[14] = 1; PVPR.weights[15] = 1; PVPR.weights[16] = 1; PVPR.weights[17] = 1; PVPR.weights[18] = 1; PVPR.weights[19] = 1; PVPR.weights[20] = 1; PVPR.weights[21] = 1; PVPR.weights[22] = 1; PVPR.weights[23] = 1; PVPR.weights[24] = 1; PVPR.weights[25] = 1; PVPR.weights[26] = 1; PVPR.weights[27] = 1; PVPR.weights[28] = 1; PVPR.weights[29] = 1; PVPR.weights[30] = 1; PVPR.weights[31] = 1; PVPR.weights[32] = 1; PVPR.weights[33] = 1; PVPR.weights[34] = 1; PVPR.weights[35] = 1; PVPR.weights[36] = 1; PVPR.weights[37] = 1; PVPR.weights[38] = 1; PVPR.weights[39] = 1;
    if (id == 181) {
        return PVPR;
    }


    neuron PVQL;
    PVQL.cellID = 182;
    PVQL.threshold = 1;
    PVQL.inputsLen = 47;
    PVQL.inputs[0] = 48; PVQL.inputs[1] = 48; PVQL.inputs[2] = 48; PVQL.inputs[3] = 48; PVQL.inputs[4] = 116; PVQL.inputs[5] = 48; PVQL.inputs[6] = 48; PVQL.inputs[7] = 48; PVQL.inputs[8] = 48; PVQL.inputs[9] = 11; PVQL.inputs[10] = 48; PVQL.inputs[11] = 48; PVQL.inputs[12] = 48; PVQL.inputs[13] = 48; PVQL.inputs[14] = 48; PVQL.inputs[15] = 48; PVQL.inputs[16] = 48; PVQL.inputs[17] = 48; PVQL.inputs[18] = 48; PVQL.inputs[19] = 48; PVQL.inputs[20] = 48; PVQL.inputs[21] = 63; PVQL.inputs[22] = 15; PVQL.inputs[23] = 63; PVQL.inputs[24] = 70; PVQL.inputs[25] = 71; PVQL.inputs[26] = 182; PVQL.inputs[27] = 182; PVQL.inputs[28] = 62; PVQL.inputs[29] = 163; PVQL.inputs[30] = 183; PVQL.inputs[31] = 183; PVQL.inputs[32] = 183; PVQL.inputs[33] = 183; PVQL.inputs[34] = 183; PVQL.inputs[35] = 183; PVQL.inputs[36] = 183; PVQL.inputs[37] = 183; PVQL.inputs[38] = 183; PVQL.inputs[39] = 183; PVQL.inputs[40] = 183; PVQL.inputs[41] = 183; PVQL.inputs[42] = 183; PVQL.inputs[43] = 183; PVQL.inputs[44] = 183; PVQL.inputs[45] = 183; PVQL.inputs[46] = 183;
    PVQL.weightsLen = 47;
    PVQL.weights[0] = 1; PVQL.weights[1] = 1; PVQL.weights[2] = 1; PVQL.weights[3] = 1; PVQL.weights[4] = 1; PVQL.weights[5] = 1; PVQL.weights[6] = 1; PVQL.weights[7] = 1; PVQL.weights[8] = 1; PVQL.weights[9] = 1; PVQL.weights[10] = 1; PVQL.weights[11] = 1; PVQL.weights[12] = 1; PVQL.weights[13] = 1; PVQL.weights[14] = 1; PVQL.weights[15] = 1; PVQL.weights[16] = 1; PVQL.weights[17] = 1; PVQL.weights[18] = 1; PVQL.weights[19] = 1; PVQL.weights[20] = 1; PVQL.weights[21] = 1; PVQL.weights[22] = 1; PVQL.weights[23] = 1; PVQL.weights[24] = 1; PVQL.weights[25] = 1; PVQL.weights[26] = 1; PVQL.weights[27] = 1; PVQL.weights[28] = 1; PVQL.weights[29] = 1; PVQL.weights[30] = 1; PVQL.weights[31] = 1; PVQL.weights[32] = 1; PVQL.weights[33] = 1; PVQL.weights[34] = 1; PVQL.weights[35] = 1; PVQL.weights[36] = 1; PVQL.weights[37] = 1; PVQL.weights[38] = 1; PVQL.weights[39] = 1; PVQL.weights[40] = 1; PVQL.weights[41] = 1; PVQL.weights[42] = 1; PVQL.weights[43] = 1; PVQL.weights[44] = 1; PVQL.weights[45] = 1; PVQL.weights[46] = 1;
    if (id == 182) {
        return PVQL;
    }


    neuron PVQR;
    PVQR.cellID = 183;
    PVQR.threshold = 1;
    PVQR.inputsLen = 21;
    PVQR.inputs[0] = 49; PVQR.inputs[1] = 49; PVQR.inputs[2] = 49; PVQR.inputs[3] = 49; PVQR.inputs[4] = 49; PVQR.inputs[5] = 49; PVQR.inputs[6] = 49; PVQR.inputs[7] = 166; PVQR.inputs[8] = 181; PVQR.inputs[9] = 65; PVQR.inputs[10] = 112; PVQR.inputs[11] = 183; PVQR.inputs[12] = 63; PVQR.inputs[13] = 63; PVQR.inputs[14] = 178; PVQR.inputs[15] = 49; PVQR.inputs[16] = 49; PVQR.inputs[17] = 117; PVQR.inputs[18] = 64; PVQR.inputs[19] = 59; PVQR.inputs[20] = 181;
    PVQR.weightsLen = 21;
    PVQR.weights[0] = 1; PVQR.weights[1] = 1; PVQR.weights[2] = 1; PVQR.weights[3] = 1; PVQR.weights[4] = 1; PVQR.weights[5] = 1; PVQR.weights[6] = 1; PVQR.weights[7] = 1; PVQR.weights[8] = 1; PVQR.weights[9] = 1; PVQR.weights[10] = 1; PVQR.weights[11] = 1; PVQR.weights[12] = 1; PVQR.weights[13] = 1; PVQR.weights[14] = 1; PVQR.weights[15] = 1; PVQR.weights[16] = 1; PVQR.weights[17] = 1; PVQR.weights[18] = 1; PVQR.weights[19] = 1; PVQR.weights[20] = 1;
    if (id == 183) {
        return PVQR;
    }


    neuron PVR;
    PVR.cellID = 184;
    PVR.threshold = 1;
    PVR.inputsLen = 27;
    PVR.inputs[0] = 253; PVR.inputs[1] = 244; PVR.inputs[2] = 2; PVR.inputs[3] = 2; PVR.inputs[4] = 127; PVR.inputs[5] = 87; PVR.inputs[6] = 127; PVR.inputs[7] = 127; PVR.inputs[8] = 72; PVR.inputs[9] = 179; PVR.inputs[10] = 247; PVR.inputs[11] = 263; PVR.inputs[12] = 160; PVR.inputs[13] = 160; PVR.inputs[14] = 177; PVR.inputs[15] = 158; PVR.inputs[16] = 184; PVR.inputs[17] = 139; PVR.inputs[18] = 173; PVR.inputs[19] = 186; PVR.inputs[20] = 187; PVR.inputs[21] = 173; PVR.inputs[22] = 176; PVR.inputs[23] = 160; PVR.inputs[24] = 139; PVR.inputs[25] = 187; PVR.inputs[26] = 294;
    PVR.weightsLen = 27;
    PVR.weights[0] = 1; PVR.weights[1] = 1; PVR.weights[2] = 1; PVR.weights[3] = 1; PVR.weights[4] = 1; PVR.weights[5] = 1; PVR.weights[6] = 1; PVR.weights[7] = 1; PVR.weights[8] = 1; PVR.weights[9] = 1; PVR.weights[10] = 1; PVR.weights[11] = 1; PVR.weights[12] = 1; PVR.weights[13] = 1; PVR.weights[14] = 1; PVR.weights[15] = 1; PVR.weights[16] = 1; PVR.weights[17] = 1; PVR.weights[18] = 1; PVR.weights[19] = 1; PVR.weights[20] = 1; PVR.weights[21] = 1; PVR.weights[22] = 1; PVR.weights[23] = 1; PVR.weights[24] = 1; PVR.weights[25] = 1; PVR.weights[26] = 1;
    if (id == 184) {
        return PVR;
    }


    neuron PVT;
    PVT.cellID = 185;
    PVT.threshold = 1;
    PVT.inputsLen = 48;
    PVT.inputs[0] = 198; PVT.inputs[1] = 252; PVT.inputs[2] = 252; PVT.inputs[3] = 252; PVT.inputs[4] = 218; PVT.inputs[5] = 218; PVT.inputs[6] = 113; PVT.inputs[7] = 117; PVT.inputs[8] = 164; PVT.inputs[9] = 292; PVT.inputs[10] = 187; PVT.inputs[11] = 186; PVT.inputs[12] = 186; PVT.inputs[13] = 64; PVT.inputs[14] = 178; PVT.inputs[15] = 178; PVT.inputs[16] = 178; PVT.inputs[17] = 178; PVT.inputs[18] = 185; PVT.inputs[19] = 173; PVT.inputs[20] = 56; PVT.inputs[21] = 179; PVT.inputs[22] = 163; PVT.inputs[23] = 178; PVT.inputs[24] = 178; PVT.inputs[25] = 163; PVT.inputs[26] = 217; PVT.inputs[27] = 251; PVT.inputs[28] = 59; PVT.inputs[29] = 292; PVT.inputs[30] = 174; PVT.inputs[31] = 292; PVT.inputs[32] = 292; PVT.inputs[33] = 294; PVT.inputs[34] = 293; PVT.inputs[35] = 293; PVT.inputs[36] = 187; PVT.inputs[37] = 294; PVT.inputs[38] = 187; PVT.inputs[39] = 294; PVT.inputs[40] = 294; PVT.inputs[41] = 294; PVT.inputs[42] = 294; PVT.inputs[43] = 294; PVT.inputs[44] = 294; PVT.inputs[45] = 294; PVT.inputs[46] = 294; PVT.inputs[47] = 294;
    PVT.weightsLen = 48;
    PVT.weights[0] = 1; PVT.weights[1] = 1; PVT.weights[2] = 1; PVT.weights[3] = 1; PVT.weights[4] = 1; PVT.weights[5] = 1; PVT.weights[6] = 1; PVT.weights[7] = 1; PVT.weights[8] = 1; PVT.weights[9] = 1; PVT.weights[10] = 1; PVT.weights[11] = 1; PVT.weights[12] = 1; PVT.weights[13] = 1; PVT.weights[14] = 1; PVT.weights[15] = 1; PVT.weights[16] = 1; PVT.weights[17] = 1; PVT.weights[18] = 1; PVT.weights[19] = 1; PVT.weights[20] = 1; PVT.weights[21] = 1; PVT.weights[22] = 1; PVT.weights[23] = 1; PVT.weights[24] = 1; PVT.weights[25] = 1; PVT.weights[26] = 1; PVT.weights[27] = 1; PVT.weights[28] = 1; PVT.weights[29] = 1; PVT.weights[30] = 1; PVT.weights[31] = 1; PVT.weights[32] = 1; PVT.weights[33] = 1; PVT.weights[34] = 1; PVT.weights[35] = 1; PVT.weights[36] = 1; PVT.weights[37] = 1; PVT.weights[38] = 1; PVT.weights[39] = 1; PVT.weights[40] = 1; PVT.weights[41] = 1; PVT.weights[42] = 1; PVT.weights[43] = 1; PVT.weights[44] = 1; PVT.weights[45] = 1; PVT.weights[46] = 1; PVT.weights[47] = 1;
    if (id == 185) {
        return PVT;
    }


    neuron PVWL;
    PVWL.cellID = 186;
    PVWL.threshold = 1;
    PVWL.inputsLen = 16;
    PVWL.inputs[0] = 232; PVWL.inputs[1] = 164; PVWL.inputs[2] = 163; PVWL.inputs[3] = 163; PVWL.inputs[4] = 167; PVWL.inputs[5] = 294; PVWL.inputs[6] = 71; PVWL.inputs[7] = 138; PVWL.inputs[8] = 186; PVWL.inputs[9] = 160; PVWL.inputs[10] = 160; PVWL.inputs[11] = 179; PVWL.inputs[12] = 139; PVWL.inputs[13] = 275; PVWL.inputs[14] = 59; PVWL.inputs[15] = 294;
    PVWL.weightsLen = 16;
    PVWL.weights[0] = 1; PVWL.weights[1] = 1; PVWL.weights[2] = 1; PVWL.weights[3] = 1; PVWL.weights[4] = 1; PVWL.weights[5] = 1; PVWL.weights[6] = 1; PVWL.weights[7] = 1; PVWL.weights[8] = 1; PVWL.weights[9] = 1; PVWL.weights[10] = 1; PVWL.weights[11] = 1; PVWL.weights[12] = 1; PVWL.weights[13] = 1; PVWL.weights[14] = 1; PVWL.weights[15] = 1;
    if (id == 186) {
        return PVWL;
    }


    neuron PVWR;
    PVWR.cellID = 187;
    PVWR.threshold = 1;
    PVWR.inputsLen = 17;
    PVWR.inputs[0] = 186; PVWR.inputs[1] = 139; PVWR.inputs[2] = 187; PVWR.inputs[3] = 187; PVWR.inputs[4] = 186; PVWR.inputs[5] = 262; PVWR.inputs[6] = 262; PVWR.inputs[7] = 57; PVWR.inputs[8] = 172; PVWR.inputs[9] = 139; PVWR.inputs[10] = 174; PVWR.inputs[11] = 179; PVWR.inputs[12] = 178; PVWR.inputs[13] = 179; PVWR.inputs[14] = 275; PVWR.inputs[15] = 294; PVWR.inputs[16] = 294;
    PVWR.weightsLen = 17;
    PVWR.weights[0] = 1; PVWR.weights[1] = 1; PVWR.weights[2] = 1; PVWR.weights[3] = 1; PVWR.weights[4] = 1; PVWR.weights[5] = 1; PVWR.weights[6] = 1; PVWR.weights[7] = 1; PVWR.weights[8] = 1; PVWR.weights[9] = 1; PVWR.weights[10] = 1; PVWR.weights[11] = 1; PVWR.weights[12] = 1; PVWR.weights[13] = 1; PVWR.weights[14] = 1; PVWR.weights[15] = 1; PVWR.weights[16] = 1;
    if (id == 187) {
        return PVWR;
    }


    neuron RIAL;
    RIAL.cellID = 188;
    RIAL.threshold = 1;
    RIAL.inputsLen = 215;
    RIAL.inputs[0] = 21; RIAL.inputs[1] = 19; RIAL.inputs[2] = 199; RIAL.inputs[3] = 5; RIAL.inputs[4] = 199; RIAL.inputs[5] = 75; RIAL.inputs[6] = 199; RIAL.inputs[7] = 21; RIAL.inputs[8] = 5; RIAL.inputs[9] = 5; RIAL.inputs[10] = 5; RIAL.inputs[11] = 199; RIAL.inputs[12] = 52; RIAL.inputs[13] = 5; RIAL.inputs[14] = 199; RIAL.inputs[15] = 21; RIAL.inputs[16] = 5; RIAL.inputs[17] = 248; RIAL.inputs[18] = 248; RIAL.inputs[19] = 21; RIAL.inputs[20] = 5; RIAL.inputs[21] = 21; RIAL.inputs[22] = 199; RIAL.inputs[23] = 190; RIAL.inputs[24] = 5; RIAL.inputs[25] = 206; RIAL.inputs[26] = 189; RIAL.inputs[27] = 189; RIAL.inputs[28] = 189; RIAL.inputs[29] = 189; RIAL.inputs[30] = 189; RIAL.inputs[31] = 189; RIAL.inputs[32] = 189; RIAL.inputs[33] = 189; RIAL.inputs[34] = 189; RIAL.inputs[35] = 189; RIAL.inputs[36] = 247; RIAL.inputs[37] = 206; RIAL.inputs[38] = 247; RIAL.inputs[39] = 189; RIAL.inputs[40] = 247; RIAL.inputs[41] = 247; RIAL.inputs[42] = 247; RIAL.inputs[43] = 247; RIAL.inputs[44] = 247; RIAL.inputs[45] = 247; RIAL.inputs[46] = 206; RIAL.inputs[47] = 210; RIAL.inputs[48] = 210; RIAL.inputs[49] = 210; RIAL.inputs[50] = 210; RIAL.inputs[51] = 210; RIAL.inputs[52] = 210; RIAL.inputs[53] = 210; RIAL.inputs[54] = 210; RIAL.inputs[55] = 210; RIAL.inputs[56] = 210; RIAL.inputs[57] = 210; RIAL.inputs[58] = 207; RIAL.inputs[59] = 248; RIAL.inputs[60] = 248; RIAL.inputs[61] = 248; RIAL.inputs[62] = 248; RIAL.inputs[63] = 248; RIAL.inputs[64] = 248; RIAL.inputs[65] = 248; RIAL.inputs[66] = 248; RIAL.inputs[67] = 248; RIAL.inputs[68] = 248; RIAL.inputs[69] = 248; RIAL.inputs[70] = 248; RIAL.inputs[71] = 207; RIAL.inputs[72] = 189; RIAL.inputs[73] = 248; RIAL.inputs[74] = 26; RIAL.inputs[75] = 28; RIAL.inputs[76] = 28; RIAL.inputs[77] = 189; RIAL.inputs[78] = 54; RIAL.inputs[79] = 136; RIAL.inputs[80] = 5; RIAL.inputs[81] = 199; RIAL.inputs[82] = 199; RIAL.inputs[83] = 52; RIAL.inputs[84] = 5; RIAL.inputs[85] = 5; RIAL.inputs[86] = 199; RIAL.inputs[87] = 204; RIAL.inputs[88] = 52; RIAL.inputs[89] = 255; RIAL.inputs[90] = 204; RIAL.inputs[91] = 52; RIAL.inputs[92] = 3; RIAL.inputs[93] = 255; RIAL.inputs[94] = 5; RIAL.inputs[95] = 75; RIAL.inputs[96] = 5; RIAL.inputs[97] = 52; RIAL.inputs[98] = 7; RIAL.inputs[99] = 255; RIAL.inputs[100] = 255; RIAL.inputs[101] = 259; RIAL.inputs[102] = 199; RIAL.inputs[103] = 255; RIAL.inputs[104] = 28; RIAL.inputs[105] = 247; RIAL.inputs[106] = 75; RIAL.inputs[107] = 245; RIAL.inputs[108] = 245; RIAL.inputs[109] = 245; RIAL.inputs[110] = 245; RIAL.inputs[111] = 245; RIAL.inputs[112] = 246; RIAL.inputs[113] = 246; RIAL.inputs[114] = 246; RIAL.inputs[115] = 246; RIAL.inputs[116] = 247; RIAL.inputs[117] = 46; RIAL.inputs[118] = 46; RIAL.inputs[119] = 46; RIAL.inputs[120] = 21; RIAL.inputs[121] = 80; RIAL.inputs[122] = 80; RIAL.inputs[123] = 136; RIAL.inputs[124] = 204; RIAL.inputs[125] = 204; RIAL.inputs[126] = 204; RIAL.inputs[127] = 255; RIAL.inputs[128] = 28; RIAL.inputs[129] = 28; RIAL.inputs[130] = 77; RIAL.inputs[131] = 77; RIAL.inputs[132] = 211; RIAL.inputs[133] = 189; RIAL.inputs[134] = 211; RIAL.inputs[135] = 211; RIAL.inputs[136] = 211; RIAL.inputs[137] = 211; RIAL.inputs[138] = 210; RIAL.inputs[139] = 189; RIAL.inputs[140] = 5; RIAL.inputs[141] = 5; RIAL.inputs[142] = 52; RIAL.inputs[143] = 52; RIAL.inputs[144] = 80; RIAL.inputs[145] = 255; RIAL.inputs[146] = 52; RIAL.inputs[147] = 52; RIAL.inputs[148] = 255; RIAL.inputs[149] = 255; RIAL.inputs[150] = 80; RIAL.inputs[151] = 80; RIAL.inputs[152] = 80; RIAL.inputs[153] = 80; RIAL.inputs[154] = 52; RIAL.inputs[155] = 77; RIAL.inputs[156] = 52; RIAL.inputs[157] = 207; RIAL.inputs[158] = 54; RIAL.inputs[159] = 5; RIAL.inputs[160] = 5; RIAL.inputs[161] = 88; RIAL.inputs[162] = 80; RIAL.inputs[163] = 80; RIAL.inputs[164] = 245; RIAL.inputs[165] = 78; RIAL.inputs[166] = 80; RIAL.inputs[167] = 255; RIAL.inputs[168] = 211; RIAL.inputs[169] = 80; RIAL.inputs[170] = 190; RIAL.inputs[171] = 189; RIAL.inputs[172] = 210; RIAL.inputs[173] = 189; RIAL.inputs[174] = 210; RIAL.inputs[175] = 189; RIAL.inputs[176] = 190; RIAL.inputs[177] = 208; RIAL.inputs[178] = 200; RIAL.inputs[179] = 19; RIAL.inputs[180] = 199; RIAL.inputs[181] = 5; RIAL.inputs[182] = 19; RIAL.inputs[183] = 14; RIAL.inputs[184] = 111; RIAL.inputs[185] = 21; RIAL.inputs[186] = 5; RIAL.inputs[187] = 5; RIAL.inputs[188] = 44; RIAL.inputs[189] = 44; RIAL.inputs[190] = 5; RIAL.inputs[191] = 21; RIAL.inputs[192] = 19; RIAL.inputs[193] = 19; RIAL.inputs[194] = 19; RIAL.inputs[195] = 5; RIAL.inputs[196] = 21; RIAL.inputs[197] = 44; RIAL.inputs[198] = 44; RIAL.inputs[199] = 21; RIAL.inputs[200] = 199; RIAL.inputs[201] = 19; RIAL.inputs[202] = 19; RIAL.inputs[203] = 19; RIAL.inputs[204] = 19; RIAL.inputs[205] = 44; RIAL.inputs[206] = 19; RIAL.inputs[207] = 21; RIAL.inputs[208] = 21; RIAL.inputs[209] = 21; RIAL.inputs[210] = 87; RIAL.inputs[211] = 190; RIAL.inputs[212] = 247; RIAL.inputs[213] = 247; RIAL.inputs[214] = 247;
    RIAL.weightsLen = 215;
    RIAL.weights[0] = 1; RIAL.weights[1] = 1; RIAL.weights[2] = 1; RIAL.weights[3] = 1; RIAL.weights[4] = 1; RIAL.weights[5] = 1; RIAL.weights[6] = 1; RIAL.weights[7] = 1; RIAL.weights[8] = 1; RIAL.weights[9] = 1; RIAL.weights[10] = 1; RIAL.weights[11] = 1; RIAL.weights[12] = 1; RIAL.weights[13] = 1; RIAL.weights[14] = 1; RIAL.weights[15] = 1; RIAL.weights[16] = 1; RIAL.weights[17] = 1; RIAL.weights[18] = 1; RIAL.weights[19] = 1; RIAL.weights[20] = 1; RIAL.weights[21] = 1; RIAL.weights[22] = 1; RIAL.weights[23] = 1; RIAL.weights[24] = 1; RIAL.weights[25] = 1; RIAL.weights[26] = 1; RIAL.weights[27] = 1; RIAL.weights[28] = 1; RIAL.weights[29] = 1; RIAL.weights[30] = 1; RIAL.weights[31] = 1; RIAL.weights[32] = 1; RIAL.weights[33] = 1; RIAL.weights[34] = 1; RIAL.weights[35] = 1; RIAL.weights[36] = 1; RIAL.weights[37] = 1; RIAL.weights[38] = 1; RIAL.weights[39] = 1; RIAL.weights[40] = 1; RIAL.weights[41] = 1; RIAL.weights[42] = 1; RIAL.weights[43] = 1; RIAL.weights[44] = 1; RIAL.weights[45] = 1; RIAL.weights[46] = 1; RIAL.weights[47] = 1; RIAL.weights[48] = 1; RIAL.weights[49] = 1; RIAL.weights[50] = 1; RIAL.weights[51] = 1; RIAL.weights[52] = 1; RIAL.weights[53] = 1; RIAL.weights[54] = 1; RIAL.weights[55] = 1; RIAL.weights[56] = 1; RIAL.weights[57] = 1; RIAL.weights[58] = 1; RIAL.weights[59] = 1; RIAL.weights[60] = 1; RIAL.weights[61] = 1; RIAL.weights[62] = 1; RIAL.weights[63] = 1; RIAL.weights[64] = 1; RIAL.weights[65] = 1; RIAL.weights[66] = 1; RIAL.weights[67] = 1; RIAL.weights[68] = 1; RIAL.weights[69] = 1; RIAL.weights[70] = 1; RIAL.weights[71] = 1; RIAL.weights[72] = 1; RIAL.weights[73] = 1; RIAL.weights[74] = 1; RIAL.weights[75] = 1; RIAL.weights[76] = 1; RIAL.weights[77] = 1; RIAL.weights[78] = 1; RIAL.weights[79] = 1; RIAL.weights[80] = 1; RIAL.weights[81] = 1; RIAL.weights[82] = 1; RIAL.weights[83] = 1; RIAL.weights[84] = 1; RIAL.weights[85] = 1; RIAL.weights[86] = 1; RIAL.weights[87] = 1; RIAL.weights[88] = 1; RIAL.weights[89] = 1; RIAL.weights[90] = 1; RIAL.weights[91] = 1; RIAL.weights[92] = 1; RIAL.weights[93] = 1; RIAL.weights[94] = 1; RIAL.weights[95] = 1; RIAL.weights[96] = 1; RIAL.weights[97] = 1; RIAL.weights[98] = 1; RIAL.weights[99] = 1; RIAL.weights[100] = 1; RIAL.weights[101] = 1; RIAL.weights[102] = 1; RIAL.weights[103] = 1; RIAL.weights[104] = 1; RIAL.weights[105] = 1; RIAL.weights[106] = 1; RIAL.weights[107] = 1; RIAL.weights[108] = 1; RIAL.weights[109] = 1; RIAL.weights[110] = 1; RIAL.weights[111] = 1; RIAL.weights[112] = 1; RIAL.weights[113] = 1; RIAL.weights[114] = 1; RIAL.weights[115] = 1; RIAL.weights[116] = 1; RIAL.weights[117] = 1; RIAL.weights[118] = 1; RIAL.weights[119] = 1; RIAL.weights[120] = 1; RIAL.weights[121] = 1; RIAL.weights[122] = 1; RIAL.weights[123] = 1; RIAL.weights[124] = 1; RIAL.weights[125] = 1; RIAL.weights[126] = 1; RIAL.weights[127] = 1; RIAL.weights[128] = 1; RIAL.weights[129] = 1; RIAL.weights[130] = 1; RIAL.weights[131] = 1; RIAL.weights[132] = 1; RIAL.weights[133] = 1; RIAL.weights[134] = 1; RIAL.weights[135] = 1; RIAL.weights[136] = 1; RIAL.weights[137] = 1; RIAL.weights[138] = 1; RIAL.weights[139] = 1; RIAL.weights[140] = 1; RIAL.weights[141] = 1; RIAL.weights[142] = 1; RIAL.weights[143] = 1; RIAL.weights[144] = 1; RIAL.weights[145] = 1; RIAL.weights[146] = 1; RIAL.weights[147] = 1; RIAL.weights[148] = 1; RIAL.weights[149] = 1; RIAL.weights[150] = 1; RIAL.weights[151] = 1; RIAL.weights[152] = 1; RIAL.weights[153] = 1; RIAL.weights[154] = 1; RIAL.weights[155] = 1; RIAL.weights[156] = 1; RIAL.weights[157] = 1; RIAL.weights[158] = 1; RIAL.weights[159] = 1; RIAL.weights[160] = 1; RIAL.weights[161] = 1; RIAL.weights[162] = 1; RIAL.weights[163] = 1; RIAL.weights[164] = 1; RIAL.weights[165] = 1; RIAL.weights[166] = 1; RIAL.weights[167] = 1; RIAL.weights[168] = 1; RIAL.weights[169] = 1; RIAL.weights[170] = 1; RIAL.weights[171] = 1; RIAL.weights[172] = 1; RIAL.weights[173] = 1; RIAL.weights[174] = 1; RIAL.weights[175] = 1; RIAL.weights[176] = 1; RIAL.weights[177] = 1; RIAL.weights[178] = 1; RIAL.weights[179] = 1; RIAL.weights[180] = 1; RIAL.weights[181] = 1; RIAL.weights[182] = 1; RIAL.weights[183] = 1; RIAL.weights[184] = 1; RIAL.weights[185] = 1; RIAL.weights[186] = 1; RIAL.weights[187] = 1; RIAL.weights[188] = 1; RIAL.weights[189] = 1; RIAL.weights[190] = 1; RIAL.weights[191] = 1; RIAL.weights[192] = 1; RIAL.weights[193] = 1; RIAL.weights[194] = 1; RIAL.weights[195] = 1; RIAL.weights[196] = 1; RIAL.weights[197] = 1; RIAL.weights[198] = 1; RIAL.weights[199] = 1; RIAL.weights[200] = 1; RIAL.weights[201] = 1; RIAL.weights[202] = 1; RIAL.weights[203] = 1; RIAL.weights[204] = 1; RIAL.weights[205] = 1; RIAL.weights[206] = 1; RIAL.weights[207] = 1; RIAL.weights[208] = 1; RIAL.weights[209] = 1; RIAL.weights[210] = 1; RIAL.weights[211] = 1; RIAL.weights[212] = 1; RIAL.weights[213] = 1; RIAL.weights[214] = 1;
    if (id == 188) {
        return RIAL;
    }


    neuron RIAR;
    RIAR.cellID = 189;
    RIAR.threshold = 1;
    RIAR.inputsLen = 220;
    RIAR.inputs[0] = 20; RIAR.inputs[1] = 20; RIAR.inputs[2] = 22; RIAR.inputs[3] = 22; RIAR.inputs[4] = 20; RIAR.inputs[5] = 6; RIAR.inputs[6] = 20; RIAR.inputs[7] = 22; RIAR.inputs[8] = 6; RIAR.inputs[9] = 199; RIAR.inputs[10] = 247; RIAR.inputs[11] = 22; RIAR.inputs[12] = 199; RIAR.inputs[13] = 6; RIAR.inputs[14] = 260; RIAR.inputs[15] = 6; RIAR.inputs[16] = 6; RIAR.inputs[17] = 247; RIAR.inputs[18] = 206; RIAR.inputs[19] = 247; RIAR.inputs[20] = 247; RIAR.inputs[21] = 247; RIAR.inputs[22] = 22; RIAR.inputs[23] = 191; RIAR.inputs[24] = 6; RIAR.inputs[25] = 6; RIAR.inputs[26] = 22; RIAR.inputs[27] = 6; RIAR.inputs[28] = 247; RIAR.inputs[29] = 188; RIAR.inputs[30] = 188; RIAR.inputs[31] = 188; RIAR.inputs[32] = 188; RIAR.inputs[33] = 247; RIAR.inputs[34] = 247; RIAR.inputs[35] = 247; RIAR.inputs[36] = 247; RIAR.inputs[37] = 247; RIAR.inputs[38] = 247; RIAR.inputs[39] = 247; RIAR.inputs[40] = 247; RIAR.inputs[41] = 247; RIAR.inputs[42] = 76; RIAR.inputs[43] = 6; RIAR.inputs[44] = 210; RIAR.inputs[45] = 210; RIAR.inputs[46] = 210; RIAR.inputs[47] = 210; RIAR.inputs[48] = 210; RIAR.inputs[49] = 210; RIAR.inputs[50] = 210; RIAR.inputs[51] = 210; RIAR.inputs[52] = 210; RIAR.inputs[53] = 210; RIAR.inputs[54] = 210; RIAR.inputs[55] = 210; RIAR.inputs[56] = 157; RIAR.inputs[57] = 248; RIAR.inputs[58] = 248; RIAR.inputs[59] = 248; RIAR.inputs[60] = 248; RIAR.inputs[61] = 248; RIAR.inputs[62] = 248; RIAR.inputs[63] = 248; RIAR.inputs[64] = 248; RIAR.inputs[65] = 188; RIAR.inputs[66] = 248; RIAR.inputs[67] = 248; RIAR.inputs[68] = 188; RIAR.inputs[69] = 188; RIAR.inputs[70] = 23; RIAR.inputs[71] = 6; RIAR.inputs[72] = 53; RIAR.inputs[73] = 137; RIAR.inputs[74] = 256; RIAR.inputs[75] = 204; RIAR.inputs[76] = 199; RIAR.inputs[77] = 199; RIAR.inputs[78] = 53; RIAR.inputs[79] = 207; RIAR.inputs[80] = 6; RIAR.inputs[81] = 199; RIAR.inputs[82] = 199; RIAR.inputs[83] = 6; RIAR.inputs[84] = 6; RIAR.inputs[85] = 199; RIAR.inputs[86] = 199; RIAR.inputs[87] = 199; RIAR.inputs[88] = 188; RIAR.inputs[89] = 137; RIAR.inputs[90] = 4; RIAR.inputs[91] = 53; RIAR.inputs[92] = 6; RIAR.inputs[93] = 6; RIAR.inputs[94] = 6; RIAR.inputs[95] = 6; RIAR.inputs[96] = 6; RIAR.inputs[97] = 6; RIAR.inputs[98] = 6; RIAR.inputs[99] = 204; RIAR.inputs[100] = 256; RIAR.inputs[101] = 204; RIAR.inputs[102] = 256; RIAR.inputs[103] = 256; RIAR.inputs[104] = 256; RIAR.inputs[105] = 79; RIAR.inputs[106] = 198; RIAR.inputs[107] = 256; RIAR.inputs[108] = 256; RIAR.inputs[109] = 256; RIAR.inputs[110] = 245; RIAR.inputs[111] = 245; RIAR.inputs[112] = 245; RIAR.inputs[113] = 245; RIAR.inputs[114] = 245; RIAR.inputs[115] = 188; RIAR.inputs[116] = 245; RIAR.inputs[117] = 245; RIAR.inputs[118] = 246; RIAR.inputs[119] = 188; RIAR.inputs[120] = 246; RIAR.inputs[121] = 246; RIAR.inputs[122] = 247; RIAR.inputs[123] = 247; RIAR.inputs[124] = 247; RIAR.inputs[125] = 247; RIAR.inputs[126] = 188; RIAR.inputs[127] = 244; RIAR.inputs[128] = 191; RIAR.inputs[129] = 227; RIAR.inputs[130] = 40; RIAR.inputs[131] = 20; RIAR.inputs[132] = 20; RIAR.inputs[133] = 199; RIAR.inputs[134] = 199; RIAR.inputs[135] = 22; RIAR.inputs[136] = 199; RIAR.inputs[137] = 191; RIAR.inputs[138] = 191; RIAR.inputs[139] = 53; RIAR.inputs[140] = 79; RIAR.inputs[141] = 28; RIAR.inputs[142] = 28; RIAR.inputs[143] = 28; RIAR.inputs[144] = 213; RIAR.inputs[145] = 211; RIAR.inputs[146] = 211; RIAR.inputs[147] = 211; RIAR.inputs[148] = 211; RIAR.inputs[149] = 211; RIAR.inputs[150] = 211; RIAR.inputs[151] = 211; RIAR.inputs[152] = 211; RIAR.inputs[153] = 210; RIAR.inputs[154] = 181; RIAR.inputs[155] = 53; RIAR.inputs[156] = 53; RIAR.inputs[157] = 53; RIAR.inputs[158] = 79; RIAR.inputs[159] = 53; RIAR.inputs[160] = 53; RIAR.inputs[161] = 53; RIAR.inputs[162] = 53; RIAR.inputs[163] = 79; RIAR.inputs[164] = 53; RIAR.inputs[165] = 188; RIAR.inputs[166] = 199; RIAR.inputs[167] = 88; RIAR.inputs[168] = 198; RIAR.inputs[169] = 181; RIAR.inputs[170] = 79; RIAR.inputs[171] = 79; RIAR.inputs[172] = 79; RIAR.inputs[173] = 79; RIAR.inputs[174] = 79; RIAR.inputs[175] = 79; RIAR.inputs[176] = 79; RIAR.inputs[177] = 245; RIAR.inputs[178] = 248; RIAR.inputs[179] = 199; RIAR.inputs[180] = 79; RIAR.inputs[181] = 79; RIAR.inputs[182] = 191; RIAR.inputs[183] = 79; RIAR.inputs[184] = 245; RIAR.inputs[185] = 189; RIAR.inputs[186] = 210; RIAR.inputs[187] = 256; RIAR.inputs[188] = 79; RIAR.inputs[189] = 211; RIAR.inputs[190] = 211; RIAR.inputs[191] = 210; RIAR.inputs[192] = 111; RIAR.inputs[193] = 20; RIAR.inputs[194] = 22; RIAR.inputs[195] = 111; RIAR.inputs[196] = 20; RIAR.inputs[197] = 6; RIAR.inputs[198] = 20; RIAR.inputs[199] = 20; RIAR.inputs[200] = 22; RIAR.inputs[201] = 20; RIAR.inputs[202] = 22; RIAR.inputs[203] = 6; RIAR.inputs[204] = 45; RIAR.inputs[205] = 196; RIAR.inputs[206] = 245; RIAR.inputs[207] = 6; RIAR.inputs[208] = 22; RIAR.inputs[209] = 45; RIAR.inputs[210] = 6; RIAR.inputs[211] = 188; RIAR.inputs[212] = 207; RIAR.inputs[213] = 245; RIAR.inputs[214] = 235; RIAR.inputs[215] = 227; RIAR.inputs[216] = 248; RIAR.inputs[217] = 209; RIAR.inputs[218] = 208; RIAR.inputs[219] = 236;
    RIAR.weightsLen = 220;
    RIAR.weights[0] = 1; RIAR.weights[1] = 1; RIAR.weights[2] = 1; RIAR.weights[3] = 1; RIAR.weights[4] = 1; RIAR.weights[5] = 1; RIAR.weights[6] = 1; RIAR.weights[7] = 1; RIAR.weights[8] = 1; RIAR.weights[9] = 1; RIAR.weights[10] = 1; RIAR.weights[11] = 1; RIAR.weights[12] = 1; RIAR.weights[13] = 1; RIAR.weights[14] = 1; RIAR.weights[15] = 1; RIAR.weights[16] = 1; RIAR.weights[17] = 1; RIAR.weights[18] = 1; RIAR.weights[19] = 1; RIAR.weights[20] = 1; RIAR.weights[21] = 1; RIAR.weights[22] = 1; RIAR.weights[23] = 1; RIAR.weights[24] = 1; RIAR.weights[25] = 1; RIAR.weights[26] = 1; RIAR.weights[27] = 1; RIAR.weights[28] = 1; RIAR.weights[29] = 1; RIAR.weights[30] = 1; RIAR.weights[31] = 1; RIAR.weights[32] = 1; RIAR.weights[33] = 1; RIAR.weights[34] = 1; RIAR.weights[35] = 1; RIAR.weights[36] = 1; RIAR.weights[37] = 1; RIAR.weights[38] = 1; RIAR.weights[39] = 1; RIAR.weights[40] = 1; RIAR.weights[41] = 1; RIAR.weights[42] = 1; RIAR.weights[43] = 1; RIAR.weights[44] = 1; RIAR.weights[45] = 1; RIAR.weights[46] = 1; RIAR.weights[47] = 1; RIAR.weights[48] = 1; RIAR.weights[49] = 1; RIAR.weights[50] = 1; RIAR.weights[51] = 1; RIAR.weights[52] = 1; RIAR.weights[53] = 1; RIAR.weights[54] = 1; RIAR.weights[55] = 1; RIAR.weights[56] = 1; RIAR.weights[57] = 1; RIAR.weights[58] = 1; RIAR.weights[59] = 1; RIAR.weights[60] = 1; RIAR.weights[61] = 1; RIAR.weights[62] = 1; RIAR.weights[63] = 1; RIAR.weights[64] = 1; RIAR.weights[65] = 1; RIAR.weights[66] = 1; RIAR.weights[67] = 1; RIAR.weights[68] = 1; RIAR.weights[69] = 1; RIAR.weights[70] = 1; RIAR.weights[71] = 1; RIAR.weights[72] = 1; RIAR.weights[73] = 1; RIAR.weights[74] = 1; RIAR.weights[75] = 1; RIAR.weights[76] = 1; RIAR.weights[77] = 1; RIAR.weights[78] = 1; RIAR.weights[79] = 1; RIAR.weights[80] = 1; RIAR.weights[81] = 1; RIAR.weights[82] = 1; RIAR.weights[83] = 1; RIAR.weights[84] = 1; RIAR.weights[85] = 1; RIAR.weights[86] = 1; RIAR.weights[87] = 1; RIAR.weights[88] = 1; RIAR.weights[89] = 1; RIAR.weights[90] = 1; RIAR.weights[91] = 1; RIAR.weights[92] = 1; RIAR.weights[93] = 1; RIAR.weights[94] = 1; RIAR.weights[95] = 1; RIAR.weights[96] = 1; RIAR.weights[97] = 1; RIAR.weights[98] = 1; RIAR.weights[99] = 1; RIAR.weights[100] = 1; RIAR.weights[101] = 1; RIAR.weights[102] = 1; RIAR.weights[103] = 1; RIAR.weights[104] = 1; RIAR.weights[105] = 1; RIAR.weights[106] = 1; RIAR.weights[107] = 1; RIAR.weights[108] = 1; RIAR.weights[109] = 1; RIAR.weights[110] = 1; RIAR.weights[111] = 1; RIAR.weights[112] = 1; RIAR.weights[113] = 1; RIAR.weights[114] = 1; RIAR.weights[115] = 1; RIAR.weights[116] = 1; RIAR.weights[117] = 1; RIAR.weights[118] = 1; RIAR.weights[119] = 1; RIAR.weights[120] = 1; RIAR.weights[121] = 1; RIAR.weights[122] = 1; RIAR.weights[123] = 1; RIAR.weights[124] = 1; RIAR.weights[125] = 1; RIAR.weights[126] = 1; RIAR.weights[127] = 1; RIAR.weights[128] = 1; RIAR.weights[129] = 1; RIAR.weights[130] = 1; RIAR.weights[131] = 1; RIAR.weights[132] = 1; RIAR.weights[133] = 1; RIAR.weights[134] = 1; RIAR.weights[135] = 1; RIAR.weights[136] = 1; RIAR.weights[137] = 1; RIAR.weights[138] = 1; RIAR.weights[139] = 1; RIAR.weights[140] = 1; RIAR.weights[141] = 1; RIAR.weights[142] = 1; RIAR.weights[143] = 1; RIAR.weights[144] = 1; RIAR.weights[145] = 1; RIAR.weights[146] = 1; RIAR.weights[147] = 1; RIAR.weights[148] = 1; RIAR.weights[149] = 1; RIAR.weights[150] = 1; RIAR.weights[151] = 1; RIAR.weights[152] = 1; RIAR.weights[153] = 1; RIAR.weights[154] = 1; RIAR.weights[155] = 1; RIAR.weights[156] = 1; RIAR.weights[157] = 1; RIAR.weights[158] = 1; RIAR.weights[159] = 1; RIAR.weights[160] = 1; RIAR.weights[161] = 1; RIAR.weights[162] = 1; RIAR.weights[163] = 1; RIAR.weights[164] = 1; RIAR.weights[165] = 1; RIAR.weights[166] = 1; RIAR.weights[167] = 1; RIAR.weights[168] = 1; RIAR.weights[169] = 1; RIAR.weights[170] = 1; RIAR.weights[171] = 1; RIAR.weights[172] = 1; RIAR.weights[173] = 1; RIAR.weights[174] = 1; RIAR.weights[175] = 1; RIAR.weights[176] = 1; RIAR.weights[177] = 1; RIAR.weights[178] = 1; RIAR.weights[179] = 1; RIAR.weights[180] = 1; RIAR.weights[181] = 1; RIAR.weights[182] = 1; RIAR.weights[183] = 1; RIAR.weights[184] = 1; RIAR.weights[185] = 1; RIAR.weights[186] = 1; RIAR.weights[187] = 1; RIAR.weights[188] = 1; RIAR.weights[189] = 1; RIAR.weights[190] = 1; RIAR.weights[191] = 1; RIAR.weights[192] = 1; RIAR.weights[193] = 1; RIAR.weights[194] = 1; RIAR.weights[195] = 1; RIAR.weights[196] = 1; RIAR.weights[197] = 1; RIAR.weights[198] = 1; RIAR.weights[199] = 1; RIAR.weights[200] = 1; RIAR.weights[201] = 1; RIAR.weights[202] = 1; RIAR.weights[203] = 1; RIAR.weights[204] = 1; RIAR.weights[205] = 1; RIAR.weights[206] = 1; RIAR.weights[207] = 1; RIAR.weights[208] = 1; RIAR.weights[209] = 1; RIAR.weights[210] = 1; RIAR.weights[211] = 1; RIAR.weights[212] = 1; RIAR.weights[213] = 1; RIAR.weights[214] = 1; RIAR.weights[215] = 1; RIAR.weights[216] = 1; RIAR.weights[217] = 1; RIAR.weights[218] = 1; RIAR.weights[219] = 1;
    if (id == 189) {
        return RIAR;
    }


    neuron RIBL;
    RIBL.cellID = 190;
    RIBL.threshold = 1;
    RIBL.inputsLen = 128;
    RIBL.inputs[0] = 19; RIBL.inputs[1] = 199; RIBL.inputs[2] = 199; RIBL.inputs[3] = 199; RIBL.inputs[4] = 199; RIBL.inputs[5] = 52; RIBL.inputs[6] = 199; RIBL.inputs[7] = 259; RIBL.inputs[8] = 113; RIBL.inputs[9] = 87; RIBL.inputs[10] = 52; RIBL.inputs[11] = 52; RIBL.inputs[12] = 199; RIBL.inputs[13] = 52; RIBL.inputs[14] = 5; RIBL.inputs[15] = 199; RIBL.inputs[16] = 52; RIBL.inputs[17] = 52; RIBL.inputs[18] = 200; RIBL.inputs[19] = 14; RIBL.inputs[20] = 188; RIBL.inputs[21] = 259; RIBL.inputs[22] = 259; RIBL.inputs[23] = 259; RIBL.inputs[24] = 85; RIBL.inputs[25] = 257; RIBL.inputs[26] = 257; RIBL.inputs[27] = 257; RIBL.inputs[28] = 257; RIBL.inputs[29] = 257; RIBL.inputs[30] = 251; RIBL.inputs[31] = 152; RIBL.inputs[32] = 188; RIBL.inputs[33] = 246; RIBL.inputs[34] = 197; RIBL.inputs[35] = 200; RIBL.inputs[36] = 14; RIBL.inputs[37] = 200; RIBL.inputs[38] = 200; RIBL.inputs[39] = 200; RIBL.inputs[40] = 200; RIBL.inputs[41] = 200; RIBL.inputs[42] = 14; RIBL.inputs[43] = 200; RIBL.inputs[44] = 14; RIBL.inputs[45] = 14; RIBL.inputs[46] = 52; RIBL.inputs[47] = 52; RIBL.inputs[48] = 14; RIBL.inputs[49] = 17; RIBL.inputs[50] = 17; RIBL.inputs[51] = 80; RIBL.inputs[52] = 80; RIBL.inputs[53] = 18; RIBL.inputs[54] = 18; RIBL.inputs[55] = 19; RIBL.inputs[56] = 259; RIBL.inputs[57] = 52; RIBL.inputs[58] = 80; RIBL.inputs[59] = 205; RIBL.inputs[60] = 205; RIBL.inputs[61] = 152; RIBL.inputs[62] = 152; RIBL.inputs[63] = 152; RIBL.inputs[64] = 152; RIBL.inputs[65] = 152; RIBL.inputs[66] = 152; RIBL.inputs[67] = 52; RIBL.inputs[68] = 52; RIBL.inputs[69] = 52; RIBL.inputs[70] = 52; RIBL.inputs[71] = 52; RIBL.inputs[72] = 80; RIBL.inputs[73] = 80; RIBL.inputs[74] = 18; RIBL.inputs[75] = 80; RIBL.inputs[76] = 80; RIBL.inputs[77] = 52; RIBL.inputs[78] = 52; RIBL.inputs[79] = 52; RIBL.inputs[80] = 52; RIBL.inputs[81] = 52; RIBL.inputs[82] = 52; RIBL.inputs[83] = 52; RIBL.inputs[84] = 52; RIBL.inputs[85] = 52; RIBL.inputs[86] = 52; RIBL.inputs[87] = 197; RIBL.inputs[88] = 18; RIBL.inputs[89] = 80; RIBL.inputs[90] = 205; RIBL.inputs[91] = 214; RIBL.inputs[92] = 152; RIBL.inputs[93] = 80; RIBL.inputs[94] = 80; RIBL.inputs[95] = 80; RIBL.inputs[96] = 152; RIBL.inputs[97] = 152; RIBL.inputs[98] = 152; RIBL.inputs[99] = 85; RIBL.inputs[100] = 152; RIBL.inputs[101] = 152; RIBL.inputs[102] = 80; RIBL.inputs[103] = 205; RIBL.inputs[104] = 19; RIBL.inputs[105] = 19; RIBL.inputs[106] = 19; RIBL.inputs[107] = 46; RIBL.inputs[108] = 19; RIBL.inputs[109] = 80; RIBL.inputs[110] = 132; RIBL.inputs[111] = 205; RIBL.inputs[112] = 191; RIBL.inputs[113] = 233; RIBL.inputs[114] = 233; RIBL.inputs[115] = 237; RIBL.inputs[116] = 237; RIBL.inputs[117] = 237; RIBL.inputs[118] = 237; RIBL.inputs[119] = 240; RIBL.inputs[120] = 217; RIBL.inputs[121] = 191; RIBL.inputs[122] = 191; RIBL.inputs[123] = 245; RIBL.inputs[124] = 190; RIBL.inputs[125] = 197; RIBL.inputs[126] = 239; RIBL.inputs[127] = 235;
    RIBL.weightsLen = 128;
    RIBL.weights[0] = 1; RIBL.weights[1] = 1; RIBL.weights[2] = 1; RIBL.weights[3] = 1; RIBL.weights[4] = 1; RIBL.weights[5] = 1; RIBL.weights[6] = 1; RIBL.weights[7] = 1; RIBL.weights[8] = 1; RIBL.weights[9] = 1; RIBL.weights[10] = 1; RIBL.weights[11] = 1; RIBL.weights[12] = 1; RIBL.weights[13] = 1; RIBL.weights[14] = 1; RIBL.weights[15] = 1; RIBL.weights[16] = 1; RIBL.weights[17] = 1; RIBL.weights[18] = 1; RIBL.weights[19] = 1; RIBL.weights[20] = 1; RIBL.weights[21] = 1; RIBL.weights[22] = 1; RIBL.weights[23] = 1; RIBL.weights[24] = 1; RIBL.weights[25] = 1; RIBL.weights[26] = 1; RIBL.weights[27] = 1; RIBL.weights[28] = 1; RIBL.weights[29] = 1; RIBL.weights[30] = 1; RIBL.weights[31] = 1; RIBL.weights[32] = 1; RIBL.weights[33] = 1; RIBL.weights[34] = 1; RIBL.weights[35] = 1; RIBL.weights[36] = 1; RIBL.weights[37] = 1; RIBL.weights[38] = 1; RIBL.weights[39] = 1; RIBL.weights[40] = 1; RIBL.weights[41] = 1; RIBL.weights[42] = 1; RIBL.weights[43] = 1; RIBL.weights[44] = 1; RIBL.weights[45] = 1; RIBL.weights[46] = 1; RIBL.weights[47] = 1; RIBL.weights[48] = 1; RIBL.weights[49] = 1; RIBL.weights[50] = 1; RIBL.weights[51] = 1; RIBL.weights[52] = 1; RIBL.weights[53] = 1; RIBL.weights[54] = 1; RIBL.weights[55] = 1; RIBL.weights[56] = 1; RIBL.weights[57] = 1; RIBL.weights[58] = 1; RIBL.weights[59] = 1; RIBL.weights[60] = 1; RIBL.weights[61] = 1; RIBL.weights[62] = 1; RIBL.weights[63] = 1; RIBL.weights[64] = 1; RIBL.weights[65] = 1; RIBL.weights[66] = 1; RIBL.weights[67] = 1; RIBL.weights[68] = 1; RIBL.weights[69] = 1; RIBL.weights[70] = 1; RIBL.weights[71] = 1; RIBL.weights[72] = 1; RIBL.weights[73] = 1; RIBL.weights[74] = 1; RIBL.weights[75] = 1; RIBL.weights[76] = 1; RIBL.weights[77] = 1; RIBL.weights[78] = 1; RIBL.weights[79] = 1; RIBL.weights[80] = 1; RIBL.weights[81] = 1; RIBL.weights[82] = 1; RIBL.weights[83] = 1; RIBL.weights[84] = 1; RIBL.weights[85] = 1; RIBL.weights[86] = 1; RIBL.weights[87] = 1; RIBL.weights[88] = 1; RIBL.weights[89] = 1; RIBL.weights[90] = 1; RIBL.weights[91] = 1; RIBL.weights[92] = 1; RIBL.weights[93] = 1; RIBL.weights[94] = 1; RIBL.weights[95] = 1; RIBL.weights[96] = 1; RIBL.weights[97] = 1; RIBL.weights[98] = 1; RIBL.weights[99] = 1; RIBL.weights[100] = 1; RIBL.weights[101] = 1; RIBL.weights[102] = 1; RIBL.weights[103] = 1; RIBL.weights[104] = 1; RIBL.weights[105] = 1; RIBL.weights[106] = 1; RIBL.weights[107] = 1; RIBL.weights[108] = 1; RIBL.weights[109] = 1; RIBL.weights[110] = 1; RIBL.weights[111] = 1; RIBL.weights[112] = 1; RIBL.weights[113] = 1; RIBL.weights[114] = 1; RIBL.weights[115] = 1; RIBL.weights[116] = 1; RIBL.weights[117] = 1; RIBL.weights[118] = 1; RIBL.weights[119] = 1; RIBL.weights[120] = 1; RIBL.weights[121] = 1; RIBL.weights[122] = 1; RIBL.weights[123] = 1; RIBL.weights[124] = 1; RIBL.weights[125] = 1; RIBL.weights[126] = 1; RIBL.weights[127] = 1;
    if (id == 190) {
        return RIBL;
    }


    neuron RIBR;
    RIBR.cellID = 191;
    RIBR.threshold = 1;
    RIBR.inputsLen = 116;
    RIBR.inputs[0] = 20; RIBR.inputs[1] = 20; RIBR.inputs[2] = 20; RIBR.inputs[3] = 20; RIBR.inputs[4] = 113; RIBR.inputs[5] = 205; RIBR.inputs[6] = 53; RIBR.inputs[7] = 53; RIBR.inputs[8] = 199; RIBR.inputs[9] = 199; RIBR.inputs[10] = 199; RIBR.inputs[11] = 53; RIBR.inputs[12] = 259; RIBR.inputs[13] = 260; RIBR.inputs[14] = 260; RIBR.inputs[15] = 260; RIBR.inputs[16] = 199; RIBR.inputs[17] = 260; RIBR.inputs[18] = 205; RIBR.inputs[19] = 205; RIBR.inputs[20] = 13; RIBR.inputs[21] = 13; RIBR.inputs[22] = 13; RIBR.inputs[23] = 13; RIBR.inputs[24] = 201; RIBR.inputs[25] = 13; RIBR.inputs[26] = 13; RIBR.inputs[27] = 13; RIBR.inputs[28] = 247; RIBR.inputs[29] = 79; RIBR.inputs[30] = 17; RIBR.inputs[31] = 17; RIBR.inputs[32] = 20; RIBR.inputs[33] = 20; RIBR.inputs[34] = 199; RIBR.inputs[35] = 199; RIBR.inputs[36] = 20; RIBR.inputs[37] = 79; RIBR.inputs[38] = 79; RIBR.inputs[39] = 53; RIBR.inputs[40] = 205; RIBR.inputs[41] = 205; RIBR.inputs[42] = 210; RIBR.inputs[43] = 205; RIBR.inputs[44] = 153; RIBR.inputs[45] = 53; RIBR.inputs[46] = 79; RIBR.inputs[47] = 153; RIBR.inputs[48] = 153; RIBR.inputs[49] = 53; RIBR.inputs[50] = 53; RIBR.inputs[51] = 218; RIBR.inputs[52] = 53; RIBR.inputs[53] = 53; RIBR.inputs[54] = 53; RIBR.inputs[55] = 53; RIBR.inputs[56] = 79; RIBR.inputs[57] = 53; RIBR.inputs[58] = 79; RIBR.inputs[59] = 53; RIBR.inputs[60] = 79; RIBR.inputs[61] = 53; RIBR.inputs[62] = 53; RIBR.inputs[63] = 53; RIBR.inputs[64] = 113; RIBR.inputs[65] = 217; RIBR.inputs[66] = 199; RIBR.inputs[67] = 198; RIBR.inputs[68] = 198; RIBR.inputs[69] = 189; RIBR.inputs[70] = 153; RIBR.inputs[71] = 153; RIBR.inputs[72] = 153; RIBR.inputs[73] = 153; RIBR.inputs[74] = 153; RIBR.inputs[75] = 153; RIBR.inputs[76] = 205; RIBR.inputs[77] = 214; RIBR.inputs[78] = 80; RIBR.inputs[79] = 199; RIBR.inputs[80] = 79; RIBR.inputs[81] = 79; RIBR.inputs[82] = 79; RIBR.inputs[83] = 79; RIBR.inputs[84] = 79; RIBR.inputs[85] = 79; RIBR.inputs[86] = 79; RIBR.inputs[87] = 113; RIBR.inputs[88] = 153; RIBR.inputs[89] = 260; RIBR.inputs[90] = 153; RIBR.inputs[91] = 153; RIBR.inputs[92] = 205; RIBR.inputs[93] = 258; RIBR.inputs[94] = 153; RIBR.inputs[95] = 205; RIBR.inputs[96] = 20; RIBR.inputs[97] = 20; RIBR.inputs[98] = 20; RIBR.inputs[99] = 20; RIBR.inputs[100] = 20; RIBR.inputs[101] = 205; RIBR.inputs[102] = 205; RIBR.inputs[103] = 205; RIBR.inputs[104] = 236; RIBR.inputs[105] = 242; RIBR.inputs[106] = 238; RIBR.inputs[107] = 191; RIBR.inputs[108] = 242; RIBR.inputs[109] = 240; RIBR.inputs[110] = 234; RIBR.inputs[111] = 198; RIBR.inputs[112] = 198; RIBR.inputs[113] = 245; RIBR.inputs[114] = 246; RIBR.inputs[115] = 240;
    RIBR.weightsLen = 116;
    RIBR.weights[0] = 1; RIBR.weights[1] = 1; RIBR.weights[2] = 1; RIBR.weights[3] = 1; RIBR.weights[4] = 1; RIBR.weights[5] = 1; RIBR.weights[6] = 1; RIBR.weights[7] = 1; RIBR.weights[8] = 1; RIBR.weights[9] = 1; RIBR.weights[10] = 1; RIBR.weights[11] = 1; RIBR.weights[12] = 1; RIBR.weights[13] = 1; RIBR.weights[14] = 1; RIBR.weights[15] = 1; RIBR.weights[16] = 1; RIBR.weights[17] = 1; RIBR.weights[18] = 1; RIBR.weights[19] = 1; RIBR.weights[20] = 1; RIBR.weights[21] = 1; RIBR.weights[22] = 1; RIBR.weights[23] = 1; RIBR.weights[24] = 1; RIBR.weights[25] = 1; RIBR.weights[26] = 1; RIBR.weights[27] = 1; RIBR.weights[28] = 1; RIBR.weights[29] = 1; RIBR.weights[30] = 1; RIBR.weights[31] = 1; RIBR.weights[32] = 1; RIBR.weights[33] = 1; RIBR.weights[34] = 1; RIBR.weights[35] = 1; RIBR.weights[36] = 1; RIBR.weights[37] = 1; RIBR.weights[38] = 1; RIBR.weights[39] = 1; RIBR.weights[40] = 1; RIBR.weights[41] = 1; RIBR.weights[42] = 1; RIBR.weights[43] = 1; RIBR.weights[44] = 1; RIBR.weights[45] = 1; RIBR.weights[46] = 1; RIBR.weights[47] = 1; RIBR.weights[48] = 1; RIBR.weights[49] = 1; RIBR.weights[50] = 1; RIBR.weights[51] = 1; RIBR.weights[52] = 1; RIBR.weights[53] = 1; RIBR.weights[54] = 1; RIBR.weights[55] = 1; RIBR.weights[56] = 1; RIBR.weights[57] = 1; RIBR.weights[58] = 1; RIBR.weights[59] = 1; RIBR.weights[60] = 1; RIBR.weights[61] = 1; RIBR.weights[62] = 1; RIBR.weights[63] = 1; RIBR.weights[64] = 1; RIBR.weights[65] = 1; RIBR.weights[66] = 1; RIBR.weights[67] = 1; RIBR.weights[68] = 1; RIBR.weights[69] = 1; RIBR.weights[70] = 1; RIBR.weights[71] = 1; RIBR.weights[72] = 1; RIBR.weights[73] = 1; RIBR.weights[74] = 1; RIBR.weights[75] = 1; RIBR.weights[76] = 1; RIBR.weights[77] = 1; RIBR.weights[78] = 1; RIBR.weights[79] = 1; RIBR.weights[80] = 1; RIBR.weights[81] = 1; RIBR.weights[82] = 1; RIBR.weights[83] = 1; RIBR.weights[84] = 1; RIBR.weights[85] = 1; RIBR.weights[86] = 1; RIBR.weights[87] = 1; RIBR.weights[88] = 1; RIBR.weights[89] = 1; RIBR.weights[90] = 1; RIBR.weights[91] = 1; RIBR.weights[92] = 1; RIBR.weights[93] = 1; RIBR.weights[94] = 1; RIBR.weights[95] = 1; RIBR.weights[96] = 1; RIBR.weights[97] = 1; RIBR.weights[98] = 1; RIBR.weights[99] = 1; RIBR.weights[100] = 1; RIBR.weights[101] = 1; RIBR.weights[102] = 1; RIBR.weights[103] = 1; RIBR.weights[104] = 1; RIBR.weights[105] = 1; RIBR.weights[106] = 1; RIBR.weights[107] = 1; RIBR.weights[108] = 1; RIBR.weights[109] = 1; RIBR.weights[110] = 1; RIBR.weights[111] = 1; RIBR.weights[112] = 1; RIBR.weights[113] = 1; RIBR.weights[114] = 1; RIBR.weights[115] = 1;
    if (id == 191) {
        return RIBR;
    }


    neuron RICL;
    RICL.cellID = 192;
    RICL.threshold = 1;
    RICL.inputsLen = 45;
    RICL.inputs[0] = 87; RICL.inputs[1] = 88; RICL.inputs[2] = 88; RICL.inputs[3] = 85; RICL.inputs[4] = 87; RICL.inputs[5] = 87; RICL.inputs[6] = 88; RICL.inputs[7] = 255; RICL.inputs[8] = 87; RICL.inputs[9] = 1; RICL.inputs[10] = 134; RICL.inputs[11] = 255; RICL.inputs[12] = 255; RICL.inputs[13] = 255; RICL.inputs[14] = 240; RICL.inputs[15] = 254; RICL.inputs[16] = 86; RICL.inputs[17] = 253; RICL.inputs[18] = 86; RICL.inputs[19] = 156; RICL.inputs[20] = 193; RICL.inputs[21] = 222; RICL.inputs[22] = 86; RICL.inputs[23] = 193; RICL.inputs[24] = 86; RICL.inputs[25] = 87; RICL.inputs[26] = 156; RICL.inputs[27] = 133; RICL.inputs[28] = 24; RICL.inputs[29] = 155; RICL.inputs[30] = 87; RICL.inputs[31] = 85; RICL.inputs[32] = 85; RICL.inputs[33] = 85; RICL.inputs[34] = 85; RICL.inputs[35] = 85; RICL.inputs[36] = 85; RICL.inputs[37] = 86; RICL.inputs[38] = 193; RICL.inputs[39] = 1; RICL.inputs[40] = 1; RICL.inputs[41] = 86; RICL.inputs[42] = 8; RICL.inputs[43] = 86; RICL.inputs[44] = 86;
    RICL.weightsLen = 45;
    RICL.weights[0] = 1; RICL.weights[1] = 1; RICL.weights[2] = 1; RICL.weights[3] = 1; RICL.weights[4] = 1; RICL.weights[5] = 1; RICL.weights[6] = 1; RICL.weights[7] = 1; RICL.weights[8] = 1; RICL.weights[9] = 1; RICL.weights[10] = 1; RICL.weights[11] = 1; RICL.weights[12] = 1; RICL.weights[13] = 1; RICL.weights[14] = 1; RICL.weights[15] = 1; RICL.weights[16] = 1; RICL.weights[17] = 1; RICL.weights[18] = 1; RICL.weights[19] = 1; RICL.weights[20] = 1; RICL.weights[21] = 1; RICL.weights[22] = 1; RICL.weights[23] = 1; RICL.weights[24] = 1; RICL.weights[25] = 1; RICL.weights[26] = 1; RICL.weights[27] = 1; RICL.weights[28] = 1; RICL.weights[29] = 1; RICL.weights[30] = 1; RICL.weights[31] = 1; RICL.weights[32] = 1; RICL.weights[33] = 1; RICL.weights[34] = 1; RICL.weights[35] = 1; RICL.weights[36] = 1; RICL.weights[37] = 1; RICL.weights[38] = 1; RICL.weights[39] = 1; RICL.weights[40] = 1; RICL.weights[41] = 1; RICL.weights[42] = 1; RICL.weights[43] = 1; RICL.weights[44] = 1;
    if (id == 192) {
        return RICL;
    }


    neuron RICR;
    RICR.cellID = 193;
    RICR.threshold = 1;
    RICR.inputsLen = 46;
    RICR.inputs[0] = 21; RICR.inputs[1] = 200; RICR.inputs[2] = 87; RICR.inputs[3] = 21; RICR.inputs[4] = 231; RICR.inputs[5] = 232; RICR.inputs[6] = 88; RICR.inputs[7] = 88; RICR.inputs[8] = 157; RICR.inputs[9] = 157; RICR.inputs[10] = 154; RICR.inputs[11] = 87; RICR.inputs[12] = 87; RICR.inputs[13] = 256; RICR.inputs[14] = 256; RICR.inputs[15] = 1; RICR.inputs[16] = 8; RICR.inputs[17] = 86; RICR.inputs[18] = 86; RICR.inputs[19] = 85; RICR.inputs[20] = 14; RICR.inputs[21] = 24; RICR.inputs[22] = 222; RICR.inputs[23] = 232; RICR.inputs[24] = 86; RICR.inputs[25] = 86; RICR.inputs[26] = 86; RICR.inputs[27] = 86; RICR.inputs[28] = 87; RICR.inputs[29] = 155; RICR.inputs[30] = 133; RICR.inputs[31] = 24; RICR.inputs[32] = 85; RICR.inputs[33] = 85; RICR.inputs[34] = 85; RICR.inputs[35] = 88; RICR.inputs[36] = 154; RICR.inputs[37] = 8; RICR.inputs[38] = 86; RICR.inputs[39] = 86; RICR.inputs[40] = 192; RICR.inputs[41] = 253; RICR.inputs[42] = 254; RICR.inputs[43] = 86; RICR.inputs[44] = 256; RICR.inputs[45] = 223;
    RICR.weightsLen = 46;
    RICR.weights[0] = 1; RICR.weights[1] = 1; RICR.weights[2] = 1; RICR.weights[3] = 1; RICR.weights[4] = 1; RICR.weights[5] = 1; RICR.weights[6] = 1; RICR.weights[7] = 1; RICR.weights[8] = 1; RICR.weights[9] = 1; RICR.weights[10] = 1; RICR.weights[11] = 1; RICR.weights[12] = 1; RICR.weights[13] = 1; RICR.weights[14] = 1; RICR.weights[15] = 1; RICR.weights[16] = 1; RICR.weights[17] = 1; RICR.weights[18] = 1; RICR.weights[19] = 1; RICR.weights[20] = 1; RICR.weights[21] = 1; RICR.weights[22] = 1; RICR.weights[23] = 1; RICR.weights[24] = 1; RICR.weights[25] = 1; RICR.weights[26] = 1; RICR.weights[27] = 1; RICR.weights[28] = 1; RICR.weights[29] = 1; RICR.weights[30] = 1; RICR.weights[31] = 1; RICR.weights[32] = 1; RICR.weights[33] = 1; RICR.weights[34] = 1; RICR.weights[35] = 1; RICR.weights[36] = 1; RICR.weights[37] = 1; RICR.weights[38] = 1; RICR.weights[39] = 1; RICR.weights[40] = 1; RICR.weights[41] = 1; RICR.weights[42] = 1; RICR.weights[43] = 1; RICR.weights[44] = 1; RICR.weights[45] = 1;
    if (id == 193) {
        return RICR;
    }


    neuron RID;
    RID.cellID = 194;
    RID.threshold = 1;
    RID.inputsLen = 26;
    RID.inputs[0] = 174; RID.inputs[1] = 174; RID.inputs[2] = 174; RID.inputs[3] = 259; RID.inputs[4] = 173; RID.inputs[5] = 259; RID.inputs[6] = 17; RID.inputs[7] = 222; RID.inputs[8] = 259; RID.inputs[9] = 174; RID.inputs[10] = 18; RID.inputs[11] = 18; RID.inputs[12] = 173; RID.inputs[13] = 68; RID.inputs[14] = 174; RID.inputs[15] = 173; RID.inputs[16] = 174; RID.inputs[17] = 173; RID.inputs[18] = 79; RID.inputs[19] = 1; RID.inputs[20] = 174; RID.inputs[21] = 72; RID.inputs[22] = 15; RID.inputs[23] = 158; RID.inputs[24] = 174; RID.inputs[25] = 194;
    RID.weightsLen = 26;
    RID.weights[0] = 1; RID.weights[1] = 1; RID.weights[2] = 1; RID.weights[3] = 1; RID.weights[4] = 1; RID.weights[5] = 1; RID.weights[6] = 1; RID.weights[7] = 1; RID.weights[8] = 1; RID.weights[9] = 1; RID.weights[10] = 1; RID.weights[11] = 1; RID.weights[12] = 1; RID.weights[13] = 1; RID.weights[14] = 1; RID.weights[15] = 1; RID.weights[16] = 1; RID.weights[17] = 1; RID.weights[18] = 1; RID.weights[19] = 1; RID.weights[20] = 1; RID.weights[21] = 1; RID.weights[22] = 1; RID.weights[23] = 1; RID.weights[24] = 1; RID.weights[25] = 1;
    if (id == 194) {
        return RID;
    }


    neuron RIFL;
    RIFL.cellID = 195;
    RIFL.threshold = 1;
    RIFL.inputsLen = 13;
    RIFL.inputs[0] = 116; RIFL.inputs[1] = 15; RIFL.inputs[2] = 15; RIFL.inputs[3] = 24; RIFL.inputs[4] = 62; RIFL.inputs[5] = 196; RIFL.inputs[6] = 81; RIFL.inputs[7] = 11; RIFL.inputs[8] = 116; RIFL.inputs[9] = 116; RIFL.inputs[10] = 3; RIFL.inputs[11] = 116; RIFL.inputs[12] = 13;
    RIFL.weightsLen = 13;
    RIFL.weights[0] = 1; RIFL.weights[1] = 1; RIFL.weights[2] = 1; RIFL.weights[3] = 1; RIFL.weights[4] = 1; RIFL.weights[5] = 1; RIFL.weights[6] = 1; RIFL.weights[7] = 1; RIFL.weights[8] = 1; RIFL.weights[9] = 1; RIFL.weights[10] = 1; RIFL.weights[11] = 1; RIFL.weights[12] = 1;
    if (id == 195) {
        return RIFL;
    }


    neuron RIFR;
    RIFR.cellID = 196;
    RIFR.threshold = 1;
    RIFR.inputsLen = 27;
    RIFR.inputs[0] = 183; RIFR.inputs[1] = 183; RIFR.inputs[2] = 183; RIFR.inputs[3] = 256; RIFR.inputs[4] = 16; RIFR.inputs[5] = 74; RIFR.inputs[6] = 117; RIFR.inputs[7] = 86; RIFR.inputs[8] = 67; RIFR.inputs[9] = 117; RIFR.inputs[10] = 8; RIFR.inputs[11] = 62; RIFR.inputs[12] = 16; RIFR.inputs[13] = 76; RIFR.inputs[14] = 51; RIFR.inputs[15] = 65; RIFR.inputs[16] = 12; RIFR.inputs[17] = 12; RIFR.inputs[18] = 43; RIFR.inputs[19] = 12; RIFR.inputs[20] = 2; RIFR.inputs[21] = 12; RIFR.inputs[22] = 117; RIFR.inputs[23] = 74; RIFR.inputs[24] = 74; RIFR.inputs[25] = 117; RIFR.inputs[26] = 221;
    RIFR.weightsLen = 27;
    RIFR.weights[0] = 1; RIFR.weights[1] = 1; RIFR.weights[2] = 1; RIFR.weights[3] = 1; RIFR.weights[4] = 1; RIFR.weights[5] = 1; RIFR.weights[6] = 1; RIFR.weights[7] = 1; RIFR.weights[8] = 1; RIFR.weights[9] = 1; RIFR.weights[10] = 1; RIFR.weights[11] = 1; RIFR.weights[12] = 1; RIFR.weights[13] = 1; RIFR.weights[14] = 1; RIFR.weights[15] = 1; RIFR.weights[16] = 1; RIFR.weights[17] = 1; RIFR.weights[18] = 1; RIFR.weights[19] = 1; RIFR.weights[20] = 1; RIFR.weights[21] = 1; RIFR.weights[22] = 1; RIFR.weights[23] = 1; RIFR.weights[24] = 1; RIFR.weights[25] = 1; RIFR.weights[26] = 1;
    if (id == 196) {
        return RIFR;
    }


    neuron RIGL;
    RIGL.cellID = 197;
    RIGL.threshold = 1;
    RIGL.inputsLen = 67;
    RIGL.inputs[0] = 113; RIGL.inputs[1] = 113; RIGL.inputs[2] = 113; RIGL.inputs[3] = 190; RIGL.inputs[4] = 113; RIGL.inputs[5] = 14; RIGL.inputs[6] = 113; RIGL.inputs[7] = 75; RIGL.inputs[8] = 75; RIGL.inputs[9] = 255; RIGL.inputs[10] = 255; RIGL.inputs[11] = 5; RIGL.inputs[12] = 5; RIGL.inputs[13] = 5; RIGL.inputs[14] = 255; RIGL.inputs[15] = 113; RIGL.inputs[16] = 113; RIGL.inputs[17] = 113; RIGL.inputs[18] = 224; RIGL.inputs[19] = 28; RIGL.inputs[20] = 113; RIGL.inputs[21] = 185; RIGL.inputs[22] = 21; RIGL.inputs[23] = 80; RIGL.inputs[24] = 204; RIGL.inputs[25] = 180; RIGL.inputs[26] = 7; RIGL.inputs[27] = 80; RIGL.inputs[28] = 80; RIGL.inputs[29] = 80; RIGL.inputs[30] = 80; RIGL.inputs[31] = 79; RIGL.inputs[32] = 21; RIGL.inputs[33] = 3; RIGL.inputs[34] = 4; RIGL.inputs[35] = 3; RIGL.inputs[36] = 4; RIGL.inputs[37] = 3; RIGL.inputs[38] = 4; RIGL.inputs[39] = 3; RIGL.inputs[40] = 3; RIGL.inputs[41] = 70; RIGL.inputs[42] = 4; RIGL.inputs[43] = 4; RIGL.inputs[44] = 4; RIGL.inputs[45] = 66; RIGL.inputs[46] = 180; RIGL.inputs[47] = 255; RIGL.inputs[48] = 4; RIGL.inputs[49] = 3; RIGL.inputs[50] = 4; RIGL.inputs[51] = 4; RIGL.inputs[52] = 218; RIGL.inputs[53] = 198; RIGL.inputs[54] = 215; RIGL.inputs[55] = 215; RIGL.inputs[56] = 198; RIGL.inputs[57] = 259; RIGL.inputs[58] = 257; RIGL.inputs[59] = 257; RIGL.inputs[60] = 198; RIGL.inputs[61] = 198; RIGL.inputs[62] = 198; RIGL.inputs[63] = 198; RIGL.inputs[64] = 198; RIGL.inputs[65] = 198; RIGL.inputs[66] = 198;
    RIGL.weightsLen = 67;
    RIGL.weights[0] = 1; RIGL.weights[1] = 1; RIGL.weights[2] = 1; RIGL.weights[3] = 1; RIGL.weights[4] = 1; RIGL.weights[5] = 1; RIGL.weights[6] = 1; RIGL.weights[7] = 1; RIGL.weights[8] = 1; RIGL.weights[9] = 1; RIGL.weights[10] = 1; RIGL.weights[11] = 1; RIGL.weights[12] = 1; RIGL.weights[13] = 1; RIGL.weights[14] = 1; RIGL.weights[15] = 1; RIGL.weights[16] = 1; RIGL.weights[17] = 1; RIGL.weights[18] = 1; RIGL.weights[19] = 1; RIGL.weights[20] = 1; RIGL.weights[21] = 1; RIGL.weights[22] = 1; RIGL.weights[23] = 1; RIGL.weights[24] = 1; RIGL.weights[25] = 1; RIGL.weights[26] = 1; RIGL.weights[27] = 1; RIGL.weights[28] = 1; RIGL.weights[29] = 1; RIGL.weights[30] = 1; RIGL.weights[31] = 1; RIGL.weights[32] = 1; RIGL.weights[33] = 1; RIGL.weights[34] = 1; RIGL.weights[35] = 1; RIGL.weights[36] = 1; RIGL.weights[37] = 1; RIGL.weights[38] = 1; RIGL.weights[39] = 1; RIGL.weights[40] = 1; RIGL.weights[41] = 1; RIGL.weights[42] = 1; RIGL.weights[43] = 1; RIGL.weights[44] = 1; RIGL.weights[45] = 1; RIGL.weights[46] = 1; RIGL.weights[47] = 1; RIGL.weights[48] = 1; RIGL.weights[49] = 1; RIGL.weights[50] = 1; RIGL.weights[51] = 1; RIGL.weights[52] = 1; RIGL.weights[53] = 1; RIGL.weights[54] = 1; RIGL.weights[55] = 1; RIGL.weights[56] = 1; RIGL.weights[57] = 1; RIGL.weights[58] = 1; RIGL.weights[59] = 1; RIGL.weights[60] = 1; RIGL.weights[61] = 1; RIGL.weights[62] = 1; RIGL.weights[63] = 1; RIGL.weights[64] = 1; RIGL.weights[65] = 1; RIGL.weights[66] = 1;
    if (id == 197) {
        return RIGL;
    }


    neuron RIGR;
    RIGR.cellID = 198;
    RIGR.threshold = 1;
    RIGR.inputsLen = 60;
    RIGR.inputs[0] = 6; RIGR.inputs[1] = 6; RIGR.inputs[2] = 6; RIGR.inputs[3] = 6; RIGR.inputs[4] = 185; RIGR.inputs[5] = 113; RIGR.inputs[6] = 113; RIGR.inputs[7] = 5; RIGR.inputs[8] = 6; RIGR.inputs[9] = 6; RIGR.inputs[10] = 191; RIGR.inputs[11] = 6; RIGR.inputs[12] = 6; RIGR.inputs[13] = 6; RIGR.inputs[14] = 256; RIGR.inputs[15] = 256; RIGR.inputs[16] = 256; RIGR.inputs[17] = 256; RIGR.inputs[18] = 113; RIGR.inputs[19] = 13; RIGR.inputs[20] = 13; RIGR.inputs[21] = 79; RIGR.inputs[22] = 13; RIGR.inputs[23] = 191; RIGR.inputs[24] = 221; RIGR.inputs[25] = 221; RIGR.inputs[26] = 185; RIGR.inputs[27] = 74; RIGR.inputs[28] = 204; RIGR.inputs[29] = 113; RIGR.inputs[30] = 113; RIGR.inputs[31] = 6; RIGR.inputs[32] = 181; RIGR.inputs[33] = 6; RIGR.inputs[34] = 113; RIGR.inputs[35] = 79; RIGR.inputs[36] = 185; RIGR.inputs[37] = 79; RIGR.inputs[38] = 191; RIGR.inputs[39] = 191; RIGR.inputs[40] = 79; RIGR.inputs[41] = 181; RIGR.inputs[42] = 79; RIGR.inputs[43] = 79; RIGR.inputs[44] = 79; RIGR.inputs[45] = 4; RIGR.inputs[46] = 4; RIGR.inputs[47] = 4; RIGR.inputs[48] = 3; RIGR.inputs[49] = 3; RIGR.inputs[50] = 3; RIGR.inputs[51] = 3; RIGR.inputs[52] = 4; RIGR.inputs[53] = 229; RIGR.inputs[54] = 256; RIGR.inputs[55] = 3; RIGR.inputs[56] = 3; RIGR.inputs[57] = 258; RIGR.inputs[58] = 218; RIGR.inputs[59] = 258;
    RIGR.weightsLen = 60;
    RIGR.weights[0] = 1; RIGR.weights[1] = 1; RIGR.weights[2] = 1; RIGR.weights[3] = 1; RIGR.weights[4] = 1; RIGR.weights[5] = 1; RIGR.weights[6] = 1; RIGR.weights[7] = 1; RIGR.weights[8] = 1; RIGR.weights[9] = 1; RIGR.weights[10] = 1; RIGR.weights[11] = 1; RIGR.weights[12] = 1; RIGR.weights[13] = 1; RIGR.weights[14] = 1; RIGR.weights[15] = 1; RIGR.weights[16] = 1; RIGR.weights[17] = 1; RIGR.weights[18] = 1; RIGR.weights[19] = 1; RIGR.weights[20] = 1; RIGR.weights[21] = 1; RIGR.weights[22] = 1; RIGR.weights[23] = 1; RIGR.weights[24] = 1; RIGR.weights[25] = 1; RIGR.weights[26] = 1; RIGR.weights[27] = 1; RIGR.weights[28] = 1; RIGR.weights[29] = 1; RIGR.weights[30] = 1; RIGR.weights[31] = 1; RIGR.weights[32] = 1; RIGR.weights[33] = 1; RIGR.weights[34] = 1; RIGR.weights[35] = 1; RIGR.weights[36] = 1; RIGR.weights[37] = 1; RIGR.weights[38] = 1; RIGR.weights[39] = 1; RIGR.weights[40] = 1; RIGR.weights[41] = 1; RIGR.weights[42] = 1; RIGR.weights[43] = 1; RIGR.weights[44] = 1; RIGR.weights[45] = 1; RIGR.weights[46] = 1; RIGR.weights[47] = 1; RIGR.weights[48] = 1; RIGR.weights[49] = 1; RIGR.weights[50] = 1; RIGR.weights[51] = 1; RIGR.weights[52] = 1; RIGR.weights[53] = 1; RIGR.weights[54] = 1; RIGR.weights[55] = 1; RIGR.weights[56] = 1; RIGR.weights[57] = 1; RIGR.weights[58] = 1; RIGR.weights[59] = 1;
    if (id == 198) {
        return RIGR;
    }


    neuron RIH;
    RIH.cellID = 199;
    RIH.threshold = 1;
    RIH.inputsLen = 49;
    RIH.inputs[0] = 191; RIH.inputs[1] = 6; RIH.inputs[2] = 6; RIH.inputs[3] = 137; RIH.inputs[4] = 137; RIH.inputs[5] = 137; RIH.inputs[6] = 137; RIH.inputs[7] = 259; RIH.inputs[8] = 252; RIH.inputs[9] = 136; RIH.inputs[10] = 197; RIH.inputs[11] = 157; RIH.inputs[12] = 157; RIH.inputs[13] = 157; RIH.inputs[14] = 203; RIH.inputs[15] = 134; RIH.inputs[16] = 202; RIH.inputs[17] = 86; RIH.inputs[18] = 155; RIH.inputs[19] = 132; RIH.inputs[20] = 85; RIH.inputs[21] = 185; RIH.inputs[22] = 217; RIH.inputs[23] = 134; RIH.inputs[24] = 134; RIH.inputs[25] = 135; RIH.inputs[26] = 134; RIH.inputs[27] = 134; RIH.inputs[28] = 134; RIH.inputs[29] = 134; RIH.inputs[30] = 134; RIH.inputs[31] = 134; RIH.inputs[32] = 249; RIH.inputs[33] = 135; RIH.inputs[34] = 135; RIH.inputs[35] = 135; RIH.inputs[36] = 132; RIH.inputs[37] = 136; RIH.inputs[38] = 136; RIH.inputs[39] = 135; RIH.inputs[40] = 135; RIH.inputs[41] = 135; RIH.inputs[42] = 155; RIH.inputs[43] = 154; RIH.inputs[44] = 3; RIH.inputs[45] = 3; RIH.inputs[46] = 219; RIH.inputs[47] = 241; RIH.inputs[48] = 19;
    RIH.weightsLen = 49;
    RIH.weights[0] = 1; RIH.weights[1] = 1; RIH.weights[2] = 1; RIH.weights[3] = 1; RIH.weights[4] = 1; RIH.weights[5] = 1; RIH.weights[6] = 1; RIH.weights[7] = 1; RIH.weights[8] = 1; RIH.weights[9] = 1; RIH.weights[10] = 1; RIH.weights[11] = 1; RIH.weights[12] = 1; RIH.weights[13] = 1; RIH.weights[14] = 1; RIH.weights[15] = 1; RIH.weights[16] = 1; RIH.weights[17] = 1; RIH.weights[18] = 1; RIH.weights[19] = 1; RIH.weights[20] = 1; RIH.weights[21] = 1; RIH.weights[22] = 1; RIH.weights[23] = 1; RIH.weights[24] = 1; RIH.weights[25] = 1; RIH.weights[26] = 1; RIH.weights[27] = 1; RIH.weights[28] = 1; RIH.weights[29] = 1; RIH.weights[30] = 1; RIH.weights[31] = 1; RIH.weights[32] = 1; RIH.weights[33] = 1; RIH.weights[34] = 1; RIH.weights[35] = 1; RIH.weights[36] = 1; RIH.weights[37] = 1; RIH.weights[38] = 1; RIH.weights[39] = 1; RIH.weights[40] = 1; RIH.weights[41] = 1; RIH.weights[42] = 1; RIH.weights[43] = 1; RIH.weights[44] = 1; RIH.weights[45] = 1; RIH.weights[46] = 1; RIH.weights[47] = 1; RIH.weights[48] = 1;
    if (id == 199) {
        return RIH;
    }


    neuron RIML;
    RIML.cellID = 200;
    RIML.threshold = 1;
    RIML.inputsLen = 100;
    RIML.inputs[0] = 14; RIML.inputs[1] = 116; RIML.inputs[2] = 193; RIML.inputs[3] = 21; RIML.inputs[4] = 193; RIML.inputs[5] = 21; RIML.inputs[6] = 14; RIML.inputs[7] = 14; RIML.inputs[8] = 21; RIML.inputs[9] = 14; RIML.inputs[10] = 21; RIML.inputs[11] = 14; RIML.inputs[12] = 225; RIML.inputs[13] = 70; RIML.inputs[14] = 70; RIML.inputs[15] = 205; RIML.inputs[16] = 193; RIML.inputs[17] = 226; RIML.inputs[18] = 226; RIML.inputs[19] = 210; RIML.inputs[20] = 205; RIML.inputs[21] = 226; RIML.inputs[22] = 14; RIML.inputs[23] = 14; RIML.inputs[24] = 225; RIML.inputs[25] = 21; RIML.inputs[26] = 21; RIML.inputs[27] = 21; RIML.inputs[28] = 227; RIML.inputs[29] = 14; RIML.inputs[30] = 193; RIML.inputs[31] = 200; RIML.inputs[32] = 248; RIML.inputs[33] = 245; RIML.inputs[34] = 245; RIML.inputs[35] = 14; RIML.inputs[36] = 14; RIML.inputs[37] = 14; RIML.inputs[38] = 69; RIML.inputs[39] = 21; RIML.inputs[40] = 14; RIML.inputs[41] = 225; RIML.inputs[42] = 225; RIML.inputs[43] = 188; RIML.inputs[44] = 188; RIML.inputs[45] = 224; RIML.inputs[46] = 190; RIML.inputs[47] = 14; RIML.inputs[48] = 14; RIML.inputs[49] = 14; RIML.inputs[50] = 14; RIML.inputs[51] = 227; RIML.inputs[52] = 14; RIML.inputs[53] = 14; RIML.inputs[54] = 14; RIML.inputs[55] = 225; RIML.inputs[56] = 21; RIML.inputs[57] = 14; RIML.inputs[58] = 14; RIML.inputs[59] = 14; RIML.inputs[60] = 14; RIML.inputs[61] = 21; RIML.inputs[62] = 227; RIML.inputs[63] = 201; RIML.inputs[64] = 205; RIML.inputs[65] = 205; RIML.inputs[66] = 205; RIML.inputs[67] = 205; RIML.inputs[68] = 21; RIML.inputs[69] = 21; RIML.inputs[70] = 201; RIML.inputs[71] = 224; RIML.inputs[72] = 224; RIML.inputs[73] = 224; RIML.inputs[74] = 69; RIML.inputs[75] = 224; RIML.inputs[76] = 224; RIML.inputs[77] = 27; RIML.inputs[78] = 225; RIML.inputs[79] = 70; RIML.inputs[80] = 195; RIML.inputs[81] = 1; RIML.inputs[82] = 1; RIML.inputs[83] = 44; RIML.inputs[84] = 14; RIML.inputs[85] = 195; RIML.inputs[86] = 195; RIML.inputs[87] = 116; RIML.inputs[88] = 13; RIML.inputs[89] = 192; RIML.inputs[90] = 227; RIML.inputs[91] = 1; RIML.inputs[92] = 1; RIML.inputs[93] = 227; RIML.inputs[94] = 200; RIML.inputs[95] = 205; RIML.inputs[96] = 210; RIML.inputs[97] = 218; RIML.inputs[98] = 233; RIML.inputs[99] = 218;
    RIML.weightsLen = 100;
    RIML.weights[0] = 1; RIML.weights[1] = 1; RIML.weights[2] = 1; RIML.weights[3] = 1; RIML.weights[4] = 1; RIML.weights[5] = 1; RIML.weights[6] = 1; RIML.weights[7] = 1; RIML.weights[8] = 1; RIML.weights[9] = 1; RIML.weights[10] = 1; RIML.weights[11] = 1; RIML.weights[12] = 1; RIML.weights[13] = 1; RIML.weights[14] = 1; RIML.weights[15] = 1; RIML.weights[16] = 1; RIML.weights[17] = 1; RIML.weights[18] = 1; RIML.weights[19] = 1; RIML.weights[20] = 1; RIML.weights[21] = 1; RIML.weights[22] = 1; RIML.weights[23] = 1; RIML.weights[24] = 1; RIML.weights[25] = 1; RIML.weights[26] = 1; RIML.weights[27] = 1; RIML.weights[28] = 1; RIML.weights[29] = 1; RIML.weights[30] = 1; RIML.weights[31] = 1; RIML.weights[32] = 1; RIML.weights[33] = 1; RIML.weights[34] = 1; RIML.weights[35] = 1; RIML.weights[36] = 1; RIML.weights[37] = 1; RIML.weights[38] = 1; RIML.weights[39] = 1; RIML.weights[40] = 1; RIML.weights[41] = 1; RIML.weights[42] = 1; RIML.weights[43] = 1; RIML.weights[44] = 1; RIML.weights[45] = 1; RIML.weights[46] = 1; RIML.weights[47] = 1; RIML.weights[48] = 1; RIML.weights[49] = 1; RIML.weights[50] = 1; RIML.weights[51] = 1; RIML.weights[52] = 1; RIML.weights[53] = 1; RIML.weights[54] = 1; RIML.weights[55] = 1; RIML.weights[56] = 1; RIML.weights[57] = 1; RIML.weights[58] = 1; RIML.weights[59] = 1; RIML.weights[60] = 1; RIML.weights[61] = 1; RIML.weights[62] = 1; RIML.weights[63] = 1; RIML.weights[64] = 1; RIML.weights[65] = 1; RIML.weights[66] = 1; RIML.weights[67] = 1; RIML.weights[68] = 1; RIML.weights[69] = 1; RIML.weights[70] = 1; RIML.weights[71] = 1; RIML.weights[72] = 1; RIML.weights[73] = 1; RIML.weights[74] = 1; RIML.weights[75] = 1; RIML.weights[76] = 1; RIML.weights[77] = 1; RIML.weights[78] = 1; RIML.weights[79] = 1; RIML.weights[80] = 1; RIML.weights[81] = 1; RIML.weights[82] = 1; RIML.weights[83] = 1; RIML.weights[84] = 1; RIML.weights[85] = 1; RIML.weights[86] = 1; RIML.weights[87] = 1; RIML.weights[88] = 1; RIML.weights[89] = 1; RIML.weights[90] = 1; RIML.weights[91] = 1; RIML.weights[92] = 1; RIML.weights[93] = 1; RIML.weights[94] = 1; RIML.weights[95] = 1; RIML.weights[96] = 1; RIML.weights[97] = 1; RIML.weights[98] = 1; RIML.weights[99] = 1;
    if (id == 200) {
        return RIML;
    }


    neuron RIMR;
    RIMR.cellID = 201;
    RIMR.threshold = 1;
    RIMR.inputsLen = 119;
    RIMR.inputs[0] = 192; RIMR.inputs[1] = 192; RIMR.inputs[2] = 192; RIMR.inputs[3] = 13; RIMR.inputs[4] = 226; RIMR.inputs[5] = 13; RIMR.inputs[6] = 22; RIMR.inputs[7] = 13; RIMR.inputs[8] = 226; RIMR.inputs[9] = 226; RIMR.inputs[10] = 226; RIMR.inputs[11] = 226; RIMR.inputs[12] = 226; RIMR.inputs[13] = 226; RIMR.inputs[14] = 22; RIMR.inputs[15] = 22; RIMR.inputs[16] = 13; RIMR.inputs[17] = 22; RIMR.inputs[18] = 13; RIMR.inputs[19] = 22; RIMR.inputs[20] = 111; RIMR.inputs[21] = 205; RIMR.inputs[22] = 14; RIMR.inputs[23] = 22; RIMR.inputs[24] = 22; RIMR.inputs[25] = 22; RIMR.inputs[26] = 22; RIMR.inputs[27] = 226; RIMR.inputs[28] = 226; RIMR.inputs[29] = 226; RIMR.inputs[30] = 13; RIMR.inputs[31] = 226; RIMR.inputs[32] = 226; RIMR.inputs[33] = 13; RIMR.inputs[34] = 13; RIMR.inputs[35] = 13; RIMR.inputs[36] = 13; RIMR.inputs[37] = 13; RIMR.inputs[38] = 22; RIMR.inputs[39] = 226; RIMR.inputs[40] = 224; RIMR.inputs[41] = 14; RIMR.inputs[42] = 22; RIMR.inputs[43] = 205; RIMR.inputs[44] = 22; RIMR.inputs[45] = 70; RIMR.inputs[46] = 205; RIMR.inputs[47] = 13; RIMR.inputs[48] = 13; RIMR.inputs[49] = 13; RIMR.inputs[50] = 13; RIMR.inputs[51] = 13; RIMR.inputs[52] = 13; RIMR.inputs[53] = 13; RIMR.inputs[54] = 13; RIMR.inputs[55] = 13; RIMR.inputs[56] = 13; RIMR.inputs[57] = 13; RIMR.inputs[58] = 13; RIMR.inputs[59] = 224; RIMR.inputs[60] = 13; RIMR.inputs[61] = 225; RIMR.inputs[62] = 245; RIMR.inputs[63] = 246; RIMR.inputs[64] = 22; RIMR.inputs[65] = 200; RIMR.inputs[66] = 13; RIMR.inputs[67] = 226; RIMR.inputs[68] = 226; RIMR.inputs[69] = 225; RIMR.inputs[70] = 193; RIMR.inputs[71] = 225; RIMR.inputs[72] = 225; RIMR.inputs[73] = 225; RIMR.inputs[74] = 225; RIMR.inputs[75] = 225; RIMR.inputs[76] = 225; RIMR.inputs[77] = 218; RIMR.inputs[78] = 218; RIMR.inputs[79] = 227; RIMR.inputs[80] = 14; RIMR.inputs[81] = 14; RIMR.inputs[82] = 200; RIMR.inputs[83] = 224; RIMR.inputs[84] = 227; RIMR.inputs[85] = 205; RIMR.inputs[86] = 225; RIMR.inputs[87] = 224; RIMR.inputs[88] = 224; RIMR.inputs[89] = 224; RIMR.inputs[90] = 71; RIMR.inputs[91] = 70; RIMR.inputs[92] = 225; RIMR.inputs[93] = 205; RIMR.inputs[94] = 69; RIMR.inputs[95] = 224; RIMR.inputs[96] = 61; RIMR.inputs[97] = 225; RIMR.inputs[98] = 227; RIMR.inputs[99] = 192; RIMR.inputs[100] = 246; RIMR.inputs[101] = 205; RIMR.inputs[102] = 188; RIMR.inputs[103] = 196; RIMR.inputs[104] = 65; RIMR.inputs[105] = 2; RIMR.inputs[106] = 2; RIMR.inputs[107] = 2; RIMR.inputs[108] = 2; RIMR.inputs[109] = 196; RIMR.inputs[110] = 196; RIMR.inputs[111] = 13; RIMR.inputs[112] = 2; RIMR.inputs[113] = 196; RIMR.inputs[114] = 196; RIMR.inputs[115] = 2; RIMR.inputs[116] = 211; RIMR.inputs[117] = 234; RIMR.inputs[118] = 205;
    RIMR.weightsLen = 119;
    RIMR.weights[0] = 1; RIMR.weights[1] = 1; RIMR.weights[2] = 1; RIMR.weights[3] = 1; RIMR.weights[4] = 1; RIMR.weights[5] = 1; RIMR.weights[6] = 1; RIMR.weights[7] = 1; RIMR.weights[8] = 1; RIMR.weights[9] = 1; RIMR.weights[10] = 1; RIMR.weights[11] = 1; RIMR.weights[12] = 1; RIMR.weights[13] = 1; RIMR.weights[14] = 1; RIMR.weights[15] = 1; RIMR.weights[16] = 1; RIMR.weights[17] = 1; RIMR.weights[18] = 1; RIMR.weights[19] = 1; RIMR.weights[20] = 1; RIMR.weights[21] = 1; RIMR.weights[22] = 1; RIMR.weights[23] = 1; RIMR.weights[24] = 1; RIMR.weights[25] = 1; RIMR.weights[26] = 1; RIMR.weights[27] = 1; RIMR.weights[28] = 1; RIMR.weights[29] = 1; RIMR.weights[30] = 1; RIMR.weights[31] = 1; RIMR.weights[32] = 1; RIMR.weights[33] = 1; RIMR.weights[34] = 1; RIMR.weights[35] = 1; RIMR.weights[36] = 1; RIMR.weights[37] = 1; RIMR.weights[38] = 1; RIMR.weights[39] = 1; RIMR.weights[40] = 1; RIMR.weights[41] = 1; RIMR.weights[42] = 1; RIMR.weights[43] = 1; RIMR.weights[44] = 1; RIMR.weights[45] = 1; RIMR.weights[46] = 1; RIMR.weights[47] = 1; RIMR.weights[48] = 1; RIMR.weights[49] = 1; RIMR.weights[50] = 1; RIMR.weights[51] = 1; RIMR.weights[52] = 1; RIMR.weights[53] = 1; RIMR.weights[54] = 1; RIMR.weights[55] = 1; RIMR.weights[56] = 1; RIMR.weights[57] = 1; RIMR.weights[58] = 1; RIMR.weights[59] = 1; RIMR.weights[60] = 1; RIMR.weights[61] = 1; RIMR.weights[62] = 1; RIMR.weights[63] = 1; RIMR.weights[64] = 1; RIMR.weights[65] = 1; RIMR.weights[66] = 1; RIMR.weights[67] = 1; RIMR.weights[68] = 1; RIMR.weights[69] = 1; RIMR.weights[70] = 1; RIMR.weights[71] = 1; RIMR.weights[72] = 1; RIMR.weights[73] = 1; RIMR.weights[74] = 1; RIMR.weights[75] = 1; RIMR.weights[76] = 1; RIMR.weights[77] = 1; RIMR.weights[78] = 1; RIMR.weights[79] = 1; RIMR.weights[80] = 1; RIMR.weights[81] = 1; RIMR.weights[82] = 1; RIMR.weights[83] = 1; RIMR.weights[84] = 1; RIMR.weights[85] = 1; RIMR.weights[86] = 1; RIMR.weights[87] = 1; RIMR.weights[88] = 1; RIMR.weights[89] = 1; RIMR.weights[90] = 1; RIMR.weights[91] = 1; RIMR.weights[92] = 1; RIMR.weights[93] = 1; RIMR.weights[94] = 1; RIMR.weights[95] = 1; RIMR.weights[96] = 1; RIMR.weights[97] = 1; RIMR.weights[98] = 1; RIMR.weights[99] = 1; RIMR.weights[100] = 1; RIMR.weights[101] = 1; RIMR.weights[102] = 1; RIMR.weights[103] = 1; RIMR.weights[104] = 1; RIMR.weights[105] = 1; RIMR.weights[106] = 1; RIMR.weights[107] = 1; RIMR.weights[108] = 1; RIMR.weights[109] = 1; RIMR.weights[110] = 1; RIMR.weights[111] = 1; RIMR.weights[112] = 1; RIMR.weights[113] = 1; RIMR.weights[114] = 1; RIMR.weights[115] = 1; RIMR.weights[116] = 1; RIMR.weights[117] = 1; RIMR.weights[118] = 1;
    if (id == 201) {
        return RIMR;
    }


    neuron RIPL;
    RIPL.cellID = 202;
    RIPL.threshold = 1;
    RIPL.inputsLen = 85;
    RIPL.inputs[0] = 132; RIPL.inputs[1] = 184; RIPL.inputs[2] = 136; RIPL.inputs[3] = 136; RIPL.inputs[4] = 136; RIPL.inputs[5] = 44; RIPL.inputs[6] = 184; RIPL.inputs[7] = 44; RIPL.inputs[8] = 251; RIPL.inputs[9] = 251; RIPL.inputs[10] = 251; RIPL.inputs[11] = 251; RIPL.inputs[12] = 199; RIPL.inputs[13] = 136; RIPL.inputs[14] = 136; RIPL.inputs[15] = 132; RIPL.inputs[16] = 85; RIPL.inputs[17] = 85; RIPL.inputs[18] = 249; RIPL.inputs[19] = 249; RIPL.inputs[20] = 249; RIPL.inputs[21] = 132; RIPL.inputs[22] = 44; RIPL.inputs[23] = 7; RIPL.inputs[24] = 7; RIPL.inputs[25] = 7; RIPL.inputs[26] = 1; RIPL.inputs[27] = 136; RIPL.inputs[28] = 227; RIPL.inputs[29] = 227; RIPL.inputs[30] = 227; RIPL.inputs[31] = 87; RIPL.inputs[32] = 132; RIPL.inputs[33] = 130; RIPL.inputs[34] = 130; RIPL.inputs[35] = 130; RIPL.inputs[36] = 136; RIPL.inputs[37] = 136; RIPL.inputs[38] = 136; RIPL.inputs[39] = 136; RIPL.inputs[40] = 136; RIPL.inputs[41] = 251; RIPL.inputs[42] = 136; RIPL.inputs[43] = 132; RIPL.inputs[44] = 132; RIPL.inputs[45] = 133; RIPL.inputs[46] = 130; RIPL.inputs[47] = 136; RIPL.inputs[48] = 132; RIPL.inputs[49] = 132; RIPL.inputs[50] = 132; RIPL.inputs[51] = 85; RIPL.inputs[52] = 199; RIPL.inputs[53] = 199; RIPL.inputs[54] = 126; RIPL.inputs[55] = 132; RIPL.inputs[56] = 132; RIPL.inputs[57] = 132; RIPL.inputs[58] = 132; RIPL.inputs[59] = 132; RIPL.inputs[60] = 132; RIPL.inputs[61] = 199; RIPL.inputs[62] = 132; RIPL.inputs[63] = 87; RIPL.inputs[64] = 130; RIPL.inputs[65] = 136; RIPL.inputs[66] = 1; RIPL.inputs[67] = 132; RIPL.inputs[68] = 249; RIPL.inputs[69] = 126; RIPL.inputs[70] = 184; RIPL.inputs[71] = 136; RIPL.inputs[72] = 199; RIPL.inputs[73] = 136; RIPL.inputs[74] = 136; RIPL.inputs[75] = 136; RIPL.inputs[76] = 126; RIPL.inputs[77] = 249; RIPL.inputs[78] = 202; RIPL.inputs[79] = 202; RIPL.inputs[80] = 199; RIPL.inputs[81] = 203; RIPL.inputs[82] = 251; RIPL.inputs[83] = 202; RIPL.inputs[84] = 214;
    RIPL.weightsLen = 85;
    RIPL.weights[0] = 1; RIPL.weights[1] = 1; RIPL.weights[2] = 1; RIPL.weights[3] = 1; RIPL.weights[4] = 1; RIPL.weights[5] = 1; RIPL.weights[6] = 1; RIPL.weights[7] = 1; RIPL.weights[8] = 1; RIPL.weights[9] = 1; RIPL.weights[10] = 1; RIPL.weights[11] = 1; RIPL.weights[12] = 1; RIPL.weights[13] = 1; RIPL.weights[14] = 1; RIPL.weights[15] = 1; RIPL.weights[16] = 1; RIPL.weights[17] = 1; RIPL.weights[18] = 1; RIPL.weights[19] = 1; RIPL.weights[20] = 1; RIPL.weights[21] = 1; RIPL.weights[22] = 1; RIPL.weights[23] = 1; RIPL.weights[24] = 1; RIPL.weights[25] = 1; RIPL.weights[26] = 1; RIPL.weights[27] = 1; RIPL.weights[28] = 1; RIPL.weights[29] = 1; RIPL.weights[30] = 1; RIPL.weights[31] = 1; RIPL.weights[32] = 1; RIPL.weights[33] = 1; RIPL.weights[34] = 1; RIPL.weights[35] = 1; RIPL.weights[36] = 1; RIPL.weights[37] = 1; RIPL.weights[38] = 1; RIPL.weights[39] = 1; RIPL.weights[40] = 1; RIPL.weights[41] = 1; RIPL.weights[42] = 1; RIPL.weights[43] = 1; RIPL.weights[44] = 1; RIPL.weights[45] = 1; RIPL.weights[46] = 1; RIPL.weights[47] = 1; RIPL.weights[48] = 1; RIPL.weights[49] = 1; RIPL.weights[50] = 1; RIPL.weights[51] = 1; RIPL.weights[52] = 1; RIPL.weights[53] = 1; RIPL.weights[54] = 1; RIPL.weights[55] = 1; RIPL.weights[56] = 1; RIPL.weights[57] = 1; RIPL.weights[58] = 1; RIPL.weights[59] = 1; RIPL.weights[60] = 1; RIPL.weights[61] = 1; RIPL.weights[62] = 1; RIPL.weights[63] = 1; RIPL.weights[64] = 1; RIPL.weights[65] = 1; RIPL.weights[66] = 1; RIPL.weights[67] = 1; RIPL.weights[68] = 1; RIPL.weights[69] = 1; RIPL.weights[70] = 1; RIPL.weights[71] = 1; RIPL.weights[72] = 1; RIPL.weights[73] = 1; RIPL.weights[74] = 1; RIPL.weights[75] = 1; RIPL.weights[76] = 1; RIPL.weights[77] = 1; RIPL.weights[78] = 1; RIPL.weights[79] = 1; RIPL.weights[80] = 1; RIPL.weights[81] = 1; RIPL.weights[82] = 1; RIPL.weights[83] = 1; RIPL.weights[84] = 1;
    if (id == 202) {
        return RIPL;
    }


    neuron RIPR;
    RIPR.cellID = 203;
    RIPR.threshold = 1;
    RIPR.inputsLen = 101;
    RIPR.inputs[0] = 127; RIPR.inputs[1] = 256; RIPR.inputs[2] = 8; RIPR.inputs[3] = 133; RIPR.inputs[4] = 88; RIPR.inputs[5] = 137; RIPR.inputs[6] = 137; RIPR.inputs[7] = 137; RIPR.inputs[8] = 137; RIPR.inputs[9] = 131; RIPR.inputs[10] = 137; RIPR.inputs[11] = 137; RIPR.inputs[12] = 137; RIPR.inputs[13] = 137; RIPR.inputs[14] = 137; RIPR.inputs[15] = 256; RIPR.inputs[16] = 256; RIPR.inputs[17] = 256; RIPR.inputs[18] = 256; RIPR.inputs[19] = 256; RIPR.inputs[20] = 256; RIPR.inputs[21] = 196; RIPR.inputs[22] = 131; RIPR.inputs[23] = 131; RIPR.inputs[24] = 252; RIPR.inputs[25] = 252; RIPR.inputs[26] = 131; RIPR.inputs[27] = 131; RIPR.inputs[28] = 252; RIPR.inputs[29] = 199; RIPR.inputs[30] = 137; RIPR.inputs[31] = 131; RIPR.inputs[32] = 131; RIPR.inputs[33] = 252; RIPR.inputs[34] = 2; RIPR.inputs[35] = 250; RIPR.inputs[36] = 250; RIPR.inputs[37] = 231; RIPR.inputs[38] = 2; RIPR.inputs[39] = 127; RIPR.inputs[40] = 127; RIPR.inputs[41] = 131; RIPR.inputs[42] = 199; RIPR.inputs[43] = 133; RIPR.inputs[44] = 133; RIPR.inputs[45] = 184; RIPR.inputs[46] = 137; RIPR.inputs[47] = 184; RIPR.inputs[48] = 137; RIPR.inputs[49] = 131; RIPR.inputs[50] = 137; RIPR.inputs[51] = 137; RIPR.inputs[52] = 199; RIPR.inputs[53] = 157; RIPR.inputs[54] = 157; RIPR.inputs[55] = 157; RIPR.inputs[56] = 199; RIPR.inputs[57] = 2; RIPR.inputs[58] = 2; RIPR.inputs[59] = 127; RIPR.inputs[60] = 133; RIPR.inputs[61] = 184; RIPR.inputs[62] = 133; RIPR.inputs[63] = 133; RIPR.inputs[64] = 127; RIPR.inputs[65] = 127; RIPR.inputs[66] = 133; RIPR.inputs[67] = 133; RIPR.inputs[68] = 127; RIPR.inputs[69] = 133; RIPR.inputs[70] = 127; RIPR.inputs[71] = 250; RIPR.inputs[72] = 250; RIPR.inputs[73] = 250; RIPR.inputs[74] = 133; RIPR.inputs[75] = 133; RIPR.inputs[76] = 133; RIPR.inputs[77] = 127; RIPR.inputs[78] = 133; RIPR.inputs[79] = 133; RIPR.inputs[80] = 184; RIPR.inputs[81] = 250; RIPR.inputs[82] = 133; RIPR.inputs[83] = 133; RIPR.inputs[84] = 133; RIPR.inputs[85] = 199; RIPR.inputs[86] = 215; RIPR.inputs[87] = 133; RIPR.inputs[88] = 133; RIPR.inputs[89] = 199; RIPR.inputs[90] = 184; RIPR.inputs[91] = 8; RIPR.inputs[92] = 79; RIPR.inputs[93] = 184; RIPR.inputs[94] = 127; RIPR.inputs[95] = 127; RIPR.inputs[96] = 250; RIPR.inputs[97] = 250; RIPR.inputs[98] = 250; RIPR.inputs[99] = 214; RIPR.inputs[100] = 214;
    RIPR.weightsLen = 101;
    RIPR.weights[0] = 1; RIPR.weights[1] = 1; RIPR.weights[2] = 1; RIPR.weights[3] = 1; RIPR.weights[4] = 1; RIPR.weights[5] = 1; RIPR.weights[6] = 1; RIPR.weights[7] = 1; RIPR.weights[8] = 1; RIPR.weights[9] = 1; RIPR.weights[10] = 1; RIPR.weights[11] = 1; RIPR.weights[12] = 1; RIPR.weights[13] = 1; RIPR.weights[14] = 1; RIPR.weights[15] = 1; RIPR.weights[16] = 1; RIPR.weights[17] = 1; RIPR.weights[18] = 1; RIPR.weights[19] = 1; RIPR.weights[20] = 1; RIPR.weights[21] = 1; RIPR.weights[22] = 1; RIPR.weights[23] = 1; RIPR.weights[24] = 1; RIPR.weights[25] = 1; RIPR.weights[26] = 1; RIPR.weights[27] = 1; RIPR.weights[28] = 1; RIPR.weights[29] = 1; RIPR.weights[30] = 1; RIPR.weights[31] = 1; RIPR.weights[32] = 1; RIPR.weights[33] = 1; RIPR.weights[34] = 1; RIPR.weights[35] = 1; RIPR.weights[36] = 1; RIPR.weights[37] = 1; RIPR.weights[38] = 1; RIPR.weights[39] = 1; RIPR.weights[40] = 1; RIPR.weights[41] = 1; RIPR.weights[42] = 1; RIPR.weights[43] = 1; RIPR.weights[44] = 1; RIPR.weights[45] = 1; RIPR.weights[46] = 1; RIPR.weights[47] = 1; RIPR.weights[48] = 1; RIPR.weights[49] = 1; RIPR.weights[50] = 1; RIPR.weights[51] = 1; RIPR.weights[52] = 1; RIPR.weights[53] = 1; RIPR.weights[54] = 1; RIPR.weights[55] = 1; RIPR.weights[56] = 1; RIPR.weights[57] = 1; RIPR.weights[58] = 1; RIPR.weights[59] = 1; RIPR.weights[60] = 1; RIPR.weights[61] = 1; RIPR.weights[62] = 1; RIPR.weights[63] = 1; RIPR.weights[64] = 1; RIPR.weights[65] = 1; RIPR.weights[66] = 1; RIPR.weights[67] = 1; RIPR.weights[68] = 1; RIPR.weights[69] = 1; RIPR.weights[70] = 1; RIPR.weights[71] = 1; RIPR.weights[72] = 1; RIPR.weights[73] = 1; RIPR.weights[74] = 1; RIPR.weights[75] = 1; RIPR.weights[76] = 1; RIPR.weights[77] = 1; RIPR.weights[78] = 1; RIPR.weights[79] = 1; RIPR.weights[80] = 1; RIPR.weights[81] = 1; RIPR.weights[82] = 1; RIPR.weights[83] = 1; RIPR.weights[84] = 1; RIPR.weights[85] = 1; RIPR.weights[86] = 1; RIPR.weights[87] = 1; RIPR.weights[88] = 1; RIPR.weights[89] = 1; RIPR.weights[90] = 1; RIPR.weights[91] = 1; RIPR.weights[92] = 1; RIPR.weights[93] = 1; RIPR.weights[94] = 1; RIPR.weights[95] = 1; RIPR.weights[96] = 1; RIPR.weights[97] = 1; RIPR.weights[98] = 1; RIPR.weights[99] = 1; RIPR.weights[100] = 1;
    if (id == 203) {
        return RIPR;
    }


    neuron RIR;
    RIR.cellID = 204;
    RIR.threshold = 1;
    RIR.inputsLen = 52;
    RIR.inputs[0] = 197; RIR.inputs[1] = 5; RIR.inputs[2] = 11; RIR.inputs[3] = 5; RIR.inputs[4] = 65; RIR.inputs[5] = 6; RIR.inputs[6] = 6; RIR.inputs[7] = 6; RIR.inputs[8] = 76; RIR.inputs[9] = 66; RIR.inputs[10] = 256; RIR.inputs[11] = 256; RIR.inputs[12] = 256; RIR.inputs[13] = 255; RIR.inputs[14] = 188; RIR.inputs[15] = 74; RIR.inputs[16] = 221; RIR.inputs[17] = 19; RIR.inputs[18] = 197; RIR.inputs[19] = 197; RIR.inputs[20] = 197; RIR.inputs[21] = 66; RIR.inputs[22] = 111; RIR.inputs[23] = 188; RIR.inputs[24] = 66; RIR.inputs[25] = 44; RIR.inputs[26] = 66; RIR.inputs[27] = 5; RIR.inputs[28] = 198; RIR.inputs[29] = 111; RIR.inputs[30] = 198; RIR.inputs[31] = 28; RIR.inputs[32] = 111; RIR.inputs[33] = 76; RIR.inputs[34] = 76; RIR.inputs[35] = 188; RIR.inputs[36] = 76; RIR.inputs[37] = 74; RIR.inputs[38] = 44; RIR.inputs[39] = 44; RIR.inputs[40] = 65; RIR.inputs[41] = 40; RIR.inputs[42] = 197; RIR.inputs[43] = 66; RIR.inputs[44] = 6; RIR.inputs[45] = 7; RIR.inputs[46] = 6; RIR.inputs[47] = 116; RIR.inputs[48] = 76; RIR.inputs[49] = 6; RIR.inputs[50] = 76; RIR.inputs[51] = 180;
    RIR.weightsLen = 52;
    RIR.weights[0] = 1; RIR.weights[1] = 1; RIR.weights[2] = 1; RIR.weights[3] = 1; RIR.weights[4] = 1; RIR.weights[5] = 1; RIR.weights[6] = 1; RIR.weights[7] = 1; RIR.weights[8] = 1; RIR.weights[9] = 1; RIR.weights[10] = 1; RIR.weights[11] = 1; RIR.weights[12] = 1; RIR.weights[13] = 1; RIR.weights[14] = 1; RIR.weights[15] = 1; RIR.weights[16] = 1; RIR.weights[17] = 1; RIR.weights[18] = 1; RIR.weights[19] = 1; RIR.weights[20] = 1; RIR.weights[21] = 1; RIR.weights[22] = 1; RIR.weights[23] = 1; RIR.weights[24] = 1; RIR.weights[25] = 1; RIR.weights[26] = 1; RIR.weights[27] = 1; RIR.weights[28] = 1; RIR.weights[29] = 1; RIR.weights[30] = 1; RIR.weights[31] = 1; RIR.weights[32] = 1; RIR.weights[33] = 1; RIR.weights[34] = 1; RIR.weights[35] = 1; RIR.weights[36] = 1; RIR.weights[37] = 1; RIR.weights[38] = 1; RIR.weights[39] = 1; RIR.weights[40] = 1; RIR.weights[41] = 1; RIR.weights[42] = 1; RIR.weights[43] = 1; RIR.weights[44] = 1; RIR.weights[45] = 1; RIR.weights[46] = 1; RIR.weights[47] = 1; RIR.weights[48] = 1; RIR.weights[49] = 1; RIR.weights[50] = 1; RIR.weights[51] = 1;
    if (id == 204) {
        return RIR;
    }


    neuron RIS;
    RIS.cellID = 205;
    RIS.threshold = 1;
    RIS.inputsLen = 34;
    RIS.inputs[0] = 231; RIS.inputs[1] = 231; RIS.inputs[2] = 231; RIS.inputs[3] = 217; RIS.inputs[4] = 246; RIS.inputs[5] = 201; RIS.inputs[6] = 246; RIS.inputs[7] = 218; RIS.inputs[8] = 259; RIS.inputs[9] = 190; RIS.inputs[10] = 190; RIS.inputs[11] = 190; RIS.inputs[12] = 205; RIS.inputs[13] = 211; RIS.inputs[14] = 210; RIS.inputs[15] = 245; RIS.inputs[16] = 245; RIS.inputs[17] = 191; RIS.inputs[18] = 246; RIS.inputs[19] = 201; RIS.inputs[20] = 85; RIS.inputs[21] = 71; RIS.inputs[22] = 85; RIS.inputs[23] = 153; RIS.inputs[24] = 114; RIS.inputs[25] = 173; RIS.inputs[26] = 173; RIS.inputs[27] = 67; RIS.inputs[28] = 247; RIS.inputs[29] = 211; RIS.inputs[30] = 246; RIS.inputs[31] = 217; RIS.inputs[32] = 246; RIS.inputs[33] = 245;
    RIS.weightsLen = 34;
    RIS.weights[0] = 1; RIS.weights[1] = 1; RIS.weights[2] = 1; RIS.weights[3] = 1; RIS.weights[4] = 1; RIS.weights[5] = 1; RIS.weights[6] = 1; RIS.weights[7] = 1; RIS.weights[8] = 1; RIS.weights[9] = 1; RIS.weights[10] = 1; RIS.weights[11] = 1; RIS.weights[12] = 1; RIS.weights[13] = 1; RIS.weights[14] = 1; RIS.weights[15] = 1; RIS.weights[16] = 1; RIS.weights[17] = 1; RIS.weights[18] = 1; RIS.weights[19] = 1; RIS.weights[20] = 1; RIS.weights[21] = 1; RIS.weights[22] = 1; RIS.weights[23] = 1; RIS.weights[24] = 1; RIS.weights[25] = 1; RIS.weights[26] = 1; RIS.weights[27] = 1; RIS.weights[28] = 1; RIS.weights[29] = 1; RIS.weights[30] = 1; RIS.weights[31] = 1; RIS.weights[32] = 1; RIS.weights[33] = 1;
    if (id == 205) {
        return RIS;
    }


    neuron RIVL;
    RIVL.cellID = 206;
    RIVL.threshold = 1;
    RIVL.inputsLen = 35;
    RIVL.inputs[0] = 189; RIVL.inputs[1] = 88; RIVL.inputs[2] = 247; RIVL.inputs[3] = 188; RIVL.inputs[4] = 188; RIVL.inputs[5] = 188; RIVL.inputs[6] = 210; RIVL.inputs[7] = 3; RIVL.inputs[8] = 247; RIVL.inputs[9] = 247; RIVL.inputs[10] = 246; RIVL.inputs[11] = 247; RIVL.inputs[12] = 5; RIVL.inputs[13] = 247; RIVL.inputs[14] = 193; RIVL.inputs[15] = 69; RIVL.inputs[16] = 207; RIVL.inputs[17] = 69; RIVL.inputs[18] = 188; RIVL.inputs[19] = 69; RIVL.inputs[20] = 78; RIVL.inputs[21] = 242; RIVL.inputs[22] = 247; RIVL.inputs[23] = 232; RIVL.inputs[24] = 240; RIVL.inputs[25] = 207; RIVL.inputs[26] = 207; RIVL.inputs[27] = 207; RIVL.inputs[28] = 207; RIVL.inputs[29] = 207; RIVL.inputs[30] = 225; RIVL.inputs[31] = 207; RIVL.inputs[32] = 207; RIVL.inputs[33] = 232; RIVL.inputs[34] = 232;
    RIVL.weightsLen = 35;
    RIVL.weights[0] = 1; RIVL.weights[1] = 1; RIVL.weights[2] = 1; RIVL.weights[3] = 1; RIVL.weights[4] = 1; RIVL.weights[5] = 1; RIVL.weights[6] = 1; RIVL.weights[7] = 1; RIVL.weights[8] = 1; RIVL.weights[9] = 1; RIVL.weights[10] = 1; RIVL.weights[11] = 1; RIVL.weights[12] = 1; RIVL.weights[13] = 1; RIVL.weights[14] = 1; RIVL.weights[15] = 1; RIVL.weights[16] = 1; RIVL.weights[17] = 1; RIVL.weights[18] = 1; RIVL.weights[19] = 1; RIVL.weights[20] = 1; RIVL.weights[21] = 1; RIVL.weights[22] = 1; RIVL.weights[23] = 1; RIVL.weights[24] = 1; RIVL.weights[25] = 1; RIVL.weights[26] = 1; RIVL.weights[27] = 1; RIVL.weights[28] = 1; RIVL.weights[29] = 1; RIVL.weights[30] = 1; RIVL.weights[31] = 1; RIVL.weights[32] = 1; RIVL.weights[33] = 1; RIVL.weights[34] = 1;
    if (id == 206) {
        return RIVL;
    }


    neuron RIVR;
    RIVR.cellID = 207;
    RIVR.threshold = 1;
    RIVR.inputsLen = 26;
    RIVR.inputs[0] = 188; RIVR.inputs[1] = 188; RIVR.inputs[2] = 188; RIVR.inputs[3] = 188; RIVR.inputs[4] = 189; RIVR.inputs[5] = 189; RIVR.inputs[6] = 113; RIVR.inputs[7] = 248; RIVR.inputs[8] = 224; RIVR.inputs[9] = 192; RIVR.inputs[10] = 20; RIVR.inputs[11] = 79; RIVR.inputs[12] = 188; RIVR.inputs[13] = 2; RIVR.inputs[14] = 192; RIVR.inputs[15] = 3; RIVR.inputs[16] = 245; RIVR.inputs[17] = 192; RIVR.inputs[18] = 232; RIVR.inputs[19] = 248; RIVR.inputs[20] = 224; RIVR.inputs[21] = 232; RIVR.inputs[22] = 248; RIVR.inputs[23] = 248; RIVR.inputs[24] = 248; RIVR.inputs[25] = 232;
    RIVR.weightsLen = 26;
    RIVR.weights[0] = 1; RIVR.weights[1] = 1; RIVR.weights[2] = 1; RIVR.weights[3] = 1; RIVR.weights[4] = 1; RIVR.weights[5] = 1; RIVR.weights[6] = 1; RIVR.weights[7] = 1; RIVR.weights[8] = 1; RIVR.weights[9] = 1; RIVR.weights[10] = 1; RIVR.weights[11] = 1; RIVR.weights[12] = 1; RIVR.weights[13] = 1; RIVR.weights[14] = 1; RIVR.weights[15] = 1; RIVR.weights[16] = 1; RIVR.weights[17] = 1; RIVR.weights[18] = 1; RIVR.weights[19] = 1; RIVR.weights[20] = 1; RIVR.weights[21] = 1; RIVR.weights[22] = 1; RIVR.weights[23] = 1; RIVR.weights[24] = 1; RIVR.weights[25] = 1;
    if (id == 207) {
        return RIVR;
    }


    neuron RMDDL;
    RMDDL.cellID = 208;
    RMDDL.threshold = 1;
    RMDDL.inputsLen = 150;
    RMDDL.inputs[0] = 188; RMDDL.inputs[1] = 248; RMDDL.inputs[2] = 188; RMDDL.inputs[3] = 205; RMDDL.inputs[4] = 239; RMDDL.inputs[5] = 248; RMDDL.inputs[6] = 189; RMDDL.inputs[7] = 189; RMDDL.inputs[8] = 188; RMDDL.inputs[9] = 188; RMDDL.inputs[10] = 189; RMDDL.inputs[11] = 189; RMDDL.inputs[12] = 128; RMDDL.inputs[13] = 189; RMDDL.inputs[14] = 188; RMDDL.inputs[15] = 188; RMDDL.inputs[16] = 213; RMDDL.inputs[17] = 188; RMDDL.inputs[18] = 213; RMDDL.inputs[19] = 188; RMDDL.inputs[20] = 188; RMDDL.inputs[21] = 188; RMDDL.inputs[22] = 213; RMDDL.inputs[23] = 213; RMDDL.inputs[24] = 188; RMDDL.inputs[25] = 188; RMDDL.inputs[26] = 188; RMDDL.inputs[27] = 213; RMDDL.inputs[28] = 188; RMDDL.inputs[29] = 213; RMDDL.inputs[30] = 213; RMDDL.inputs[31] = 189; RMDDL.inputs[32] = 188; RMDDL.inputs[33] = 213; RMDDL.inputs[34] = 128; RMDDL.inputs[35] = 213; RMDDL.inputs[36] = 128; RMDDL.inputs[37] = 189; RMDDL.inputs[38] = 189; RMDDL.inputs[39] = 189; RMDDL.inputs[40] = 189; RMDDL.inputs[41] = 189; RMDDL.inputs[42] = 189; RMDDL.inputs[43] = 189; RMDDL.inputs[44] = 189; RMDDL.inputs[45] = 189; RMDDL.inputs[46] = 189; RMDDL.inputs[47] = 189; RMDDL.inputs[48] = 189; RMDDL.inputs[49] = 189; RMDDL.inputs[50] = 87; RMDDL.inputs[51] = 188; RMDDL.inputs[52] = 259; RMDDL.inputs[53] = 152; RMDDL.inputs[54] = 256; RMDDL.inputs[55] = 251; RMDDL.inputs[56] = 251; RMDDL.inputs[57] = 207; RMDDL.inputs[58] = 188; RMDDL.inputs[59] = 152; RMDDL.inputs[60] = 25; RMDDL.inputs[61] = 221; RMDDL.inputs[62] = 155; RMDDL.inputs[63] = 152; RMDDL.inputs[64] = 87; RMDDL.inputs[65] = 87; RMDDL.inputs[66] = 213; RMDDL.inputs[67] = 130; RMDDL.inputs[68] = 213; RMDDL.inputs[69] = 188; RMDDL.inputs[70] = 130; RMDDL.inputs[71] = 130; RMDDL.inputs[72] = 213; RMDDL.inputs[73] = 213; RMDDL.inputs[74] = 130; RMDDL.inputs[75] = 259; RMDDL.inputs[76] = 213; RMDDL.inputs[77] = 188; RMDDL.inputs[78] = 213; RMDDL.inputs[79] = 213; RMDDL.inputs[80] = 189; RMDDL.inputs[81] = 189; RMDDL.inputs[82] = 188; RMDDL.inputs[83] = 258; RMDDL.inputs[84] = 258; RMDDL.inputs[85] = 258; RMDDL.inputs[86] = 209; RMDDL.inputs[87] = 259; RMDDL.inputs[88] = 213; RMDDL.inputs[89] = 127; RMDDL.inputs[90] = 127; RMDDL.inputs[91] = 127; RMDDL.inputs[92] = 188; RMDDL.inputs[93] = 211; RMDDL.inputs[94] = 128; RMDDL.inputs[95] = 130; RMDDL.inputs[96] = 259; RMDDL.inputs[97] = 130; RMDDL.inputs[98] = 152; RMDDL.inputs[99] = 130; RMDDL.inputs[100] = 130; RMDDL.inputs[101] = 259; RMDDL.inputs[102] = 128; RMDDL.inputs[103] = 152; RMDDL.inputs[104] = 152; RMDDL.inputs[105] = 129; RMDDL.inputs[106] = 189; RMDDL.inputs[107] = 129; RMDDL.inputs[108] = 155; RMDDL.inputs[109] = 211; RMDDL.inputs[110] = 152; RMDDL.inputs[111] = 152; RMDDL.inputs[112] = 152; RMDDL.inputs[113] = 128; RMDDL.inputs[114] = 130; RMDDL.inputs[115] = 128; RMDDL.inputs[116] = 129; RMDDL.inputs[117] = 127; RMDDL.inputs[118] = 129; RMDDL.inputs[119] = 130; RMDDL.inputs[120] = 213; RMDDL.inputs[121] = 130; RMDDL.inputs[122] = 130; RMDDL.inputs[123] = 130; RMDDL.inputs[124] = 130; RMDDL.inputs[125] = 87; RMDDL.inputs[126] = 152; RMDDL.inputs[127] = 87; RMDDL.inputs[128] = 188; RMDDL.inputs[129] = 155; RMDDL.inputs[130] = 155; RMDDL.inputs[131] = 155; RMDDL.inputs[132] = 189; RMDDL.inputs[133] = 188; RMDDL.inputs[134] = 188; RMDDL.inputs[135] = 211; RMDDL.inputs[136] = 213; RMDDL.inputs[137] = 129; RMDDL.inputs[138] = 63; RMDDL.inputs[139] = 222; RMDDL.inputs[140] = 189; RMDDL.inputs[141] = 259; RMDDL.inputs[142] = 217; RMDDL.inputs[143] = 87; RMDDL.inputs[144] = 154; RMDDL.inputs[145] = 245; RMDDL.inputs[146] = 238; RMDDL.inputs[147] = 245; RMDDL.inputs[148] = 210; RMDDL.inputs[149] = 212;
    RMDDL.weightsLen = 150;
    RMDDL.weights[0] = 1; RMDDL.weights[1] = 1; RMDDL.weights[2] = 1; RMDDL.weights[3] = 1; RMDDL.weights[4] = 1; RMDDL.weights[5] = 1; RMDDL.weights[6] = 1; RMDDL.weights[7] = 1; RMDDL.weights[8] = 1; RMDDL.weights[9] = 1; RMDDL.weights[10] = 1; RMDDL.weights[11] = 1; RMDDL.weights[12] = 1; RMDDL.weights[13] = 1; RMDDL.weights[14] = 1; RMDDL.weights[15] = 1; RMDDL.weights[16] = 1; RMDDL.weights[17] = 1; RMDDL.weights[18] = 1; RMDDL.weights[19] = 1; RMDDL.weights[20] = 1; RMDDL.weights[21] = 1; RMDDL.weights[22] = 1; RMDDL.weights[23] = 1; RMDDL.weights[24] = 1; RMDDL.weights[25] = 1; RMDDL.weights[26] = 1; RMDDL.weights[27] = 1; RMDDL.weights[28] = 1; RMDDL.weights[29] = 1; RMDDL.weights[30] = 1; RMDDL.weights[31] = 1; RMDDL.weights[32] = 1; RMDDL.weights[33] = 1; RMDDL.weights[34] = 1; RMDDL.weights[35] = 1; RMDDL.weights[36] = 1; RMDDL.weights[37] = 1; RMDDL.weights[38] = 1; RMDDL.weights[39] = 1; RMDDL.weights[40] = 1; RMDDL.weights[41] = 1; RMDDL.weights[42] = 1; RMDDL.weights[43] = 1; RMDDL.weights[44] = 1; RMDDL.weights[45] = 1; RMDDL.weights[46] = 1; RMDDL.weights[47] = 1; RMDDL.weights[48] = 1; RMDDL.weights[49] = 1; RMDDL.weights[50] = 1; RMDDL.weights[51] = 1; RMDDL.weights[52] = 1; RMDDL.weights[53] = 1; RMDDL.weights[54] = 1; RMDDL.weights[55] = 1; RMDDL.weights[56] = 1; RMDDL.weights[57] = 1; RMDDL.weights[58] = 1; RMDDL.weights[59] = 1; RMDDL.weights[60] = 1; RMDDL.weights[61] = 1; RMDDL.weights[62] = 1; RMDDL.weights[63] = 1; RMDDL.weights[64] = 1; RMDDL.weights[65] = 1; RMDDL.weights[66] = 1; RMDDL.weights[67] = 1; RMDDL.weights[68] = 1; RMDDL.weights[69] = 1; RMDDL.weights[70] = 1; RMDDL.weights[71] = 1; RMDDL.weights[72] = 1; RMDDL.weights[73] = 1; RMDDL.weights[74] = 1; RMDDL.weights[75] = 1; RMDDL.weights[76] = 1; RMDDL.weights[77] = 1; RMDDL.weights[78] = 1; RMDDL.weights[79] = 1; RMDDL.weights[80] = 1; RMDDL.weights[81] = 1; RMDDL.weights[82] = 1; RMDDL.weights[83] = 1; RMDDL.weights[84] = 1; RMDDL.weights[85] = 1; RMDDL.weights[86] = 1; RMDDL.weights[87] = 1; RMDDL.weights[88] = 1; RMDDL.weights[89] = 1; RMDDL.weights[90] = 1; RMDDL.weights[91] = 1; RMDDL.weights[92] = 1; RMDDL.weights[93] = 1; RMDDL.weights[94] = 1; RMDDL.weights[95] = 1; RMDDL.weights[96] = 1; RMDDL.weights[97] = 1; RMDDL.weights[98] = 1; RMDDL.weights[99] = 1; RMDDL.weights[100] = 1; RMDDL.weights[101] = 1; RMDDL.weights[102] = 1; RMDDL.weights[103] = 1; RMDDL.weights[104] = 1; RMDDL.weights[105] = 1; RMDDL.weights[106] = 1; RMDDL.weights[107] = 1; RMDDL.weights[108] = 1; RMDDL.weights[109] = 1; RMDDL.weights[110] = 1; RMDDL.weights[111] = 1; RMDDL.weights[112] = 1; RMDDL.weights[113] = 1; RMDDL.weights[114] = 1; RMDDL.weights[115] = 1; RMDDL.weights[116] = 1; RMDDL.weights[117] = 1; RMDDL.weights[118] = 1; RMDDL.weights[119] = 1; RMDDL.weights[120] = 1; RMDDL.weights[121] = 1; RMDDL.weights[122] = 1; RMDDL.weights[123] = 1; RMDDL.weights[124] = 1; RMDDL.weights[125] = 1; RMDDL.weights[126] = 1; RMDDL.weights[127] = 1; RMDDL.weights[128] = 1; RMDDL.weights[129] = 1; RMDDL.weights[130] = 1; RMDDL.weights[131] = 1; RMDDL.weights[132] = 1; RMDDL.weights[133] = 1; RMDDL.weights[134] = 1; RMDDL.weights[135] = 1; RMDDL.weights[136] = 1; RMDDL.weights[137] = 1; RMDDL.weights[138] = 1; RMDDL.weights[139] = 1; RMDDL.weights[140] = 1; RMDDL.weights[141] = 1; RMDDL.weights[142] = 1; RMDDL.weights[143] = 1; RMDDL.weights[144] = 1; RMDDL.weights[145] = 1; RMDDL.weights[146] = 1; RMDDL.weights[147] = 1; RMDDL.weights[148] = 1; RMDDL.weights[149] = 1;
    if (id == 208) {
        return RMDDL;
    }


    neuron RMDDR;
    RMDDR.cellID = 209;
    RMDDR.threshold = 1;
    RMDDR.inputsLen = 123;
    RMDDR.inputs[0] = 205; RMDDR.inputs[1] = 247; RMDDR.inputs[2] = 189; RMDDR.inputs[3] = 212; RMDDR.inputs[4] = 189; RMDDR.inputs[5] = 189; RMDDR.inputs[6] = 189; RMDDR.inputs[7] = 247; RMDDR.inputs[8] = 189; RMDDR.inputs[9] = 212; RMDDR.inputs[10] = 189; RMDDR.inputs[11] = 212; RMDDR.inputs[12] = 212; RMDDR.inputs[13] = 189; RMDDR.inputs[14] = 189; RMDDR.inputs[15] = 260; RMDDR.inputs[16] = 212; RMDDR.inputs[17] = 260; RMDDR.inputs[18] = 260; RMDDR.inputs[19] = 212; RMDDR.inputs[20] = 189; RMDDR.inputs[21] = 189; RMDDR.inputs[22] = 189; RMDDR.inputs[23] = 189; RMDDR.inputs[24] = 189; RMDDR.inputs[25] = 212; RMDDR.inputs[26] = 189; RMDDR.inputs[27] = 189; RMDDR.inputs[28] = 212; RMDDR.inputs[29] = 212; RMDDR.inputs[30] = 212; RMDDR.inputs[31] = 188; RMDDR.inputs[32] = 188; RMDDR.inputs[33] = 188; RMDDR.inputs[34] = 188; RMDDR.inputs[35] = 188; RMDDR.inputs[36] = 188; RMDDR.inputs[37] = 210; RMDDR.inputs[38] = 210; RMDDR.inputs[39] = 210; RMDDR.inputs[40] = 210; RMDDR.inputs[41] = 153; RMDDR.inputs[42] = 153; RMDDR.inputs[43] = 88; RMDDR.inputs[44] = 153; RMDDR.inputs[45] = 153; RMDDR.inputs[46] = 153; RMDDR.inputs[47] = 153; RMDDR.inputs[48] = 260; RMDDR.inputs[49] = 260; RMDDR.inputs[50] = 260; RMDDR.inputs[51] = 260; RMDDR.inputs[52] = 260; RMDDR.inputs[53] = 131; RMDDR.inputs[54] = 131; RMDDR.inputs[55] = 252; RMDDR.inputs[56] = 26; RMDDR.inputs[57] = 220; RMDDR.inputs[58] = 253; RMDDR.inputs[59] = 24; RMDDR.inputs[60] = 154; RMDDR.inputs[61] = 154; RMDDR.inputs[62] = 154; RMDDR.inputs[63] = 154; RMDDR.inputs[64] = 189; RMDDR.inputs[65] = 260; RMDDR.inputs[66] = 257; RMDDR.inputs[67] = 257; RMDDR.inputs[68] = 131; RMDDR.inputs[69] = 153; RMDDR.inputs[70] = 131; RMDDR.inputs[71] = 260; RMDDR.inputs[72] = 131; RMDDR.inputs[73] = 131; RMDDR.inputs[74] = 153; RMDDR.inputs[75] = 131; RMDDR.inputs[76] = 88; RMDDR.inputs[77] = 88; RMDDR.inputs[78] = 131; RMDDR.inputs[79] = 188; RMDDR.inputs[80] = 129; RMDDR.inputs[81] = 153; RMDDR.inputs[82] = 260; RMDDR.inputs[83] = 260; RMDDR.inputs[84] = 154; RMDDR.inputs[85] = 131; RMDDR.inputs[86] = 129; RMDDR.inputs[87] = 153; RMDDR.inputs[88] = 154; RMDDR.inputs[89] = 188; RMDDR.inputs[90] = 188; RMDDR.inputs[91] = 188; RMDDR.inputs[92] = 257; RMDDR.inputs[93] = 257; RMDDR.inputs[94] = 217; RMDDR.inputs[95] = 153; RMDDR.inputs[96] = 126; RMDDR.inputs[97] = 189; RMDDR.inputs[98] = 153; RMDDR.inputs[99] = 153; RMDDR.inputs[100] = 260; RMDDR.inputs[101] = 131; RMDDR.inputs[102] = 131; RMDDR.inputs[103] = 131; RMDDR.inputs[104] = 188; RMDDR.inputs[105] = 131; RMDDR.inputs[106] = 131; RMDDR.inputs[107] = 131; RMDDR.inputs[108] = 131; RMDDR.inputs[109] = 131; RMDDR.inputs[110] = 153; RMDDR.inputs[111] = 153; RMDDR.inputs[112] = 188; RMDDR.inputs[113] = 188; RMDDR.inputs[114] = 129; RMDDR.inputs[115] = 117; RMDDR.inputs[116] = 189; RMDDR.inputs[117] = 213; RMDDR.inputs[118] = 213; RMDDR.inputs[119] = 210; RMDDR.inputs[120] = 246; RMDDR.inputs[121] = 233; RMDDR.inputs[122] = 225;
    RMDDR.weightsLen = 123;
    RMDDR.weights[0] = 1; RMDDR.weights[1] = 1; RMDDR.weights[2] = 1; RMDDR.weights[3] = 1; RMDDR.weights[4] = 1; RMDDR.weights[5] = 1; RMDDR.weights[6] = 1; RMDDR.weights[7] = 1; RMDDR.weights[8] = 1; RMDDR.weights[9] = 1; RMDDR.weights[10] = 1; RMDDR.weights[11] = 1; RMDDR.weights[12] = 1; RMDDR.weights[13] = 1; RMDDR.weights[14] = 1; RMDDR.weights[15] = 1; RMDDR.weights[16] = 1; RMDDR.weights[17] = 1; RMDDR.weights[18] = 1; RMDDR.weights[19] = 1; RMDDR.weights[20] = 1; RMDDR.weights[21] = 1; RMDDR.weights[22] = 1; RMDDR.weights[23] = 1; RMDDR.weights[24] = 1; RMDDR.weights[25] = 1; RMDDR.weights[26] = 1; RMDDR.weights[27] = 1; RMDDR.weights[28] = 1; RMDDR.weights[29] = 1; RMDDR.weights[30] = 1; RMDDR.weights[31] = 1; RMDDR.weights[32] = 1; RMDDR.weights[33] = 1; RMDDR.weights[34] = 1; RMDDR.weights[35] = 1; RMDDR.weights[36] = 1; RMDDR.weights[37] = 1; RMDDR.weights[38] = 1; RMDDR.weights[39] = 1; RMDDR.weights[40] = 1; RMDDR.weights[41] = 1; RMDDR.weights[42] = 1; RMDDR.weights[43] = 1; RMDDR.weights[44] = 1; RMDDR.weights[45] = 1; RMDDR.weights[46] = 1; RMDDR.weights[47] = 1; RMDDR.weights[48] = 1; RMDDR.weights[49] = 1; RMDDR.weights[50] = 1; RMDDR.weights[51] = 1; RMDDR.weights[52] = 1; RMDDR.weights[53] = 1; RMDDR.weights[54] = 1; RMDDR.weights[55] = 1; RMDDR.weights[56] = 1; RMDDR.weights[57] = 1; RMDDR.weights[58] = 1; RMDDR.weights[59] = 1; RMDDR.weights[60] = 1; RMDDR.weights[61] = 1; RMDDR.weights[62] = 1; RMDDR.weights[63] = 1; RMDDR.weights[64] = 1; RMDDR.weights[65] = 1; RMDDR.weights[66] = 1; RMDDR.weights[67] = 1; RMDDR.weights[68] = 1; RMDDR.weights[69] = 1; RMDDR.weights[70] = 1; RMDDR.weights[71] = 1; RMDDR.weights[72] = 1; RMDDR.weights[73] = 1; RMDDR.weights[74] = 1; RMDDR.weights[75] = 1; RMDDR.weights[76] = 1; RMDDR.weights[77] = 1; RMDDR.weights[78] = 1; RMDDR.weights[79] = 1; RMDDR.weights[80] = 1; RMDDR.weights[81] = 1; RMDDR.weights[82] = 1; RMDDR.weights[83] = 1; RMDDR.weights[84] = 1; RMDDR.weights[85] = 1; RMDDR.weights[86] = 1; RMDDR.weights[87] = 1; RMDDR.weights[88] = 1; RMDDR.weights[89] = 1; RMDDR.weights[90] = 1; RMDDR.weights[91] = 1; RMDDR.weights[92] = 1; RMDDR.weights[93] = 1; RMDDR.weights[94] = 1; RMDDR.weights[95] = 1; RMDDR.weights[96] = 1; RMDDR.weights[97] = 1; RMDDR.weights[98] = 1; RMDDR.weights[99] = 1; RMDDR.weights[100] = 1; RMDDR.weights[101] = 1; RMDDR.weights[102] = 1; RMDDR.weights[103] = 1; RMDDR.weights[104] = 1; RMDDR.weights[105] = 1; RMDDR.weights[106] = 1; RMDDR.weights[107] = 1; RMDDR.weights[108] = 1; RMDDR.weights[109] = 1; RMDDR.weights[110] = 1; RMDDR.weights[111] = 1; RMDDR.weights[112] = 1; RMDDR.weights[113] = 1; RMDDR.weights[114] = 1; RMDDR.weights[115] = 1; RMDDR.weights[116] = 1; RMDDR.weights[117] = 1; RMDDR.weights[118] = 1; RMDDR.weights[119] = 1; RMDDR.weights[120] = 1; RMDDR.weights[121] = 1; RMDDR.weights[122] = 1;
    if (id == 209) {
        return RMDDR;
    }


    neuron RMDL;
    RMDL.cellID = 210;
    RMDL.threshold = 1;
    RMDL.inputsLen = 99;
    RMDL.inputs[0] = 206; RMDL.inputs[1] = 188; RMDL.inputs[2] = 206; RMDL.inputs[3] = 206; RMDL.inputs[4] = 188; RMDL.inputs[5] = 200; RMDL.inputs[6] = 188; RMDL.inputs[7] = 205; RMDL.inputs[8] = 188; RMDL.inputs[9] = 188; RMDL.inputs[10] = 188; RMDL.inputs[11] = 189; RMDL.inputs[12] = 189; RMDL.inputs[13] = 189; RMDL.inputs[14] = 188; RMDL.inputs[15] = 188; RMDL.inputs[16] = 188; RMDL.inputs[17] = 153; RMDL.inputs[18] = 153; RMDL.inputs[19] = 153; RMDL.inputs[20] = 3; RMDL.inputs[21] = 4; RMDL.inputs[22] = 254; RMDL.inputs[23] = 244; RMDL.inputs[24] = 245; RMDL.inputs[25] = 188; RMDL.inputs[26] = 221; RMDL.inputs[27] = 221; RMDL.inputs[28] = 221; RMDL.inputs[29] = 221; RMDL.inputs[30] = 221; RMDL.inputs[31] = 220; RMDL.inputs[32] = 220; RMDL.inputs[33] = 223; RMDL.inputs[34] = 219; RMDL.inputs[35] = 219; RMDL.inputs[36] = 219; RMDL.inputs[37] = 219; RMDL.inputs[38] = 233; RMDL.inputs[39] = 233; RMDL.inputs[40] = 189; RMDL.inputs[41] = 236; RMDL.inputs[42] = 205; RMDL.inputs[43] = 205; RMDL.inputs[44] = 205; RMDL.inputs[45] = 70; RMDL.inputs[46] = 129; RMDL.inputs[47] = 3; RMDL.inputs[48] = 221; RMDL.inputs[49] = 129; RMDL.inputs[50] = 188; RMDL.inputs[51] = 152; RMDL.inputs[52] = 211; RMDL.inputs[53] = 129; RMDL.inputs[54] = 135; RMDL.inputs[55] = 134; RMDL.inputs[56] = 211; RMDL.inputs[57] = 128; RMDL.inputs[58] = 134; RMDL.inputs[59] = 152; RMDL.inputs[60] = 3; RMDL.inputs[61] = 223; RMDL.inputs[62] = 211; RMDL.inputs[63] = 201; RMDL.inputs[64] = 201; RMDL.inputs[65] = 201; RMDL.inputs[66] = 201; RMDL.inputs[67] = 201; RMDL.inputs[68] = 211; RMDL.inputs[69] = 200; RMDL.inputs[70] = 200; RMDL.inputs[71] = 200; RMDL.inputs[72] = 211; RMDL.inputs[73] = 128; RMDL.inputs[74] = 134; RMDL.inputs[75] = 152; RMDL.inputs[76] = 3; RMDL.inputs[77] = 188; RMDL.inputs[78] = 245; RMDL.inputs[79] = 152; RMDL.inputs[80] = 153; RMDL.inputs[81] = 260; RMDL.inputs[82] = 189; RMDL.inputs[83] = 188; RMDL.inputs[84] = 188; RMDL.inputs[85] = 189; RMDL.inputs[86] = 69; RMDL.inputs[87] = 3; RMDL.inputs[88] = 129; RMDL.inputs[89] = 188; RMDL.inputs[90] = 189; RMDL.inputs[91] = 201; RMDL.inputs[92] = 200; RMDL.inputs[93] = 245; RMDL.inputs[94] = 245; RMDL.inputs[95] = 236; RMDL.inputs[96] = 239; RMDL.inputs[97] = 212; RMDL.inputs[98] = 216;
    RMDL.weightsLen = 99;
    RMDL.weights[0] = 1; RMDL.weights[1] = 1; RMDL.weights[2] = 1; RMDL.weights[3] = 1; RMDL.weights[4] = 1; RMDL.weights[5] = 1; RMDL.weights[6] = 1; RMDL.weights[7] = 1; RMDL.weights[8] = 1; RMDL.weights[9] = 1; RMDL.weights[10] = 1; RMDL.weights[11] = 1; RMDL.weights[12] = 1; RMDL.weights[13] = 1; RMDL.weights[14] = 1; RMDL.weights[15] = 1; RMDL.weights[16] = 1; RMDL.weights[17] = 1; RMDL.weights[18] = 1; RMDL.weights[19] = 1; RMDL.weights[20] = 1; RMDL.weights[21] = 1; RMDL.weights[22] = 1; RMDL.weights[23] = 1; RMDL.weights[24] = 1; RMDL.weights[25] = 1; RMDL.weights[26] = 1; RMDL.weights[27] = 1; RMDL.weights[28] = 1; RMDL.weights[29] = 1; RMDL.weights[30] = 1; RMDL.weights[31] = 1; RMDL.weights[32] = 1; RMDL.weights[33] = 1; RMDL.weights[34] = 1; RMDL.weights[35] = 1; RMDL.weights[36] = 1; RMDL.weights[37] = 1; RMDL.weights[38] = 1; RMDL.weights[39] = 1; RMDL.weights[40] = 1; RMDL.weights[41] = 1; RMDL.weights[42] = 1; RMDL.weights[43] = 1; RMDL.weights[44] = 1; RMDL.weights[45] = 1; RMDL.weights[46] = 1; RMDL.weights[47] = 1; RMDL.weights[48] = 1; RMDL.weights[49] = 1; RMDL.weights[50] = 1; RMDL.weights[51] = 1; RMDL.weights[52] = 1; RMDL.weights[53] = 1; RMDL.weights[54] = 1; RMDL.weights[55] = 1; RMDL.weights[56] = 1; RMDL.weights[57] = 1; RMDL.weights[58] = 1; RMDL.weights[59] = 1; RMDL.weights[60] = 1; RMDL.weights[61] = 1; RMDL.weights[62] = 1; RMDL.weights[63] = 1; RMDL.weights[64] = 1; RMDL.weights[65] = 1; RMDL.weights[66] = 1; RMDL.weights[67] = 1; RMDL.weights[68] = 1; RMDL.weights[69] = 1; RMDL.weights[70] = 1; RMDL.weights[71] = 1; RMDL.weights[72] = 1; RMDL.weights[73] = 1; RMDL.weights[74] = 1; RMDL.weights[75] = 1; RMDL.weights[76] = 1; RMDL.weights[77] = 1; RMDL.weights[78] = 1; RMDL.weights[79] = 1; RMDL.weights[80] = 1; RMDL.weights[81] = 1; RMDL.weights[82] = 1; RMDL.weights[83] = 1; RMDL.weights[84] = 1; RMDL.weights[85] = 1; RMDL.weights[86] = 1; RMDL.weights[87] = 1; RMDL.weights[88] = 1; RMDL.weights[89] = 1; RMDL.weights[90] = 1; RMDL.weights[91] = 1; RMDL.weights[92] = 1; RMDL.weights[93] = 1; RMDL.weights[94] = 1; RMDL.weights[95] = 1; RMDL.weights[96] = 1; RMDL.weights[97] = 1; RMDL.weights[98] = 1;
    if (id == 210) {
        return RMDL;
    }


    neuron RMDR;
    RMDR.cellID = 211;
    RMDR.threshold = 1;
    RMDR.inputsLen = 105;
    RMDR.inputs[0] = 188; RMDR.inputs[1] = 188; RMDR.inputs[2] = 189; RMDR.inputs[3] = 189; RMDR.inputs[4] = 188; RMDR.inputs[5] = 189; RMDR.inputs[6] = 188; RMDR.inputs[7] = 189; RMDR.inputs[8] = 188; RMDR.inputs[9] = 189; RMDR.inputs[10] = 189; RMDR.inputs[11] = 189; RMDR.inputs[12] = 188; RMDR.inputs[13] = 189; RMDR.inputs[14] = 200; RMDR.inputs[15] = 200; RMDR.inputs[16] = 200; RMDR.inputs[17] = 200; RMDR.inputs[18] = 210; RMDR.inputs[19] = 210; RMDR.inputs[20] = 188; RMDR.inputs[21] = 210; RMDR.inputs[22] = 210; RMDR.inputs[23] = 23; RMDR.inputs[24] = 23; RMDR.inputs[25] = 4; RMDR.inputs[26] = 210; RMDR.inputs[27] = 4; RMDR.inputs[28] = 153; RMDR.inputs[29] = 4; RMDR.inputs[30] = 207; RMDR.inputs[31] = 221; RMDR.inputs[32] = 205; RMDR.inputs[33] = 4; RMDR.inputs[34] = 256; RMDR.inputs[35] = 254; RMDR.inputs[36] = 244; RMDR.inputs[37] = 256; RMDR.inputs[38] = 244; RMDR.inputs[39] = 200; RMDR.inputs[40] = 245; RMDR.inputs[41] = 246; RMDR.inputs[42] = 218; RMDR.inputs[43] = 189; RMDR.inputs[44] = 221; RMDR.inputs[45] = 221; RMDR.inputs[46] = 219; RMDR.inputs[47] = 256; RMDR.inputs[48] = 207; RMDR.inputs[49] = 16; RMDR.inputs[50] = 205; RMDR.inputs[51] = 205; RMDR.inputs[52] = 205; RMDR.inputs[53] = 205; RMDR.inputs[54] = 205; RMDR.inputs[55] = 205; RMDR.inputs[56] = 207; RMDR.inputs[57] = 223; RMDR.inputs[58] = 189; RMDR.inputs[59] = 189; RMDR.inputs[60] = 189; RMDR.inputs[61] = 218; RMDR.inputs[62] = 128; RMDR.inputs[63] = 200; RMDR.inputs[64] = 128; RMDR.inputs[65] = 128; RMDR.inputs[66] = 189; RMDR.inputs[67] = 189; RMDR.inputs[68] = 222; RMDR.inputs[69] = 188; RMDR.inputs[70] = 129; RMDR.inputs[71] = 134; RMDR.inputs[72] = 188; RMDR.inputs[73] = 128; RMDR.inputs[74] = 128; RMDR.inputs[75] = 212; RMDR.inputs[76] = 201; RMDR.inputs[77] = 23; RMDR.inputs[78] = 201; RMDR.inputs[79] = 201; RMDR.inputs[80] = 201; RMDR.inputs[81] = 200; RMDR.inputs[82] = 200; RMDR.inputs[83] = 200; RMDR.inputs[84] = 218; RMDR.inputs[85] = 205; RMDR.inputs[86] = 218; RMDR.inputs[87] = 218; RMDR.inputs[88] = 218; RMDR.inputs[89] = 218; RMDR.inputs[90] = 70; RMDR.inputs[91] = 190; RMDR.inputs[92] = 188; RMDR.inputs[93] = 4; RMDR.inputs[94] = 4; RMDR.inputs[95] = 188; RMDR.inputs[96] = 189; RMDR.inputs[97] = 200; RMDR.inputs[98] = 86; RMDR.inputs[99] = 205; RMDR.inputs[100] = 201; RMDR.inputs[101] = 201; RMDR.inputs[102] = 218; RMDR.inputs[103] = 221; RMDR.inputs[104] = 213;
    RMDR.weightsLen = 105;
    RMDR.weights[0] = 1; RMDR.weights[1] = 1; RMDR.weights[2] = 1; RMDR.weights[3] = 1; RMDR.weights[4] = 1; RMDR.weights[5] = 1; RMDR.weights[6] = 1; RMDR.weights[7] = 1; RMDR.weights[8] = 1; RMDR.weights[9] = 1; RMDR.weights[10] = 1; RMDR.weights[11] = 1; RMDR.weights[12] = 1; RMDR.weights[13] = 1; RMDR.weights[14] = 1; RMDR.weights[15] = 1; RMDR.weights[16] = 1; RMDR.weights[17] = 1; RMDR.weights[18] = 1; RMDR.weights[19] = 1; RMDR.weights[20] = 1; RMDR.weights[21] = 1; RMDR.weights[22] = 1; RMDR.weights[23] = 1; RMDR.weights[24] = 1; RMDR.weights[25] = 1; RMDR.weights[26] = 1; RMDR.weights[27] = 1; RMDR.weights[28] = 1; RMDR.weights[29] = 1; RMDR.weights[30] = 1; RMDR.weights[31] = 1; RMDR.weights[32] = 1; RMDR.weights[33] = 1; RMDR.weights[34] = 1; RMDR.weights[35] = 1; RMDR.weights[36] = 1; RMDR.weights[37] = 1; RMDR.weights[38] = 1; RMDR.weights[39] = 1; RMDR.weights[40] = 1; RMDR.weights[41] = 1; RMDR.weights[42] = 1; RMDR.weights[43] = 1; RMDR.weights[44] = 1; RMDR.weights[45] = 1; RMDR.weights[46] = 1; RMDR.weights[47] = 1; RMDR.weights[48] = 1; RMDR.weights[49] = 1; RMDR.weights[50] = 1; RMDR.weights[51] = 1; RMDR.weights[52] = 1; RMDR.weights[53] = 1; RMDR.weights[54] = 1; RMDR.weights[55] = 1; RMDR.weights[56] = 1; RMDR.weights[57] = 1; RMDR.weights[58] = 1; RMDR.weights[59] = 1; RMDR.weights[60] = 1; RMDR.weights[61] = 1; RMDR.weights[62] = 1; RMDR.weights[63] = 1; RMDR.weights[64] = 1; RMDR.weights[65] = 1; RMDR.weights[66] = 1; RMDR.weights[67] = 1; RMDR.weights[68] = 1; RMDR.weights[69] = 1; RMDR.weights[70] = 1; RMDR.weights[71] = 1; RMDR.weights[72] = 1; RMDR.weights[73] = 1; RMDR.weights[74] = 1; RMDR.weights[75] = 1; RMDR.weights[76] = 1; RMDR.weights[77] = 1; RMDR.weights[78] = 1; RMDR.weights[79] = 1; RMDR.weights[80] = 1; RMDR.weights[81] = 1; RMDR.weights[82] = 1; RMDR.weights[83] = 1; RMDR.weights[84] = 1; RMDR.weights[85] = 1; RMDR.weights[86] = 1; RMDR.weights[87] = 1; RMDR.weights[88] = 1; RMDR.weights[89] = 1; RMDR.weights[90] = 1; RMDR.weights[91] = 1; RMDR.weights[92] = 1; RMDR.weights[93] = 1; RMDR.weights[94] = 1; RMDR.weights[95] = 1; RMDR.weights[96] = 1; RMDR.weights[97] = 1; RMDR.weights[98] = 1; RMDR.weights[99] = 1; RMDR.weights[100] = 1; RMDR.weights[101] = 1; RMDR.weights[102] = 1; RMDR.weights[103] = 1; RMDR.weights[104] = 1;
    if (id == 211) {
        return RMDR;
    }


    neuron RMDVL;
    RMDVL.cellID = 212;
    RMDVL.threshold = 1;
    RMDVL.inputsLen = 100;
    RMDVL.inputs[0] = 206; RMDVL.inputs[1] = 206; RMDVL.inputs[2] = 206; RMDVL.inputs[3] = 189; RMDVL.inputs[4] = 189; RMDVL.inputs[5] = 189; RMDVL.inputs[6] = 189; RMDVL.inputs[7] = 189; RMDVL.inputs[8] = 189; RMDVL.inputs[9] = 189; RMDVL.inputs[10] = 189; RMDVL.inputs[11] = 260; RMDVL.inputs[12] = 260; RMDVL.inputs[13] = 260; RMDVL.inputs[14] = 260; RMDVL.inputs[15] = 189; RMDVL.inputs[16] = 189; RMDVL.inputs[17] = 189; RMDVL.inputs[18] = 189; RMDVL.inputs[19] = 188; RMDVL.inputs[20] = 188; RMDVL.inputs[21] = 188; RMDVL.inputs[22] = 188; RMDVL.inputs[23] = 188; RMDVL.inputs[24] = 188; RMDVL.inputs[25] = 188; RMDVL.inputs[26] = 188; RMDVL.inputs[27] = 188; RMDVL.inputs[28] = 188; RMDVL.inputs[29] = 210; RMDVL.inputs[30] = 188; RMDVL.inputs[31] = 157; RMDVL.inputs[32] = 157; RMDVL.inputs[33] = 157; RMDVL.inputs[34] = 209; RMDVL.inputs[35] = 17; RMDVL.inputs[36] = 17; RMDVL.inputs[37] = 188; RMDVL.inputs[38] = 257; RMDVL.inputs[39] = 257; RMDVL.inputs[40] = 252; RMDVL.inputs[41] = 257; RMDVL.inputs[42] = 257; RMDVL.inputs[43] = 209; RMDVL.inputs[44] = 209; RMDVL.inputs[45] = 209; RMDVL.inputs[46] = 189; RMDVL.inputs[47] = 188; RMDVL.inputs[48] = 209; RMDVL.inputs[49] = 128; RMDVL.inputs[50] = 209; RMDVL.inputs[51] = 209; RMDVL.inputs[52] = 188; RMDVL.inputs[53] = 188; RMDVL.inputs[54] = 257; RMDVL.inputs[55] = 257; RMDVL.inputs[56] = 210; RMDVL.inputs[57] = 211; RMDVL.inputs[58] = 208; RMDVL.inputs[59] = 128; RMDVL.inputs[60] = 128; RMDVL.inputs[61] = 128; RMDVL.inputs[62] = 189; RMDVL.inputs[63] = 211; RMDVL.inputs[64] = 211; RMDVL.inputs[65] = 189; RMDVL.inputs[66] = 128; RMDVL.inputs[67] = 209; RMDVL.inputs[68] = 188; RMDVL.inputs[69] = 211; RMDVL.inputs[70] = 128; RMDVL.inputs[71] = 152; RMDVL.inputs[72] = 152; RMDVL.inputs[73] = 85; RMDVL.inputs[74] = 85; RMDVL.inputs[75] = 85; RMDVL.inputs[76] = 85; RMDVL.inputs[77] = 85; RMDVL.inputs[78] = 189; RMDVL.inputs[79] = 85; RMDVL.inputs[80] = 85; RMDVL.inputs[81] = 85; RMDVL.inputs[82] = 128; RMDVL.inputs[83] = 128; RMDVL.inputs[84] = 126; RMDVL.inputs[85] = 126; RMDVL.inputs[86] = 129; RMDVL.inputs[87] = 129; RMDVL.inputs[88] = 129; RMDVL.inputs[89] = 131; RMDVL.inputs[90] = 152; RMDVL.inputs[91] = 188; RMDVL.inputs[92] = 188; RMDVL.inputs[93] = 188; RMDVL.inputs[94] = 209; RMDVL.inputs[95] = 188; RMDVL.inputs[96] = 257; RMDVL.inputs[97] = 85; RMDVL.inputs[98] = 226; RMDVL.inputs[99] = 236;
    RMDVL.weightsLen = 100;
    RMDVL.weights[0] = 1; RMDVL.weights[1] = 1; RMDVL.weights[2] = 1; RMDVL.weights[3] = 1; RMDVL.weights[4] = 1; RMDVL.weights[5] = 1; RMDVL.weights[6] = 1; RMDVL.weights[7] = 1; RMDVL.weights[8] = 1; RMDVL.weights[9] = 1; RMDVL.weights[10] = 1; RMDVL.weights[11] = 1; RMDVL.weights[12] = 1; RMDVL.weights[13] = 1; RMDVL.weights[14] = 1; RMDVL.weights[15] = 1; RMDVL.weights[16] = 1; RMDVL.weights[17] = 1; RMDVL.weights[18] = 1; RMDVL.weights[19] = 1; RMDVL.weights[20] = 1; RMDVL.weights[21] = 1; RMDVL.weights[22] = 1; RMDVL.weights[23] = 1; RMDVL.weights[24] = 1; RMDVL.weights[25] = 1; RMDVL.weights[26] = 1; RMDVL.weights[27] = 1; RMDVL.weights[28] = 1; RMDVL.weights[29] = 1; RMDVL.weights[30] = 1; RMDVL.weights[31] = 1; RMDVL.weights[32] = 1; RMDVL.weights[33] = 1; RMDVL.weights[34] = 1; RMDVL.weights[35] = 1; RMDVL.weights[36] = 1; RMDVL.weights[37] = 1; RMDVL.weights[38] = 1; RMDVL.weights[39] = 1; RMDVL.weights[40] = 1; RMDVL.weights[41] = 1; RMDVL.weights[42] = 1; RMDVL.weights[43] = 1; RMDVL.weights[44] = 1; RMDVL.weights[45] = 1; RMDVL.weights[46] = 1; RMDVL.weights[47] = 1; RMDVL.weights[48] = 1; RMDVL.weights[49] = 1; RMDVL.weights[50] = 1; RMDVL.weights[51] = 1; RMDVL.weights[52] = 1; RMDVL.weights[53] = 1; RMDVL.weights[54] = 1; RMDVL.weights[55] = 1; RMDVL.weights[56] = 1; RMDVL.weights[57] = 1; RMDVL.weights[58] = 1; RMDVL.weights[59] = 1; RMDVL.weights[60] = 1; RMDVL.weights[61] = 1; RMDVL.weights[62] = 1; RMDVL.weights[63] = 1; RMDVL.weights[64] = 1; RMDVL.weights[65] = 1; RMDVL.weights[66] = 1; RMDVL.weights[67] = 1; RMDVL.weights[68] = 1; RMDVL.weights[69] = 1; RMDVL.weights[70] = 1; RMDVL.weights[71] = 1; RMDVL.weights[72] = 1; RMDVL.weights[73] = 1; RMDVL.weights[74] = 1; RMDVL.weights[75] = 1; RMDVL.weights[76] = 1; RMDVL.weights[77] = 1; RMDVL.weights[78] = 1; RMDVL.weights[79] = 1; RMDVL.weights[80] = 1; RMDVL.weights[81] = 1; RMDVL.weights[82] = 1; RMDVL.weights[83] = 1; RMDVL.weights[84] = 1; RMDVL.weights[85] = 1; RMDVL.weights[86] = 1; RMDVL.weights[87] = 1; RMDVL.weights[88] = 1; RMDVL.weights[89] = 1; RMDVL.weights[90] = 1; RMDVL.weights[91] = 1; RMDVL.weights[92] = 1; RMDVL.weights[93] = 1; RMDVL.weights[94] = 1; RMDVL.weights[95] = 1; RMDVL.weights[96] = 1; RMDVL.weights[97] = 1; RMDVL.weights[98] = 1; RMDVL.weights[99] = 1;
    if (id == 212) {
        return RMDVL;
    }


    neuron RMDVR;
    RMDVR.cellID = 213;
    RMDVR.threshold = 1;
    RMDVR.inputsLen = 122;
    RMDVR.inputs[0] = 207; RMDVR.inputs[1] = 210; RMDVR.inputs[2] = 129; RMDVR.inputs[3] = 208; RMDVR.inputs[4] = 127; RMDVR.inputs[5] = 129; RMDVR.inputs[6] = 189; RMDVR.inputs[7] = 189; RMDVR.inputs[8] = 189; RMDVR.inputs[9] = 188; RMDVR.inputs[10] = 188; RMDVR.inputs[11] = 188; RMDVR.inputs[12] = 188; RMDVR.inputs[13] = 188; RMDVR.inputs[14] = 188; RMDVR.inputs[15] = 212; RMDVR.inputs[16] = 188; RMDVR.inputs[17] = 188; RMDVR.inputs[18] = 188; RMDVR.inputs[19] = 189; RMDVR.inputs[20] = 188; RMDVR.inputs[21] = 188; RMDVR.inputs[22] = 128; RMDVR.inputs[23] = 128; RMDVR.inputs[24] = 189; RMDVR.inputs[25] = 189; RMDVR.inputs[26] = 189; RMDVR.inputs[27] = 189; RMDVR.inputs[28] = 189; RMDVR.inputs[29] = 189; RMDVR.inputs[30] = 189; RMDVR.inputs[31] = 189; RMDVR.inputs[32] = 189; RMDVR.inputs[33] = 189; RMDVR.inputs[34] = 189; RMDVR.inputs[35] = 189; RMDVR.inputs[36] = 189; RMDVR.inputs[37] = 189; RMDVR.inputs[38] = 208; RMDVR.inputs[39] = 189; RMDVR.inputs[40] = 188; RMDVR.inputs[41] = 188; RMDVR.inputs[42] = 188; RMDVR.inputs[43] = 209; RMDVR.inputs[44] = 208; RMDVR.inputs[45] = 208; RMDVR.inputs[46] = 208; RMDVR.inputs[47] = 221; RMDVR.inputs[48] = 189; RMDVR.inputs[49] = 259; RMDVR.inputs[50] = 259; RMDVR.inputs[51] = 258; RMDVR.inputs[52] = 258; RMDVR.inputs[53] = 251; RMDVR.inputs[54] = 156; RMDVR.inputs[55] = 189; RMDVR.inputs[56] = 243; RMDVR.inputs[57] = 221; RMDVR.inputs[58] = 221; RMDVR.inputs[59] = 221; RMDVR.inputs[60] = 221; RMDVR.inputs[61] = 221; RMDVR.inputs[62] = 189; RMDVR.inputs[63] = 224; RMDVR.inputs[64] = 87; RMDVR.inputs[65] = 156; RMDVR.inputs[66] = 156; RMDVR.inputs[67] = 156; RMDVR.inputs[68] = 189; RMDVR.inputs[69] = 156; RMDVR.inputs[70] = 156; RMDVR.inputs[71] = 188; RMDVR.inputs[72] = 259; RMDVR.inputs[73] = 188; RMDVR.inputs[74] = 221; RMDVR.inputs[75] = 221; RMDVR.inputs[76] = 129; RMDVR.inputs[77] = 208; RMDVR.inputs[78] = 188; RMDVR.inputs[79] = 153; RMDVR.inputs[80] = 189; RMDVR.inputs[81] = 189; RMDVR.inputs[82] = 189; RMDVR.inputs[83] = 188; RMDVR.inputs[84] = 188; RMDVR.inputs[85] = 189; RMDVR.inputs[86] = 189; RMDVR.inputs[87] = 191; RMDVR.inputs[88] = 129; RMDVR.inputs[89] = 129; RMDVR.inputs[90] = 129; RMDVR.inputs[91] = 86; RMDVR.inputs[92] = 153; RMDVR.inputs[93] = 127; RMDVR.inputs[94] = 258; RMDVR.inputs[95] = 258; RMDVR.inputs[96] = 258; RMDVR.inputs[97] = 127; RMDVR.inputs[98] = 127; RMDVR.inputs[99] = 213; RMDVR.inputs[100] = 130; RMDVR.inputs[101] = 127; RMDVR.inputs[102] = 127; RMDVR.inputs[103] = 127; RMDVR.inputs[104] = 127; RMDVR.inputs[105] = 208; RMDVR.inputs[106] = 213; RMDVR.inputs[107] = 153; RMDVR.inputs[108] = 127; RMDVR.inputs[109] = 127; RMDVR.inputs[110] = 127; RMDVR.inputs[111] = 127; RMDVR.inputs[112] = 208; RMDVR.inputs[113] = 129; RMDVR.inputs[114] = 153; RMDVR.inputs[115] = 210; RMDVR.inputs[116] = 208; RMDVR.inputs[117] = 248; RMDVR.inputs[118] = 248; RMDVR.inputs[119] = 235; RMDVR.inputs[120] = 227; RMDVR.inputs[121] = 224;
    RMDVR.weightsLen = 122;
    RMDVR.weights[0] = 1; RMDVR.weights[1] = 1; RMDVR.weights[2] = 1; RMDVR.weights[3] = 1; RMDVR.weights[4] = 1; RMDVR.weights[5] = 1; RMDVR.weights[6] = 1; RMDVR.weights[7] = 1; RMDVR.weights[8] = 1; RMDVR.weights[9] = 1; RMDVR.weights[10] = 1; RMDVR.weights[11] = 1; RMDVR.weights[12] = 1; RMDVR.weights[13] = 1; RMDVR.weights[14] = 1; RMDVR.weights[15] = 1; RMDVR.weights[16] = 1; RMDVR.weights[17] = 1; RMDVR.weights[18] = 1; RMDVR.weights[19] = 1; RMDVR.weights[20] = 1; RMDVR.weights[21] = 1; RMDVR.weights[22] = 1; RMDVR.weights[23] = 1; RMDVR.weights[24] = 1; RMDVR.weights[25] = 1; RMDVR.weights[26] = 1; RMDVR.weights[27] = 1; RMDVR.weights[28] = 1; RMDVR.weights[29] = 1; RMDVR.weights[30] = 1; RMDVR.weights[31] = 1; RMDVR.weights[32] = 1; RMDVR.weights[33] = 1; RMDVR.weights[34] = 1; RMDVR.weights[35] = 1; RMDVR.weights[36] = 1; RMDVR.weights[37] = 1; RMDVR.weights[38] = 1; RMDVR.weights[39] = 1; RMDVR.weights[40] = 1; RMDVR.weights[41] = 1; RMDVR.weights[42] = 1; RMDVR.weights[43] = 1; RMDVR.weights[44] = 1; RMDVR.weights[45] = 1; RMDVR.weights[46] = 1; RMDVR.weights[47] = 1; RMDVR.weights[48] = 1; RMDVR.weights[49] = 1; RMDVR.weights[50] = 1; RMDVR.weights[51] = 1; RMDVR.weights[52] = 1; RMDVR.weights[53] = 1; RMDVR.weights[54] = 1; RMDVR.weights[55] = 1; RMDVR.weights[56] = 1; RMDVR.weights[57] = 1; RMDVR.weights[58] = 1; RMDVR.weights[59] = 1; RMDVR.weights[60] = 1; RMDVR.weights[61] = 1; RMDVR.weights[62] = 1; RMDVR.weights[63] = 1; RMDVR.weights[64] = 1; RMDVR.weights[65] = 1; RMDVR.weights[66] = 1; RMDVR.weights[67] = 1; RMDVR.weights[68] = 1; RMDVR.weights[69] = 1; RMDVR.weights[70] = 1; RMDVR.weights[71] = 1; RMDVR.weights[72] = 1; RMDVR.weights[73] = 1; RMDVR.weights[74] = 1; RMDVR.weights[75] = 1; RMDVR.weights[76] = 1; RMDVR.weights[77] = 1; RMDVR.weights[78] = 1; RMDVR.weights[79] = 1; RMDVR.weights[80] = 1; RMDVR.weights[81] = 1; RMDVR.weights[82] = 1; RMDVR.weights[83] = 1; RMDVR.weights[84] = 1; RMDVR.weights[85] = 1; RMDVR.weights[86] = 1; RMDVR.weights[87] = 1; RMDVR.weights[88] = 1; RMDVR.weights[89] = 1; RMDVR.weights[90] = 1; RMDVR.weights[91] = 1; RMDVR.weights[92] = 1; RMDVR.weights[93] = 1; RMDVR.weights[94] = 1; RMDVR.weights[95] = 1; RMDVR.weights[96] = 1; RMDVR.weights[97] = 1; RMDVR.weights[98] = 1; RMDVR.weights[99] = 1; RMDVR.weights[100] = 1; RMDVR.weights[101] = 1; RMDVR.weights[102] = 1; RMDVR.weights[103] = 1; RMDVR.weights[104] = 1; RMDVR.weights[105] = 1; RMDVR.weights[106] = 1; RMDVR.weights[107] = 1; RMDVR.weights[108] = 1; RMDVR.weights[109] = 1; RMDVR.weights[110] = 1; RMDVR.weights[111] = 1; RMDVR.weights[112] = 1; RMDVR.weights[113] = 1; RMDVR.weights[114] = 1; RMDVR.weights[115] = 1; RMDVR.weights[116] = 1; RMDVR.weights[117] = 1; RMDVR.weights[118] = 1; RMDVR.weights[119] = 1; RMDVR.weights[120] = 1; RMDVR.weights[121] = 1;
    if (id == 213) {
        return RMDVR;
    }


    neuron RMED;
    RMED.cellID = 214;
    RMED.threshold = 1;
    RMED.inputsLen = 38;
    RMED.inputs[0] = 214; RMED.inputs[1] = 245; RMED.inputs[2] = 248; RMED.inputs[3] = 137; RMED.inputs[4] = 246; RMED.inputs[5] = 246; RMED.inputs[6] = 246; RMED.inputs[7] = 242; RMED.inputs[8] = 242; RMED.inputs[9] = 242; RMED.inputs[10] = 242; RMED.inputs[11] = 242; RMED.inputs[12] = 242; RMED.inputs[13] = 242; RMED.inputs[14] = 242; RMED.inputs[15] = 242; RMED.inputs[16] = 241; RMED.inputs[17] = 241; RMED.inputs[18] = 258; RMED.inputs[19] = 133; RMED.inputs[20] = 194; RMED.inputs[21] = 191; RMED.inputs[22] = 133; RMED.inputs[23] = 217; RMED.inputs[24] = 132; RMED.inputs[25] = 132; RMED.inputs[26] = 153; RMED.inputs[27] = 154; RMED.inputs[28] = 241; RMED.inputs[29] = 194; RMED.inputs[30] = 194; RMED.inputs[31] = 194; RMED.inputs[32] = 242; RMED.inputs[33] = 217; RMED.inputs[34] = 217; RMED.inputs[35] = 217; RMED.inputs[36] = 217; RMED.inputs[37] = 217;
    RMED.weightsLen = 38;
    RMED.weights[0] = 1; RMED.weights[1] = 1; RMED.weights[2] = 1; RMED.weights[3] = 1; RMED.weights[4] = 1; RMED.weights[5] = 1; RMED.weights[6] = 1; RMED.weights[7] = 1; RMED.weights[8] = 1; RMED.weights[9] = 1; RMED.weights[10] = 1; RMED.weights[11] = 1; RMED.weights[12] = 1; RMED.weights[13] = 1; RMED.weights[14] = 1; RMED.weights[15] = 1; RMED.weights[16] = 1; RMED.weights[17] = 1; RMED.weights[18] = 1; RMED.weights[19] = 1; RMED.weights[20] = 1; RMED.weights[21] = 1; RMED.weights[22] = 1; RMED.weights[23] = 1; RMED.weights[24] = 1; RMED.weights[25] = 1; RMED.weights[26] = 1; RMED.weights[27] = 1; RMED.weights[28] = 1; RMED.weights[29] = 1; RMED.weights[30] = 1; RMED.weights[31] = 1; RMED.weights[32] = 1; RMED.weights[33] = 1; RMED.weights[34] = 1; RMED.weights[35] = 1; RMED.weights[36] = 1; RMED.weights[37] = 1;
    if (id == 214) {
        return RMED;
    }


    neuron RMEL;
    RMEL.cellID = 215;
    RMEL.threshold = 1;
    RMEL.inputsLen = 41;
    RMEL.inputs[0] = 137; RMEL.inputs[1] = 137; RMEL.inputs[2] = 137; RMEL.inputs[3] = 135; RMEL.inputs[4] = 252; RMEL.inputs[5] = 251; RMEL.inputs[6] = 251; RMEL.inputs[7] = 249; RMEL.inputs[8] = 132; RMEL.inputs[9] = 132; RMEL.inputs[10] = 136; RMEL.inputs[11] = 135; RMEL.inputs[12] = 129; RMEL.inputs[13] = 129; RMEL.inputs[14] = 135; RMEL.inputs[15] = 129; RMEL.inputs[16] = 133; RMEL.inputs[17] = 133; RMEL.inputs[18] = 133; RMEL.inputs[19] = 133; RMEL.inputs[20] = 132; RMEL.inputs[21] = 132; RMEL.inputs[22] = 132; RMEL.inputs[23] = 137; RMEL.inputs[24] = 152; RMEL.inputs[25] = 133; RMEL.inputs[26] = 133; RMEL.inputs[27] = 133; RMEL.inputs[28] = 249; RMEL.inputs[29] = 152; RMEL.inputs[30] = 152; RMEL.inputs[31] = 132; RMEL.inputs[32] = 136; RMEL.inputs[33] = 154; RMEL.inputs[34] = 154; RMEL.inputs[35] = 249; RMEL.inputs[36] = 126; RMEL.inputs[37] = 136; RMEL.inputs[38] = 217; RMEL.inputs[39] = 217; RMEL.inputs[40] = 217;
    RMEL.weightsLen = 41;
    RMEL.weights[0] = 1; RMEL.weights[1] = 1; RMEL.weights[2] = 1; RMEL.weights[3] = 1; RMEL.weights[4] = 1; RMEL.weights[5] = 1; RMEL.weights[6] = 1; RMEL.weights[7] = 1; RMEL.weights[8] = 1; RMEL.weights[9] = 1; RMEL.weights[10] = 1; RMEL.weights[11] = 1; RMEL.weights[12] = 1; RMEL.weights[13] = 1; RMEL.weights[14] = 1; RMEL.weights[15] = 1; RMEL.weights[16] = 1; RMEL.weights[17] = 1; RMEL.weights[18] = 1; RMEL.weights[19] = 1; RMEL.weights[20] = 1; RMEL.weights[21] = 1; RMEL.weights[22] = 1; RMEL.weights[23] = 1; RMEL.weights[24] = 1; RMEL.weights[25] = 1; RMEL.weights[26] = 1; RMEL.weights[27] = 1; RMEL.weights[28] = 1; RMEL.weights[29] = 1; RMEL.weights[30] = 1; RMEL.weights[31] = 1; RMEL.weights[32] = 1; RMEL.weights[33] = 1; RMEL.weights[34] = 1; RMEL.weights[35] = 1; RMEL.weights[36] = 1; RMEL.weights[37] = 1; RMEL.weights[38] = 1; RMEL.weights[39] = 1; RMEL.weights[40] = 1;
    if (id == 215) {
        return RMEL;
    }


    neuron RMER;
    RMER.cellID = 216;
    RMER.threshold = 1;
    RMER.inputsLen = 52;
    RMER.inputs[0] = 199; RMER.inputs[1] = 134; RMER.inputs[2] = 134; RMER.inputs[3] = 134; RMER.inputs[4] = 133; RMER.inputs[5] = 137; RMER.inputs[6] = 137; RMER.inputs[7] = 137; RMER.inputs[8] = 137; RMER.inputs[9] = 137; RMER.inputs[10] = 252; RMER.inputs[11] = 252; RMER.inputs[12] = 251; RMER.inputs[13] = 251; RMER.inputs[14] = 250; RMER.inputs[15] = 132; RMER.inputs[16] = 132; RMER.inputs[17] = 223; RMER.inputs[18] = 223; RMER.inputs[19] = 251; RMER.inputs[20] = 157; RMER.inputs[21] = 157; RMER.inputs[22] = 153; RMER.inputs[23] = 136; RMER.inputs[24] = 134; RMER.inputs[25] = 134; RMER.inputs[26] = 132; RMER.inputs[27] = 133; RMER.inputs[28] = 133; RMER.inputs[29] = 132; RMER.inputs[30] = 210; RMER.inputs[31] = 133; RMER.inputs[32] = 133; RMER.inputs[33] = 136; RMER.inputs[34] = 199; RMER.inputs[35] = 199; RMER.inputs[36] = 153; RMER.inputs[37] = 128; RMER.inputs[38] = 128; RMER.inputs[39] = 128; RMER.inputs[40] = 136; RMER.inputs[41] = 136; RMER.inputs[42] = 134; RMER.inputs[43] = 134; RMER.inputs[44] = 155; RMER.inputs[45] = 210; RMER.inputs[46] = 216; RMER.inputs[47] = 216; RMER.inputs[48] = 216; RMER.inputs[49] = 3; RMER.inputs[50] = 199; RMER.inputs[51] = 217;
    RMER.weightsLen = 52;
    RMER.weights[0] = 1; RMER.weights[1] = 1; RMER.weights[2] = 1; RMER.weights[3] = 1; RMER.weights[4] = 1; RMER.weights[5] = 1; RMER.weights[6] = 1; RMER.weights[7] = 1; RMER.weights[8] = 1; RMER.weights[9] = 1; RMER.weights[10] = 1; RMER.weights[11] = 1; RMER.weights[12] = 1; RMER.weights[13] = 1; RMER.weights[14] = 1; RMER.weights[15] = 1; RMER.weights[16] = 1; RMER.weights[17] = 1; RMER.weights[18] = 1; RMER.weights[19] = 1; RMER.weights[20] = 1; RMER.weights[21] = 1; RMER.weights[22] = 1; RMER.weights[23] = 1; RMER.weights[24] = 1; RMER.weights[25] = 1; RMER.weights[26] = 1; RMER.weights[27] = 1; RMER.weights[28] = 1; RMER.weights[29] = 1; RMER.weights[30] = 1; RMER.weights[31] = 1; RMER.weights[32] = 1; RMER.weights[33] = 1; RMER.weights[34] = 1; RMER.weights[35] = 1; RMER.weights[36] = 1; RMER.weights[37] = 1; RMER.weights[38] = 1; RMER.weights[39] = 1; RMER.weights[40] = 1; RMER.weights[41] = 1; RMER.weights[42] = 1; RMER.weights[43] = 1; RMER.weights[44] = 1; RMER.weights[45] = 1; RMER.weights[46] = 1; RMER.weights[47] = 1; RMER.weights[48] = 1; RMER.weights[49] = 1; RMER.weights[50] = 1; RMER.weights[51] = 1;
    if (id == 216) {
        return RMER;
    }


    neuron RMEV;
    RMEV.cellID = 217;
    RMEV.threshold = 1;
    RMEV.inputsLen = 47;
    RMEV.inputs[0] = 185; RMEV.inputs[1] = 205; RMEV.inputs[2] = 199; RMEV.inputs[3] = 243; RMEV.inputs[4] = 243; RMEV.inputs[5] = 137; RMEV.inputs[6] = 137; RMEV.inputs[7] = 137; RMEV.inputs[8] = 137; RMEV.inputs[9] = 137; RMEV.inputs[10] = 252; RMEV.inputs[11] = 251; RMEV.inputs[12] = 251; RMEV.inputs[13] = 243; RMEV.inputs[14] = 243; RMEV.inputs[15] = 243; RMEV.inputs[16] = 243; RMEV.inputs[17] = 244; RMEV.inputs[18] = 244; RMEV.inputs[19] = 244; RMEV.inputs[20] = 245; RMEV.inputs[21] = 205; RMEV.inputs[22] = 247; RMEV.inputs[23] = 243; RMEV.inputs[24] = 244; RMEV.inputs[25] = 133; RMEV.inputs[26] = 132; RMEV.inputs[27] = 215; RMEV.inputs[28] = 199; RMEV.inputs[29] = 133; RMEV.inputs[30] = 185; RMEV.inputs[31] = 199; RMEV.inputs[32] = 199; RMEV.inputs[33] = 199; RMEV.inputs[34] = 199; RMEV.inputs[35] = 199; RMEV.inputs[36] = 134; RMEV.inputs[37] = 199; RMEV.inputs[38] = 135; RMEV.inputs[39] = 136; RMEV.inputs[40] = 134; RMEV.inputs[41] = 208; RMEV.inputs[42] = 243; RMEV.inputs[43] = 243; RMEV.inputs[44] = 243; RMEV.inputs[45] = 227; RMEV.inputs[46] = 247;
    RMEV.weightsLen = 47;
    RMEV.weights[0] = 1; RMEV.weights[1] = 1; RMEV.weights[2] = 1; RMEV.weights[3] = 1; RMEV.weights[4] = 1; RMEV.weights[5] = 1; RMEV.weights[6] = 1; RMEV.weights[7] = 1; RMEV.weights[8] = 1; RMEV.weights[9] = 1; RMEV.weights[10] = 1; RMEV.weights[11] = 1; RMEV.weights[12] = 1; RMEV.weights[13] = 1; RMEV.weights[14] = 1; RMEV.weights[15] = 1; RMEV.weights[16] = 1; RMEV.weights[17] = 1; RMEV.weights[18] = 1; RMEV.weights[19] = 1; RMEV.weights[20] = 1; RMEV.weights[21] = 1; RMEV.weights[22] = 1; RMEV.weights[23] = 1; RMEV.weights[24] = 1; RMEV.weights[25] = 1; RMEV.weights[26] = 1; RMEV.weights[27] = 1; RMEV.weights[28] = 1; RMEV.weights[29] = 1; RMEV.weights[30] = 1; RMEV.weights[31] = 1; RMEV.weights[32] = 1; RMEV.weights[33] = 1; RMEV.weights[34] = 1; RMEV.weights[35] = 1; RMEV.weights[36] = 1; RMEV.weights[37] = 1; RMEV.weights[38] = 1; RMEV.weights[39] = 1; RMEV.weights[40] = 1; RMEV.weights[41] = 1; RMEV.weights[42] = 1; RMEV.weights[43] = 1; RMEV.weights[44] = 1; RMEV.weights[45] = 1; RMEV.weights[46] = 1;
    if (id == 217) {
        return RMEV;
    }


    neuron RMFL;
    RMFL.cellID = 218;
    RMFL.threshold = 1;
    RMFL.inputsLen = 23;
    RMFL.inputs[0] = 231; RMFL.inputs[1] = 225; RMFL.inputs[2] = 225; RMFL.inputs[3] = 17; RMFL.inputs[4] = 113; RMFL.inputs[5] = 113; RMFL.inputs[6] = 193; RMFL.inputs[7] = 113; RMFL.inputs[8] = 231; RMFL.inputs[9] = 200; RMFL.inputs[10] = 201; RMFL.inputs[11] = 113; RMFL.inputs[12] = 225; RMFL.inputs[13] = 185; RMFL.inputs[14] = 113; RMFL.inputs[15] = 113; RMFL.inputs[16] = 113; RMFL.inputs[17] = 14; RMFL.inputs[18] = 46; RMFL.inputs[19] = 70; RMFL.inputs[20] = 69; RMFL.inputs[21] = 227; RMFL.inputs[22] = 225;
    RMFL.weightsLen = 23;
    RMFL.weights[0] = 1; RMFL.weights[1] = 1; RMFL.weights[2] = 1; RMFL.weights[3] = 1; RMFL.weights[4] = 1; RMFL.weights[5] = 1; RMFL.weights[6] = 1; RMFL.weights[7] = 1; RMFL.weights[8] = 1; RMFL.weights[9] = 1; RMFL.weights[10] = 1; RMFL.weights[11] = 1; RMFL.weights[12] = 1; RMFL.weights[13] = 1; RMFL.weights[14] = 1; RMFL.weights[15] = 1; RMFL.weights[16] = 1; RMFL.weights[17] = 1; RMFL.weights[18] = 1; RMFL.weights[19] = 1; RMFL.weights[20] = 1; RMFL.weights[21] = 1; RMFL.weights[22] = 1;
    if (id == 218) {
        return RMFL;
    }


    neuron RMFR;
    RMFR.cellID = 219;
    RMFR.threshold = 1;
    RMFR.inputsLen = 29;
    RMFR.inputs[0] = 192; RMFR.inputs[1] = 201; RMFR.inputs[2] = 185; RMFR.inputs[3] = 226; RMFR.inputs[4] = 226; RMFR.inputs[5] = 201; RMFR.inputs[6] = 200; RMFR.inputs[7] = 226; RMFR.inputs[8] = 226; RMFR.inputs[9] = 113; RMFR.inputs[10] = 13; RMFR.inputs[11] = 13; RMFR.inputs[12] = 201; RMFR.inputs[13] = 13; RMFR.inputs[14] = 224; RMFR.inputs[15] = 13; RMFR.inputs[16] = 201; RMFR.inputs[17] = 226; RMFR.inputs[18] = 200; RMFR.inputs[19] = 113; RMFR.inputs[20] = 185; RMFR.inputs[21] = 185; RMFR.inputs[22] = 210; RMFR.inputs[23] = 113; RMFR.inputs[24] = 113; RMFR.inputs[25] = 113; RMFR.inputs[26] = 113; RMFR.inputs[27] = 225; RMFR.inputs[28] = 185;
    RMFR.weightsLen = 29;
    RMFR.weights[0] = 1; RMFR.weights[1] = 1; RMFR.weights[2] = 1; RMFR.weights[3] = 1; RMFR.weights[4] = 1; RMFR.weights[5] = 1; RMFR.weights[6] = 1; RMFR.weights[7] = 1; RMFR.weights[8] = 1; RMFR.weights[9] = 1; RMFR.weights[10] = 1; RMFR.weights[11] = 1; RMFR.weights[12] = 1; RMFR.weights[13] = 1; RMFR.weights[14] = 1; RMFR.weights[15] = 1; RMFR.weights[16] = 1; RMFR.weights[17] = 1; RMFR.weights[18] = 1; RMFR.weights[19] = 1; RMFR.weights[20] = 1; RMFR.weights[21] = 1; RMFR.weights[22] = 1; RMFR.weights[23] = 1; RMFR.weights[24] = 1; RMFR.weights[25] = 1; RMFR.weights[26] = 1; RMFR.weights[27] = 1; RMFR.weights[28] = 1;
    if (id == 219) {
        return RMFR;
    }


    neuron RMGL;
    RMGL.cellID = 220;
    RMGL.threshold = 1;
    RMGL.inputsLen = 5;
    RMGL.inputs[0] = 223; RMGL.inputs[1] = 223; RMGL.inputs[2] = 223; RMGL.inputs[3] = 223; RMGL.inputs[4] = 85;
    RMGL.weightsLen = 5;
    RMGL.weights[0] = 1; RMGL.weights[1] = 1; RMGL.weights[2] = 1; RMGL.weights[3] = 1; RMGL.weights[4] = 1;
    if (id == 220) {
        return RMGL;
    }


    neuron RMGR;
    RMGR.cellID = 221;
    RMGR.threshold = 1;
    RMGR.inputsLen = 36;
    RMGR.inputs[0] = 183; RMGR.inputs[1] = 256; RMGR.inputs[2] = 254; RMGR.inputs[3] = 254; RMGR.inputs[4] = 256; RMGR.inputs[5] = 256; RMGR.inputs[6] = 254; RMGR.inputs[7] = 244; RMGR.inputs[8] = 244; RMGR.inputs[9] = 239; RMGR.inputs[10] = 16; RMGR.inputs[11] = 16; RMGR.inputs[12] = 116; RMGR.inputs[13] = 61; RMGR.inputs[14] = 45; RMGR.inputs[15] = 45; RMGR.inputs[16] = 45; RMGR.inputs[17] = 45; RMGR.inputs[18] = 45; RMGR.inputs[19] = 256; RMGR.inputs[20] = 256; RMGR.inputs[21] = 256; RMGR.inputs[22] = 204; RMGR.inputs[23] = 135; RMGR.inputs[24] = 4; RMGR.inputs[25] = 4; RMGR.inputs[26] = 86; RMGR.inputs[27] = 117; RMGR.inputs[28] = 256; RMGR.inputs[29] = 256; RMGR.inputs[30] = 256; RMGR.inputs[31] = 244; RMGR.inputs[32] = 244; RMGR.inputs[33] = 256; RMGR.inputs[34] = 222; RMGR.inputs[35] = 223;
    RMGR.weightsLen = 36;
    RMGR.weights[0] = 1; RMGR.weights[1] = 1; RMGR.weights[2] = 1; RMGR.weights[3] = 1; RMGR.weights[4] = 1; RMGR.weights[5] = 1; RMGR.weights[6] = 1; RMGR.weights[7] = 1; RMGR.weights[8] = 1; RMGR.weights[9] = 1; RMGR.weights[10] = 1; RMGR.weights[11] = 1; RMGR.weights[12] = 1; RMGR.weights[13] = 1; RMGR.weights[14] = 1; RMGR.weights[15] = 1; RMGR.weights[16] = 1; RMGR.weights[17] = 1; RMGR.weights[18] = 1; RMGR.weights[19] = 1; RMGR.weights[20] = 1; RMGR.weights[21] = 1; RMGR.weights[22] = 1; RMGR.weights[23] = 1; RMGR.weights[24] = 1; RMGR.weights[25] = 1; RMGR.weights[26] = 1; RMGR.weights[27] = 1; RMGR.weights[28] = 1; RMGR.weights[29] = 1; RMGR.weights[30] = 1; RMGR.weights[31] = 1; RMGR.weights[32] = 1; RMGR.weights[33] = 1; RMGR.weights[34] = 1; RMGR.weights[35] = 1;
    if (id == 221) {
        return RMGR;
    }


    neuron RMHL;
    RMHL.cellID = 222;
    RMHL.threshold = 1;
    RMHL.inputsLen = 25;
    RMHL.inputs[0] = 232; RMHL.inputs[1] = 208; RMHL.inputs[2] = 87; RMHL.inputs[3] = 87; RMHL.inputs[4] = 223; RMHL.inputs[5] = 156; RMHL.inputs[6] = 130; RMHL.inputs[7] = 132; RMHL.inputs[8] = 26; RMHL.inputs[9] = 87; RMHL.inputs[10] = 198; RMHL.inputs[11] = 198; RMHL.inputs[12] = 210; RMHL.inputs[13] = 129; RMHL.inputs[14] = 85; RMHL.inputs[15] = 198; RMHL.inputs[16] = 154; RMHL.inputs[17] = 86; RMHL.inputs[18] = 218; RMHL.inputs[19] = 210; RMHL.inputs[20] = 86; RMHL.inputs[21] = 3; RMHL.inputs[22] = 86; RMHL.inputs[23] = 245; RMHL.inputs[24] = 240;
    RMHL.weightsLen = 25;
    RMHL.weights[0] = 1; RMHL.weights[1] = 1; RMHL.weights[2] = 1; RMHL.weights[3] = 1; RMHL.weights[4] = 1; RMHL.weights[5] = 1; RMHL.weights[6] = 1; RMHL.weights[7] = 1; RMHL.weights[8] = 1; RMHL.weights[9] = 1; RMHL.weights[10] = 1; RMHL.weights[11] = 1; RMHL.weights[12] = 1; RMHL.weights[13] = 1; RMHL.weights[14] = 1; RMHL.weights[15] = 1; RMHL.weights[16] = 1; RMHL.weights[17] = 1; RMHL.weights[18] = 1; RMHL.weights[19] = 1; RMHL.weights[20] = 1; RMHL.weights[21] = 1; RMHL.weights[22] = 1; RMHL.weights[23] = 1; RMHL.weights[24] = 1;
    if (id == 222) {
        return RMHL;
    }


    neuron RMHR;
    RMHR.cellID = 223;
    RMHR.threshold = 1;
    RMHR.inputsLen = 42;
    RMHR.inputs[0] = 232; RMHR.inputs[1] = 232; RMHR.inputs[2] = 88; RMHR.inputs[3] = 88; RMHR.inputs[4] = 88; RMHR.inputs[5] = 157; RMHR.inputs[6] = 88; RMHR.inputs[7] = 87; RMHR.inputs[8] = 253; RMHR.inputs[9] = 253; RMHR.inputs[10] = 240; RMHR.inputs[11] = 253; RMHR.inputs[12] = 85; RMHR.inputs[13] = 85; RMHR.inputs[14] = 220; RMHR.inputs[15] = 220; RMHR.inputs[16] = 220; RMHR.inputs[17] = 232; RMHR.inputs[18] = 85; RMHR.inputs[19] = 253; RMHR.inputs[20] = 207; RMHR.inputs[21] = 70; RMHR.inputs[22] = 197; RMHR.inputs[23] = 197; RMHR.inputs[24] = 197; RMHR.inputs[25] = 87; RMHR.inputs[26] = 155; RMHR.inputs[27] = 207; RMHR.inputs[28] = 3; RMHR.inputs[29] = 3; RMHR.inputs[30] = 87; RMHR.inputs[31] = 87; RMHR.inputs[32] = 85; RMHR.inputs[33] = 85; RMHR.inputs[34] = 85; RMHR.inputs[35] = 253; RMHR.inputs[36] = 210; RMHR.inputs[37] = 155; RMHR.inputs[38] = 216; RMHR.inputs[39] = 216; RMHR.inputs[40] = 216; RMHR.inputs[41] = 86;
    RMHR.weightsLen = 42;
    RMHR.weights[0] = 1; RMHR.weights[1] = 1; RMHR.weights[2] = 1; RMHR.weights[3] = 1; RMHR.weights[4] = 1; RMHR.weights[5] = 1; RMHR.weights[6] = 1; RMHR.weights[7] = 1; RMHR.weights[8] = 1; RMHR.weights[9] = 1; RMHR.weights[10] = 1; RMHR.weights[11] = 1; RMHR.weights[12] = 1; RMHR.weights[13] = 1; RMHR.weights[14] = 1; RMHR.weights[15] = 1; RMHR.weights[16] = 1; RMHR.weights[17] = 1; RMHR.weights[18] = 1; RMHR.weights[19] = 1; RMHR.weights[20] = 1; RMHR.weights[21] = 1; RMHR.weights[22] = 1; RMHR.weights[23] = 1; RMHR.weights[24] = 1; RMHR.weights[25] = 1; RMHR.weights[26] = 1; RMHR.weights[27] = 1; RMHR.weights[28] = 1; RMHR.weights[29] = 1; RMHR.weights[30] = 1; RMHR.weights[31] = 1; RMHR.weights[32] = 1; RMHR.weights[33] = 1; RMHR.weights[34] = 1; RMHR.weights[35] = 1; RMHR.weights[36] = 1; RMHR.weights[37] = 1; RMHR.weights[38] = 1; RMHR.weights[39] = 1; RMHR.weights[40] = 1; RMHR.weights[41] = 1;
    if (id == 223) {
        return RMHR;
    }


    neuron SAADL;
    SAADL.cellID = 224;
    SAADL.threshold = 1;
    SAADL.inputsLen = 28;
    SAADL.inputs[0] = 243; SAADL.inputs[1] = 200; SAADL.inputs[2] = 207; SAADL.inputs[3] = 207; SAADL.inputs[4] = 207; SAADL.inputs[5] = 14; SAADL.inputs[6] = 14; SAADL.inputs[7] = 243; SAADL.inputs[8] = 171; SAADL.inputs[9] = 207; SAADL.inputs[10] = 221; SAADL.inputs[11] = 13; SAADL.inputs[12] = 13; SAADL.inputs[13] = 13; SAADL.inputs[14] = 221; SAADL.inputs[15] = 207; SAADL.inputs[16] = 70; SAADL.inputs[17] = 69; SAADL.inputs[18] = 207; SAADL.inputs[19] = 207; SAADL.inputs[20] = 171; SAADL.inputs[21] = 171; SAADL.inputs[22] = 243; SAADL.inputs[23] = 243; SAADL.inputs[24] = 81; SAADL.inputs[25] = 232; SAADL.inputs[26] = 241; SAADL.inputs[27] = 241;
    SAADL.weightsLen = 28;
    SAADL.weights[0] = 1; SAADL.weights[1] = 1; SAADL.weights[2] = 1; SAADL.weights[3] = 1; SAADL.weights[4] = 1; SAADL.weights[5] = 1; SAADL.weights[6] = 1; SAADL.weights[7] = 1; SAADL.weights[8] = 1; SAADL.weights[9] = 1; SAADL.weights[10] = 1; SAADL.weights[11] = 1; SAADL.weights[12] = 1; SAADL.weights[13] = 1; SAADL.weights[14] = 1; SAADL.weights[15] = 1; SAADL.weights[16] = 1; SAADL.weights[17] = 1; SAADL.weights[18] = 1; SAADL.weights[19] = 1; SAADL.weights[20] = 1; SAADL.weights[21] = 1; SAADL.weights[22] = 1; SAADL.weights[23] = 1; SAADL.weights[24] = 1; SAADL.weights[25] = 1; SAADL.weights[26] = 1; SAADL.weights[27] = 1;
    if (id == 224) {
        return SAADL;
    }


    neuron SAADR;
    SAADR.cellID = 225;
    SAADR.threshold = 1;
    SAADR.inputsLen = 35;
    SAADR.inputs[0] = 170; SAADR.inputs[1] = 244; SAADR.inputs[2] = 244; SAADR.inputs[3] = 244; SAADR.inputs[4] = 170; SAADR.inputs[5] = 244; SAADR.inputs[6] = 170; SAADR.inputs[7] = 244; SAADR.inputs[8] = 111; SAADR.inputs[9] = 206; SAADR.inputs[10] = 244; SAADR.inputs[11] = 170; SAADR.inputs[12] = 206; SAADR.inputs[13] = 13; SAADR.inputs[14] = 3; SAADR.inputs[15] = 170; SAADR.inputs[16] = 170; SAADR.inputs[17] = 13; SAADR.inputs[18] = 13; SAADR.inputs[19] = 13; SAADR.inputs[20] = 13; SAADR.inputs[21] = 231; SAADR.inputs[22] = 14; SAADR.inputs[23] = 14; SAADR.inputs[24] = 200; SAADR.inputs[25] = 69; SAADR.inputs[26] = 200; SAADR.inputs[27] = 244; SAADR.inputs[28] = 200; SAADR.inputs[29] = 206; SAADR.inputs[30] = 226; SAADR.inputs[31] = 69; SAADR.inputs[32] = 226; SAADR.inputs[33] = 226; SAADR.inputs[34] = 189;
    SAADR.weightsLen = 35;
    SAADR.weights[0] = 1; SAADR.weights[1] = 1; SAADR.weights[2] = 1; SAADR.weights[3] = 1; SAADR.weights[4] = 1; SAADR.weights[5] = 1; SAADR.weights[6] = 1; SAADR.weights[7] = 1; SAADR.weights[8] = 1; SAADR.weights[9] = 1; SAADR.weights[10] = 1; SAADR.weights[11] = 1; SAADR.weights[12] = 1; SAADR.weights[13] = 1; SAADR.weights[14] = 1; SAADR.weights[15] = 1; SAADR.weights[16] = 1; SAADR.weights[17] = 1; SAADR.weights[18] = 1; SAADR.weights[19] = 1; SAADR.weights[20] = 1; SAADR.weights[21] = 1; SAADR.weights[22] = 1; SAADR.weights[23] = 1; SAADR.weights[24] = 1; SAADR.weights[25] = 1; SAADR.weights[26] = 1; SAADR.weights[27] = 1; SAADR.weights[28] = 1; SAADR.weights[29] = 1; SAADR.weights[30] = 1; SAADR.weights[31] = 1; SAADR.weights[32] = 1; SAADR.weights[33] = 1; SAADR.weights[34] = 1;
    if (id == 225) {
        return SAADR;
    }


    neuron SAAVL;
    SAAVL.cellID = 226;
    SAAVL.threshold = 1;
    SAAVL.inputsLen = 42;
    SAAVL.inputs[0] = 26; SAAVL.inputs[1] = 242; SAAVL.inputs[2] = 201; SAAVL.inputs[3] = 192; SAAVL.inputs[4] = 201; SAAVL.inputs[5] = 200; SAAVL.inputs[6] = 200; SAAVL.inputs[7] = 200; SAAVL.inputs[8] = 200; SAAVL.inputs[9] = 200; SAAVL.inputs[10] = 200; SAAVL.inputs[11] = 26; SAAVL.inputs[12] = 17; SAAVL.inputs[13] = 17; SAAVL.inputs[14] = 201; SAAVL.inputs[15] = 26; SAAVL.inputs[16] = 26; SAAVL.inputs[17] = 13; SAAVL.inputs[18] = 201; SAAVL.inputs[19] = 201; SAAVL.inputs[20] = 46; SAAVL.inputs[21] = 46; SAAVL.inputs[22] = 242; SAAVL.inputs[23] = 242; SAAVL.inputs[24] = 242; SAAVL.inputs[25] = 242; SAAVL.inputs[26] = 242; SAAVL.inputs[27] = 111; SAAVL.inputs[28] = 111; SAAVL.inputs[29] = 222; SAAVL.inputs[30] = 201; SAAVL.inputs[31] = 200; SAAVL.inputs[32] = 170; SAAVL.inputs[33] = 69; SAAVL.inputs[34] = 242; SAAVL.inputs[35] = 247; SAAVL.inputs[36] = 242; SAAVL.inputs[37] = 227; SAAVL.inputs[38] = 244; SAAVL.inputs[39] = 247; SAAVL.inputs[40] = 228; SAAVL.inputs[41] = 228;
    SAAVL.weightsLen = 42;
    SAAVL.weights[0] = 1; SAAVL.weights[1] = 1; SAAVL.weights[2] = 1; SAAVL.weights[3] = 1; SAAVL.weights[4] = 1; SAAVL.weights[5] = 1; SAAVL.weights[6] = 1; SAAVL.weights[7] = 1; SAAVL.weights[8] = 1; SAAVL.weights[9] = 1; SAAVL.weights[10] = 1; SAAVL.weights[11] = 1; SAAVL.weights[12] = 1; SAAVL.weights[13] = 1; SAAVL.weights[14] = 1; SAAVL.weights[15] = 1; SAAVL.weights[16] = 1; SAAVL.weights[17] = 1; SAAVL.weights[18] = 1; SAAVL.weights[19] = 1; SAAVL.weights[20] = 1; SAAVL.weights[21] = 1; SAAVL.weights[22] = 1; SAAVL.weights[23] = 1; SAAVL.weights[24] = 1; SAAVL.weights[25] = 1; SAAVL.weights[26] = 1; SAAVL.weights[27] = 1; SAAVL.weights[28] = 1; SAAVL.weights[29] = 1; SAAVL.weights[30] = 1; SAAVL.weights[31] = 1; SAAVL.weights[32] = 1; SAAVL.weights[33] = 1; SAAVL.weights[34] = 1; SAAVL.weights[35] = 1; SAAVL.weights[36] = 1; SAAVL.weights[37] = 1; SAAVL.weights[38] = 1; SAAVL.weights[39] = 1; SAAVL.weights[40] = 1; SAAVL.weights[41] = 1;
    if (id == 226) {
        return SAAVL;
    }


    neuron SAAVR;
    SAAVR.cellID = 227;
    SAAVR.threshold = 1;
    SAAVR.inputsLen = 29;
    SAAVR.inputs[0] = 241; SAAVR.inputs[1] = 200; SAAVR.inputs[2] = 200; SAAVR.inputs[3] = 201; SAAVR.inputs[4] = 201; SAAVR.inputs[5] = 201; SAAVR.inputs[6] = 201; SAAVR.inputs[7] = 245; SAAVR.inputs[8] = 218; SAAVR.inputs[9] = 201; SAAVR.inputs[10] = 227; SAAVR.inputs[11] = 27; SAAVR.inputs[12] = 241; SAAVR.inputs[13] = 241; SAAVR.inputs[14] = 14; SAAVR.inputs[15] = 201; SAAVR.inputs[16] = 241; SAAVR.inputs[17] = 111; SAAVR.inputs[18] = 27; SAAVR.inputs[19] = 200; SAAVR.inputs[20] = 200; SAAVR.inputs[21] = 243; SAAVR.inputs[22] = 245; SAAVR.inputs[23] = 245; SAAVR.inputs[24] = 245; SAAVR.inputs[25] = 245; SAAVR.inputs[26] = 241; SAAVR.inputs[27] = 243; SAAVR.inputs[28] = 243;
    SAAVR.weightsLen = 29;
    SAAVR.weights[0] = 1; SAAVR.weights[1] = 1; SAAVR.weights[2] = 1; SAAVR.weights[3] = 1; SAAVR.weights[4] = 1; SAAVR.weights[5] = 1; SAAVR.weights[6] = 1; SAAVR.weights[7] = 1; SAAVR.weights[8] = 1; SAAVR.weights[9] = 1; SAAVR.weights[10] = 1; SAAVR.weights[11] = 1; SAAVR.weights[12] = 1; SAAVR.weights[13] = 1; SAAVR.weights[14] = 1; SAAVR.weights[15] = 1; SAAVR.weights[16] = 1; SAAVR.weights[17] = 1; SAAVR.weights[18] = 1; SAAVR.weights[19] = 1; SAAVR.weights[20] = 1; SAAVR.weights[21] = 1; SAAVR.weights[22] = 1; SAAVR.weights[23] = 1; SAAVR.weights[24] = 1; SAAVR.weights[25] = 1; SAAVR.weights[26] = 1; SAAVR.weights[27] = 1; SAAVR.weights[28] = 1;
    if (id == 227) {
        return SAAVR;
    }


    neuron SABD;
    SABD.cellID = 228;
    SABD.threshold = 1;
    SABD.inputsLen = 24;
    SABD.inputs[0] = 184; SABD.inputs[1] = 111; SABD.inputs[2] = 60; SABD.inputs[3] = 226; SABD.inputs[4] = 60; SABD.inputs[5] = 60; SABD.inputs[6] = 71; SABD.inputs[7] = 60; SABD.inputs[8] = 71; SABD.inputs[9] = 61; SABD.inputs[10] = 59; SABD.inputs[11] = 60; SABD.inputs[12] = 60; SABD.inputs[13] = 60; SABD.inputs[14] = 67; SABD.inputs[15] = 71; SABD.inputs[16] = 71; SABD.inputs[17] = 117; SABD.inputs[18] = 71; SABD.inputs[19] = 71; SABD.inputs[20] = 173; SABD.inputs[21] = 60; SABD.inputs[22] = 60; SABD.inputs[23] = 173;
    SABD.weightsLen = 24;
    SABD.weights[0] = 1; SABD.weights[1] = 1; SABD.weights[2] = 1; SABD.weights[3] = 1; SABD.weights[4] = 1; SABD.weights[5] = 1; SABD.weights[6] = 1; SABD.weights[7] = 1; SABD.weights[8] = 1; SABD.weights[9] = 1; SABD.weights[10] = 1; SABD.weights[11] = 1; SABD.weights[12] = 1; SABD.weights[13] = 1; SABD.weights[14] = 1; SABD.weights[15] = 1; SABD.weights[16] = 1; SABD.weights[17] = 1; SABD.weights[18] = 1; SABD.weights[19] = 1; SABD.weights[20] = 1; SABD.weights[21] = 1; SABD.weights[22] = 1; SABD.weights[23] = 1;
    if (id == 228) {
        return SABD;
    }


    neuron SABVL;
    SABVL.cellID = 229;
    SABVL.threshold = 1;
    SABVL.inputsLen = 11;
    SABVL.inputs[0] = 68; SABVL.inputs[1] = 71; SABVL.inputs[2] = 71; SABVL.inputs[3] = 71; SABVL.inputs[4] = 60; SABVL.inputs[5] = 71; SABVL.inputs[6] = 59; SABVL.inputs[7] = 71; SABVL.inputs[8] = 60; SABVL.inputs[9] = 59; SABVL.inputs[10] = 59;
    SABVL.weightsLen = 11;
    SABVL.weights[0] = 1; SABVL.weights[1] = 1; SABVL.weights[2] = 1; SABVL.weights[3] = 1; SABVL.weights[4] = 1; SABVL.weights[5] = 1; SABVL.weights[6] = 1; SABVL.weights[7] = 1; SABVL.weights[8] = 1; SABVL.weights[9] = 1; SABVL.weights[10] = 1;
    if (id == 229) {
        return SABVL;
    }


    neuron SABVR;
    SABVR.cellID = 230;
    SABVR.threshold = 1;
    SABVR.inputsLen = 12;
    SABVR.inputs[0] = 60; SABVR.inputs[1] = 60; SABVR.inputs[2] = 71; SABVR.inputs[3] = 61; SABVR.inputs[4] = 60; SABVR.inputs[5] = 61; SABVR.inputs[6] = 60; SABVR.inputs[7] = 71; SABVR.inputs[8] = 117; SABVR.inputs[9] = 71; SABVR.inputs[10] = 173; SABVR.inputs[11] = 173;
    SABVR.weightsLen = 12;
    SABVR.weights[0] = 1; SABVR.weights[1] = 1; SABVR.weights[2] = 1; SABVR.weights[3] = 1; SABVR.weights[4] = 1; SABVR.weights[5] = 1; SABVR.weights[6] = 1; SABVR.weights[7] = 1; SABVR.weights[8] = 1; SABVR.weights[9] = 1; SABVR.weights[10] = 1; SABVR.weights[11] = 1;
    if (id == 230) {
        return SABVR;
    }


    neuron SDQL;
    SDQL.cellID = 231;
    SDQL.threshold = 1;
    SDQL.inputsLen = 8;
    SDQL.inputs[0] = 232; SDQL.inputs[1] = 24; SDQL.inputs[2] = 232; SDQL.inputs[3] = 232; SDQL.inputs[4] = 56; SDQL.inputs[5] = 82; SDQL.inputs[6] = 232; SDQL.inputs[7] = 234;
    SDQL.weightsLen = 8;
    SDQL.weights[0] = 1; SDQL.weights[1] = 1; SDQL.weights[2] = 1; SDQL.weights[3] = 1; SDQL.weights[4] = 1; SDQL.weights[5] = 1; SDQL.weights[6] = 1; SDQL.weights[7] = 1;
    if (id == 231) {
        return SDQL;
    }


    neuron SDQR;
    SDQR.cellID = 232;
    SDQR.threshold = 1;
    SDQR.inputsLen = 6;
    SDQR.inputs[0] = 184; SDQR.inputs[1] = 184; SDQR.inputs[2] = 184; SDQR.inputs[3] = 184; SDQR.inputs[4] = 236; SDQR.inputs[5] = 237;
    SDQR.weightsLen = 6;
    SDQR.weights[0] = 1; SDQR.weights[1] = 1; SDQR.weights[2] = 1; SDQR.weights[3] = 1; SDQR.weights[4] = 1; SDQR.weights[5] = 1;
    if (id == 232) {
        return SDQR;
    }


    neuron SIADL;
    SIADL.cellID = 233;
    SIADL.threshold = 1;
    SIADL.inputsLen = 13;
    SIADL.inputs[0] = 256; SIADL.inputs[1] = 241; SIADL.inputs[2] = 25; SIADL.inputs[3] = 221; SIADL.inputs[4] = 254; SIADL.inputs[5] = 188; SIADL.inputs[6] = 188; SIADL.inputs[7] = 14; SIADL.inputs[8] = 70; SIADL.inputs[9] = 254; SIADL.inputs[10] = 241; SIADL.inputs[11] = 241; SIADL.inputs[12] = 240;
    SIADL.weightsLen = 13;
    SIADL.weights[0] = 1; SIADL.weights[1] = 1; SIADL.weights[2] = 1; SIADL.weights[3] = 1; SIADL.weights[4] = 1; SIADL.weights[5] = 1; SIADL.weights[6] = 1; SIADL.weights[7] = 1; SIADL.weights[8] = 1; SIADL.weights[9] = 1; SIADL.weights[10] = 1; SIADL.weights[11] = 1; SIADL.weights[12] = 1;
    if (id == 233) {
        return SIADL;
    }


    neuron SIADR;
    SIADR.cellID = 234;
    SIADR.threshold = 1;
    SIADR.inputsLen = 18;
    SIADR.inputs[0] = 3; SIADR.inputs[1] = 13; SIADR.inputs[2] = 189; SIADR.inputs[3] = 247; SIADR.inputs[4] = 85; SIADR.inputs[5] = 85; SIADR.inputs[6] = 253; SIADR.inputs[7] = 26; SIADR.inputs[8] = 189; SIADR.inputs[9] = 189; SIADR.inputs[10] = 242; SIADR.inputs[11] = 22; SIADR.inputs[12] = 137; SIADR.inputs[13] = 242; SIADR.inputs[14] = 246; SIADR.inputs[15] = 242; SIADR.inputs[16] = 242; SIADR.inputs[17] = 242;
    SIADR.weightsLen = 18;
    SIADR.weights[0] = 1; SIADR.weights[1] = 1; SIADR.weights[2] = 1; SIADR.weights[3] = 1; SIADR.weights[4] = 1; SIADR.weights[5] = 1; SIADR.weights[6] = 1; SIADR.weights[7] = 1; SIADR.weights[8] = 1; SIADR.weights[9] = 1; SIADR.weights[10] = 1; SIADR.weights[11] = 1; SIADR.weights[12] = 1; SIADR.weights[13] = 1; SIADR.weights[14] = 1; SIADR.weights[15] = 1; SIADR.weights[16] = 1; SIADR.weights[17] = 1;
    if (id == 234) {
        return SIADR;
    }


    neuron SIAVL;
    SIAVL.cellID = 235;
    SIAVL.threshold = 1;
    SIAVL.inputsLen = 20;
    SIAVL.inputs[0] = 87; SIAVL.inputs[1] = 207; SIAVL.inputs[2] = 207; SIAVL.inputs[3] = 189; SIAVL.inputs[4] = 189; SIAVL.inputs[5] = 189; SIAVL.inputs[6] = 189; SIAVL.inputs[7] = 189; SIAVL.inputs[8] = 253; SIAVL.inputs[9] = 207; SIAVL.inputs[10] = 213; SIAVL.inputs[11] = 189; SIAVL.inputs[12] = 189; SIAVL.inputs[13] = 207; SIAVL.inputs[14] = 211; SIAVL.inputs[15] = 241; SIAVL.inputs[16] = 241; SIAVL.inputs[17] = 239; SIAVL.inputs[18] = 239; SIAVL.inputs[19] = 237;
    SIAVL.weightsLen = 20;
    SIAVL.weights[0] = 1; SIAVL.weights[1] = 1; SIAVL.weights[2] = 1; SIAVL.weights[3] = 1; SIAVL.weights[4] = 1; SIAVL.weights[5] = 1; SIAVL.weights[6] = 1; SIAVL.weights[7] = 1; SIAVL.weights[8] = 1; SIAVL.weights[9] = 1; SIAVL.weights[10] = 1; SIAVL.weights[11] = 1; SIAVL.weights[12] = 1; SIAVL.weights[13] = 1; SIAVL.weights[14] = 1; SIAVL.weights[15] = 1; SIAVL.weights[16] = 1; SIAVL.weights[17] = 1; SIAVL.weights[18] = 1; SIAVL.weights[19] = 1;
    if (id == 235) {
        return SIAVL;
    }


    neuron SIAVR;
    SIAVR.cellID = 236;
    SIAVR.threshold = 1;
    SIAVR.inputsLen = 18;
    SIAVR.inputs[0] = 206; SIAVR.inputs[1] = 88; SIAVR.inputs[2] = 88; SIAVR.inputs[3] = 88; SIAVR.inputs[4] = 188; SIAVR.inputs[5] = 206; SIAVR.inputs[6] = 206; SIAVR.inputs[7] = 221; SIAVR.inputs[8] = 256; SIAVR.inputs[9] = 254; SIAVR.inputs[10] = 13; SIAVR.inputs[11] = 242; SIAVR.inputs[12] = 212; SIAVR.inputs[13] = 212; SIAVR.inputs[14] = 88; SIAVR.inputs[15] = 240; SIAVR.inputs[16] = 69; SIAVR.inputs[17] = 254;
    SIAVR.weightsLen = 18;
    SIAVR.weights[0] = 1; SIAVR.weights[1] = 1; SIAVR.weights[2] = 1; SIAVR.weights[3] = 1; SIAVR.weights[4] = 1; SIAVR.weights[5] = 1; SIAVR.weights[6] = 1; SIAVR.weights[7] = 1; SIAVR.weights[8] = 1; SIAVR.weights[9] = 1; SIAVR.weights[10] = 1; SIAVR.weights[11] = 1; SIAVR.weights[12] = 1; SIAVR.weights[13] = 1; SIAVR.weights[14] = 1; SIAVR.weights[15] = 1; SIAVR.weights[16] = 1; SIAVR.weights[17] = 1;
    if (id == 236) {
        return SIAVR;
    }


    neuron SIBDL;
    SIBDL.cellID = 237;
    SIBDL.threshold = 1;
    SIBDL.inputsLen = 10;
    SIBDL.inputs[0] = 85; SIBDL.inputs[1] = 224; SIBDL.inputs[2] = 154; SIBDL.inputs[3] = 154; SIBDL.inputs[4] = 154; SIBDL.inputs[5] = 154; SIBDL.inputs[6] = 126; SIBDL.inputs[7] = 154; SIBDL.inputs[8] = 239; SIBDL.inputs[9] = 239;
    SIBDL.weightsLen = 10;
    SIBDL.weights[0] = 1; SIBDL.weights[1] = 1; SIBDL.weights[2] = 1; SIBDL.weights[3] = 1; SIBDL.weights[4] = 1; SIBDL.weights[5] = 1; SIBDL.weights[6] = 1; SIBDL.weights[7] = 1; SIBDL.weights[8] = 1; SIBDL.weights[9] = 1;
    if (id == 237) {
        return SIBDL;
    }


    neuron SIBDR;
    SIBDR.cellID = 238;
    SIBDR.threshold = 1;
    SIBDR.inputsLen = 13;
    SIBDR.inputs[0] = 210; SIBDR.inputs[1] = 13; SIBDR.inputs[2] = 232; SIBDR.inputs[3] = 213; SIBDR.inputs[4] = 254; SIBDR.inputs[5] = 224; SIBDR.inputs[6] = 86; SIBDR.inputs[7] = 155; SIBDR.inputs[8] = 222; SIBDR.inputs[9] = 239; SIBDR.inputs[10] = 239; SIBDR.inputs[11] = 241; SIBDR.inputs[12] = 240;
    SIBDR.weightsLen = 13;
    SIBDR.weights[0] = 1; SIBDR.weights[1] = 1; SIBDR.weights[2] = 1; SIBDR.weights[3] = 1; SIBDR.weights[4] = 1; SIBDR.weights[5] = 1; SIBDR.weights[6] = 1; SIBDR.weights[7] = 1; SIBDR.weights[8] = 1; SIBDR.weights[9] = 1; SIBDR.weights[10] = 1; SIBDR.weights[11] = 1; SIBDR.weights[12] = 1;
    if (id == 238) {
        return SIBDR;
    }


    neuron SIBVL;
    SIBVL.cellID = 239;
    SIBVL.threshold = 1;
    SIBVL.inputsLen = 28;
    SIBVL.inputs[0] = 260; SIBVL.inputs[1] = 221; SIBVL.inputs[2] = 213; SIBVL.inputs[3] = 245; SIBVL.inputs[4] = 231; SIBVL.inputs[5] = 207; SIBVL.inputs[6] = 259; SIBVL.inputs[7] = 173; SIBVL.inputs[8] = 260; SIBVL.inputs[9] = 173; SIBVL.inputs[10] = 253; SIBVL.inputs[11] = 245; SIBVL.inputs[12] = 224; SIBVL.inputs[13] = 156; SIBVL.inputs[14] = 156; SIBVL.inputs[15] = 156; SIBVL.inputs[16] = 156; SIBVL.inputs[17] = 156; SIBVL.inputs[18] = 8; SIBVL.inputs[19] = 173; SIBVL.inputs[20] = 173; SIBVL.inputs[21] = 243; SIBVL.inputs[22] = 247; SIBVL.inputs[23] = 241; SIBVL.inputs[24] = 240; SIBVL.inputs[25] = 245; SIBVL.inputs[26] = 245; SIBVL.inputs[27] = 245;
    SIBVL.weightsLen = 28;
    SIBVL.weights[0] = 1; SIBVL.weights[1] = 1; SIBVL.weights[2] = 1; SIBVL.weights[3] = 1; SIBVL.weights[4] = 1; SIBVL.weights[5] = 1; SIBVL.weights[6] = 1; SIBVL.weights[7] = 1; SIBVL.weights[8] = 1; SIBVL.weights[9] = 1; SIBVL.weights[10] = 1; SIBVL.weights[11] = 1; SIBVL.weights[12] = 1; SIBVL.weights[13] = 1; SIBVL.weights[14] = 1; SIBVL.weights[15] = 1; SIBVL.weights[16] = 1; SIBVL.weights[17] = 1; SIBVL.weights[18] = 1; SIBVL.weights[19] = 1; SIBVL.weights[20] = 1; SIBVL.weights[21] = 1; SIBVL.weights[22] = 1; SIBVL.weights[23] = 1; SIBVL.weights[24] = 1; SIBVL.weights[25] = 1; SIBVL.weights[26] = 1; SIBVL.weights[27] = 1;
    if (id == 239) {
        return SIBVL;
    }


    neuron SIBVR;
    SIBVR.cellID = 240;
    SIBVR.threshold = 1;
    SIBVR.inputsLen = 22;
    SIBVR.inputs[0] = 174; SIBVR.inputs[1] = 157; SIBVR.inputs[2] = 157; SIBVR.inputs[3] = 157; SIBVR.inputs[4] = 260; SIBVR.inputs[5] = 174; SIBVR.inputs[6] = 259; SIBVR.inputs[7] = 246; SIBVR.inputs[8] = 3; SIBVR.inputs[9] = 85; SIBVR.inputs[10] = 212; SIBVR.inputs[11] = 246; SIBVR.inputs[12] = 14; SIBVR.inputs[13] = 259; SIBVR.inputs[14] = 259; SIBVR.inputs[15] = 174; SIBVR.inputs[16] = 14; SIBVR.inputs[17] = 254; SIBVR.inputs[18] = 174; SIBVR.inputs[19] = 69; SIBVR.inputs[20] = 174; SIBVR.inputs[21] = 241;
    SIBVR.weightsLen = 22;
    SIBVR.weights[0] = 1; SIBVR.weights[1] = 1; SIBVR.weights[2] = 1; SIBVR.weights[3] = 1; SIBVR.weights[4] = 1; SIBVR.weights[5] = 1; SIBVR.weights[6] = 1; SIBVR.weights[7] = 1; SIBVR.weights[8] = 1; SIBVR.weights[9] = 1; SIBVR.weights[10] = 1; SIBVR.weights[11] = 1; SIBVR.weights[12] = 1; SIBVR.weights[13] = 1; SIBVR.weights[14] = 1; SIBVR.weights[15] = 1; SIBVR.weights[16] = 1; SIBVR.weights[17] = 1; SIBVR.weights[18] = 1; SIBVR.weights[19] = 1; SIBVR.weights[20] = 1; SIBVR.weights[21] = 1;
    if (id == 240) {
        return SIBVR;
    }


    neuron SMBDL;
    SMBDL.cellID = 241;
    SMBDL.threshold = 1;
    SMBDL.inputsLen = 34;
    SMBDL.inputs[0] = 21; SMBDL.inputs[1] = 21; SMBDL.inputs[2] = 111; SMBDL.inputs[3] = 21; SMBDL.inputs[4] = 66; SMBDL.inputs[5] = 21; SMBDL.inputs[6] = 75; SMBDL.inputs[7] = 254; SMBDL.inputs[8] = 254; SMBDL.inputs[9] = 111; SMBDL.inputs[10] = 243; SMBDL.inputs[11] = 111; SMBDL.inputs[12] = 111; SMBDL.inputs[13] = 5; SMBDL.inputs[14] = 233; SMBDL.inputs[15] = 192; SMBDL.inputs[16] = 66; SMBDL.inputs[17] = 21; SMBDL.inputs[18] = 192; SMBDL.inputs[19] = 192; SMBDL.inputs[20] = 207; SMBDL.inputs[21] = 227; SMBDL.inputs[22] = 27; SMBDL.inputs[23] = 27; SMBDL.inputs[24] = 86; SMBDL.inputs[25] = 66; SMBDL.inputs[26] = 21; SMBDL.inputs[27] = 70; SMBDL.inputs[28] = 21; SMBDL.inputs[29] = 21; SMBDL.inputs[30] = 21; SMBDL.inputs[31] = 242; SMBDL.inputs[32] = 21; SMBDL.inputs[33] = 21;
    SMBDL.weightsLen = 34;
    SMBDL.weights[0] = 1; SMBDL.weights[1] = 1; SMBDL.weights[2] = 1; SMBDL.weights[3] = 1; SMBDL.weights[4] = 1; SMBDL.weights[5] = 1; SMBDL.weights[6] = 1; SMBDL.weights[7] = 1; SMBDL.weights[8] = 1; SMBDL.weights[9] = 1; SMBDL.weights[10] = 1; SMBDL.weights[11] = 1; SMBDL.weights[12] = 1; SMBDL.weights[13] = 1; SMBDL.weights[14] = 1; SMBDL.weights[15] = 1; SMBDL.weights[16] = 1; SMBDL.weights[17] = 1; SMBDL.weights[18] = 1; SMBDL.weights[19] = 1; SMBDL.weights[20] = 1; SMBDL.weights[21] = 1; SMBDL.weights[22] = 1; SMBDL.weights[23] = 1; SMBDL.weights[24] = 1; SMBDL.weights[25] = 1; SMBDL.weights[26] = 1; SMBDL.weights[27] = 1; SMBDL.weights[28] = 1; SMBDL.weights[29] = 1; SMBDL.weights[30] = 1; SMBDL.weights[31] = 1; SMBDL.weights[32] = 1; SMBDL.weights[33] = 1;
    if (id == 241) {
        return SMBDL;
    }


    neuron SMBDR;
    SMBDR.cellID = 242;
    SMBDR.threshold = 1;
    SMBDR.inputsLen = 40;
    SMBDR.inputs[0] = 65; SMBDR.inputs[1] = 111; SMBDR.inputs[2] = 26; SMBDR.inputs[3] = 24; SMBDR.inputs[4] = 111; SMBDR.inputs[5] = 22; SMBDR.inputs[6] = 193; SMBDR.inputs[7] = 193; SMBDR.inputs[8] = 26; SMBDR.inputs[9] = 3; SMBDR.inputs[10] = 65; SMBDR.inputs[11] = 244; SMBDR.inputs[12] = 189; SMBDR.inputs[13] = 234; SMBDR.inputs[14] = 85; SMBDR.inputs[15] = 111; SMBDR.inputs[16] = 244; SMBDR.inputs[17] = 260; SMBDR.inputs[18] = 213; SMBDR.inputs[19] = 226; SMBDR.inputs[20] = 26; SMBDR.inputs[21] = 225; SMBDR.inputs[22] = 225; SMBDR.inputs[23] = 85; SMBDR.inputs[24] = 253; SMBDR.inputs[25] = 192; SMBDR.inputs[26] = 85; SMBDR.inputs[27] = 188; SMBDR.inputs[28] = 111; SMBDR.inputs[29] = 22; SMBDR.inputs[30] = 22; SMBDR.inputs[31] = 22; SMBDR.inputs[32] = 22; SMBDR.inputs[33] = 6; SMBDR.inputs[34] = 6; SMBDR.inputs[35] = 22; SMBDR.inputs[36] = 22; SMBDR.inputs[37] = 244; SMBDR.inputs[38] = 246; SMBDR.inputs[39] = 244;
    SMBDR.weightsLen = 40;
    SMBDR.weights[0] = 1; SMBDR.weights[1] = 1; SMBDR.weights[2] = 1; SMBDR.weights[3] = 1; SMBDR.weights[4] = 1; SMBDR.weights[5] = 1; SMBDR.weights[6] = 1; SMBDR.weights[7] = 1; SMBDR.weights[8] = 1; SMBDR.weights[9] = 1; SMBDR.weights[10] = 1; SMBDR.weights[11] = 1; SMBDR.weights[12] = 1; SMBDR.weights[13] = 1; SMBDR.weights[14] = 1; SMBDR.weights[15] = 1; SMBDR.weights[16] = 1; SMBDR.weights[17] = 1; SMBDR.weights[18] = 1; SMBDR.weights[19] = 1; SMBDR.weights[20] = 1; SMBDR.weights[21] = 1; SMBDR.weights[22] = 1; SMBDR.weights[23] = 1; SMBDR.weights[24] = 1; SMBDR.weights[25] = 1; SMBDR.weights[26] = 1; SMBDR.weights[27] = 1; SMBDR.weights[28] = 1; SMBDR.weights[29] = 1; SMBDR.weights[30] = 1; SMBDR.weights[31] = 1; SMBDR.weights[32] = 1; SMBDR.weights[33] = 1; SMBDR.weights[34] = 1; SMBDR.weights[35] = 1; SMBDR.weights[36] = 1; SMBDR.weights[37] = 1; SMBDR.weights[38] = 1; SMBDR.weights[39] = 1;
    if (id == 242) {
        return SMBDR;
    }


    neuron SMBVL;
    SMBVL.cellID = 243;
    SMBVL.threshold = 1;
    SMBVL.inputsLen = 37;
    SMBVL.inputs[0] = 5; SMBVL.inputs[1] = 111; SMBVL.inputs[2] = 5; SMBVL.inputs[3] = 21; SMBVL.inputs[4] = 21; SMBVL.inputs[5] = 21; SMBVL.inputs[6] = 5; SMBVL.inputs[7] = 171; SMBVL.inputs[8] = 75; SMBVL.inputs[9] = 15; SMBVL.inputs[10] = 15; SMBVL.inputs[11] = 7; SMBVL.inputs[12] = 241; SMBVL.inputs[13] = 241; SMBVL.inputs[14] = 111; SMBVL.inputs[15] = 111; SMBVL.inputs[16] = 5; SMBVL.inputs[17] = 75; SMBVL.inputs[18] = 15; SMBVL.inputs[19] = 171; SMBVL.inputs[20] = 87; SMBVL.inputs[21] = 253; SMBVL.inputs[22] = 62; SMBVL.inputs[23] = 237; SMBVL.inputs[24] = 7; SMBVL.inputs[25] = 5; SMBVL.inputs[26] = 5; SMBVL.inputs[27] = 3; SMBVL.inputs[28] = 66; SMBVL.inputs[29] = 21; SMBVL.inputs[30] = 171; SMBVL.inputs[31] = 171; SMBVL.inputs[32] = 21; SMBVL.inputs[33] = 21; SMBVL.inputs[34] = 21; SMBVL.inputs[35] = 21; SMBVL.inputs[36] = 21;
    SMBVL.weightsLen = 37;
    SMBVL.weights[0] = 1; SMBVL.weights[1] = 1; SMBVL.weights[2] = 1; SMBVL.weights[3] = 1; SMBVL.weights[4] = 1; SMBVL.weights[5] = 1; SMBVL.weights[6] = 1; SMBVL.weights[7] = 1; SMBVL.weights[8] = 1; SMBVL.weights[9] = 1; SMBVL.weights[10] = 1; SMBVL.weights[11] = 1; SMBVL.weights[12] = 1; SMBVL.weights[13] = 1; SMBVL.weights[14] = 1; SMBVL.weights[15] = 1; SMBVL.weights[16] = 1; SMBVL.weights[17] = 1; SMBVL.weights[18] = 1; SMBVL.weights[19] = 1; SMBVL.weights[20] = 1; SMBVL.weights[21] = 1; SMBVL.weights[22] = 1; SMBVL.weights[23] = 1; SMBVL.weights[24] = 1; SMBVL.weights[25] = 1; SMBVL.weights[26] = 1; SMBVL.weights[27] = 1; SMBVL.weights[28] = 1; SMBVL.weights[29] = 1; SMBVL.weights[30] = 1; SMBVL.weights[31] = 1; SMBVL.weights[32] = 1; SMBVL.weights[33] = 1; SMBVL.weights[34] = 1; SMBVL.weights[35] = 1; SMBVL.weights[36] = 1;
    if (id == 243) {
        return SMBVL;
    }


    neuron SMBVR;
    SMBVR.cellID = 244;
    SMBVR.threshold = 1;
    SMBVR.inputsLen = 37;
    SMBVR.inputs[0] = 65; SMBVR.inputs[1] = 111; SMBVR.inputs[2] = 170; SMBVR.inputs[3] = 22; SMBVR.inputs[4] = 170; SMBVR.inputs[5] = 170; SMBVR.inputs[6] = 170; SMBVR.inputs[7] = 22; SMBVR.inputs[8] = 6; SMBVR.inputs[9] = 111; SMBVR.inputs[10] = 170; SMBVR.inputs[11] = 6; SMBVR.inputs[12] = 6; SMBVR.inputs[13] = 8; SMBVR.inputs[14] = 256; SMBVR.inputs[15] = 254; SMBVR.inputs[16] = 88; SMBVR.inputs[17] = 170; SMBVR.inputs[18] = 170; SMBVR.inputs[19] = 225; SMBVR.inputs[20] = 65; SMBVR.inputs[21] = 8; SMBVR.inputs[22] = 45; SMBVR.inputs[23] = 173; SMBVR.inputs[24] = 189; SMBVR.inputs[25] = 45; SMBVR.inputs[26] = 173; SMBVR.inputs[27] = 221; SMBVR.inputs[28] = 210; SMBVR.inputs[29] = 210; SMBVR.inputs[30] = 256; SMBVR.inputs[31] = 111; SMBVR.inputs[32] = 111; SMBVR.inputs[33] = 22; SMBVR.inputs[34] = 22; SMBVR.inputs[35] = 170; SMBVR.inputs[36] = 254;
    SMBVR.weightsLen = 37;
    SMBVR.weights[0] = 1; SMBVR.weights[1] = 1; SMBVR.weights[2] = 1; SMBVR.weights[3] = 1; SMBVR.weights[4] = 1; SMBVR.weights[5] = 1; SMBVR.weights[6] = 1; SMBVR.weights[7] = 1; SMBVR.weights[8] = 1; SMBVR.weights[9] = 1; SMBVR.weights[10] = 1; SMBVR.weights[11] = 1; SMBVR.weights[12] = 1; SMBVR.weights[13] = 1; SMBVR.weights[14] = 1; SMBVR.weights[15] = 1; SMBVR.weights[16] = 1; SMBVR.weights[17] = 1; SMBVR.weights[18] = 1; SMBVR.weights[19] = 1; SMBVR.weights[20] = 1; SMBVR.weights[21] = 1; SMBVR.weights[22] = 1; SMBVR.weights[23] = 1; SMBVR.weights[24] = 1; SMBVR.weights[25] = 1; SMBVR.weights[26] = 1; SMBVR.weights[27] = 1; SMBVR.weights[28] = 1; SMBVR.weights[29] = 1; SMBVR.weights[30] = 1; SMBVR.weights[31] = 1; SMBVR.weights[32] = 1; SMBVR.weights[33] = 1; SMBVR.weights[34] = 1; SMBVR.weights[35] = 1; SMBVR.weights[36] = 1;
    if (id == 244) {
        return SMBVR;
    }


    neuron SMDDL;
    SMDDL.cellID = 245;
    SMDDL.threshold = 1;
    SMDDL.inputsLen = 97;
    SMDDL.inputs[0] = 248; SMDDL.inputs[1] = 241; SMDDL.inputs[2] = 188; SMDDL.inputs[3] = 188; SMDDL.inputs[4] = 200; SMDDL.inputs[5] = 193; SMDDL.inputs[6] = 227; SMDDL.inputs[7] = 14; SMDDL.inputs[8] = 14; SMDDL.inputs[9] = 14; SMDDL.inputs[10] = 207; SMDDL.inputs[11] = 193; SMDDL.inputs[12] = 188; SMDDL.inputs[13] = 200; SMDDL.inputs[14] = 227; SMDDL.inputs[15] = 227; SMDDL.inputs[16] = 227; SMDDL.inputs[17] = 188; SMDDL.inputs[18] = 189; SMDDL.inputs[19] = 188; SMDDL.inputs[20] = 189; SMDDL.inputs[21] = 188; SMDDL.inputs[22] = 248; SMDDL.inputs[23] = 248; SMDDL.inputs[24] = 189; SMDDL.inputs[25] = 227; SMDDL.inputs[26] = 192; SMDDL.inputs[27] = 189; SMDDL.inputs[28] = 189; SMDDL.inputs[29] = 192; SMDDL.inputs[30] = 189; SMDDL.inputs[31] = 189; SMDDL.inputs[32] = 192; SMDDL.inputs[33] = 189; SMDDL.inputs[34] = 153; SMDDL.inputs[35] = 153; SMDDL.inputs[36] = 14; SMDDL.inputs[37] = 193; SMDDL.inputs[38] = 201; SMDDL.inputs[39] = 188; SMDDL.inputs[40] = 201; SMDDL.inputs[41] = 201; SMDDL.inputs[42] = 258; SMDDL.inputs[43] = 258; SMDDL.inputs[44] = 258; SMDDL.inputs[45] = 258; SMDDL.inputs[46] = 205; SMDDL.inputs[47] = 201; SMDDL.inputs[48] = 201; SMDDL.inputs[49] = 25; SMDDL.inputs[50] = 188; SMDDL.inputs[51] = 239; SMDDL.inputs[52] = 200; SMDDL.inputs[53] = 258; SMDDL.inputs[54] = 191; SMDDL.inputs[55] = 188; SMDDL.inputs[56] = 189; SMDDL.inputs[57] = 188; SMDDL.inputs[58] = 188; SMDDL.inputs[59] = 14; SMDDL.inputs[60] = 14; SMDDL.inputs[61] = 192; SMDDL.inputs[62] = 189; SMDDL.inputs[63] = 189; SMDDL.inputs[64] = 189; SMDDL.inputs[65] = 189; SMDDL.inputs[66] = 223; SMDDL.inputs[67] = 189; SMDDL.inputs[68] = 189; SMDDL.inputs[69] = 246; SMDDL.inputs[70] = 246; SMDDL.inputs[71] = 189; SMDDL.inputs[72] = 152; SMDDL.inputs[73] = 257; SMDDL.inputs[74] = 257; SMDDL.inputs[75] = 152; SMDDL.inputs[76] = 152; SMDDL.inputs[77] = 152; SMDDL.inputs[78] = 152; SMDDL.inputs[79] = 193; SMDDL.inputs[80] = 207; SMDDL.inputs[81] = 192; SMDDL.inputs[82] = 227; SMDDL.inputs[83] = 227; SMDDL.inputs[84] = 246; SMDDL.inputs[85] = 207; SMDDL.inputs[86] = 201; SMDDL.inputs[87] = 246; SMDDL.inputs[88] = 193; SMDDL.inputs[89] = 153; SMDDL.inputs[90] = 214; SMDDL.inputs[91] = 152; SMDDL.inputs[92] = 189; SMDDL.inputs[93] = 207; SMDDL.inputs[94] = 227; SMDDL.inputs[95] = 200; SMDDL.inputs[96] = 227;
    SMDDL.weightsLen = 97;
    SMDDL.weights[0] = 1; SMDDL.weights[1] = 1; SMDDL.weights[2] = 1; SMDDL.weights[3] = 1; SMDDL.weights[4] = 1; SMDDL.weights[5] = 1; SMDDL.weights[6] = 1; SMDDL.weights[7] = 1; SMDDL.weights[8] = 1; SMDDL.weights[9] = 1; SMDDL.weights[10] = 1; SMDDL.weights[11] = 1; SMDDL.weights[12] = 1; SMDDL.weights[13] = 1; SMDDL.weights[14] = 1; SMDDL.weights[15] = 1; SMDDL.weights[16] = 1; SMDDL.weights[17] = 1; SMDDL.weights[18] = 1; SMDDL.weights[19] = 1; SMDDL.weights[20] = 1; SMDDL.weights[21] = 1; SMDDL.weights[22] = 1; SMDDL.weights[23] = 1; SMDDL.weights[24] = 1; SMDDL.weights[25] = 1; SMDDL.weights[26] = 1; SMDDL.weights[27] = 1; SMDDL.weights[28] = 1; SMDDL.weights[29] = 1; SMDDL.weights[30] = 1; SMDDL.weights[31] = 1; SMDDL.weights[32] = 1; SMDDL.weights[33] = 1; SMDDL.weights[34] = 1; SMDDL.weights[35] = 1; SMDDL.weights[36] = 1; SMDDL.weights[37] = 1; SMDDL.weights[38] = 1; SMDDL.weights[39] = 1; SMDDL.weights[40] = 1; SMDDL.weights[41] = 1; SMDDL.weights[42] = 1; SMDDL.weights[43] = 1; SMDDL.weights[44] = 1; SMDDL.weights[45] = 1; SMDDL.weights[46] = 1; SMDDL.weights[47] = 1; SMDDL.weights[48] = 1; SMDDL.weights[49] = 1; SMDDL.weights[50] = 1; SMDDL.weights[51] = 1; SMDDL.weights[52] = 1; SMDDL.weights[53] = 1; SMDDL.weights[54] = 1; SMDDL.weights[55] = 1; SMDDL.weights[56] = 1; SMDDL.weights[57] = 1; SMDDL.weights[58] = 1; SMDDL.weights[59] = 1; SMDDL.weights[60] = 1; SMDDL.weights[61] = 1; SMDDL.weights[62] = 1; SMDDL.weights[63] = 1; SMDDL.weights[64] = 1; SMDDL.weights[65] = 1; SMDDL.weights[66] = 1; SMDDL.weights[67] = 1; SMDDL.weights[68] = 1; SMDDL.weights[69] = 1; SMDDL.weights[70] = 1; SMDDL.weights[71] = 1; SMDDL.weights[72] = 1; SMDDL.weights[73] = 1; SMDDL.weights[74] = 1; SMDDL.weights[75] = 1; SMDDL.weights[76] = 1; SMDDL.weights[77] = 1; SMDDL.weights[78] = 1; SMDDL.weights[79] = 1; SMDDL.weights[80] = 1; SMDDL.weights[81] = 1; SMDDL.weights[82] = 1; SMDDL.weights[83] = 1; SMDDL.weights[84] = 1; SMDDL.weights[85] = 1; SMDDL.weights[86] = 1; SMDDL.weights[87] = 1; SMDDL.weights[88] = 1; SMDDL.weights[89] = 1; SMDDL.weights[90] = 1; SMDDL.weights[91] = 1; SMDDL.weights[92] = 1; SMDDL.weights[93] = 1; SMDDL.weights[94] = 1; SMDDL.weights[95] = 1; SMDDL.weights[96] = 1;
    if (id == 245) {
        return SMDDL;
    }


    neuron SMDDR;
    SMDDR.cellID = 246;
    SMDDR.threshold = 1;
    SMDDR.inputsLen = 115;
    SMDDR.inputs[0] = 247; SMDDR.inputs[1] = 13; SMDDR.inputs[2] = 201; SMDDR.inputs[3] = 226; SMDDR.inputs[4] = 13; SMDDR.inputs[5] = 13; SMDDR.inputs[6] = 226; SMDDR.inputs[7] = 192; SMDDR.inputs[8] = 226; SMDDR.inputs[9] = 192; SMDDR.inputs[10] = 226; SMDDR.inputs[11] = 192; SMDDR.inputs[12] = 226; SMDDR.inputs[13] = 226; SMDDR.inputs[14] = 193; SMDDR.inputs[15] = 13; SMDDR.inputs[16] = 13; SMDDR.inputs[17] = 201; SMDDR.inputs[18] = 247; SMDDR.inputs[19] = 189; SMDDR.inputs[20] = 189; SMDDR.inputs[21] = 206; SMDDR.inputs[22] = 247; SMDDR.inputs[23] = 189; SMDDR.inputs[24] = 189; SMDDR.inputs[25] = 247; SMDDR.inputs[26] = 189; SMDDR.inputs[27] = 247; SMDDR.inputs[28] = 189; SMDDR.inputs[29] = 189; SMDDR.inputs[30] = 88; SMDDR.inputs[31] = 206; SMDDR.inputs[32] = 189; SMDDR.inputs[33] = 188; SMDDR.inputs[34] = 188; SMDDR.inputs[35] = 189; SMDDR.inputs[36] = 188; SMDDR.inputs[37] = 188; SMDDR.inputs[38] = 188; SMDDR.inputs[39] = 247; SMDDR.inputs[40] = 247; SMDDR.inputs[41] = 206; SMDDR.inputs[42] = 188; SMDDR.inputs[43] = 188; SMDDR.inputs[44] = 188; SMDDR.inputs[45] = 247; SMDDR.inputs[46] = 214; SMDDR.inputs[47] = 200; SMDDR.inputs[48] = 70; SMDDR.inputs[49] = 70; SMDDR.inputs[50] = 188; SMDDR.inputs[51] = 200; SMDDR.inputs[52] = 205; SMDDR.inputs[53] = 200; SMDDR.inputs[54] = 200; SMDDR.inputs[55] = 200; SMDDR.inputs[56] = 200; SMDDR.inputs[57] = 206; SMDDR.inputs[58] = 200; SMDDR.inputs[59] = 193; SMDDR.inputs[60] = 205; SMDDR.inputs[61] = 192; SMDDR.inputs[62] = 193; SMDDR.inputs[63] = 201; SMDDR.inputs[64] = 13; SMDDR.inputs[65] = 188; SMDDR.inputs[66] = 245; SMDDR.inputs[67] = 201; SMDDR.inputs[68] = 201; SMDDR.inputs[69] = 201; SMDDR.inputs[70] = 189; SMDDR.inputs[71] = 210; SMDDR.inputs[72] = 188; SMDDR.inputs[73] = 188; SMDDR.inputs[74] = 188; SMDDR.inputs[75] = 189; SMDDR.inputs[76] = 257; SMDDR.inputs[77] = 152; SMDDR.inputs[78] = 152; SMDDR.inputs[79] = 188; SMDDR.inputs[80] = 188; SMDDR.inputs[81] = 152; SMDDR.inputs[82] = 152; SMDDR.inputs[83] = 152; SMDDR.inputs[84] = 152; SMDDR.inputs[85] = 22; SMDDR.inputs[86] = 22; SMDDR.inputs[87] = 200; SMDDR.inputs[88] = 200; SMDDR.inputs[89] = 206; SMDDR.inputs[90] = 201; SMDDR.inputs[91] = 201; SMDDR.inputs[92] = 205; SMDDR.inputs[93] = 247; SMDDR.inputs[94] = 226; SMDDR.inputs[95] = 226; SMDDR.inputs[96] = 188; SMDDR.inputs[97] = 200; SMDDR.inputs[98] = 188; SMDDR.inputs[99] = 188; SMDDR.inputs[100] = 188; SMDDR.inputs[101] = 188; SMDDR.inputs[102] = 188; SMDDR.inputs[103] = 188; SMDDR.inputs[104] = 247; SMDDR.inputs[105] = 189; SMDDR.inputs[106] = 205; SMDDR.inputs[107] = 201; SMDDR.inputs[108] = 211; SMDDR.inputs[109] = 188; SMDDR.inputs[110] = 152; SMDDR.inputs[111] = 153; SMDDR.inputs[112] = 217; SMDDR.inputs[113] = 27; SMDDR.inputs[114] = 247;
    SMDDR.weightsLen = 115;
    SMDDR.weights[0] = 1; SMDDR.weights[1] = 1; SMDDR.weights[2] = 1; SMDDR.weights[3] = 1; SMDDR.weights[4] = 1; SMDDR.weights[5] = 1; SMDDR.weights[6] = 1; SMDDR.weights[7] = 1; SMDDR.weights[8] = 1; SMDDR.weights[9] = 1; SMDDR.weights[10] = 1; SMDDR.weights[11] = 1; SMDDR.weights[12] = 1; SMDDR.weights[13] = 1; SMDDR.weights[14] = 1; SMDDR.weights[15] = 1; SMDDR.weights[16] = 1; SMDDR.weights[17] = 1; SMDDR.weights[18] = 1; SMDDR.weights[19] = 1; SMDDR.weights[20] = 1; SMDDR.weights[21] = 1; SMDDR.weights[22] = 1; SMDDR.weights[23] = 1; SMDDR.weights[24] = 1; SMDDR.weights[25] = 1; SMDDR.weights[26] = 1; SMDDR.weights[27] = 1; SMDDR.weights[28] = 1; SMDDR.weights[29] = 1; SMDDR.weights[30] = 1; SMDDR.weights[31] = 1; SMDDR.weights[32] = 1; SMDDR.weights[33] = 1; SMDDR.weights[34] = 1; SMDDR.weights[35] = 1; SMDDR.weights[36] = 1; SMDDR.weights[37] = 1; SMDDR.weights[38] = 1; SMDDR.weights[39] = 1; SMDDR.weights[40] = 1; SMDDR.weights[41] = 1; SMDDR.weights[42] = 1; SMDDR.weights[43] = 1; SMDDR.weights[44] = 1; SMDDR.weights[45] = 1; SMDDR.weights[46] = 1; SMDDR.weights[47] = 1; SMDDR.weights[48] = 1; SMDDR.weights[49] = 1; SMDDR.weights[50] = 1; SMDDR.weights[51] = 1; SMDDR.weights[52] = 1; SMDDR.weights[53] = 1; SMDDR.weights[54] = 1; SMDDR.weights[55] = 1; SMDDR.weights[56] = 1; SMDDR.weights[57] = 1; SMDDR.weights[58] = 1; SMDDR.weights[59] = 1; SMDDR.weights[60] = 1; SMDDR.weights[61] = 1; SMDDR.weights[62] = 1; SMDDR.weights[63] = 1; SMDDR.weights[64] = 1; SMDDR.weights[65] = 1; SMDDR.weights[66] = 1; SMDDR.weights[67] = 1; SMDDR.weights[68] = 1; SMDDR.weights[69] = 1; SMDDR.weights[70] = 1; SMDDR.weights[71] = 1; SMDDR.weights[72] = 1; SMDDR.weights[73] = 1; SMDDR.weights[74] = 1; SMDDR.weights[75] = 1; SMDDR.weights[76] = 1; SMDDR.weights[77] = 1; SMDDR.weights[78] = 1; SMDDR.weights[79] = 1; SMDDR.weights[80] = 1; SMDDR.weights[81] = 1; SMDDR.weights[82] = 1; SMDDR.weights[83] = 1; SMDDR.weights[84] = 1; SMDDR.weights[85] = 1; SMDDR.weights[86] = 1; SMDDR.weights[87] = 1; SMDDR.weights[88] = 1; SMDDR.weights[89] = 1; SMDDR.weights[90] = 1; SMDDR.weights[91] = 1; SMDDR.weights[92] = 1; SMDDR.weights[93] = 1; SMDDR.weights[94] = 1; SMDDR.weights[95] = 1; SMDDR.weights[96] = 1; SMDDR.weights[97] = 1; SMDDR.weights[98] = 1; SMDDR.weights[99] = 1; SMDDR.weights[100] = 1; SMDDR.weights[101] = 1; SMDDR.weights[102] = 1; SMDDR.weights[103] = 1; SMDDR.weights[104] = 1; SMDDR.weights[105] = 1; SMDDR.weights[106] = 1; SMDDR.weights[107] = 1; SMDDR.weights[108] = 1; SMDDR.weights[109] = 1; SMDDR.weights[110] = 1; SMDDR.weights[111] = 1; SMDDR.weights[112] = 1; SMDDR.weights[113] = 1; SMDDR.weights[114] = 1;
    if (id == 246) {
        return SMDDR;
    }


    neuron SMDVL;
    SMDVL.cellID = 247;
    SMDVL.threshold = 1;
    SMDVL.inputsLen = 87;
    SMDVL.inputs[0] = 205; SMDVL.inputs[1] = 189; SMDVL.inputs[2] = 189; SMDVL.inputs[3] = 189; SMDVL.inputs[4] = 189; SMDVL.inputs[5] = 189; SMDVL.inputs[6] = 189; SMDVL.inputs[7] = 189; SMDVL.inputs[8] = 189; SMDVL.inputs[9] = 188; SMDVL.inputs[10] = 189; SMDVL.inputs[11] = 188; SMDVL.inputs[12] = 188; SMDVL.inputs[13] = 188; SMDVL.inputs[14] = 189; SMDVL.inputs[15] = 189; SMDVL.inputs[16] = 189; SMDVL.inputs[17] = 188; SMDVL.inputs[18] = 188; SMDVL.inputs[19] = 200; SMDVL.inputs[20] = 200; SMDVL.inputs[21] = 200; SMDVL.inputs[22] = 189; SMDVL.inputs[23] = 153; SMDVL.inputs[24] = 153; SMDVL.inputs[25] = 153; SMDVL.inputs[26] = 153; SMDVL.inputs[27] = 189; SMDVL.inputs[28] = 191; SMDVL.inputs[29] = 217; SMDVL.inputs[30] = 201; SMDVL.inputs[31] = 26; SMDVL.inputs[32] = 260; SMDVL.inputs[33] = 260; SMDVL.inputs[34] = 260; SMDVL.inputs[35] = 193; SMDVL.inputs[36] = 193; SMDVL.inputs[37] = 248; SMDVL.inputs[38] = 226; SMDVL.inputs[39] = 80; SMDVL.inputs[40] = 111; SMDVL.inputs[41] = 189; SMDVL.inputs[42] = 188; SMDVL.inputs[43] = 246; SMDVL.inputs[44] = 246; SMDVL.inputs[45] = 246; SMDVL.inputs[46] = 188; SMDVL.inputs[47] = 188; SMDVL.inputs[48] = 206; SMDVL.inputs[49] = 14; SMDVL.inputs[50] = 14; SMDVL.inputs[51] = 193; SMDVL.inputs[52] = 14; SMDVL.inputs[53] = 200; SMDVL.inputs[54] = 218; SMDVL.inputs[55] = 189; SMDVL.inputs[56] = 189; SMDVL.inputs[57] = 189; SMDVL.inputs[58] = 189; SMDVL.inputs[59] = 189; SMDVL.inputs[60] = 189; SMDVL.inputs[61] = 189; SMDVL.inputs[62] = 193; SMDVL.inputs[63] = 225; SMDVL.inputs[64] = 188; SMDVL.inputs[65] = 189; SMDVL.inputs[66] = 188; SMDVL.inputs[67] = 225; SMDVL.inputs[68] = 5; SMDVL.inputs[69] = 14; SMDVL.inputs[70] = 14; SMDVL.inputs[71] = 14; SMDVL.inputs[72] = 189; SMDVL.inputs[73] = 189; SMDVL.inputs[74] = 21; SMDVL.inputs[75] = 246; SMDVL.inputs[76] = 246; SMDVL.inputs[77] = 200; SMDVL.inputs[78] = 77; SMDVL.inputs[79] = 27; SMDVL.inputs[80] = 27; SMDVL.inputs[81] = 225; SMDVL.inputs[82] = 200; SMDVL.inputs[83] = 200; SMDVL.inputs[84] = 153; SMDVL.inputs[85] = 2; SMDVL.inputs[86] = 189;
    SMDVL.weightsLen = 87;
    SMDVL.weights[0] = 1; SMDVL.weights[1] = 1; SMDVL.weights[2] = 1; SMDVL.weights[3] = 1; SMDVL.weights[4] = 1; SMDVL.weights[5] = 1; SMDVL.weights[6] = 1; SMDVL.weights[7] = 1; SMDVL.weights[8] = 1; SMDVL.weights[9] = 1; SMDVL.weights[10] = 1; SMDVL.weights[11] = 1; SMDVL.weights[12] = 1; SMDVL.weights[13] = 1; SMDVL.weights[14] = 1; SMDVL.weights[15] = 1; SMDVL.weights[16] = 1; SMDVL.weights[17] = 1; SMDVL.weights[18] = 1; SMDVL.weights[19] = 1; SMDVL.weights[20] = 1; SMDVL.weights[21] = 1; SMDVL.weights[22] = 1; SMDVL.weights[23] = 1; SMDVL.weights[24] = 1; SMDVL.weights[25] = 1; SMDVL.weights[26] = 1; SMDVL.weights[27] = 1; SMDVL.weights[28] = 1; SMDVL.weights[29] = 1; SMDVL.weights[30] = 1; SMDVL.weights[31] = 1; SMDVL.weights[32] = 1; SMDVL.weights[33] = 1; SMDVL.weights[34] = 1; SMDVL.weights[35] = 1; SMDVL.weights[36] = 1; SMDVL.weights[37] = 1; SMDVL.weights[38] = 1; SMDVL.weights[39] = 1; SMDVL.weights[40] = 1; SMDVL.weights[41] = 1; SMDVL.weights[42] = 1; SMDVL.weights[43] = 1; SMDVL.weights[44] = 1; SMDVL.weights[45] = 1; SMDVL.weights[46] = 1; SMDVL.weights[47] = 1; SMDVL.weights[48] = 1; SMDVL.weights[49] = 1; SMDVL.weights[50] = 1; SMDVL.weights[51] = 1; SMDVL.weights[52] = 1; SMDVL.weights[53] = 1; SMDVL.weights[54] = 1; SMDVL.weights[55] = 1; SMDVL.weights[56] = 1; SMDVL.weights[57] = 1; SMDVL.weights[58] = 1; SMDVL.weights[59] = 1; SMDVL.weights[60] = 1; SMDVL.weights[61] = 1; SMDVL.weights[62] = 1; SMDVL.weights[63] = 1; SMDVL.weights[64] = 1; SMDVL.weights[65] = 1; SMDVL.weights[66] = 1; SMDVL.weights[67] = 1; SMDVL.weights[68] = 1; SMDVL.weights[69] = 1; SMDVL.weights[70] = 1; SMDVL.weights[71] = 1; SMDVL.weights[72] = 1; SMDVL.weights[73] = 1; SMDVL.weights[74] = 1; SMDVL.weights[75] = 1; SMDVL.weights[76] = 1; SMDVL.weights[77] = 1; SMDVL.weights[78] = 1; SMDVL.weights[79] = 1; SMDVL.weights[80] = 1; SMDVL.weights[81] = 1; SMDVL.weights[82] = 1; SMDVL.weights[83] = 1; SMDVL.weights[84] = 1; SMDVL.weights[85] = 1; SMDVL.weights[86] = 1;
    if (id == 247) {
        return SMDVL;
    }


    neuron SMDVR;
    SMDVR.cellID = 248;
    SMDVR.threshold = 1;
    SMDVR.inputsLen = 72;
    SMDVR.inputs[0] = 188; SMDVR.inputs[1] = 188; SMDVR.inputs[2] = 188; SMDVR.inputs[3] = 259; SMDVR.inputs[4] = 207; SMDVR.inputs[5] = 189; SMDVR.inputs[6] = 189; SMDVR.inputs[7] = 188; SMDVR.inputs[8] = 188; SMDVR.inputs[9] = 188; SMDVR.inputs[10] = 189; SMDVR.inputs[11] = 189; SMDVR.inputs[12] = 188; SMDVR.inputs[13] = 188; SMDVR.inputs[14] = 245; SMDVR.inputs[15] = 189; SMDVR.inputs[16] = 189; SMDVR.inputs[17] = 189; SMDVR.inputs[18] = 189; SMDVR.inputs[19] = 189; SMDVR.inputs[20] = 13; SMDVR.inputs[21] = 13; SMDVR.inputs[22] = 153; SMDVR.inputs[23] = 189; SMDVR.inputs[24] = 201; SMDVR.inputs[25] = 188; SMDVR.inputs[26] = 188; SMDVR.inputs[27] = 70; SMDVR.inputs[28] = 4; SMDVR.inputs[29] = 259; SMDVR.inputs[30] = 259; SMDVR.inputs[31] = 259; SMDVR.inputs[32] = 259; SMDVR.inputs[33] = 207; SMDVR.inputs[34] = 152; SMDVR.inputs[35] = 152; SMDVR.inputs[36] = 152; SMDVR.inputs[37] = 190; SMDVR.inputs[38] = 190; SMDVR.inputs[39] = 193; SMDVR.inputs[40] = 193; SMDVR.inputs[41] = 258; SMDVR.inputs[42] = 191; SMDVR.inputs[43] = 245; SMDVR.inputs[44] = 188; SMDVR.inputs[45] = 189; SMDVR.inputs[46] = 245; SMDVR.inputs[47] = 245; SMDVR.inputs[48] = 245; SMDVR.inputs[49] = 189; SMDVR.inputs[50] = 188; SMDVR.inputs[51] = 188; SMDVR.inputs[52] = 188; SMDVR.inputs[53] = 247; SMDVR.inputs[54] = 188; SMDVR.inputs[55] = 188; SMDVR.inputs[56] = 152; SMDVR.inputs[57] = 201; SMDVR.inputs[58] = 188; SMDVR.inputs[59] = 245; SMDVR.inputs[60] = 153; SMDVR.inputs[61] = 153; SMDVR.inputs[62] = 205; SMDVR.inputs[63] = 153; SMDVR.inputs[64] = 190; SMDVR.inputs[65] = 1; SMDVR.inputs[66] = 1; SMDVR.inputs[67] = 1; SMDVR.inputs[68] = 87; SMDVR.inputs[69] = 188; SMDVR.inputs[70] = 189; SMDVR.inputs[71] = 192;
    SMDVR.weightsLen = 72;
    SMDVR.weights[0] = 1; SMDVR.weights[1] = 1; SMDVR.weights[2] = 1; SMDVR.weights[3] = 1; SMDVR.weights[4] = 1; SMDVR.weights[5] = 1; SMDVR.weights[6] = 1; SMDVR.weights[7] = 1; SMDVR.weights[8] = 1; SMDVR.weights[9] = 1; SMDVR.weights[10] = 1; SMDVR.weights[11] = 1; SMDVR.weights[12] = 1; SMDVR.weights[13] = 1; SMDVR.weights[14] = 1; SMDVR.weights[15] = 1; SMDVR.weights[16] = 1; SMDVR.weights[17] = 1; SMDVR.weights[18] = 1; SMDVR.weights[19] = 1; SMDVR.weights[20] = 1; SMDVR.weights[21] = 1; SMDVR.weights[22] = 1; SMDVR.weights[23] = 1; SMDVR.weights[24] = 1; SMDVR.weights[25] = 1; SMDVR.weights[26] = 1; SMDVR.weights[27] = 1; SMDVR.weights[28] = 1; SMDVR.weights[29] = 1; SMDVR.weights[30] = 1; SMDVR.weights[31] = 1; SMDVR.weights[32] = 1; SMDVR.weights[33] = 1; SMDVR.weights[34] = 1; SMDVR.weights[35] = 1; SMDVR.weights[36] = 1; SMDVR.weights[37] = 1; SMDVR.weights[38] = 1; SMDVR.weights[39] = 1; SMDVR.weights[40] = 1; SMDVR.weights[41] = 1; SMDVR.weights[42] = 1; SMDVR.weights[43] = 1; SMDVR.weights[44] = 1; SMDVR.weights[45] = 1; SMDVR.weights[46] = 1; SMDVR.weights[47] = 1; SMDVR.weights[48] = 1; SMDVR.weights[49] = 1; SMDVR.weights[50] = 1; SMDVR.weights[51] = 1; SMDVR.weights[52] = 1; SMDVR.weights[53] = 1; SMDVR.weights[54] = 1; SMDVR.weights[55] = 1; SMDVR.weights[56] = 1; SMDVR.weights[57] = 1; SMDVR.weights[58] = 1; SMDVR.weights[59] = 1; SMDVR.weights[60] = 1; SMDVR.weights[61] = 1; SMDVR.weights[62] = 1; SMDVR.weights[63] = 1; SMDVR.weights[64] = 1; SMDVR.weights[65] = 1; SMDVR.weights[66] = 1; SMDVR.weights[67] = 1; SMDVR.weights[68] = 1; SMDVR.weights[69] = 1; SMDVR.weights[70] = 1; SMDVR.weights[71] = 1;
    if (id == 248) {
        return SMDVR;
    }


    neuron URADL;
    URADL.cellID = 249;
    URADL.threshold = 1;
    URADL.inputsLen = 15;
    URADL.inputs[0] = 184; URADL.inputs[1] = 184; URADL.inputs[2] = 81; URADL.inputs[3] = 81; URADL.inputs[4] = 132; URADL.inputs[5] = 85; URADL.inputs[6] = 85; URADL.inputs[7] = 132; URADL.inputs[8] = 132; URADL.inputs[9] = 184; URADL.inputs[10] = 85; URADL.inputs[11] = 132; URADL.inputs[12] = 81; URADL.inputs[13] = 126; URADL.inputs[14] = 126;
    URADL.weightsLen = 15;
    URADL.weights[0] = 1; URADL.weights[1] = 1; URADL.weights[2] = 1; URADL.weights[3] = 1; URADL.weights[4] = 1; URADL.weights[5] = 1; URADL.weights[6] = 1; URADL.weights[7] = 1; URADL.weights[8] = 1; URADL.weights[9] = 1; URADL.weights[10] = 1; URADL.weights[11] = 1; URADL.weights[12] = 1; URADL.weights[13] = 1; URADL.weights[14] = 1;
    if (id == 249) {
        return URADL;
    }


    neuron URADR;
    URADR.cellID = 250;
    URADR.threshold = 1;
    URADR.inputsLen = 11;
    URADR.inputs[0] = 127; URADR.inputs[1] = 86; URADR.inputs[2] = 133; URADR.inputs[3] = 86; URADR.inputs[4] = 127; URADR.inputs[5] = 133; URADR.inputs[6] = 133; URADR.inputs[7] = 133; URADR.inputs[8] = 82; URADR.inputs[9] = 135; URADR.inputs[10] = 258;
    URADR.weightsLen = 11;
    URADR.weights[0] = 1; URADR.weights[1] = 1; URADR.weights[2] = 1; URADR.weights[3] = 1; URADR.weights[4] = 1; URADR.weights[5] = 1; URADR.weights[6] = 1; URADR.weights[7] = 1; URADR.weights[8] = 1; URADR.weights[9] = 1; URADR.weights[10] = 1;
    if (id == 250) {
        return URADR;
    }


    neuron URAVL;
    URAVL.cellID = 251;
    URAVL.threshold = 1;
    URAVL.inputsLen = 18;
    URAVL.inputs[0] = 213; URAVL.inputs[1] = 136; URAVL.inputs[2] = 113; URAVL.inputs[3] = 136; URAVL.inputs[4] = 136; URAVL.inputs[5] = 1; URAVL.inputs[6] = 136; URAVL.inputs[7] = 87; URAVL.inputs[8] = 130; URAVL.inputs[9] = 213; URAVL.inputs[10] = 213; URAVL.inputs[11] = 87; URAVL.inputs[12] = 130; URAVL.inputs[13] = 128; URAVL.inputs[14] = 136; URAVL.inputs[15] = 134; URAVL.inputs[16] = 128; URAVL.inputs[17] = 136;
    URAVL.weightsLen = 18;
    URAVL.weights[0] = 1; URAVL.weights[1] = 1; URAVL.weights[2] = 1; URAVL.weights[3] = 1; URAVL.weights[4] = 1; URAVL.weights[5] = 1; URAVL.weights[6] = 1; URAVL.weights[7] = 1; URAVL.weights[8] = 1; URAVL.weights[9] = 1; URAVL.weights[10] = 1; URAVL.weights[11] = 1; URAVL.weights[12] = 1; URAVL.weights[13] = 1; URAVL.weights[14] = 1; URAVL.weights[15] = 1; URAVL.weights[16] = 1; URAVL.weights[17] = 1;
    if (id == 251) {
        return URAVL;
    }


    neuron URAVR;
    URAVR.cellID = 252;
    URAVR.threshold = 1;
    URAVR.inputsLen = 19;
    URAVR.inputs[0] = 137; URAVR.inputs[1] = 137; URAVR.inputs[2] = 137; URAVR.inputs[3] = 79; URAVR.inputs[4] = 131; URAVR.inputs[5] = 131; URAVR.inputs[6] = 88; URAVR.inputs[7] = 88; URAVR.inputs[8] = 137; URAVR.inputs[9] = 203; URAVR.inputs[10] = 131; URAVR.inputs[11] = 137; URAVR.inputs[12] = 137; URAVR.inputs[13] = 199; URAVR.inputs[14] = 137; URAVR.inputs[15] = 137; URAVR.inputs[16] = 137; URAVR.inputs[17] = 131; URAVR.inputs[18] = 135;
    URAVR.weightsLen = 19;
    URAVR.weights[0] = 1; URAVR.weights[1] = 1; URAVR.weights[2] = 1; URAVR.weights[3] = 1; URAVR.weights[4] = 1; URAVR.weights[5] = 1; URAVR.weights[6] = 1; URAVR.weights[7] = 1; URAVR.weights[8] = 1; URAVR.weights[9] = 1; URAVR.weights[10] = 1; URAVR.weights[11] = 1; URAVR.weights[12] = 1; URAVR.weights[13] = 1; URAVR.weights[14] = 1; URAVR.weights[15] = 1; URAVR.weights[16] = 1; URAVR.weights[17] = 1; URAVR.weights[18] = 1;
    if (id == 252) {
        return URAVR;
    }


    neuron URBL;
    URBL.cellID = 253;
    URBL.threshold = 1;
    URBL.inputsLen = 10;
    URBL.inputs[0] = 85; URBL.inputs[1] = 179; URBL.inputs[2] = 128; URBL.inputs[3] = 3; URBL.inputs[4] = 85; URBL.inputs[5] = 253; URBL.inputs[6] = 85; URBL.inputs[7] = 85; URBL.inputs[8] = 85; URBL.inputs[9] = 85;
    URBL.weightsLen = 10;
    URBL.weights[0] = 1; URBL.weights[1] = 1; URBL.weights[2] = 1; URBL.weights[3] = 1; URBL.weights[4] = 1; URBL.weights[5] = 1; URBL.weights[6] = 1; URBL.weights[7] = 1; URBL.weights[8] = 1; URBL.weights[9] = 1;
    if (id == 253) {
        return URBL;
    }


    neuron URBR;
    URBR.cellID = 254;
    URBR.threshold = 1;
    URBR.inputsLen = 23;
    URBR.inputs[0] = 256; URBR.inputs[1] = 256; URBR.inputs[2] = 256; URBR.inputs[3] = 256; URBR.inputs[4] = 256; URBR.inputs[5] = 256; URBR.inputs[6] = 4; URBR.inputs[7] = 25; URBR.inputs[8] = 135; URBR.inputs[9] = 8; URBR.inputs[10] = 8; URBR.inputs[11] = 193; URBR.inputs[12] = 135; URBR.inputs[13] = 86; URBR.inputs[14] = 86; URBR.inputs[15] = 86; URBR.inputs[16] = 86; URBR.inputs[17] = 86; URBR.inputs[18] = 86; URBR.inputs[19] = 193; URBR.inputs[20] = 86; URBR.inputs[21] = 192; URBR.inputs[22] = 8;
    URBR.weightsLen = 23;
    URBR.weights[0] = 1; URBR.weights[1] = 1; URBR.weights[2] = 1; URBR.weights[3] = 1; URBR.weights[4] = 1; URBR.weights[5] = 1; URBR.weights[6] = 1; URBR.weights[7] = 1; URBR.weights[8] = 1; URBR.weights[9] = 1; URBR.weights[10] = 1; URBR.weights[11] = 1; URBR.weights[12] = 1; URBR.weights[13] = 1; URBR.weights[14] = 1; URBR.weights[15] = 1; URBR.weights[16] = 1; URBR.weights[17] = 1; URBR.weights[18] = 1; URBR.weights[19] = 1; URBR.weights[20] = 1; URBR.weights[21] = 1; URBR.weights[22] = 1;
    if (id == 254) {
        return URBR;
    }


    neuron URXL;
    URXL.cellID = 255;
    URXL.threshold = 1;
    URXL.inputsLen = 39;
    URXL.inputs[0] = 28; URXL.inputs[1] = 204; URXL.inputs[2] = 259; URXL.inputs[3] = 197; URXL.inputs[4] = 197; URXL.inputs[5] = 204; URXL.inputs[6] = 188; URXL.inputs[7] = 28; URXL.inputs[8] = 197; URXL.inputs[9] = 253; URXL.inputs[10] = 253; URXL.inputs[11] = 253; URXL.inputs[12] = 87; URXL.inputs[13] = 15; URXL.inputs[14] = 253; URXL.inputs[15] = 253; URXL.inputs[16] = 255; URXL.inputs[17] = 1; URXL.inputs[18] = 134; URXL.inputs[19] = 5; URXL.inputs[20] = 253; URXL.inputs[21] = 253; URXL.inputs[22] = 179; URXL.inputs[23] = 253; URXL.inputs[24] = 253; URXL.inputs[25] = 18; URXL.inputs[26] = 253; URXL.inputs[27] = 253; URXL.inputs[28] = 253; URXL.inputs[29] = 111; URXL.inputs[30] = 204; URXL.inputs[31] = 204; URXL.inputs[32] = 134; URXL.inputs[33] = 44; URXL.inputs[34] = 44; URXL.inputs[35] = 52; URXL.inputs[36] = 255; URXL.inputs[37] = 1; URXL.inputs[38] = 188;
    URXL.weightsLen = 39;
    URXL.weights[0] = 1; URXL.weights[1] = 1; URXL.weights[2] = 1; URXL.weights[3] = 1; URXL.weights[4] = 1; URXL.weights[5] = 1; URXL.weights[6] = 1; URXL.weights[7] = 1; URXL.weights[8] = 1; URXL.weights[9] = 1; URXL.weights[10] = 1; URXL.weights[11] = 1; URXL.weights[12] = 1; URXL.weights[13] = 1; URXL.weights[14] = 1; URXL.weights[15] = 1; URXL.weights[16] = 1; URXL.weights[17] = 1; URXL.weights[18] = 1; URXL.weights[19] = 1; URXL.weights[20] = 1; URXL.weights[21] = 1; URXL.weights[22] = 1; URXL.weights[23] = 1; URXL.weights[24] = 1; URXL.weights[25] = 1; URXL.weights[26] = 1; URXL.weights[27] = 1; URXL.weights[28] = 1; URXL.weights[29] = 1; URXL.weights[30] = 1; URXL.weights[31] = 1; URXL.weights[32] = 1; URXL.weights[33] = 1; URXL.weights[34] = 1; URXL.weights[35] = 1; URXL.weights[36] = 1; URXL.weights[37] = 1; URXL.weights[38] = 1;
    if (id == 255) {
        return URXL;
    }


    neuron URXR;
    URXR.cellID = 256;
    URXR.threshold = 1;
    URXR.inputsLen = 50;
    URXR.inputs[0] = 6; URXR.inputs[1] = 53; URXR.inputs[2] = 8; URXR.inputs[3] = 204; URXR.inputs[4] = 137; URXR.inputs[5] = 4; URXR.inputs[6] = 135; URXR.inputs[7] = 6; URXR.inputs[8] = 6; URXR.inputs[9] = 6; URXR.inputs[10] = 16; URXR.inputs[11] = 258; URXR.inputs[12] = 204; URXR.inputs[13] = 204; URXR.inputs[14] = 16; URXR.inputs[15] = 79; URXR.inputs[16] = 198; URXR.inputs[17] = 198; URXR.inputs[18] = 198; URXR.inputs[19] = 254; URXR.inputs[20] = 4; URXR.inputs[21] = 254; URXR.inputs[22] = 2; URXR.inputs[23] = 16; URXR.inputs[24] = 254; URXR.inputs[25] = 86; URXR.inputs[26] = 221; URXR.inputs[27] = 210; URXR.inputs[28] = 254; URXR.inputs[29] = 204; URXR.inputs[30] = 196; URXR.inputs[31] = 61; URXR.inputs[32] = 221; URXR.inputs[33] = 86; URXR.inputs[34] = 254; URXR.inputs[35] = 16; URXR.inputs[36] = 204; URXR.inputs[37] = 181; URXR.inputs[38] = 53; URXR.inputs[39] = 53; URXR.inputs[40] = 18; URXR.inputs[41] = 8; URXR.inputs[42] = 8; URXR.inputs[43] = 8; URXR.inputs[44] = 8; URXR.inputs[45] = 196; URXR.inputs[46] = 8; URXR.inputs[47] = 254; URXR.inputs[48] = 254; URXR.inputs[49] = 129;
    URXR.weightsLen = 50;
    URXR.weights[0] = 1; URXR.weights[1] = 1; URXR.weights[2] = 1; URXR.weights[3] = 1; URXR.weights[4] = 1; URXR.weights[5] = 1; URXR.weights[6] = 1; URXR.weights[7] = 1; URXR.weights[8] = 1; URXR.weights[9] = 1; URXR.weights[10] = 1; URXR.weights[11] = 1; URXR.weights[12] = 1; URXR.weights[13] = 1; URXR.weights[14] = 1; URXR.weights[15] = 1; URXR.weights[16] = 1; URXR.weights[17] = 1; URXR.weights[18] = 1; URXR.weights[19] = 1; URXR.weights[20] = 1; URXR.weights[21] = 1; URXR.weights[22] = 1; URXR.weights[23] = 1; URXR.weights[24] = 1; URXR.weights[25] = 1; URXR.weights[26] = 1; URXR.weights[27] = 1; URXR.weights[28] = 1; URXR.weights[29] = 1; URXR.weights[30] = 1; URXR.weights[31] = 1; URXR.weights[32] = 1; URXR.weights[33] = 1; URXR.weights[34] = 1; URXR.weights[35] = 1; URXR.weights[36] = 1; URXR.weights[37] = 1; URXR.weights[38] = 1; URXR.weights[39] = 1; URXR.weights[40] = 1; URXR.weights[41] = 1; URXR.weights[42] = 1; URXR.weights[43] = 1; URXR.weights[44] = 1; URXR.weights[45] = 1; URXR.weights[46] = 1; URXR.weights[47] = 1; URXR.weights[48] = 1; URXR.weights[49] = 1;
    if (id == 256) {
        return URXR;
    }


    neuron URYDL;
    URYDL.cellID = 257;
    URYDL.threshold = 1;
    URYDL.inputsLen = 13;
    URYDL.inputs[0] = 111; URYDL.inputs[1] = 190; URYDL.inputs[2] = 85; URYDL.inputs[3] = 152; URYDL.inputs[4] = 190; URYDL.inputs[5] = 21; URYDL.inputs[6] = 21; URYDL.inputs[7] = 253; URYDL.inputs[8] = 85; URYDL.inputs[9] = 152; URYDL.inputs[10] = 154; URYDL.inputs[11] = 85; URYDL.inputs[12] = 190;
    URYDL.weightsLen = 13;
    URYDL.weights[0] = 1; URYDL.weights[1] = 1; URYDL.weights[2] = 1; URYDL.weights[3] = 1; URYDL.weights[4] = 1; URYDL.weights[5] = 1; URYDL.weights[6] = 1; URYDL.weights[7] = 1; URYDL.weights[8] = 1; URYDL.weights[9] = 1; URYDL.weights[10] = 1; URYDL.weights[11] = 1; URYDL.weights[12] = 1;
    if (id == 257) {
        return URYDL;
    }


    neuron URYDR;
    URYDR.cellID = 258;
    URYDR.threshold = 1;
    URYDR.inputsLen = 5;
    URYDR.inputs[0] = 205; URYDR.inputs[1] = 250; URYDR.inputs[2] = 2; URYDR.inputs[3] = 86; URYDR.inputs[4] = 127;
    URYDR.weightsLen = 5;
    URYDR.weights[0] = 1; URYDR.weights[1] = 1; URYDR.weights[2] = 1; URYDR.weights[3] = 1; URYDR.weights[4] = 1;
    if (id == 258) {
        return URYDR;
    }


    neuron URYVL;
    URYVL.cellID = 259;
    URYVL.threshold = 1;
    URYVL.inputsLen = 12;
    URYVL.inputs[0] = 130; URYVL.inputs[1] = 87; URYVL.inputs[2] = 153; URYVL.inputs[3] = 153; URYVL.inputs[4] = 213; URYVL.inputs[5] = 152; URYVL.inputs[6] = 87; URYVL.inputs[7] = 130; URYVL.inputs[8] = 130; URYVL.inputs[9] = 153; URYVL.inputs[10] = 87; URYVL.inputs[11] = 205;
    URYVL.weightsLen = 12;
    URYVL.weights[0] = 1; URYVL.weights[1] = 1; URYVL.weights[2] = 1; URYVL.weights[3] = 1; URYVL.weights[4] = 1; URYVL.weights[5] = 1; URYVL.weights[6] = 1; URYVL.weights[7] = 1; URYVL.weights[8] = 1; URYVL.weights[9] = 1; URYVL.weights[10] = 1; URYVL.weights[11] = 1;
    if (id == 259) {
        return URYVL;
    }


    neuron URYVR;
    URYVR.cellID = 260;
    URYVR.threshold = 1;
    URYVR.inputsLen = 10;
    URYVR.inputs[0] = 212; URYVR.inputs[1] = 191; URYVR.inputs[2] = 6; URYVR.inputs[3] = 6; URYVR.inputs[4] = 199; URYVR.inputs[5] = 252; URYVR.inputs[6] = 198; URYVR.inputs[7] = 199; URYVR.inputs[8] = 88; URYVR.inputs[9] = 205;
    URYVR.weightsLen = 10;
    URYVR.weights[0] = 1; URYVR.weights[1] = 1; URYVR.weights[2] = 1; URYVR.weights[3] = 1; URYVR.weights[4] = 1; URYVR.weights[5] = 1; URYVR.weights[6] = 1; URYVR.weights[7] = 1; URYVR.weights[8] = 1; URYVR.weights[9] = 1;
    if (id == 260) {
        return URYVR;
    }


    neuron VA1;
    VA1.cellID = 261;
    VA1.threshold = 1;
    VA1.inputsLen = 0;

    VA1.weightsLen = 0;
    VA1.weights[0] = 1; VA1.weights[1] = 1; VA1.weights[2] = 1; VA1.weights[3] = 1; VA1.weights[4] = 1; VA1.weights[5] = 1; VA1.weights[6] = 1; VA1.weights[7] = 1; VA1.weights[8] = 1; VA1.weights[9] = 1;
    if (id == 261) {
        return VA1;
    }


    neuron VA10;
    VA10.cellID = 262;
    VA10.threshold = 1;
    VA10.inputsLen = 61;
    VA10.inputs[0] = 54; VA10.inputs[1] = 292; VA10.inputs[2] = 58; VA10.inputs[3] = 56; VA10.inputs[4] = 54; VA10.inputs[5] = 54; VA10.inputs[6] = 55; VA10.inputs[7] = 54; VA10.inputs[8] = 55; VA10.inputs[9] = 54; VA10.inputs[10] = 264; VA10.inputs[11] = 30; VA10.inputs[12] = 54; VA10.inputs[13] = 55; VA10.inputs[14] = 54; VA10.inputs[15] = 54; VA10.inputs[16] = 54; VA10.inputs[17] = 55; VA10.inputs[18] = 55; VA10.inputs[19] = 55; VA10.inputs[20] = 54; VA10.inputs[21] = 54; VA10.inputs[22] = 57; VA10.inputs[23] = 160; VA10.inputs[24] = 264; VA10.inputs[25] = 264; VA10.inputs[26] = 181; VA10.inputs[27] = 59; VA10.inputs[28] = 59; VA10.inputs[29] = 55; VA10.inputs[30] = 274; VA10.inputs[31] = 264; VA10.inputs[32] = 263; VA10.inputs[33] = 263; VA10.inputs[34] = 264; VA10.inputs[35] = 263; VA10.inputs[36] = 263; VA10.inputs[37] = 264; VA10.inputs[38] = 264; VA10.inputs[39] = 263; VA10.inputs[40] = 263; VA10.inputs[41] = 263; VA10.inputs[42] = 263; VA10.inputs[43] = 264; VA10.inputs[44] = 264; VA10.inputs[45] = 264; VA10.inputs[46] = 264; VA10.inputs[47] = 264; VA10.inputs[48] = 264; VA10.inputs[49] = 264; VA10.inputs[50] = 264; VA10.inputs[51] = 264; VA10.inputs[52] = 264; VA10.inputs[53] = 263; VA10.inputs[54] = 264; VA10.inputs[55] = 263; VA10.inputs[56] = 263; VA10.inputs[57] = 263; VA10.inputs[58] = 263; VA10.inputs[59] = 263; VA10.inputs[60] = 263;
    VA10.weightsLen = 61;
    VA10.weights[0] = 1; VA10.weights[1] = 1; VA10.weights[2] = 1; VA10.weights[3] = 1; VA10.weights[4] = 1; VA10.weights[5] = 1; VA10.weights[6] = 1; VA10.weights[7] = 1; VA10.weights[8] = 1; VA10.weights[9] = 1; VA10.weights[10] = 1; VA10.weights[11] = 1; VA10.weights[12] = 1; VA10.weights[13] = 1; VA10.weights[14] = 1; VA10.weights[15] = 1; VA10.weights[16] = 1; VA10.weights[17] = 1; VA10.weights[18] = 1; VA10.weights[19] = 1; VA10.weights[20] = 1; VA10.weights[21] = 1; VA10.weights[22] = 1; VA10.weights[23] = 1; VA10.weights[24] = 1; VA10.weights[25] = 1; VA10.weights[26] = 1; VA10.weights[27] = 1; VA10.weights[28] = 1; VA10.weights[29] = 1; VA10.weights[30] = 1; VA10.weights[31] = 1; VA10.weights[32] = 1; VA10.weights[33] = 1; VA10.weights[34] = 1; VA10.weights[35] = 1; VA10.weights[36] = 1; VA10.weights[37] = 1; VA10.weights[38] = 1; VA10.weights[39] = 1; VA10.weights[40] = 1; VA10.weights[41] = 1; VA10.weights[42] = 1; VA10.weights[43] = 1; VA10.weights[44] = 1; VA10.weights[45] = 1; VA10.weights[46] = 1; VA10.weights[47] = 1; VA10.weights[48] = 1; VA10.weights[49] = 1; VA10.weights[50] = 1; VA10.weights[51] = 1; VA10.weights[52] = 1; VA10.weights[53] = 1; VA10.weights[54] = 1; VA10.weights[55] = 1; VA10.weights[56] = 1; VA10.weights[57] = 1; VA10.weights[58] = 1; VA10.weights[59] = 1; VA10.weights[60] = 1;
    if (id == 262) {
        return VA10;
    }


    neuron VA11;
    VA11.cellID = 263;
    VA11.threshold = 1;
    VA11.inputsLen = 51;
    VA11.inputs[0] = 55; VA11.inputs[1] = 55; VA11.inputs[2] = 54; VA11.inputs[3] = 54; VA11.inputs[4] = 56; VA11.inputs[5] = 293; VA11.inputs[6] = 293; VA11.inputs[7] = 275; VA11.inputs[8] = 263; VA11.inputs[9] = 263; VA11.inputs[10] = 263; VA11.inputs[11] = 263; VA11.inputs[12] = 263; VA11.inputs[13] = 275; VA11.inputs[14] = 58; VA11.inputs[15] = 264; VA11.inputs[16] = 63; VA11.inputs[17] = 263; VA11.inputs[18] = 59; VA11.inputs[19] = 55; VA11.inputs[20] = 264; VA11.inputs[21] = 264; VA11.inputs[22] = 264; VA11.inputs[23] = 55; VA11.inputs[24] = 55; VA11.inputs[25] = 55; VA11.inputs[26] = 54; VA11.inputs[27] = 55; VA11.inputs[28] = 55; VA11.inputs[29] = 54; VA11.inputs[30] = 180; VA11.inputs[31] = 55; VA11.inputs[32] = 292; VA11.inputs[33] = 174; VA11.inputs[34] = 292; VA11.inputs[35] = 174; VA11.inputs[36] = 274; VA11.inputs[37] = 263; VA11.inputs[38] = 263; VA11.inputs[39] = 264; VA11.inputs[40] = 264; VA11.inputs[41] = 291; VA11.inputs[42] = 264; VA11.inputs[43] = 264; VA11.inputs[44] = 264; VA11.inputs[45] = 264; VA11.inputs[46] = 264; VA11.inputs[47] = 264; VA11.inputs[48] = 264; VA11.inputs[49] = 264; VA11.inputs[50] = 264;
    VA11.weightsLen = 51;
    VA11.weights[0] = 1; VA11.weights[1] = 1; VA11.weights[2] = 1; VA11.weights[3] = 1; VA11.weights[4] = 1; VA11.weights[5] = 1; VA11.weights[6] = 1; VA11.weights[7] = 1; VA11.weights[8] = 1; VA11.weights[9] = 1; VA11.weights[10] = 1; VA11.weights[11] = 1; VA11.weights[12] = 1; VA11.weights[13] = 1; VA11.weights[14] = 1; VA11.weights[15] = 1;
    VA11.weights[16] = 1; VA11.weights[17] = 1; VA11.weights[18] = 1; VA11.weights[19] = 1; VA11.weights[20] = 1; VA11.weights[21] = 1; VA11.weights[22] = 1; VA11.weights[23] = 1; VA11.weights[24] = 1; VA11.weights[25] = 1; VA11.weights[26] = 1; VA11.weights[27] = 1; VA11.weights[28] = 1; VA11.weights[29] = 1; VA11.weights[30] = 1; VA11.weights[31] = 1; VA11.weights[32] = 1; VA11.weights[33] = 1; VA11.weights[34] = 1; VA11.weights[35] = 1; VA11.weights[36] = 1; VA11.weights[37] = 1; VA11.weights[38] = 1; VA11.weights[39] = 1; VA11.weights[40] = 1; VA11.weights[41] = 1; VA11.weights[42] = 1; VA11.weights[43] = 1; VA11.weights[44] = 1; VA11.weights[45] = 1; VA11.weights[46] = 1; VA11.weights[47] = 1; VA11.weights[48] = 1; VA11.weights[49] = 1; VA11.weights[50] = 1;
    if (id == 263) {
        return VA11;
    }


    neuron VA12;
    VA12.cellID = 264;
    VA12.threshold = 1;
    VA12.inputsLen = 59;
    VA12.inputs[0] = 167; VA12.inputs[1] = 167; VA12.inputs[2] = 172; VA12.inputs[3] = 187; VA12.inputs[4] = 293; VA12.inputs[5] = 293; VA12.inputs[6] = 293; VA12.inputs[7] = 293; VA12.inputs[8] = 293; VA12.inputs[9] = 293; VA12.inputs[10] = 293; VA12.inputs[11] = 293; VA12.inputs[12] = 178; VA12.inputs[13] = 293; VA12.inputs[14] = 293; VA12.inputs[15] = 293; VA12.inputs[16] = 111; VA12.inputs[17] = 174; VA12.inputs[18] = 264; VA12.inputs[19] = 264; VA12.inputs[20] = 264; VA12.inputs[21] = 161; VA12.inputs[22] = 264; VA12.inputs[23] = 264; VA12.inputs[24] = 264; VA12.inputs[25] = 264; VA12.inputs[26] = 54; VA12.inputs[27] = 294; VA12.inputs[28] = 54; VA12.inputs[29] = 275; VA12.inputs[30] = 294; VA12.inputs[31] = 294; VA12.inputs[32] = 275; VA12.inputs[33] = 294; VA12.inputs[34] = 294; VA12.inputs[35] = 294; VA12.inputs[36] = 294; VA12.inputs[37] = 294; VA12.inputs[38] = 294; VA12.inputs[39] = 275; VA12.inputs[40] = 294; VA12.inputs[41] = 275; VA12.inputs[42] = 180; VA12.inputs[43] = 293; VA12.inputs[44] = 293; VA12.inputs[45] = 274; VA12.inputs[46] = 291; VA12.inputs[47] = 291; VA12.inputs[48] = 291; VA12.inputs[49] = 275; VA12.inputs[50] = 294; VA12.inputs[51] = 294; VA12.inputs[52] = 275; VA12.inputs[53] = 294; VA12.inputs[54] = 275; VA12.inputs[55] = 294; VA12.inputs[56] = 275; VA12.inputs[57] = 275; VA12.inputs[58] = 294;
    VA12.weightsLen = 59;
    VA12.weights[0] = 1; VA12.weights[1] = 1; VA12.weights[2] = 1; VA12.weights[3] = 1; VA12.weights[4] = 1; VA12.weights[5] = 1; VA12.weights[6] = 1; VA12.weights[7] = 1; VA12.weights[8] = 1; VA12.weights[9] = 1; VA12.weights[10] = 1; VA12.weights[11] = 1; VA12.weights[12] = 1; VA12.weights[13] = 1; VA12.weights[14] = 1; VA12.weights[15] = 1; VA12.weights[16] = 1; VA12.weights[17] = 1; VA12.weights[18] = 1; VA12.weights[19] = 1; VA12.weights[20] = 1; VA12.weights[21] = 1; VA12.weights[22] = 1; VA12.weights[23] = 1; VA12.weights[24] = 1; VA12.weights[25] = 1; VA12.weights[26] = 1; VA12.weights[27] = 1; VA12.weights[28] = 1; VA12.weights[29] = 1; VA12.weights[30] = 1; VA12.weights[31] = 1; VA12.weights[32] = 1; VA12.weights[33] = 1; VA12.weights[34] = 1; VA12.weights[35] = 1; VA12.weights[36] = 1; VA12.weights[37] = 1; VA12.weights[38] = 1; VA12.weights[39] = 1; VA12.weights[40] = 1; VA12.weights[41] = 1; VA12.weights[42] = 1; VA12.weights[43] = 1; VA12.weights[44] = 1; VA12.weights[45] = 1; VA12.weights[46] = 1; VA12.weights[47] = 1; VA12.weights[48] = 1; VA12.weights[49] = 1; VA12.weights[50] = 1; VA12.weights[51] = 1; VA12.weights[52] = 1; VA12.weights[53] = 1; VA12.weights[54] = 1; VA12.weights[55] = 1; VA12.weights[56] = 1; VA12.weights[57] = 1; VA12.weights[58] = 1;
    if (id == 264) {
        return VA12;
    }


    neuron VA2;
    VA2.cellID = 265;
    VA2.threshold = 1;
    VA2.inputsLen = 0;

    VA2.weightsLen = 0;
    VA2.weights[0] = 1; VA2.weights[1] = 1; VA2.weights[2] = 1; VA2.weights[3] = 1; VA2.weights[4] = 1; VA2.weights[5] = 1; VA2.weights[6] = 1; VA2.weights[7] = 1; VA2.weights[8] = 1; VA2.weights[9] = 1; VA2.weights[10] = 1; VA2.weights[11] = 1; VA2.weights[12] = 1; VA2.weights[13] = 1; VA2.weights[14] = 1; VA2.weights[15] = 1; VA2.weights[16] = 1; VA2.weights[17] = 1; VA2.weights[18] = 1; VA2.weights[19] = 1; VA2.weights[20] = 1; VA2.weights[21] = 1; VA2.weights[22] = 1; VA2.weights[23] = 1; VA2.weights[24] = 1; VA2.weights[25] = 1; VA2.weights[26] = 1; VA2.weights[27] = 1; VA2.weights[28] = 1; VA2.weights[29] = 1; VA2.weights[30] = 1; VA2.weights[31] = 1; VA2.weights[32] = 1; VA2.weights[33] = 1; VA2.weights[34] = 1; VA2.weights[35] = 1; VA2.weights[36] = 1; VA2.weights[37] = 1; VA2.weights[38] = 1; VA2.weights[39] = 1; VA2.weights[40] = 1; VA2.weights[41] = 1; VA2.weights[42] = 1; VA2.weights[43] = 1; VA2.weights[44] = 1; VA2.weights[45] = 1; VA2.weights[46] = 1; VA2.weights[47] = 1; VA2.weights[48] = 1; VA2.weights[49] = 1; VA2.weights[50] = 1; VA2.weights[51] = 1; VA2.weights[52] = 1; VA2.weights[53] = 1; VA2.weights[54] = 1; VA2.weights[55] = 1; VA2.weights[56] = 1; VA2.weights[57] = 1; VA2.weights[58] = 1;
    if (id == 265) {
        return VA2;
    }


    neuron VA3;
    VA3.cellID = 266;
    VA3.threshold = 1;
    VA3.inputsLen = 0;

    VA3.weightsLen = 0;
    VA3.weights[0] = 1; VA3.weights[1] = 1; VA3.weights[2] = 1; VA3.weights[3] = 1; VA3.weights[4] = 1; VA3.weights[5] = 1; VA3.weights[6] = 1; VA3.weights[7] = 1; VA3.weights[8] = 1; VA3.weights[9] = 1; VA3.weights[10] = 1; VA3.weights[11] = 1; VA3.weights[12] = 1; VA3.weights[13] = 1; VA3.weights[14] = 1; VA3.weights[15] = 1; VA3.weights[16] = 1; VA3.weights[17] = 1; VA3.weights[18] = 1; VA3.weights[19] = 1; VA3.weights[20] = 1; VA3.weights[21] = 1; VA3.weights[22] = 1; VA3.weights[23] = 1; VA3.weights[24] = 1; VA3.weights[25] = 1; VA3.weights[26] = 1; VA3.weights[27] = 1; VA3.weights[28] = 1; VA3.weights[29] = 1; VA3.weights[30] = 1; VA3.weights[31] = 1; VA3.weights[32] = 1; VA3.weights[33] = 1; VA3.weights[34] = 1; VA3.weights[35] = 1; VA3.weights[36] = 1; VA3.weights[37] = 1; VA3.weights[38] = 1; VA3.weights[39] = 1; VA3.weights[40] = 1; VA3.weights[41] = 1; VA3.weights[42] = 1; VA3.weights[43] = 1; VA3.weights[44] = 1; VA3.weights[45] = 1; VA3.weights[46] = 1; VA3.weights[47] = 1; VA3.weights[48] = 1; VA3.weights[49] = 1; VA3.weights[50] = 1; VA3.weights[51] = 1; VA3.weights[52] = 1; VA3.weights[53] = 1; VA3.weights[54] = 1; VA3.weights[55] = 1; VA3.weights[56] = 1; VA3.weights[57] = 1; VA3.weights[58] = 1;
    if (id == 266) {
        return VA3;
    }


    neuron VA4;
    VA4.cellID = 267;
    VA4.threshold = 1;
    VA4.inputsLen = 0;

    VA4.weightsLen = 0;
    VA4.weights[0] = 1; VA4.weights[1] = 1; VA4.weights[2] = 1; VA4.weights[3] = 1; VA4.weights[4] = 1; VA4.weights[5] = 1; VA4.weights[6] = 1; VA4.weights[7] = 1; VA4.weights[8] = 1; VA4.weights[9] = 1; VA4.weights[10] = 1; VA4.weights[11] = 1; VA4.weights[12] = 1; VA4.weights[13] = 1; VA4.weights[14] = 1; VA4.weights[15] = 1; VA4.weights[16] = 1; VA4.weights[17] = 1; VA4.weights[18] = 1; VA4.weights[19] = 1; VA4.weights[20] = 1; VA4.weights[21] = 1; VA4.weights[22] = 1; VA4.weights[23] = 1; VA4.weights[24] = 1; VA4.weights[25] = 1; VA4.weights[26] = 1; VA4.weights[27] = 1; VA4.weights[28] = 1; VA4.weights[29] = 1; VA4.weights[30] = 1; VA4.weights[31] = 1; VA4.weights[32] = 1; VA4.weights[33] = 1; VA4.weights[34] = 1; VA4.weights[35] = 1; VA4.weights[36] = 1; VA4.weights[37] = 1; VA4.weights[38] = 1; VA4.weights[39] = 1; VA4.weights[40] = 1; VA4.weights[41] = 1; VA4.weights[42] = 1; VA4.weights[43] = 1; VA4.weights[44] = 1; VA4.weights[45] = 1; VA4.weights[46] = 1; VA4.weights[47] = 1; VA4.weights[48] = 1; VA4.weights[49] = 1; VA4.weights[50] = 1; VA4.weights[51] = 1; VA4.weights[52] = 1; VA4.weights[53] = 1; VA4.weights[54] = 1; VA4.weights[55] = 1; VA4.weights[56] = 1; VA4.weights[57] = 1; VA4.weights[58] = 1;
    if (id == 267) {
        return VA4;
    }


    neuron VA5;
    VA5.cellID = 268;
    VA5.threshold = 1;
    VA5.inputsLen = 0;

    VA5.weightsLen = 0;
    VA5.weights[0] = 1; VA5.weights[1] = 1; VA5.weights[2] = 1; VA5.weights[3] = 1; VA5.weights[4] = 1; VA5.weights[5] = 1; VA5.weights[6] = 1; VA5.weights[7] = 1; VA5.weights[8] = 1; VA5.weights[9] = 1; VA5.weights[10] = 1; VA5.weights[11] = 1; VA5.weights[12] = 1; VA5.weights[13] = 1; VA5.weights[14] = 1; VA5.weights[15] = 1; VA5.weights[16] = 1; VA5.weights[17] = 1; VA5.weights[18] = 1; VA5.weights[19] = 1; VA5.weights[20] = 1; VA5.weights[21] = 1; VA5.weights[22] = 1; VA5.weights[23] = 1; VA5.weights[24] = 1; VA5.weights[25] = 1; VA5.weights[26] = 1; VA5.weights[27] = 1; VA5.weights[28] = 1; VA5.weights[29] = 1; VA5.weights[30] = 1; VA5.weights[31] = 1; VA5.weights[32] = 1; VA5.weights[33] = 1; VA5.weights[34] = 1; VA5.weights[35] = 1; VA5.weights[36] = 1; VA5.weights[37] = 1; VA5.weights[38] = 1; VA5.weights[39] = 1; VA5.weights[40] = 1; VA5.weights[41] = 1; VA5.weights[42] = 1; VA5.weights[43] = 1; VA5.weights[44] = 1; VA5.weights[45] = 1; VA5.weights[46] = 1; VA5.weights[47] = 1; VA5.weights[48] = 1; VA5.weights[49] = 1; VA5.weights[50] = 1; VA5.weights[51] = 1; VA5.weights[52] = 1; VA5.weights[53] = 1; VA5.weights[54] = 1; VA5.weights[55] = 1; VA5.weights[56] = 1; VA5.weights[57] = 1; VA5.weights[58] = 1;
    if (id == 268) {
        return VA5;
    }


    neuron VA6;
    VA6.cellID = 269;
    VA6.threshold = 1;
    VA6.inputsLen = 0;

    VA6.weightsLen = 0;
    VA6.weights[0] = 1; VA6.weights[1] = 1; VA6.weights[2] = 1; VA6.weights[3] = 1; VA6.weights[4] = 1; VA6.weights[5] = 1; VA6.weights[6] = 1; VA6.weights[7] = 1; VA6.weights[8] = 1; VA6.weights[9] = 1; VA6.weights[10] = 1; VA6.weights[11] = 1; VA6.weights[12] = 1; VA6.weights[13] = 1; VA6.weights[14] = 1; VA6.weights[15] = 1; VA6.weights[16] = 1; VA6.weights[17] = 1; VA6.weights[18] = 1; VA6.weights[19] = 1; VA6.weights[20] = 1; VA6.weights[21] = 1; VA6.weights[22] = 1; VA6.weights[23] = 1; VA6.weights[24] = 1; VA6.weights[25] = 1; VA6.weights[26] = 1; VA6.weights[27] = 1; VA6.weights[28] = 1; VA6.weights[29] = 1; VA6.weights[30] = 1; VA6.weights[31] = 1; VA6.weights[32] = 1; VA6.weights[33] = 1; VA6.weights[34] = 1; VA6.weights[35] = 1; VA6.weights[36] = 1; VA6.weights[37] = 1; VA6.weights[38] = 1; VA6.weights[39] = 1; VA6.weights[40] = 1; VA6.weights[41] = 1; VA6.weights[42] = 1; VA6.weights[43] = 1; VA6.weights[44] = 1; VA6.weights[45] = 1; VA6.weights[46] = 1; VA6.weights[47] = 1; VA6.weights[48] = 1; VA6.weights[49] = 1; VA6.weights[50] = 1; VA6.weights[51] = 1; VA6.weights[52] = 1; VA6.weights[53] = 1; VA6.weights[54] = 1; VA6.weights[55] = 1; VA6.weights[56] = 1; VA6.weights[57] = 1; VA6.weights[58] = 1;
    if (id == 269) {
        return VA6;
    }


    neuron VA7;
    VA7.cellID = 270;
    VA7.threshold = 1;
    VA7.inputsLen = 0;

    VA7.weightsLen = 0;
    VA7.weights[0] = 1; VA7.weights[1] = 1; VA7.weights[2] = 1; VA7.weights[3] = 1; VA7.weights[4] = 1; VA7.weights[5] = 1; VA7.weights[6] = 1; VA7.weights[7] = 1; VA7.weights[8] = 1; VA7.weights[9] = 1; VA7.weights[10] = 1; VA7.weights[11] = 1; VA7.weights[12] = 1; VA7.weights[13] = 1; VA7.weights[14] = 1; VA7.weights[15] = 1; VA7.weights[16] = 1; VA7.weights[17] = 1; VA7.weights[18] = 1; VA7.weights[19] = 1; VA7.weights[20] = 1; VA7.weights[21] = 1; VA7.weights[22] = 1; VA7.weights[23] = 1; VA7.weights[24] = 1; VA7.weights[25] = 1; VA7.weights[26] = 1; VA7.weights[27] = 1; VA7.weights[28] = 1; VA7.weights[29] = 1; VA7.weights[30] = 1; VA7.weights[31] = 1; VA7.weights[32] = 1; VA7.weights[33] = 1; VA7.weights[34] = 1; VA7.weights[35] = 1; VA7.weights[36] = 1; VA7.weights[37] = 1; VA7.weights[38] = 1; VA7.weights[39] = 1; VA7.weights[40] = 1; VA7.weights[41] = 1; VA7.weights[42] = 1; VA7.weights[43] = 1; VA7.weights[44] = 1; VA7.weights[45] = 1; VA7.weights[46] = 1; VA7.weights[47] = 1; VA7.weights[48] = 1; VA7.weights[49] = 1; VA7.weights[50] = 1; VA7.weights[51] = 1; VA7.weights[52] = 1; VA7.weights[53] = 1; VA7.weights[54] = 1; VA7.weights[55] = 1; VA7.weights[56] = 1; VA7.weights[57] = 1; VA7.weights[58] = 1;
    if (id == 270) {
        return VA7;
    }


    neuron VA8;
    VA8.cellID = 271;
    VA8.threshold = 1;
    VA8.inputsLen = 0;

    VA8.weightsLen = 0;
    VA8.weights[0] = 1; VA8.weights[1] = 1; VA8.weights[2] = 1; VA8.weights[3] = 1; VA8.weights[4] = 1; VA8.weights[5] = 1; VA8.weights[6] = 1; VA8.weights[7] = 1; VA8.weights[8] = 1; VA8.weights[9] = 1; VA8.weights[10] = 1; VA8.weights[11] = 1; VA8.weights[12] = 1; VA8.weights[13] = 1; VA8.weights[14] = 1; VA8.weights[15] = 1; VA8.weights[16] = 1; VA8.weights[17] = 1; VA8.weights[18] = 1; VA8.weights[19] = 1; VA8.weights[20] = 1; VA8.weights[21] = 1; VA8.weights[22] = 1; VA8.weights[23] = 1; VA8.weights[24] = 1; VA8.weights[25] = 1; VA8.weights[26] = 1; VA8.weights[27] = 1; VA8.weights[28] = 1; VA8.weights[29] = 1; VA8.weights[30] = 1; VA8.weights[31] = 1; VA8.weights[32] = 1; VA8.weights[33] = 1; VA8.weights[34] = 1; VA8.weights[35] = 1; VA8.weights[36] = 1; VA8.weights[37] = 1; VA8.weights[38] = 1; VA8.weights[39] = 1; VA8.weights[40] = 1; VA8.weights[41] = 1; VA8.weights[42] = 1; VA8.weights[43] = 1; VA8.weights[44] = 1; VA8.weights[45] = 1; VA8.weights[46] = 1; VA8.weights[47] = 1; VA8.weights[48] = 1; VA8.weights[49] = 1; VA8.weights[50] = 1; VA8.weights[51] = 1; VA8.weights[52] = 1; VA8.weights[53] = 1; VA8.weights[54] = 1; VA8.weights[55] = 1; VA8.weights[56] = 1; VA8.weights[57] = 1; VA8.weights[58] = 1;
    if (id == 271) {
        return VA8;
    }


    neuron VA9;
    VA9.cellID = 272;
    VA9.threshold = 1;
    VA9.inputsLen = 0;

    VA9.weightsLen = 0;
    VA9.weights[0] = 1; VA9.weights[1] = 1; VA9.weights[2] = 1; VA9.weights[3] = 1; VA9.weights[4] = 1; VA9.weights[5] = 1; VA9.weights[6] = 1; VA9.weights[7] = 1; VA9.weights[8] = 1; VA9.weights[9] = 1; VA9.weights[10] = 1; VA9.weights[11] = 1; VA9.weights[12] = 1; VA9.weights[13] = 1; VA9.weights[14] = 1; VA9.weights[15] = 1; VA9.weights[16] = 1; VA9.weights[17] = 1; VA9.weights[18] = 1; VA9.weights[19] = 1; VA9.weights[20] = 1; VA9.weights[21] = 1; VA9.weights[22] = 1; VA9.weights[23] = 1; VA9.weights[24] = 1; VA9.weights[25] = 1; VA9.weights[26] = 1; VA9.weights[27] = 1; VA9.weights[28] = 1; VA9.weights[29] = 1; VA9.weights[30] = 1; VA9.weights[31] = 1; VA9.weights[32] = 1; VA9.weights[33] = 1; VA9.weights[34] = 1; VA9.weights[35] = 1; VA9.weights[36] = 1; VA9.weights[37] = 1; VA9.weights[38] = 1; VA9.weights[39] = 1; VA9.weights[40] = 1; VA9.weights[41] = 1; VA9.weights[42] = 1; VA9.weights[43] = 1; VA9.weights[44] = 1; VA9.weights[45] = 1; VA9.weights[46] = 1; VA9.weights[47] = 1; VA9.weights[48] = 1; VA9.weights[49] = 1; VA9.weights[50] = 1; VA9.weights[51] = 1; VA9.weights[52] = 1; VA9.weights[53] = 1; VA9.weights[54] = 1; VA9.weights[55] = 1; VA9.weights[56] = 1; VA9.weights[57] = 1; VA9.weights[58] = 1;
    if (id == 272) {
        return VA9;
    }


    neuron VB1;
    VB1.cellID = 273;
    VB1.threshold = 1;
    VB1.inputsLen = 0;

    VB1.weightsLen = 0;
    VB1.weights[0] = 1; VB1.weights[1] = 1; VB1.weights[2] = 1; VB1.weights[3] = 1; VB1.weights[4] = 1; VB1.weights[5] = 1; VB1.weights[6] = 1; VB1.weights[7] = 1; VB1.weights[8] = 1; VB1.weights[9] = 1; VB1.weights[10] = 1; VB1.weights[11] = 1; VB1.weights[12] = 1; VB1.weights[13] = 1; VB1.weights[14] = 1; VB1.weights[15] = 1; VB1.weights[16] = 1; VB1.weights[17] = 1; VB1.weights[18] = 1; VB1.weights[19] = 1; VB1.weights[20] = 1; VB1.weights[21] = 1; VB1.weights[22] = 1; VB1.weights[23] = 1; VB1.weights[24] = 1; VB1.weights[25] = 1; VB1.weights[26] = 1; VB1.weights[27] = 1; VB1.weights[28] = 1; VB1.weights[29] = 1; VB1.weights[30] = 1; VB1.weights[31] = 1; VB1.weights[32] = 1; VB1.weights[33] = 1; VB1.weights[34] = 1; VB1.weights[35] = 1; VB1.weights[36] = 1; VB1.weights[37] = 1; VB1.weights[38] = 1; VB1.weights[39] = 1; VB1.weights[40] = 1; VB1.weights[41] = 1; VB1.weights[42] = 1; VB1.weights[43] = 1; VB1.weights[44] = 1; VB1.weights[45] = 1; VB1.weights[46] = 1; VB1.weights[47] = 1; VB1.weights[48] = 1; VB1.weights[49] = 1; VB1.weights[50] = 1; VB1.weights[51] = 1; VB1.weights[52] = 1; VB1.weights[53] = 1; VB1.weights[54] = 1; VB1.weights[55] = 1; VB1.weights[56] = 1; VB1.weights[57] = 1; VB1.weights[58] = 1;
    if (id == 273) {
        return VB1;
    }


    neuron VB10;
    VB10.cellID = 274;
    VB10.threshold = 1;
    VB10.inputsLen = 14;
    VB10.inputs[0] = 263; VB10.inputs[1] = 263; VB10.inputs[2] = 263; VB10.inputs[3] = 274; VB10.inputs[4] = 59; VB10.inputs[5] = 64; VB10.inputs[6] = 174; VB10.inputs[7] = 173; VB10.inputs[8] = 172; VB10.inputs[9] = 172; VB10.inputs[10] = 173; VB10.inputs[11] = 174; VB10.inputs[12] = 293; VB10.inputs[13] = 293;
    VB10.weightsLen = 14;
    VB10.weights[0] = 1; VB10.weights[1] = 1; VB10.weights[2] = 1; VB10.weights[3] = 1; VB10.weights[4] = 1; VB10.weights[5] = 1; VB10.weights[6] = 1; VB10.weights[7] = 1; VB10.weights[8] = 1; VB10.weights[9] = 1; VB10.weights[10] = 1; VB10.weights[11] = 1; VB10.weights[12] = 1; VB10.weights[13] = 1;
    if (id == 274) {
        return VB10;
    }


    neuron VB11;
    VB11.cellID = 275;
    VB11.threshold = 1;
    VB11.inputsLen = 20;
    VB11.inputs[0] = 184; VB11.inputs[1] = 172; VB11.inputs[2] = 274; VB11.inputs[3] = 292; VB11.inputs[4] = 173; VB11.inputs[5] = 111; VB11.inputs[6] = 293; VB11.inputs[7] = 69; VB11.inputs[8] = 275; VB11.inputs[9] = 275; VB11.inputs[10] = 275; VB11.inputs[11] = 275; VB11.inputs[12] = 111; VB11.inputs[13] = 264; VB11.inputs[14] = 264; VB11.inputs[15] = 264; VB11.inputs[16] = 55; VB11.inputs[17] = 181; VB11.inputs[18] = 292; VB11.inputs[19] = 293;
    VB11.weightsLen = 20;
    VB11.weights[0] = 1; VB11.weights[1] = 1; VB11.weights[2] = 1; VB11.weights[3] = 1; VB11.weights[4] = 1; VB11.weights[5] = 1; VB11.weights[6] = 1; VB11.weights[7] = 1; VB11.weights[8] = 1; VB11.weights[9] = 1; VB11.weights[10] = 1; VB11.weights[11] = 1; VB11.weights[12] = 1; VB11.weights[13] = 1; VB11.weights[14] = 1; VB11.weights[15] = 1; VB11.weights[16] = 1; VB11.weights[17] = 1; VB11.weights[18] = 1; VB11.weights[19] = 1;
    if (id == 275) {
        return VB11;
    }


    neuron VB2;
    VB2.cellID = 276;
    VB2.threshold = 1;
    VB2.inputsLen = 0;

    VB2.weightsLen = 0;
    VB2.weights[0] = 1; VB2.weights[1] = 1; VB2.weights[2] = 1; VB2.weights[3] = 1; VB2.weights[4] = 1; VB2.weights[5] = 1; VB2.weights[6] = 1; VB2.weights[7] = 1; VB2.weights[8] = 1; VB2.weights[9] = 1; VB2.weights[10] = 1; VB2.weights[11] = 1; VB2.weights[12] = 1; VB2.weights[13] = 1; VB2.weights[14] = 1; VB2.weights[15] = 1; VB2.weights[16] = 1; VB2.weights[17] = 1; VB2.weights[18] = 1; VB2.weights[19] = 1;
    if (id == 276) {
        return VB2;
    }


    neuron VB3;
    VB3.cellID = 277;
    VB3.threshold = 1;
    VB3.inputsLen = 0;

    VB3.weightsLen = 0;
    VB3.weights[0] = 1; VB3.weights[1] = 1; VB3.weights[2] = 1; VB3.weights[3] = 1; VB3.weights[4] = 1; VB3.weights[5] = 1; VB3.weights[6] = 1; VB3.weights[7] = 1; VB3.weights[8] = 1; VB3.weights[9] = 1; VB3.weights[10] = 1; VB3.weights[11] = 1; VB3.weights[12] = 1; VB3.weights[13] = 1; VB3.weights[14] = 1; VB3.weights[15] = 1; VB3.weights[16] = 1; VB3.weights[17] = 1; VB3.weights[18] = 1; VB3.weights[19] = 1;
    if (id == 277) {
        return VB3;
    }


    neuron VB4;
    VB4.cellID = 278;
    VB4.threshold = 1;
    VB4.inputsLen = 0;

    VB4.weightsLen = 0;
    VB4.weights[0] = 1; VB4.weights[1] = 1; VB4.weights[2] = 1; VB4.weights[3] = 1; VB4.weights[4] = 1; VB4.weights[5] = 1; VB4.weights[6] = 1; VB4.weights[7] = 1; VB4.weights[8] = 1; VB4.weights[9] = 1; VB4.weights[10] = 1; VB4.weights[11] = 1; VB4.weights[12] = 1; VB4.weights[13] = 1; VB4.weights[14] = 1; VB4.weights[15] = 1; VB4.weights[16] = 1; VB4.weights[17] = 1; VB4.weights[18] = 1; VB4.weights[19] = 1;
    if (id == 278) {
        return VB4;
    }


    neuron VB5;
    VB5.cellID = 279;
    VB5.threshold = 1;
    VB5.inputsLen = 0;

    VB5.weightsLen = 0;
    VB5.weights[0] = 1; VB5.weights[1] = 1; VB5.weights[2] = 1; VB5.weights[3] = 1; VB5.weights[4] = 1; VB5.weights[5] = 1; VB5.weights[6] = 1; VB5.weights[7] = 1; VB5.weights[8] = 1; VB5.weights[9] = 1; VB5.weights[10] = 1; VB5.weights[11] = 1; VB5.weights[12] = 1; VB5.weights[13] = 1; VB5.weights[14] = 1; VB5.weights[15] = 1; VB5.weights[16] = 1; VB5.weights[17] = 1; VB5.weights[18] = 1; VB5.weights[19] = 1;
    if (id == 279) {
        return VB5;
    }


    neuron VB6;
    VB6.cellID = 280;
    VB6.threshold = 1;
    VB6.inputsLen = 0;

    VB6.weightsLen = 0;
    VB6.weights[0] = 1; VB6.weights[1] = 1; VB6.weights[2] = 1; VB6.weights[3] = 1; VB6.weights[4] = 1; VB6.weights[5] = 1; VB6.weights[6] = 1; VB6.weights[7] = 1; VB6.weights[8] = 1; VB6.weights[9] = 1; VB6.weights[10] = 1; VB6.weights[11] = 1; VB6.weights[12] = 1; VB6.weights[13] = 1; VB6.weights[14] = 1; VB6.weights[15] = 1; VB6.weights[16] = 1; VB6.weights[17] = 1; VB6.weights[18] = 1; VB6.weights[19] = 1;
    if (id == 280) {
        return VB6;
    }


    neuron VB7;
    VB7.cellID = 281;
    VB7.threshold = 1;
    VB7.inputsLen = 0;

    VB7.weightsLen = 0;
    VB7.weights[0] = 1; VB7.weights[1] = 1; VB7.weights[2] = 1; VB7.weights[3] = 1; VB7.weights[4] = 1; VB7.weights[5] = 1; VB7.weights[6] = 1; VB7.weights[7] = 1; VB7.weights[8] = 1; VB7.weights[9] = 1; VB7.weights[10] = 1; VB7.weights[11] = 1; VB7.weights[12] = 1; VB7.weights[13] = 1; VB7.weights[14] = 1; VB7.weights[15] = 1; VB7.weights[16] = 1; VB7.weights[17] = 1; VB7.weights[18] = 1; VB7.weights[19] = 1;
    if (id == 281) {
        return VB7;
    }


    neuron VB8;
    VB8.cellID = 282;
    VB8.threshold = 1;
    VB8.inputsLen = 0;

    VB8.weightsLen = 0;
    VB8.weights[0] = 1; VB8.weights[1] = 1; VB8.weights[2] = 1; VB8.weights[3] = 1; VB8.weights[4] = 1; VB8.weights[5] = 1; VB8.weights[6] = 1; VB8.weights[7] = 1; VB8.weights[8] = 1; VB8.weights[9] = 1; VB8.weights[10] = 1; VB8.weights[11] = 1; VB8.weights[12] = 1; VB8.weights[13] = 1; VB8.weights[14] = 1; VB8.weights[15] = 1; VB8.weights[16] = 1; VB8.weights[17] = 1; VB8.weights[18] = 1; VB8.weights[19] = 1;
    if (id == 282) {
        return VB8;
    }


    neuron VB9;
    VB9.cellID = 283;
    VB9.threshold = 1;
    VB9.inputsLen = 0;

    VB9.weightsLen = 0;
    VB9.weights[0] = 1; VB9.weights[1] = 1; VB9.weights[2] = 1; VB9.weights[3] = 1; VB9.weights[4] = 1; VB9.weights[5] = 1; VB9.weights[6] = 1; VB9.weights[7] = 1; VB9.weights[8] = 1; VB9.weights[9] = 1; VB9.weights[10] = 1; VB9.weights[11] = 1; VB9.weights[12] = 1; VB9.weights[13] = 1; VB9.weights[14] = 1; VB9.weights[15] = 1; VB9.weights[16] = 1; VB9.weights[17] = 1; VB9.weights[18] = 1; VB9.weights[19] = 1;
    if (id == 283) {
        return VB9;
    }


    neuron VC1;
    VC1.cellID = 284;
    VC1.threshold = 1;
    VC1.inputsLen = 0;

    VC1.weightsLen = 0;
    VC1.weights[0] = 1; VC1.weights[1] = 1; VC1.weights[2] = 1; VC1.weights[3] = 1; VC1.weights[4] = 1; VC1.weights[5] = 1; VC1.weights[6] = 1; VC1.weights[7] = 1; VC1.weights[8] = 1; VC1.weights[9] = 1; VC1.weights[10] = 1; VC1.weights[11] = 1; VC1.weights[12] = 1; VC1.weights[13] = 1; VC1.weights[14] = 1; VC1.weights[15] = 1; VC1.weights[16] = 1; VC1.weights[17] = 1; VC1.weights[18] = 1; VC1.weights[19] = 1;
    if (id == 284) {
        return VC1;
    }


    neuron VC2;
    VC2.cellID = 285;
    VC2.threshold = 1;
    VC2.inputsLen = 0;

    VC2.weightsLen = 0;
    VC2.weights[0] = 1; VC2.weights[1] = 1; VC2.weights[2] = 1; VC2.weights[3] = 1; VC2.weights[4] = 1; VC2.weights[5] = 1; VC2.weights[6] = 1; VC2.weights[7] = 1; VC2.weights[8] = 1; VC2.weights[9] = 1; VC2.weights[10] = 1; VC2.weights[11] = 1; VC2.weights[12] = 1; VC2.weights[13] = 1; VC2.weights[14] = 1; VC2.weights[15] = 1; VC2.weights[16] = 1; VC2.weights[17] = 1; VC2.weights[18] = 1; VC2.weights[19] = 1;
    if (id == 285) {
        return VC2;
    }


    neuron VC3;
    VC3.cellID = 286;
    VC3.threshold = 1;
    VC3.inputsLen = 0;

    VC3.weightsLen = 0;
    VC3.weights[0] = 1; VC3.weights[1] = 1; VC3.weights[2] = 1; VC3.weights[3] = 1; VC3.weights[4] = 1; VC3.weights[5] = 1; VC3.weights[6] = 1; VC3.weights[7] = 1; VC3.weights[8] = 1; VC3.weights[9] = 1; VC3.weights[10] = 1; VC3.weights[11] = 1; VC3.weights[12] = 1; VC3.weights[13] = 1; VC3.weights[14] = 1; VC3.weights[15] = 1; VC3.weights[16] = 1; VC3.weights[17] = 1; VC3.weights[18] = 1; VC3.weights[19] = 1;
    if (id == 286) {
        return VC3;
    }


    neuron VC4;
    VC4.cellID = 287;
    VC4.threshold = 1;
    VC4.inputsLen = 0;

    VC4.weightsLen = 0;
    VC4.weights[0] = 1; VC4.weights[1] = 1; VC4.weights[2] = 1; VC4.weights[3] = 1; VC4.weights[4] = 1; VC4.weights[5] = 1; VC4.weights[6] = 1; VC4.weights[7] = 1; VC4.weights[8] = 1; VC4.weights[9] = 1; VC4.weights[10] = 1; VC4.weights[11] = 1; VC4.weights[12] = 1; VC4.weights[13] = 1; VC4.weights[14] = 1; VC4.weights[15] = 1; VC4.weights[16] = 1; VC4.weights[17] = 1; VC4.weights[18] = 1; VC4.weights[19] = 1;
    if (id == 287) {
        return VC4;
    }


    neuron VC5;
    VC5.cellID = 288;
    VC5.threshold = 1;
    VC5.inputsLen = 0;

    VC5.weightsLen = 0;
    VC5.weights[0] = 1; VC5.weights[1] = 1; VC5.weights[2] = 1; VC5.weights[3] = 1; VC5.weights[4] = 1; VC5.weights[5] = 1; VC5.weights[6] = 1; VC5.weights[7] = 1; VC5.weights[8] = 1; VC5.weights[9] = 1; VC5.weights[10] = 1; VC5.weights[11] = 1; VC5.weights[12] = 1; VC5.weights[13] = 1; VC5.weights[14] = 1; VC5.weights[15] = 1; VC5.weights[16] = 1; VC5.weights[17] = 1; VC5.weights[18] = 1; VC5.weights[19] = 1;
    if (id == 288) {
        return VC5;
    }


    neuron VC6;
    VC6.cellID = 289;
    VC6.threshold = 1;
    VC6.inputsLen = 0;

    VC6.weightsLen = 0;
    VC6.weights[0] = 1; VC6.weights[1] = 1; VC6.weights[2] = 1; VC6.weights[3] = 1; VC6.weights[4] = 1; VC6.weights[5] = 1; VC6.weights[6] = 1; VC6.weights[7] = 1; VC6.weights[8] = 1; VC6.weights[9] = 1; VC6.weights[10] = 1; VC6.weights[11] = 1; VC6.weights[12] = 1; VC6.weights[13] = 1; VC6.weights[14] = 1; VC6.weights[15] = 1; VC6.weights[16] = 1; VC6.weights[17] = 1; VC6.weights[18] = 1; VC6.weights[19] = 1;
    if (id == 289) {
        return VC6;
    }


    neuron VD1;
    VD1.cellID = 290;
    VD1.threshold = 1;
    VD1.inputsLen = 0;

    VD1.weightsLen = 0;
    VD1.weights[0] = 1; VD1.weights[1] = 1; VD1.weights[2] = 1; VD1.weights[3] = 1; VD1.weights[4] = 1; VD1.weights[5] = 1; VD1.weights[6] = 1; VD1.weights[7] = 1; VD1.weights[8] = 1; VD1.weights[9] = 1; VD1.weights[10] = 1; VD1.weights[11] = 1; VD1.weights[12] = 1; VD1.weights[13] = 1; VD1.weights[14] = 1; VD1.weights[15] = 1; VD1.weights[16] = 1; VD1.weights[17] = 1; VD1.weights[18] = 1; VD1.weights[19] = 1;
    if (id == 290) {
        return VD1;
    }


    neuron VD10;
    VD10.cellID = 291;
    VD10.threshold = 1;
    VD10.inputsLen = 19;
    VD10.inputs[0] = 264; VD10.inputs[1] = 264; VD10.inputs[2] = 264; VD10.inputs[3] = 264; VD10.inputs[4] = 264; VD10.inputs[5] = 264; VD10.inputs[6] = 264; VD10.inputs[7] = 264; VD10.inputs[8] = 264; VD10.inputs[9] = 264; VD10.inputs[10] = 264; VD10.inputs[11] = 264; VD10.inputs[12] = 264; VD10.inputs[13] = 264; VD10.inputs[14] = 264; VD10.inputs[15] = 264; VD10.inputs[16] = 175; VD10.inputs[17] = 175; VD10.inputs[18] = 292;
    VD10.weightsLen = 19;
    VD10.weights[0] = 1; VD10.weights[1] = 1; VD10.weights[2] = 1; VD10.weights[3] = 1; VD10.weights[4] = 1; VD10.weights[5] = 1; VD10.weights[6] = 1; VD10.weights[7] = 1; VD10.weights[8] = 1; VD10.weights[9] = 1; VD10.weights[10] = 1; VD10.weights[11] = 1; VD10.weights[12] = 1; VD10.weights[13] = 1; VD10.weights[14] = 1; VD10.weights[15] = 1; VD10.weights[16] = 1; VD10.weights[17] = 1; VD10.weights[18] = 1;
    if (id == 291) {
        return VD10;
    }


    neuron VD11;
    VD11.cellID = 292;
    VD11.threshold = 1;
    VD11.inputsLen = 15;
    VD11.inputs[0] = 274; VD11.inputs[1] = 263; VD11.inputs[2] = 54; VD11.inputs[3] = 63; VD11.inputs[4] = 263; VD11.inputs[5] = 63; VD11.inputs[6] = 264; VD11.inputs[7] = 264; VD11.inputs[8] = 55; VD11.inputs[9] = 181; VD11.inputs[10] = 292; VD11.inputs[11] = 174; VD11.inputs[12] = 174; VD11.inputs[13] = 292; VD11.inputs[14] = 174;
    VD11.weightsLen = 15;
    VD11.weights[0] = 1; VD11.weights[1] = 1; VD11.weights[2] = 1; VD11.weights[3] = 1; VD11.weights[4] = 1; VD11.weights[5] = 1; VD11.weights[6] = 1; VD11.weights[7] = 1; VD11.weights[8] = 1; VD11.weights[9] = 1; VD11.weights[10] = 1; VD11.weights[11] = 1; VD11.weights[12] = 1; VD11.weights[13] = 1; VD11.weights[14] = 1;
    if (id == 292) {
        return VD11;
    }


    neuron VD12;
    VD12.cellID = 293;
    VD12.threshold = 1;
    VD12.inputsLen = 22;
    VD12.inputs[0] = 264; VD12.inputs[1] = 264; VD12.inputs[2] = 264; VD12.inputs[3] = 264; VD12.inputs[4] = 264; VD12.inputs[5] = 263; VD12.inputs[6] = 71; VD12.inputs[7] = 274; VD12.inputs[8] = 179; VD12.inputs[9] = 263; VD12.inputs[10] = 263; VD12.inputs[11] = 263; VD12.inputs[12] = 274; VD12.inputs[13] = 275; VD12.inputs[14] = 293; VD12.inputs[15] = 293; VD12.inputs[16] = 69; VD12.inputs[17] = 294; VD12.inputs[18] = 71; VD12.inputs[19] = 71; VD12.inputs[20] = 293; VD12.inputs[21] = 294;
    VD12.weightsLen = 22;
    VD12.weights[0] = 1; VD12.weights[1] = 1; VD12.weights[2] = 1; VD12.weights[3] = 1; VD12.weights[4] = 1; VD12.weights[5] = 1; VD12.weights[6] = 1; VD12.weights[7] = 1; VD12.weights[8] = 1; VD12.weights[9] = 1; VD12.weights[10] = 1; VD12.weights[11] = 1; VD12.weights[12] = 1; VD12.weights[13] = 1; VD12.weights[14] = 1; VD12.weights[15] = 1; VD12.weights[16] = 1; VD12.weights[17] = 1; VD12.weights[18] = 1; VD12.weights[19] = 1; VD12.weights[20] = 1; VD12.weights[21] = 1;
    if (id == 293) {
        return VD12;
    }


    neuron VD13;
    VD13.cellID = 294;
    VD13.threshold = 1;
    VD13.inputsLen = 41;
    VD13.inputs[0] = 264; VD13.inputs[1] = 264; VD13.inputs[2] = 159; VD13.inputs[3] = 158; VD13.inputs[4] = 158; VD13.inputs[5] = 158; VD13.inputs[6] = 158; VD13.inputs[7] = 158; VD13.inputs[8] = 159; VD13.inputs[9] = 31; VD13.inputs[10] = 159; VD13.inputs[11] = 158; VD13.inputs[12] = 159; VD13.inputs[13] = 158; VD13.inputs[14] = 31; VD13.inputs[15] = 159; VD13.inputs[16] = 159; VD13.inputs[17] = 159; VD13.inputs[18] = 159; VD13.inputs[19] = 179; VD13.inputs[20] = 275; VD13.inputs[21] = 275; VD13.inputs[22] = 264; VD13.inputs[23] = 179; VD13.inputs[24] = 275; VD13.inputs[25] = 275; VD13.inputs[26] = 264; VD13.inputs[27] = 275; VD13.inputs[28] = 275; VD13.inputs[29] = 275; VD13.inputs[30] = 275; VD13.inputs[31] = 264; VD13.inputs[32] = 264; VD13.inputs[33] = 275; VD13.inputs[34] = 275; VD13.inputs[35] = 264; VD13.inputs[36] = 264; VD13.inputs[37] = 275; VD13.inputs[38] = 264; VD13.inputs[39] = 264; VD13.inputs[40] = 275;
    VD13.weightsLen = 41;
    VD13.weights[0] = 1; VD13.weights[1] = 1; VD13.weights[2] = 1; VD13.weights[3] = 1; VD13.weights[4] = 1; VD13.weights[5] = 1; VD13.weights[6] = 1; VD13.weights[7] = 1; VD13.weights[8] = 1; VD13.weights[9] = 1; VD13.weights[10] = 1; VD13.weights[11] = 1; VD13.weights[12] = 1; VD13.weights[13] = 1; VD13.weights[14] = 1; VD13.weights[15] = 1; VD13.weights[16] = 1; VD13.weights[17] = 1; VD13.weights[18] = 1; VD13.weights[19] = 1; VD13.weights[20] = 1; VD13.weights[21] = 1; VD13.weights[22] = 1; VD13.weights[23] = 1; VD13.weights[24] = 1; VD13.weights[25] = 1; VD13.weights[26] = 1; VD13.weights[27] = 1; VD13.weights[28] = 1; VD13.weights[29] = 1; VD13.weights[30] = 1; VD13.weights[31] = 1; VD13.weights[32] = 1; VD13.weights[33] = 1; VD13.weights[34] = 1; VD13.weights[35] = 1; VD13.weights[36] = 1; VD13.weights[37] = 1; VD13.weights[38] = 1; VD13.weights[39] = 1; VD13.weights[40] = 1;
    if (id == 294) {
        return VD13;
    }


    neuron VD2;
    VD2.cellID = 295;
    VD2.threshold = 1;
    VD2.inputsLen = 0;

    VD2.weightsLen = 0;
    VD2.weights[0] = 1; VD2.weights[1] = 1; VD2.weights[2] = 1; VD2.weights[3] = 1; VD2.weights[4] = 1; VD2.weights[5] = 1; VD2.weights[6] = 1; VD2.weights[7] = 1; VD2.weights[8] = 1; VD2.weights[9] = 1; VD2.weights[10] = 1; VD2.weights[11] = 1; VD2.weights[12] = 1; VD2.weights[13] = 1; VD2.weights[14] = 1; VD2.weights[15] = 1; VD2.weights[16] = 1; VD2.weights[17] = 1; VD2.weights[18] = 1; VD2.weights[19] = 1; VD2.weights[20] = 1; VD2.weights[21] = 1; VD2.weights[22] = 1; VD2.weights[23] = 1; VD2.weights[24] = 1; VD2.weights[25] = 1; VD2.weights[26] = 1; VD2.weights[27] = 1; VD2.weights[28] = 1; VD2.weights[29] = 1; VD2.weights[30] = 1; VD2.weights[31] = 1; VD2.weights[32] = 1; VD2.weights[33] = 1; VD2.weights[34] = 1; VD2.weights[35] = 1; VD2.weights[36] = 1; VD2.weights[37] = 1; VD2.weights[38] = 1; VD2.weights[39] = 1; VD2.weights[40] = 1;
    if (id == 295) {
        return VD2;
    }


    neuron VD3;
    VD3.cellID = 296;
    VD3.threshold = 1;
    VD3.inputsLen = 0;

    VD3.weightsLen = 0;
    VD3.weights[0] = 1; VD3.weights[1] = 1; VD3.weights[2] = 1; VD3.weights[3] = 1; VD3.weights[4] = 1; VD3.weights[5] = 1; VD3.weights[6] = 1; VD3.weights[7] = 1; VD3.weights[8] = 1; VD3.weights[9] = 1; VD3.weights[10] = 1; VD3.weights[11] = 1; VD3.weights[12] = 1; VD3.weights[13] = 1; VD3.weights[14] = 1; VD3.weights[15] = 1; VD3.weights[16] = 1; VD3.weights[17] = 1; VD3.weights[18] = 1; VD3.weights[19] = 1; VD3.weights[20] = 1; VD3.weights[21] = 1; VD3.weights[22] = 1; VD3.weights[23] = 1; VD3.weights[24] = 1; VD3.weights[25] = 1; VD3.weights[26] = 1; VD3.weights[27] = 1; VD3.weights[28] = 1; VD3.weights[29] = 1; VD3.weights[30] = 1; VD3.weights[31] = 1; VD3.weights[32] = 1; VD3.weights[33] = 1; VD3.weights[34] = 1; VD3.weights[35] = 1; VD3.weights[36] = 1; VD3.weights[37] = 1; VD3.weights[38] = 1; VD3.weights[39] = 1; VD3.weights[40] = 1;
    if (id == 296) {
        return VD3;
    }


    neuron VD4;
    VD4.cellID = 297;
    VD4.threshold = 1;
    VD4.inputsLen = 0;

    VD4.weightsLen = 0;
    VD4.weights[0] = 1; VD4.weights[1] = 1; VD4.weights[2] = 1; VD4.weights[3] = 1; VD4.weights[4] = 1; VD4.weights[5] = 1; VD4.weights[6] = 1; VD4.weights[7] = 1; VD4.weights[8] = 1; VD4.weights[9] = 1; VD4.weights[10] = 1; VD4.weights[11] = 1; VD4.weights[12] = 1; VD4.weights[13] = 1; VD4.weights[14] = 1; VD4.weights[15] = 1; VD4.weights[16] = 1; VD4.weights[17] = 1; VD4.weights[18] = 1; VD4.weights[19] = 1; VD4.weights[20] = 1; VD4.weights[21] = 1; VD4.weights[22] = 1; VD4.weights[23] = 1; VD4.weights[24] = 1; VD4.weights[25] = 1; VD4.weights[26] = 1; VD4.weights[27] = 1; VD4.weights[28] = 1; VD4.weights[29] = 1; VD4.weights[30] = 1; VD4.weights[31] = 1; VD4.weights[32] = 1; VD4.weights[33] = 1; VD4.weights[34] = 1; VD4.weights[35] = 1; VD4.weights[36] = 1; VD4.weights[37] = 1; VD4.weights[38] = 1; VD4.weights[39] = 1; VD4.weights[40] = 1;
    if (id == 297) {
        return VD4;
    }


    neuron VD5;
    VD5.cellID = 298;
    VD5.threshold = 1;
    VD5.inputsLen = 0;

    VD5.weightsLen = 0;
    VD5.weights[0] = 1; VD5.weights[1] = 1; VD5.weights[2] = 1; VD5.weights[3] = 1; VD5.weights[4] = 1; VD5.weights[5] = 1; VD5.weights[6] = 1; VD5.weights[7] = 1; VD5.weights[8] = 1; VD5.weights[9] = 1; VD5.weights[10] = 1; VD5.weights[11] = 1; VD5.weights[12] = 1; VD5.weights[13] = 1; VD5.weights[14] = 1; VD5.weights[15] = 1; VD5.weights[16] = 1; VD5.weights[17] = 1; VD5.weights[18] = 1; VD5.weights[19] = 1; VD5.weights[20] = 1; VD5.weights[21] = 1; VD5.weights[22] = 1; VD5.weights[23] = 1; VD5.weights[24] = 1; VD5.weights[25] = 1; VD5.weights[26] = 1; VD5.weights[27] = 1; VD5.weights[28] = 1; VD5.weights[29] = 1; VD5.weights[30] = 1; VD5.weights[31] = 1; VD5.weights[32] = 1; VD5.weights[33] = 1; VD5.weights[34] = 1; VD5.weights[35] = 1; VD5.weights[36] = 1; VD5.weights[37] = 1; VD5.weights[38] = 1; VD5.weights[39] = 1; VD5.weights[40] = 1;
    if (id == 298) {
        return VD5;
    }


    neuron VD6;
    VD6.cellID = 299;
    VD6.threshold = 1;
    VD6.inputsLen = 0;

    VD6.weightsLen = 0;
    VD6.weights[0] = 1; VD6.weights[1] = 1; VD6.weights[2] = 1; VD6.weights[3] = 1; VD6.weights[4] = 1; VD6.weights[5] = 1; VD6.weights[6] = 1; VD6.weights[7] = 1; VD6.weights[8] = 1; VD6.weights[9] = 1; VD6.weights[10] = 1; VD6.weights[11] = 1; VD6.weights[12] = 1; VD6.weights[13] = 1; VD6.weights[14] = 1; VD6.weights[15] = 1; VD6.weights[16] = 1; VD6.weights[17] = 1; VD6.weights[18] = 1; VD6.weights[19] = 1; VD6.weights[20] = 1; VD6.weights[21] = 1; VD6.weights[22] = 1; VD6.weights[23] = 1; VD6.weights[24] = 1; VD6.weights[25] = 1; VD6.weights[26] = 1; VD6.weights[27] = 1; VD6.weights[28] = 1; VD6.weights[29] = 1; VD6.weights[30] = 1; VD6.weights[31] = 1; VD6.weights[32] = 1; VD6.weights[33] = 1; VD6.weights[34] = 1; VD6.weights[35] = 1; VD6.weights[36] = 1; VD6.weights[37] = 1; VD6.weights[38] = 1; VD6.weights[39] = 1; VD6.weights[40] = 1;
    if (id == 299) {
        return VD6;
    }


    neuron VD7;
    VD7.cellID = 300;
    VD7.threshold = 1;
    VD7.inputsLen = 0;

    VD7.weightsLen = 0;
    VD7.weights[0] = 1; VD7.weights[1] = 1; VD7.weights[2] = 1; VD7.weights[3] = 1; VD7.weights[4] = 1; VD7.weights[5] = 1; VD7.weights[6] = 1; VD7.weights[7] = 1; VD7.weights[8] = 1; VD7.weights[9] = 1; VD7.weights[10] = 1; VD7.weights[11] = 1; VD7.weights[12] = 1; VD7.weights[13] = 1; VD7.weights[14] = 1; VD7.weights[15] = 1; VD7.weights[16] = 1; VD7.weights[17] = 1; VD7.weights[18] = 1; VD7.weights[19] = 1; VD7.weights[20] = 1; VD7.weights[21] = 1; VD7.weights[22] = 1; VD7.weights[23] = 1; VD7.weights[24] = 1; VD7.weights[25] = 1; VD7.weights[26] = 1; VD7.weights[27] = 1; VD7.weights[28] = 1; VD7.weights[29] = 1; VD7.weights[30] = 1; VD7.weights[31] = 1; VD7.weights[32] = 1; VD7.weights[33] = 1; VD7.weights[34] = 1; VD7.weights[35] = 1; VD7.weights[36] = 1; VD7.weights[37] = 1; VD7.weights[38] = 1; VD7.weights[39] = 1; VD7.weights[40] = 1;
    if (id == 300) {
        return VD7;
    }


    neuron VD8;
    VD8.cellID = 301;
    VD8.threshold = 1;
    VD8.inputsLen = 0;

    VD8.weightsLen = 0;
    VD8.weights[0] = 1; VD8.weights[1] = 1; VD8.weights[2] = 1; VD8.weights[3] = 1; VD8.weights[4] = 1; VD8.weights[5] = 1; VD8.weights[6] = 1; VD8.weights[7] = 1; VD8.weights[8] = 1; VD8.weights[9] = 1; VD8.weights[10] = 1; VD8.weights[11] = 1; VD8.weights[12] = 1; VD8.weights[13] = 1; VD8.weights[14] = 1; VD8.weights[15] = 1; VD8.weights[16] = 1; VD8.weights[17] = 1; VD8.weights[18] = 1; VD8.weights[19] = 1; VD8.weights[20] = 1; VD8.weights[21] = 1; VD8.weights[22] = 1; VD8.weights[23] = 1; VD8.weights[24] = 1; VD8.weights[25] = 1; VD8.weights[26] = 1; VD8.weights[27] = 1; VD8.weights[28] = 1; VD8.weights[29] = 1; VD8.weights[30] = 1; VD8.weights[31] = 1; VD8.weights[32] = 1; VD8.weights[33] = 1; VD8.weights[34] = 1; VD8.weights[35] = 1; VD8.weights[36] = 1; VD8.weights[37] = 1; VD8.weights[38] = 1; VD8.weights[39] = 1; VD8.weights[40] = 1;
    if (id == 301) {
        return VD8;
    }


    neuron VD9;
    VD9.cellID = 302;
    VD9.threshold = 1;
    VD9.inputsLen = 0;

    VD9.weightsLen = 0;
    VD9.weights[0] = 1; VD9.weights[1] = 1; VD9.weights[2] = 1; VD9.weights[3] = 1; VD9.weights[4] = 1; VD9.weights[5] = 1; VD9.weights[6] = 1; VD9.weights[7] = 1; VD9.weights[8] = 1; VD9.weights[9] = 1; VD9.weights[10] = 1; VD9.weights[11] = 1; VD9.weights[12] = 1; VD9.weights[13] = 1; VD9.weights[14] = 1; VD9.weights[15] = 1; VD9.weights[16] = 1; VD9.weights[17] = 1; VD9.weights[18] = 1; VD9.weights[19] = 1; VD9.weights[20] = 1; VD9.weights[21] = 1; VD9.weights[22] = 1; VD9.weights[23] = 1; VD9.weights[24] = 1; VD9.weights[25] = 1; VD9.weights[26] = 1; VD9.weights[27] = 1; VD9.weights[28] = 1; VD9.weights[29] = 1; VD9.weights[30] = 1; VD9.weights[31] = 1; VD9.weights[32] = 1; VD9.weights[33] = 1; VD9.weights[34] = 1; VD9.weights[35] = 1; VD9.weights[36] = 1; VD9.weights[37] = 1; VD9.weights[38] = 1; VD9.weights[39] = 1; VD9.weights[40] = 1;
    if (id == 302) {
        return VD9;
    }

    return VD9;
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

neuron noseTouch[2] = {neuronAccess(15), neuronAccess(16)};
neuron lightAvoidance[8] = {neuronAccess(44), neuronAccess(45), neuronAccess(48), neuronAccess(45), neuronAccess(75), neuronAccess(76), neuronAccess(50), neuronAccess(51)};
neuron gentleTouch[5] = {neuronAccess(24), neuronAccess(25), neuronAccess(168), neuronAccess(169), neuronAccess(72)};
neuron harshTouch[4] = {neuronAccess(24), neuronAccess(25), neuronAccess(175), neuronAccess(176)};
neuron thermotaxis[8] = {neuronAccess(9), neuronAccess(10), neuronAccess(77), neuronAccess(78), neuronAccess(15), neuronAccess(16), neuronAccess(166), neuronAccess(167)};
neuron chemorepulsion[8] = {neuronAccess(162), neuronAccess(163), neuronAccess(164), neuronAccess(165), neuronAccess(44), neuronAccess(45), neuronAccess(7), neuronAccess(8)};
neuron chemoattraction[6] = {neuronAccess(40), neuronAccess(41), neuronAccess(73), neuronAccess(74), neuronAccess(77), neuronAccess(78)};

struct connectome
{
    neuron cellularMatrix[neuronCount - 1] = {};
    bool outputs[neuronCount - 1] = {};
};


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

int main() {
    connectome c;
    c.cellularMatrix[neuronCount] = neuralList[neuronCount];
	setNextState(c);										//update state of the connectome one tick

	printCellularMatrix(c);
	printMotorMatrix(c);

	return EXIT_SUCCESS;
}
