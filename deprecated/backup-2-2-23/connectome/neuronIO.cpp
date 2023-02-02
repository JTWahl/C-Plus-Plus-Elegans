#include "neuronIO.h"
#include "neurons.h"
#include "connectome.h"

/*
Activates nose touch sense
*/
void doNoseTouch() {
    noseTouchActive = true;     //set variable to true so other functions know nose touch sense is happening
    c.cellularMatrix[FLPL].cellOutput = true;       //set the neurons for this sense to true
    c.cellularMatrix[FLPR].cellOutput = true;
}

/*
Activates light avoidance sense
*/
void doLightAvoidance() {
    lightAvoidanceActive = true;
    c.cellularMatrix[ASHL].cellOutput = true;
    c.cellularMatrix[ASHR].cellOutput = true;
    c.cellularMatrix[ASJL].cellOutput = true;
    c.cellularMatrix[ASJR].cellOutput = true;
    c.cellularMatrix[AWBL].cellOutput = true;
    c.cellularMatrix[AWBR].cellOutput = true;
    c.cellularMatrix[ASKL].cellOutput = true;
    c.cellularMatrix[ASKR].cellOutput = true;
}

/*
Activates gentle forward provoking touch sense
*/
void doGentleForwardTouch() {
    gentleTouchForwardActive = true;
    c.cellularMatrix[ALML].cellOutput = true;
    c.cellularMatrix[ALMR].cellOutput = true;
    c.cellularMatrix[PLML].cellOutput = true;
    c.cellularMatrix[PLMR].cellOutput = true;
    c.cellularMatrix[AVM].cellOutput = true;
}

/*
Activates gentle backward provoking touch sense
*/
void doGentleBackwardTouch() {
    gentleTouchBackwardActive = true;
    c.cellularMatrix[AVM].cellOutput = true;
    c.cellularMatrix[ALML].cellOutput = true;
    c.cellularMatrix[ALMR].cellOutput = true;
}

/*
Activates harsh touch sense
*/
void doHarshTouch() {
    harshTouchActive = true;
    c.cellularMatrix[PLML].cellOutput = true;
    c.cellularMatrix[PLMR].cellOutput = true;
}

/*
Activates thermotaxis sense
*/
void doThermotaxis() {
    thermotaxisActive = true;
    c.cellularMatrix[AFDL].cellOutput = true;
    c.cellularMatrix[AFDR].cellOutput = true;
    c.cellularMatrix[AIMR].cellOutput = true;
    c.cellularMatrix[PHCL].cellOutput = true;
    c.cellularMatrix[PHCR].cellOutput = true;
}

/*
Activates chemorepulsive sense
*/
void doChemorepulsion() {
    chemorepulsionActive = true;
    c.cellularMatrix[PHAL].cellOutput = true;
    c.cellularMatrix[PHAR].cellOutput = true;
    c.cellularMatrix[PHBL].cellOutput = true;
    c.cellularMatrix[PHBR].cellOutput = true;
}

/*
Activates salt sensing neurons
*/
void doChemoattraction() {
    chemoattractionActive = true;
    c.cellularMatrix[ASEL].cellOutput = true;
    c.cellularMatrix[ASER].cellOutput = true;
}

/*
Initializes all sensory neuron outputs to false
*/
void initSensesOff() {
    noseTouchActive = false;
    lightAvoidanceActive = false;
    gentleTouchForwardActive = false;
    gentleTouchBackwardActive = false;
    harshTouchActive = false;
    thermotaxisActive = false;
    chemorepulsionActive = false;
    chemoattractionActive = false;

    c.cellularMatrix[FLPL].cellOutput = false;
    c.cellularMatrix[FLPR].cellOutput = false;
    c.cellularMatrix[ASHL].cellOutput = false;
    c.cellularMatrix[ASHR].cellOutput = false;
    c.cellularMatrix[ASJL].cellOutput = false;
    c.cellularMatrix[ASJR].cellOutput = false;
    c.cellularMatrix[AWBL].cellOutput = false;
    c.cellularMatrix[AWBR].cellOutput = false;
    c.cellularMatrix[ASKL].cellOutput = false;
    c.cellularMatrix[ASKR].cellOutput = false;
    c.cellularMatrix[ALML].cellOutput = false;
    c.cellularMatrix[ALMR].cellOutput = false;
    c.cellularMatrix[AVM].cellOutput = false;
    c.cellularMatrix[PLML].cellOutput = false;
    c.cellularMatrix[PLMR].cellOutput = false;
    c.cellularMatrix[AFDL].cellOutput = false;
    c.cellularMatrix[AFDR].cellOutput = false;
    c.cellularMatrix[AIMR].cellOutput = false;
    c.cellularMatrix[PHCL].cellOutput = false;
    c.cellularMatrix[PHCR].cellOutput = false;
    c.cellularMatrix[PHAL].cellOutput = false;
    c.cellularMatrix[PHAR].cellOutput = false;
    c.cellularMatrix[PHBL].cellOutput = false;
    c.cellularMatrix[PHBR].cellOutput = false;
    c.cellularMatrix[ASEL].cellOutput = false;
    c.cellularMatrix[ASER].cellOutput = false;
}

/*
Reads in sensor data from a file to be used by connectome to activate corresponding sensory neurons
*/
void getSensoryInputs() {
    ifstream sensoryIOfile;     //set up an input stream object

    //read from file -- if functions say to activate a sensory modality, then call that function
    sensoryIOfile.open(sensoryLocation);

    initSensesOff();             //initialize sensory neurons to off

    string data = "";            //create empty string variables to hold the data from the file being read
    string isNoseTouch = "";
    string isLightAvoidance = "";
    string isGentleTouchForward = "";
    string isGentleTouchBackward = "";
    string isHarshTouch = "";
    string isThermotaxis = "";
    string isChemorepulsion = "";
    string isChemoattraction = "";

    if (!sensoryIOfile.eof()) {     //if the end of the file isn't reached
        getline(sensoryIOfile, data);   //read in a line of the file and assign it to the placeholder string 'data'
        isNoseTouch = data;             //set the nose touch sense string for the first line equal to the data read in

        getline(sensoryIOfile, data);   //reapeat the process, rewrite the old data variable with line two
        isLightAvoidance = data;        //set line two's data to the string for light avoidance sense

        getline(sensoryIOfile, data);   //repeat again
        isGentleTouchForward = data;    //etc.

        getline(sensoryIOfile, data);
        isGentleTouchBackward = data;

        getline(sensoryIOfile, data);
        isHarshTouch = data;

        getline(sensoryIOfile, data);
        isThermotaxis = data;

        getline(sensoryIOfile, data);
        isChemorepulsion = data;

        getline(sensoryIOfile, data);
        isChemoattraction = data;
    }

    if (isNoseTouch == "1") {       //if the nose touch variable was read in as a 1
        doNoseTouch();              //activate nose touch function
    }

    if (isLightAvoidance == "1") {  //and so on and so forth for all the other senses
        doLightAvoidance();
    }

    if (isGentleTouchForward == "1") {  //etc.
        doGentleForwardTouch();
    }

    if (isGentleTouchBackward == "1") {
        doGentleBackwardTouch();
    }

    if (isHarshTouch == "1") {
        doHarshTouch();
    }

    if (isThermotaxis == "1") {
        doThermotaxis();
    }

    if (isChemorepulsion == "1") {
        doChemorepulsion();
    }

    if (isChemoattraction == "1") {
        doChemoattraction();
    }

    sensoryIOfile.close();      //close the input file
}

