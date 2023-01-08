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

extern bool noseTouchActive;    //input check variables
extern bool lightAvoidanceActive;
extern bool gentleTouchForwardActive;
extern bool gentleTouchBackwardActive;
extern bool harshTouchActive;
extern bool thermotaxisActive;
extern bool chemorepulsionActive;
extern bool saltSensingActive;
extern bool basalForagingActive;

extern int firingRates[302][3];   //makes an array to hold output firing data
extern int diagnosticCellID;               //global variables for the diagnostic tool
extern int diagnosticOutputID;
extern int diagnosticWeightList[302];
extern float diagnosticOutputList[302];
extern bool beginDiagnostic;

extern int hebbianMax;                   //adjustable learning attributes
extern float hebbianFactor;                  //220, .75, .25 works well
extern float LTDfactor;

    //280, .1, .5 without glia is pretty good, but still not quite activated enough
        //same with 50, .5, .5, okay but not active enough...
    //50, .75, 0 with glia tuning seems optimal, except that command interneurons regress to 0 output over time
        //same with 50, .75, .5, great, but output neurons regress to zero over time


extern string motorFileLocation;
extern string sensoryLocation;
extern string matrixLocation;

/*
Struct definition for a connectome object
*/
struct connectome;

//connectome c;   //constructs a connectome object

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
inline neuron stringToNeuron(int);
inline void adjustTuningVars();
inline bool diagnosticTool();
inline void LTD(int preID, int postID);
inline void hebbian(int preID, int postID);


inline void printCellularMatrix();
inline void printMotorRatios();
inline void printCmdInterneurons();
inline bool activationFunction(int cellID);
extern void doLearning();
extern void setNextState();
extern void saveNewState();
extern void connectomeInit();
extern void printToTerminal();

#endif // CONNECTOME_H
