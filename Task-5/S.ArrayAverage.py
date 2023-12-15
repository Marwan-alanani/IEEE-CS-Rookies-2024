def main():
    N = int(input())
    ar = input().split()
    ar = [int(i) for i in ar]
    print("{:.6f}".format(getAverage(ar,N)))

def getAverage(ar,N,i=0,average=0):
    if i==N:
        average/=N
        return average
    average += ar[i]
    i += 1  
    return getAverage(ar,N,i,average)
main()