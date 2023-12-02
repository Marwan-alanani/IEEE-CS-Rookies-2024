def main():
    string  = input("enter a string: ")
    check(string)

def check(string):
    for i in range(len(string)-4):
       if string[i:i+5] == "hello":
           print("YES")
           return
    print("NO")
    
main()