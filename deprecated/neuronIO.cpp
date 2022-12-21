//relevant references:
	//https://www.frontiersin.org/articles/10.3389/fncom.2013.00128/full#:~:text=Movement%20direction%20in%20C.,et%20al.%2C%201985).
	//https://www.researchgate.net/figure/A-Schematic-Diagram-of-the-Motor-Circuit-in-C-elegans-A-Worms-undulate-by-alternating_fig1_233768014

	//    sensory_herm = {'IL2DL', 'IL2VL', 'IL2L', 'URADL', 'IL1VL', 'IL2DR', 'IL1DL', 'OLLL', 'IL1L', 'URYDL', 'OLQDL', 'URYDR', 'IL2R', 'URYVL', 'OLLR', 'URBL', 'IL2VR', 'IL1DR', 'URADR', 'IL1R', 'URAVL', 'OLQVL', 'URBR', 'OLQDR', 'URYVR', 'BAGL', 'CEPVL', 'BAGR', 'OLQVR', 'URAVR', 'IL1VR', 'CEPVR', 'CEPDL', 'URXL', 'CEPDR', 'ASKL', 'URXR', 'AFDL', 'ASKR', 'ADLL', 'ADFL', 'AFDR', 'AWBL', 'AWCL', 'ADFR', 'ASGL', 'ADLR', 'AWAL', 'AWBR', 'ASIL', 'ASHL', 'ASGR', 'ASHR', 'AWCR', 'AWAR', 'ASIR', 'ASEL', 'AUAL', 'ASER', 'ASJL', 'AUAR', 'ASJR', 'FLPL', 'FLPR', 'AQR', 'ADEL', 'ADER', 'AVG', 'AVM', 'ALML', 'ALMR', 'PDEL', 'PDER', 'PVM', 'PHAL', 'PHAR', 'PLNR', 'PHBR', 'ALNL', 'PHBL', 'ALNR', 'PQR', 'PVR', 'PLNL', 'PHCR', 'PHCL', 'PLMR', 'PLML'};
    //    inter_herm = {'RIPL', 'RIPR', 'SAAVL', 'URXL', 'ALA', 'AVAL', 'RIAL', 'SAAVR', 'URXR', 'AVAR', 'RIAR', 'AVEL', 'SIBDL', 'RIH', 'AVER', 'SAADL', 'SIBDR', 'AIBL', 'SIBVL', 'RIVL', 'SAADR', 'AVHL', 'AVHR', 'RIVR', 'AIBR', 'RIBL', 'AVBL', 'SIBVR', 'AVJR', 'SIADL', 'AVJL', 'AVBR', 'RIBR', 'AIAL', 'RIR', 'AVDR', 'AVDL', 'AINL', 'AINR', 'SIADR', 'AVL', 'RICL', 'AIAR', 'AIZR', 'SIAVL', 'SIAVR', 'RICR', 'AIZL', 'AIYR', 'AIMR', 'AIML', 'RIS', 'AIYL', 'AVKR', 'AVKL', 'AVFR', 'SABVL', 'SABVR', 'AVFL', 'RIFR', 'ADAR', 'ADAL', 'RIGR', 'RIFL', 'SABD', 'RIGL', 'BDUR', 'BDUL', 'SDQR', 'SDQL', 'PVDL', 'PVDR', 'PVPR', 'PVT', 'PVPL', 'DVA', 'DVC', 'PVQR', 'PVQL', 'LUAL', 'PVCL', 'LUAR', 'PVCR', 'PVWL', 'PVWR', 'PVNR', 'PVNL'};
    //    motor_herm = {'URADL', 'IL1VL', 'IL1DL', 'IL1L', 'IL1DR', 'URADR', 'IL1R', 'URAVL', 'RMED', 'RMEL', 'URAVR', 'RMER', 'IL1VR', 'RID', 'RMEV', 'RMDVL', 'SMDVL', 'RMDVR', 'RMDL', 'SMDVR', 'RMDR', 'RMDDL', 'RIVL', 'SMDDL', 'RMHL', 'RMDDR', 'RIVR', 'RMFL', 'RMHR', 'RMFR', 'SMDDR', 'SMBDL', 'RIML', 'RIMR', 'SMBVR', 'SMBVL', 'AVL', 'SMBDR', 'VB02', 'VB01', 'DB02', 'RMGL', 'RMGR', 'VA01', 'DD01', 'DB01', 'AS01', 'VD01', 'DA01', 'VD02', 'VA02', 'VB03', 'AS02', 'DB03', 'DA02', 'VD03', 'VA03', 'VB04', 'VC01', 'DD02', 'AS03', 'VD04', 'DA03', 'VA04', 'VB05', 'VC02', 'DB04', 'AS04', 'VD05', 'VA05', 'VB06', 'DA04', 'DD03', 'VC03', 'AS05', 'VD06', 'VA06', 'VB07', 'DB05', 'AS06', 'VD07', 'VC04', 'DA05', 'VC05', 'HSNR', 'HSNL', 'VA07', 'VB08', 'AS07', 'DD04', 'VD08', 'VA08', 'VB09', 'DB06', 'AS08', 'VD09', 'DA06', 'VA09', 'VB10', 'AS09', 'DD05', 'VD10', 'VA10', 'VB11', 'DB07', 'AS10', 'DA07', 'VD11', 'VA11', 'AS11', 'VD12', 'VA12', 'DD06', 'DA08', 'DA09', 'PDB', 'VD13', 'PDA', 'DVB'};

