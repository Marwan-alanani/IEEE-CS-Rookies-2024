def main():
    test_cases = int(input())
    for _ in range(test_cases):
        N = input()
        printDigits(N)

def printDigits(N,i=0):
    if(i==len(N)):
        print()
        return
    print(N[i],end=' ')
    i+=1
    return printDigits(N,i)
main()