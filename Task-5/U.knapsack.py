import math

def main():
    N,W = [int(i) for i in input().split()]
    global WeightValues
    WeightValues = []
    for _ in range(N):
        WeightValues.append([int(i) for i in input().split()])
    print(getMaxValue(W,N))
    
    




def getMaxValue(W,N,currentWeight=0):
    global WeightValues
    # if knapsack is currently full or we have checked all possiblities up to N starting from i
    if W==0 or N==0:
        return 0
    # if weight of any element is bigger than the general capacity or the remaining capacity check element after it
    if WeightValues[N-1][0] > W:
        return getMaxValue(W,N-1)
    
    else:
        return max(WeightValues[N-1][1]+getMaxValue(W-WeightValues[N-1][0],N-1),getMaxValue(W,N-1))
                

                




                
                    

main()