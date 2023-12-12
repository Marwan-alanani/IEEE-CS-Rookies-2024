A,B = [int(i) for i in input().split()] 
AFactorial = 1
BFactorial = 1
AMinusBFactorial = 1

# get factorials
for i in range(A-1):
    AFactorial *= A-i
for i in range(B-1):
    BFactorial *= B-i
for i in range((A-B)-1):
    AMinusBFactorial *= (A-B-i)
combination = int((AFactorial/(BFactorial*AMinusBFactorial)))
permutation = combination *BFactorial
print(combination,end=' ')
print(permutation,end='')
