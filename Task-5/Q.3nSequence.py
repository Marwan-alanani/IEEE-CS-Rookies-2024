def main():
    N = int(input())
    print(seqLength(N),end='')


def seqLength(N,length=1):
    # base case
    if N==1:
        return length
    
    if N%2 == 0:
        N/=2
        length+=1
        return seqLength(N,length)
    else:
        N=(3*N)+1
        length+=1
        return seqLength(N,length) 

main()
