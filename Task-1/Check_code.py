def main():
    A = int(input("Enter A: "))
    B = int(input("Enter B: "))
    code = input("Enter code: ")
    if code[A] != '-':
        print("No")
        return
    elif len(code[A+1:]) != B:
        print("No")
        return
    for element in code[A+1:]:
        if element not in "0123456789":
            print("No")
            return
    print("Yes")
main()