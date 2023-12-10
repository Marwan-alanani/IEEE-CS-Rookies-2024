def main():
    string  = input()
    check(string)

def check(string):
    hello = "hello"
    i=0
    for letter in string:
        if letter == hello[i]:
            if i == 4:
                print("YES",end='')
                return
            i+=1

    print("NO",end='')


main()