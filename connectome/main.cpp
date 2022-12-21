#include <iostream>
#include "connectome.h"

int main() {
    connectome c;
    c.cellularMatrix[neuronCount] = neuralList[neuronCount];
	setNextState(c);										//update state of the connectome one tick

	printCellularMatrix();
	printMotorMatrix();

	return EXIT_SUCCESS;
}
