#ifndef NEURONIO_H
#define NEURONIO_H

#include "connectome.h"

inline void doNoseTouch();
inline void doLightAvoidance();
inline void doGentleForwardTouch();
inline void doGentleBackwardTouch();
inline void doHarshTouch();
inline void doThermotaxis();
inline void doChemorepulsion();
inline void doSaltSensing();
inline void doBasalForaging();
extern void getSensoryInputs();

#endif // NEURONIO_H
