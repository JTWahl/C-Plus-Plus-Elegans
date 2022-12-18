//relevant references:
	//https://www.frontiersin.org/articles/10.3389/fncom.2013.00128/full#:~:text=Movement%20direction%20in%20C.,et%20al.%2C%201985).
	//https://www.researchgate.net/figure/A-Schematic-Diagram-of-the-Motor-Circuit-in-C-elegans-A-Worms-undulate-by-alternating_fig1_233768014

#include <celegansNetwork.cpp>

struct sensoryNeurons {
   neuron[] noseTouch = {FLPR, FLPL};
   neuron[] lightAvoidance = {ASHL, ASHR, ASJL, ASJR, AWBL, AWBR, ASKL, ASKR};
   neuron[] gentleTouch = {ALML, ALMR, PLML, PLMR, AVM};
   neuron[] harshTouch = {ALML, ALMR, PVDL, PVDR};
   neuron[] thermotaxis = {AFDL, AFDR, AWCL, AWCR, FLPL, FLPR, PHCL, PHCR};
   neuron[] chemorepulsion = {PHAL, PHAR, PHBL, PHBR, ASHL, ASHR, ADLL, ADLR};
   neuron[] chemoattraction = {ASEL, ASER, AWAL, AWAR, AWCL, AWCR};
}

neuron[] getMotorCellState() {
	neuron[] commandInterneurons = {
		AVBL, AVBR, PVCL, PVCR, AVAL, AVAR, AVDL, AVDR, AVEL, AVER
	};
	
	bool[] cmdInterneuronActivations[sizeOf(commandInterneurons[])];
	
	for (int i = 0; i < sizeOf(commandInterneurons[]); i++) {		//for every element in the list of motor neurons
		if (commandInterneurons[i].cellOutput) {					//if the cell output of the current motor neuron is true
			cmdInterneuronActivations[i] = true;					//set the value in a boolean array as true
		} else {												//otherwise
			cmdInterneuronActivations[i] = false;					//set the value as false
		}
	}
	
	return cmdInterneuronActivations[];
}

void doNoseTouch() {
	for (int i = 0; i < sizeOf(noseTouch[]); i++) 
		for (int j = 0; j < sizeOf(Connectome.cellularMatrix[]); j++) {
			//if nosetouch neuron is in cellular matrix then set output to true
			if (Connectome.cellularMatrix[j].cellID == noseTouch[i].cellID) {
				Connectome.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doLightAvoidance() {
	for (int i = 0; i < sizeOf(lightAvoidance[]); i++) 
		for (int j = 0; j < sizeOf(Connectome.cellularMatrix[]); j++) {
			//if light avoidance neuron is in cellular matrix then set output to true
			if (Connectome.cellularMatrix[j].cellID == lightAvoidance[i].cellID) {
				Connectome.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doGentleTouch() {
	for (int i = 0; i < sizeOf(gentleTouch[]); i++) 
		for (int j = 0; j < sizeOf(Connectome.cellularMatrix[]); j++) {
			//if gentletouch neuron is in cellular matrix then set output to true
			if (Connectome.cellularMatrix[j].cellID == gentleTouch[i].cellID) {
				Connectome.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doHarshTouch() {
	for (int i = 0; i < sizeOf(harshTouch[]); i++) 
		for (int j = 0; j < sizeOf(Connectome.cellularMatrix[]); j++) {
			//if harshtouch neuron is in cellular matrix then set output to true
			if (Connectome.cellularMatrix[j].cellID == harshTouch[i].cellID) {
				Connectome.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doThermotaxis() {
	for (int i = 0; i < sizeOf(thermotaxis[]); i++) 
		for (int j = 0; j < sizeOf(Connectome.cellularMatrix[]); j++) {
			//if thermotaxis neuron is in cellular matrix then set output to true
			if (Connectome.cellularMatrix[j].cellID == thermotaxis[i].cellID) {
				Connectome.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doChemorepulsion() {
	for (int i = 0; i < sizeOf(chemorepulsion[]); i++) 
		for (int j = 0; j < sizeOf(Connectome.cellularMatrix[]); j++) {
			//if chemorepulsion neuron is in cellular matrix then set output to true
			if (Connectome.cellularMatrix[j].cellID == chemorepulsion[i].cellID) {
				Connectome.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doChemoattraction() {
	for (int i = 0; i < sizeOf(chemoattraction[]); i++) 
		for (int j = 0; j < sizeOf(Connectome.cellularMatrix[]); j++) {
			//if chemoattraction neuron is in cellular matrix then set output to true
			if (Connectome.cellularMatrix[j].cellID == chemoattraction[i].cellID) {
				Connectome.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}