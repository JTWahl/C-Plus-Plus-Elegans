#include "connectome.h"
#include "neuronIO.h"
#include "neurons.h"

/*
Main function that runs connectome in a loop
*/
int main(){
    connectomeInit();                           //initialize connectome

    while (true) {
        getSensoryInputs();                     //get updated sensory information from a file
        setNextState();                         //update to next tick of connectome
        doLearning();                           //run hebbian algorithm
        glialWeightTuning();                    //do error correction on the outputs based on input types
        saveNewState();                         //save the state of the connectome

        printToTerminal();
    }
    //while (diagnosticTool());                        //while it's true run the connectome diagnostic tool

    return 0;
}
