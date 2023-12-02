def main():
    test_cases = int(input("enter no of test cases: "))
    for _ in range(test_cases):
        string = input("Enter a string: ")
        check(string)
        

def check(string):
    for i in range((len(string)-2)):
        if string[i:i+3] == "101" or string[i:i+3] == "010":
            print("Good")
            return
    print("Bad")

main()
