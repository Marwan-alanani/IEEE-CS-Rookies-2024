test_cases = int(input("Enter number of test cases: "))
for _ in range(test_cases):
    size = int(input("Enter size of array: "))
    ar = input("Enter elements seperated by spaces: ").split()
    ar = [int(i) for i in ar[:size]]
    count = size
    for i in range(0,size):
        for j in range(i+1,size):
            if ar[j-1]>ar[j]:
                break
            count+=1
    print(count)
            