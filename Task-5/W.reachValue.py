def main():
    test_cases = int(input())
    for _ in range(test_cases):
        N = int(input())
        if reachable(N):
            print("YES")
        else:
            print("NO")
        

def reachable(N,i=1):
    if i==N:
        return True
    
    elif i>N:
        return False
    
    elif reachable(N,i*10) or reachable(N,i*20):
        return True
    
    return False
    



    

main()