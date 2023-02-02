                        /**PROJECT CREDITS**/
/**
    Project Lead: JoJo Wahl
    Co-Lead and Data Management: Molly Camp
    Consultation and Debugging: Molly Camp, Eonn Penalver, Kaiz Akhtar
    Date - Dec. 2022
*/



/**Final Steps**/
    //TODO: generate executable with proper filepath
    //TODO: push changes to github master branch
    //TODO: make a version that works as a library without the runConnectome.cpp file
    //TODO: build a robot for wormy


#include "connectome.h"
#include "neuronIO.h"
#include "neurons.h"

/*
Main function that runs connectome in a loop
*/
int main(){
    connectomeInit();                           //initialize connectome
    int counter = 0;                            //make a counter
    int cyclesTillSleep = 25;                   //specify number of ticks of connectome until an auto-sleep

    while (true) {
        getSensoryInputs();                     //get updated sensory information from a file
        setNextState();                         //update to next tick of connectome
        //while (diagnosticTool());                  //while the diagnostic tool returns true, keep running the tool

        doLearning();                           //run hebbian learning and LTD "forgetting" algorithms
        glialWeightTuning();                    //do error correction on the outputs based on input types
        saveNewState();

        counter++;                              //increment counter
        if (counter == cyclesTillSleep) {       //if counter reaches the max cycles before a sleep
            counter = 0;                        //reset the counter
            connectomeSleep();                  //make the connectome sleep
        }

        printToTerminal();                      //print all the neuron data to terminal
    }

    return 0;
}
