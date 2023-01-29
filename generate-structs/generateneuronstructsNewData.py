import pandas as pd	
import random
import sys

neuronDataFilePath = (r'C:\Users\t420\Desktop\custom-elegans-network\generate-structs\neurons-codes.csv')
synapseDataFilePath = (r'C:\Users\t420\Desktop\custom-elegans-network\generate-structs\Table-Export.csv')
outputFilePath = (r'C:\Users\t420\Desktop\custom-elegans-network\generate-structs\ntrweightvals.txt')

neuronData = pd.read_csv(neuronDataFilePath)
synapseData = pd.read_csv(synapseDataFilePath)
synapsedf = pd.DataFrame(synapseData, columns=['Source','Target','Sign','Edge Weight'])
neurondf = pd.DataFrame(neuronData, columns=['neuron'])
neurons = neurondf['neuron'].tolist()
source = synapsedf['Source'].tolist()
target = synapsedf['Target'].tolist()
sign = synapsedf['Sign'].tolist()
weight = synapsedf['Edge Weight'].tolist()

threshold = 1
rand=[1, -1]
sys.stdout = open(outputFilePath, 'w')

def printData(inputIDs, neuron, weight):
        
            print(neurons.index(neuron) + 1, ) #cell id
            print(threshold) #threshold
            print(len(inputIDs)) # input length
                
            for inputs in inputIDs:
                print(inputs) # inputs
                    
            print(len(weight)) # weight length 
                
            for w in weight:
                print(w) # weight 
                
            print(0) #output value
            print(',')

for neuron in neurons:
        inputIDs=[]
        weightList = []
        for tidx, t in enumerate(target):
            if neuron == t:          
                sourceSynapseElement = source[tidx]
                synapseSign = sign[tidx]
                synapseWeight = weight[tidx]
                if sourceSynapseElement in neurons:
                    cellID = neurons.index(sourceSynapseElement) + 1
                    inputIDs.append(cellID)
                
                    if synapseSign == '-':
                        synapseWeight = synapseWeight * -1
                        weightList.append(synapseWeight)
                    elif synapseSign == 'no pred':
                        synapseWeight = synapseWeight * random.choice(rand) 
                        weightList.append(synapseWeight)
                    elif synapseSign == 'complex':
                        synapseWeight = synapseWeight * random.choice(rand) 
                        weightList.append(synapseWeight)
                    else: 
                        weightList.append(synapseWeight)
                
        printData(inputIDs, neuron, weightList)
