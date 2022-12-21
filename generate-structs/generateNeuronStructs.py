import pandas as pd																#import pandas library

synapseList = pd.read_csv(stevecooksdata.csv)									#import the file of synapses
neuronList = pd.read_csv(neuron-codes.csv)										#import the file of neuron cell names

synapseList.drop['A', 'D', 'E', 1, inplace = true];

neuronCount = 302

for i in neuronCount:															#for every neuron in neuron list
	rowNum = []

	neuronListElement = neuronList.loc[i].at[A]									#store the i'th element of neuronlist column A
	for j in synapseList:														#for every element in synapse list
		neuronSynapseElement = synapseList.loc[j].at['C']						#store the value of the j'th post-synaptic neuron
		
		if neuronSynapseElement == neuronListElement							#if the post-synaptic neuron is the same as the i'th neuron in neuron list
			preSynapticNeuron = synapseList.loc[j].at['B']						#store the value of the j'th pre-synaptic neuron
			
			if neuronList.loc[neuronList['A'].str.contains(preSynapticNeuron)]	#if the pre-synaptic neuron is also in neuron list
				rowNum.append(____)												#add the index of the pre-synaptic neuron in neuron list to the row number array
			
			for num in rowNum:													#for every value in row number
				weightList.append(1)											#duplicate an array filled with ones
			
			for k in neuronCount:												#for every neuron print out the c++ code for a struct
				print "struct neuron" + (neuronList.loc[k].at[A]) + ';' + '\n'
					print '\t' + (neuronList.loc[k].at[A]) + ".cellID = " + k + ';' + '\n'
					print '\t' + (neuronList.loc[k].at[A]) + ".threshold = 1;" + '\n'
					print '\t' + (neuronList.loc[k].at[A]) + ".inputs[] = {" + rowNum + "};" + '\n'
					print '\t' + (neuronList.loc[k].at[A]) + ".inputsLen = " + rowNum.len() + ';' + '\n'
					print '\t' + (neuronList.loc[k].at[A]) + ".weights[] = {" + weightList + "};" + '\n'
					print '\t' + (neuronList.loc[k].at[A]) + ".weightsLen = " + rowNum.len() + ';' + '\n'