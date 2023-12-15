def main():
    N=int(input())
    print(Fibonacci(N),end='')

def Fibonacci(N):
    if N==1:
        return 0
    if N==2:
        return 1
    return Fibonacci(N-1)+Fibonacci(N-2)

main()