def main():
    no = int(input("Enter number of elements: "))
    original = input("Enter original array: ").split()
    second = input("Enter second array: ").split()
    original = original[:no]
    second = second[:no]
    if permutation(original,second):
        print('yes')
    else:
        print('no')

def permutation(original,second):
    for el in original:
        if el not in second:
            return False
    return True
main()