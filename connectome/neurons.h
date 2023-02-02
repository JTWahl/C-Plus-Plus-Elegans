#include <istream>
#ifndef NEURONS_H
#define NEURONS_H

#include <iostream>

extern const int neuronCount;
extern const int maxSynapse;
extern const int matrixHeight;
extern const int matrixWidth;
extern const int commandInterneuronSize;
extern const float threshold;

extern bool avblActive;
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
   int inputs[500];				                    //list of IDs of the connected pre-synaptic neurons to the current neuron
   int inputsLen;									//length of a neuron's inputs array
   float weights[500];				                //list of weights for every pre-synaptic input for the given neuron
   int weightsLen;									//length of a neuron's weights array
   bool cellOutput;									//holds the output value for the cell as determined by connectome object
};

/*
Struct definition for a connectome object
*/
struct connectome {
    neuron cellularMatrix[302];
};


extern connectome c;   //constructs a connectome object


#define ADAL 0          //A list of all neuron definitions with their respective ID numbers
#define ADAR 1
#define ADEL 2
#define ADER 3
#define ADFL 4
#define ADFR 5
#define ADLL 6
#define ADLR 7
#define AFDL 8
#define AFDR 9
#define AIAL 10
#define AIAR 11
#define AIBL 12
#define AIBR 13
#define AIML 14
#define AIMR 15
#define AINL 16
#define AINR 17
#define AIYL 18
#define AIYR 19
#define AIZL 20
#define AIZR 21
#define ALA 22
#define ALML 23
#define ALMR 24
#define ALNL 25
#define ALNR 26
#define AQR 27
#define AS1 28
#define AS10 29
#define AS11 30
#define AS2 31
#define AS3 32
#define AS4 33
#define AS5 34
#define AS6 35
#define AS7 36
#define AS8 37
#define AS9 38
#define ASEL 39
#define ASER 40
#define ASGL 41
#define ASGR 42
#define ASHL 43
#define ASHR 44
#define ASIL 45
#define ASIR 46
#define ASJL 47
#define ASJR 48
#define ASKL 49
#define ASKR 50
#define AUAL 51
#define AUAR 52
#define AVAL 53
#define AVAR 54
#define AVBL 55
#define AVBR 56
#define AVDL 57
#define AVDR 58
#define AVEL 59
#define AVER 60
#define AVFL 61
#define AVFR 62
#define AVG 63
#define AVHL 64
#define AVHR 65
#define AVJL 66
#define AVJR 67
#define AVKL 68
#define AVKR 69
#define AVL 70
#define AVM 71
#define AWAL 72
#define AWAR 73
#define AWBL 74
#define AWBR 75
#define AWCL 76
#define AWCR 77
#define BAGL 78
#define BAGR 79
#define BDUL 80
#define BDUR 81
#define CANL 82
#define CANR 83
#define CEPDL 84
#define CEPDR 85
#define CEPVL 86
#define CEPVR 87
#define DA1 88
#define DA2 89
#define DA3 90
#define DA4 91
#define DA5 92
#define DA6 93
#define DA7 94
#define DA8 95
#define DA9 96
#define DB1 97
#define DB2 98
#define DB3 99
#define DB4 100
#define DB5 101
#define DB6 102
#define DB7 103
#define DD1 104
#define DD2 105
#define DD3 106
#define DD4 107
#define DD5 108
#define DD6 109
#define DVA 110
#define DVB 111
#define DVC 112
#define FLPL 113
#define FLPR 114
#define HSNL 115
#define HSNR 116
#define I1L 117
#define I1R 118
#define I2L 119
#define I2R 120
#define I3 121
#define I4 122
#define I5 123
#define I6 124
#define IL1DL 125
#define IL1DR 126
#define IL1L 127
#define IL1R 128
#define IL1VL 129
#define IL1VR 130
#define IL2DL 131
#define IL2DR 132
#define IL2L 133
#define IL2R 134
#define IL2VL 135
#define IL2VR 136
#define LUAL 137
#define LUAR 138
#define M1 139
#define M2L 140
#define M2R 141
#define M3L 142
#define M3R 143
#define M4 144
#define M5 145
#define MCL 146
#define MCR 147
#define MI 148
#define NSML 149
#define NSMR 150
#define OLLL 151
#define OLLR 152
#define OLQDL 153
#define OLQDR 154
#define OLQVL 155
#define OLQVR 156
#define PDA 157
#define PDB 158
#define PDEL 159
#define PDER 160
#define PHAL 161
#define PHAR 162
#define PHBL 163
#define PHBR 164
#define PHCL 165
#define PHCR 166
#define PLML 167
#define PLMR 168
#define PLNL 169
#define PLNR 170
#define PQR 171
#define PVCL 172
#define PVCR 173
#define PVDL 174
#define PVDR 175
#define PVM 176
#define PVNL 177
#define PVNR 178
#define PVPL 179
#define PVPR 180
#define PVQL 181
#define PVQR 182
#define PVR 183
#define PVT 184
#define PVWL 185
#define PVWR 186
#define RIAL 187
#define RIAR 188
#define RIBL 189
#define RIBR 190
#define RICL 191
#define RICR 192
#define RID 193
#define RIFL 194
#define RIFR 195
#define RIGL 196
#define RIGR 197
#define RIH 198
#define RIML 199
#define RIMR 200
#define RIPL 201
#define RIPR 202
#define RIR 203
#define RIS 204
#define RIVL 205
#define RIVR 206
#define RMDDL 207
#define RMDDR 208
#define RMDL 209
#define RMDR 210
#define RMDVL 211
#define RMDVR 212
#define RMED 213
#define RMEL 214
#define RMER 215
#define RMEV 216
#define RMFL 217
#define RMFR 218
#define RMGL 219
#define RMGR 220
#define RMHL 221
#define RMHR 222
#define SAADL 223
#define SAADR 224
#define SAAVL 225
#define SAAVR 226
#define SABD 227
#define SABVL 228
#define SABVR 229
#define SDQL 230
#define SDQR 231
#define SIADL 232
#define SIADR 233
#define SIAVL 234
#define SIAVR 235
#define SIBDL 236
#define SIBDR 237
#define SIBVL 238
#define SIBVR 239
#define SMBDL 240
#define SMBDR 241
#define SMBVL 242
#define SMBVR 243
#define SMDDL 244
#define SMDDR 245
#define SMDVL 246
#define SMDVR 247
#define URADL 248
#define URADR 249
#define URAVL 250
#define URAVR 251
#define URBL 252
#define URBR 253
#define URXL 254
#define URXR 255
#define URYDL 256
#define URYDR 257
#define URYVL 258
#define URYVR 259
#define VA1 260
#define VA10 261
#define VA11 262
#define VA12 263
#define VA2 264
#define VA3 265
#define VA4 266
#define VA5 267
#define VA6 268
#define VA7 269
#define VA8 270
#define VA9 271
#define VB1 272
#define VB10 273
#define VB11 274
#define VB2 275
#define VB3 276
#define VB4 277
#define VB5 278
#define VB6 279
#define VB7 280
#define VB8 281
#define VB9 282
#define VC1 283
#define VC2 284
#define VC3 285
#define VC4 286
#define VC5 287
#define VC6 288
#define VD1 289
#define VD10 290
#define VD11 291
#define VD12 292
#define VD13 293
#define VD2 294
#define VD3 295
#define VD4 296
#define VD5 297
#define VD6 298
#define VD7 299
#define VD8 300
#define VD9 301

#endif // NEURONS_H
