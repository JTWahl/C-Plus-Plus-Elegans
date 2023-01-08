// *** ADDED BY HEADER FIXUP ***
#include <istream>
// *** END ***
#ifndef NEURONS_H
#define NEURONS_H

#include <iostream>

extern const int neuronCount; //constants used by network
extern const int maxSynapse;
extern const int matrixHeight;
extern const int matrixWidth;
extern const int commandInterneuronSize;
extern const float threshold;

extern bool avblActive;        //output check variables
extern bool avbrActive;
extern bool pvclActive;
extern bool pvcrActive;
extern bool avalActive;
extern bool avarActive;
extern bool avdlActive;
extern bool avdrActive;
extern bool avelActive;
extern bool averActive;

/*
Struct definition for a neuron object
*/
struct neuron {
   int cellID;										//the assigned ID for the cell
   int threshold;									//the activation threshold of the cell
   int inputs[500];				//list of IDs of the connected pre-synaptic neurons to the current neuron
   int inputsLen;									//length of a neuron's inputs array
   float weights[500];				//list of weights for every pre-synaptic input for the given neuron
   int weightsLen;									//length of a neuron's weights array
   bool cellOutput;									//holds the output value for the cell as determined by connectome object
};

/*
Struct definition for a connectome object
*/
struct connectome {
    neuron cellularMatrix[302];
    bool outputs[302];
};


extern connectome c;   //constructs a connectome object


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

#endif // NEURONS_H
