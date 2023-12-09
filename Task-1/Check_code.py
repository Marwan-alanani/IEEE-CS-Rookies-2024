def main():
    A, B = [int(el) for el in input().split()]
    code = input()
    if code[A] != '-':
        print("No",end='')
        return
    elif len(code[A+1:]) != B:
        print("No",end='')
        return
    for element in code[A+1:]:
        if element not in "0123456789":
            print("No",end='')
            return
    print("Yes",end='')
main()