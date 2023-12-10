def main():
    test_cases = int(input())
    tests = []
    for _ in range(test_cases):
        string = input()
        tests.append(string)
    for string in tests:
        check(string)
        print()

def check(string):
    for i in range((len(string)-2)):
        if string[i:i+3] == "101" or string[i:i+3] == "010":
            print("Good",end='')
            return
    print("Bad",end='')

main()
