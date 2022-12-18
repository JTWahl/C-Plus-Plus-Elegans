//TODO: finish neurons.h
//TODO: debug current network
//TODO: neurotransmitters, receptors, glia, etc
//TODO: add hebian learning capabilities, adjustable weights/thresholds/back-prop tuning, etc


#include <neurons.h>                   				//defines each neuron struct outputs into following neurons input arrays
#include <neuronIO.h>                   			//includes an lists and functions for motor and sensory neurons
#include <connectomeInit.h>

int neuronCount = 302;                				//total neurons in network


bool activationFunction (int cellID) {          	//activation function calculator-- it tells you what output the weighted inputs into the given neuron make
   int finalSummation = 0;
   int[] summationMatrix = Connectome.cellularMatrix[cellID].inputs[] * Connectome.cellularMatrix[cellID].weights[];	//multiply the input matrix by the weights matrix

   for (int i = 0; i < sizeOf(Connectome.cellularMatrix[cellID].inputs[]); i++) {		//for every input
      for (int j = 0; j < sizeOf(Connectome.cellularMatrix[cellID].weights[]); j++) {	//and every weight
         finalSummation += summationMatrix[i, j];										//add their product to the running sum
      }
   }

   if (finalSummation > Connectome.cellularMatrix[cellID].threshold) {					//if the running sum exceeds the cells threshold return true, else return false
      return true;
   } else {
      return false;
   }   
}

void updateInputArray(int targetNeuronID, bool outputVal) {								//update synapses of other neurons based on post-synaptic value of given neuron
	for (int i = 0; i < sizeOf(Connectome.cellularMatrix[]); i++) {						//for every cell in the connectome
		for (int j = 0; j < sizeOf(Connectome.cellularMatrix[i].inputs[]; j++) {		//and every input of the target neuron
			if (Connectome.cellularMatrix[i].inputs[j].cellID = targetNeuronID) {		//check to see if the input cells correspond to the target neuron
				Connectome.cellularMatrix[i].inputs[j].cellOutput = outputVal;			//if they do, update its value to be the new output value
			}
		}	
	}
}

void updateOutputArray(int cellID, bool outputVal) {
	Connectome.cellularMatrix[cellID].cellOutput = outputVal;
}

void setNextState() {                  									//function to update values in connectome to next state using the activation function
   for (int i = 1; i < sizeOf(cellularMatrix[]); i++) {					//for every cell in the connectome
       if (activationFunction(i)) {										//if the activation function of that cell returns true
          Connectome.outputs[i] = 1;									//save its output in the connectomes output matrix as true
       } else {
          Connectome.outputs[i] = 0;									//otherwise save it as false
       }

       updateInputArray(i, Connectome.outputs[i]);						//update the rest of the cells that use that output value in the connectome
	   updateOutputArray(i, Connectome.outputs[i]);						//update the individual output value for that cell in the cells struct as well (not just in the connectomes matrix)
   }
}

void main() {
	struct connectome Connectome;						//create instance of connectome struct and fill it with cells defined in neuralList from the connectome initialization header
		outputs[] = 0;   								//initialize all neurons to 'off' state
		cellularMatrix[] = neuralList[];        		//lists all cells in connectome

	setNextState();										//update state of the connectome one tick
	
	Serial.println(getMotorCellState());				//print out the new values for the muscle command interneurons... tells you how the worm moves!
}