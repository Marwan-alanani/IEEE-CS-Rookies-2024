def main():
    test_cases = int(input())
    for _ in range(test_cases):
        N = int(input())
        if reachable(N):
            print("YES")
        else:
            print("NO")
        

def reachable(N,i=1):
    # base case 1
    if i==N:
        return True
    if i>N:
        return False

    if N>10:
        if getLeftMostdigit(N/20) == 5:
            N/=10
        else:
            N/=20
    else:
        N/=10
    return reachable(N,i)

def getLeftMostdigit(N):      
    if N/10<1:
        return int(N)
    return getLeftMostdigit(int(N/10))
    
    

main()