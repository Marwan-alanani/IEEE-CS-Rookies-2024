def main():
    size = int(input("Enter number of elements: "))
    ar = input("Enter elements seperated by spaces: ").split()
    ar = [int(i) for i in ar[:size]]
    print(""+str(minimize(ar)))
    
def minimize(ar,count=0):
    for i in range(len(ar)):
        if ar[i]%2 != 0:
            return count
        ar[i] = ar[i]/2
    return minimize(ar,count=count+1)
main()