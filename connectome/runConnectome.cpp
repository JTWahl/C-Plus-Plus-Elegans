//TODO: fix diagnostic tool... change header type to extern?
//TODO: get rid of output attribute for connectome... just use neurons' outputs!
//TODO: get rid of neural list, just use the cellularmatrix and build a loop in a function to fill it up
//TODO: for some reason rebooting connectome fixes erratic behaviors? try implementing an occasional reboot perhaps?
//TODO: add the rest of the senses to the glial programs supervised learning function
//TODO: implement a reverse polarized ASER?
//TODO: build a robot for wormy

/*
PROJECT CREDITS

    Project Leads: JoJo Wahl, Molly Camp
    Consultation and Debugging: Eonn Penalver, Kaiz Akhtar
    Date - Dec. 2022

*/

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
