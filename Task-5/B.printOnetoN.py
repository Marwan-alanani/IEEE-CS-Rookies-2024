def main():
    N = int(input())
    printToN(N)

def printToN(N,i=1):
    if(i>N):
        return
    print(i)
    i+=1
    return printToN(N,i)
main()