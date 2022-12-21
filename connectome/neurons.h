#ifndef NEURONS_H_
#define NEURONS_H_

struct neuron {
   int cellID;										//the assigned ID for the cell
   int threshold;									//the activation threshold of the cell
   int inputs[302];				//list of IDs of the connected pre-synaptic neurons to the current neuron
   int inputsLen;									//length of a neuron's inputs array
   int weights[302];				//list of weights for every pre-synaptic input for the given neuron
   int weightsLen;									//length of a neuron's weights array
   bool cellOutput;									//holds the output value for the cell as determined by connectome object
};

neuron neuronAccess(int);

#endif
