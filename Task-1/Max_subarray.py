max_numbers = []
def main(): 
    test_cases = int(input("Number of test cases: ")) 
    for i in range(test_cases):
        number_elements = int(input(f"Number of elements of test case {i+1}: "))
        max_numbers.clear()
        el = input("Enter elements seperated by spaces: ").split()
        el = el[:number_elements]
        get_max_of_subarrays(el)
        print(max_numbers)

def get_max_of_subarrays(x):
    for i in range(0,len(x)+1):
        for j in range(i+1,len(x)+1):
            l = x[i:j]
            l.sort(reverse=True)
            max_numbers.append(int(l[0]))


main()