#include "neurons.h"
#include "connectome.h"
#include "neuronIO.h"

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

const int neuronCount = 302;    //constants used by network
const int maxSynapse = 500;
const int matrixHeight = 17;
const int matrixWidth = 18;
const int commandInterneuronSize = 8;
const float threshold = 1;