struct sensoryNeurons {
   neuron noseTouch[2] = {FLPR, FLPL};
   neuron lightAvoidance[8] = {ASHL, ASHR, ASJL, ASJR, AWBL, AWBR, ASKL, ASKR};
   neuron gentleTouch[5] = {ALML, ALMR, PLML, PLMR, AVM};
   neuron harshTouch[4] = {ALML, ALMR, PVDL, PVDR};
   neuron thermotaxis[8] = {AFDL, AFDR, AWCL, AWCR, FLPL, FLPR, PHCL, PHCR};
   neuron chemorepulsion[8] = {PHAL, PHAR, PHBL, PHBR, ASHL, ASHR, ADLL, ADLR};
   neuron chemoattraction[6] = {ASEL, ASER, AWAL, AWAR, AWCL, AWCR};
};

neuron getMotorCellState() {
	neuron commandInterneurons = {
		AVBL, AVBR, PVCL, PVCR, AVAL, AVAR, AVDL, AVDR, AVEL, AVER
	};

	bool cmdInterneuronActivations[commandInterneuronSize - 1] = {};

	for (int i = 0; i < commandInterneuronSize; i++) {		//for every element in the list of motor neurons
		if (commandInterneurons[i].cellOutput) {					//if the cell output of the current motor neuron is true
			cmdInterneuronActivations[i] = true;					//set the value in a boolean array as true
		} else {												//otherwise
			cmdInterneuronActivations[i] = false;					//set the value as false
		}
	}

	return cmdInterneuronActivations[];
}

void doNoseTouch() {
	for (int i = 0; i < noseTouchSize; i++) {
		for (int j = 0; j < neuronCount; j++) {
            //if nosetouch neuron is in cellular matrix then set output to true
            if (Connectome.cellularMatrix[j].cellID == noseTouch[i].cellID) {
                Connectome.cellularMatrix[j].cellOutput = true;
            }
        }
    }
}

void doLightAvoidance() {
	for (int i = 0; i < lightAvoidanceSize; i++)
		for (int j = 0; j < neuronCount; j++) {
			//if light avoidance neuron is in cellular matrix then set output to true
			if (Connectome.cellularMatrix[j].cellID == lightAvoidance[i].cellID) {
				Connectome.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doGentleTouch() {
	for (int i = 0; i < gentleTouchSize; i++)
		for (int j = 0; j < neuronCount; j++) {
			//if gentletouch neuron is in cellular matrix then set output to true
			if (Connectome.cellularMatrix[j].cellID == gentleTouch[i].cellID) {
				Connectome.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doHarshTouch() {
	for (int i = 0; i < harshTouchSize; i++)
		for (int j = 0; j < neuronCount; j++) {
			//if harshtouch neuron is in cellular matrix then set output to true
			if (Connectome.cellularMatrix[j].cellID == harshTouch[i].cellID) {
				Connectome.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doThermotaxis() {
	for (int i = 0; i < thermotaxisSize; i++)
		for (int j = 0; j < neuronCount; j++) {
			//if thermotaxis neuron is in cellular matrix then set output to true
			if (Connectome.cellularMatrix[j].cellID == thermotaxis[i].cellID) {
				Connectome.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doChemorepulsion() {
	for (int i = 0; i < chemorepulsionSize; i++)
		for (int j = 0; j < neuronCount; j++) {
			//if chemorepulsion neuron is in cellular matrix then set output to true
			if (Connectome.cellularMatrix[j].cellID == chemorepulsion[i].cellID) {
				Connectome.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}

void doChemoattraction() {
	for (int i = 0; i < chemoattractionSize; i++)
		for (int j = 0; j < neuronCount; j++) {
			//if chemoattraction neuron is in cellular matrix then set output to true
			if (Connectome.cellularMatrix[j].cellID == chemoattraction[i].cellID) {
				Connectome.cellularMatrix[j].cellOutput = true;
			}
		}
	}
}
