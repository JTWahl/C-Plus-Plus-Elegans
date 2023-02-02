#ifndef CONNECTOME_H
#define CONNECTOME_H

#include "neurons.h"
#include "neuronIO.h"
#include <sstream>
#include <ctime>
#include <string>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <windows.h>
#include <unistd.h>
#include <cmath>

using namespace std;

extern bool noseTouchActive;
extern bool lightAvoidanceActive;
extern bool gentleTouchForwardActive;
extern bool gentleTouchBackwardActive;
extern bool harshTouchActive;
extern bool thermotaxisActive;
extern bool chemorepulsionActive;
extern bool chemoattractionActive;

extern int firingRates[302][3];
extern int diagnosticCellID;
extern int diagnosticOutputID;
extern int diagnosticWeightList[302];
extern float diagnosticOutputList[302];
extern bool beginDiagnostic;

extern int hebbianMax;
extern float hebbianFactor;
extern float LTDfactor;
extern float forgetFactor;

extern string motorFileLocation;
extern string sensoryLocation;
extern string matrixLocation;

struct connectome;

inline float calculateRandomWeight();
inline void useGlia(int cmdNeuronID, bool desiredState);
extern void glialWeightTuning();
inline bool getCellOutputFromMatrix(int targetID);
inline neuron getNeuronFromMatrix(int targetID);
inline int getCellThresholdFromMatrix(int targetID);
inline int getCellInputLenFromMatrix(int targetID);
inline int getInputFromMatrix(int neuronID, int inputID);
inline int getCellWeightLenFromMatrix(int targetID);
inline float getWeightFromMatrix(int neuronID, int weightID);
inline void updateOutputArray(int cellID, bool outputVal);
inline void neuronToString(neuron n);
inline void stringToNeuron();
inline void adjustTuningVars();
extern bool diagnosticTool();
inline void LTD(int preID, int postID);
inline void hebbian(int preID, int postID);

inline void printCellularMatrix();
inline void printMotorRatios();
inline void printCmdInterneurons();
inline bool activationFunction(int cellID);
extern void doLearning();
extern void doForgetting();
extern void setNextState();
extern void saveNewState();
extern void connectomeInit();
extern void connectomeSleep();
extern void printToTerminal();

#endif // CONNECTOME_H
