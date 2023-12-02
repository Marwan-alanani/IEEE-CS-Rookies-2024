alphabet = "abcdefghijklmnopqrstuvwxyz"
def main(): 
    string = input("Enter a string: ")
    count = 0
    for el in string.split():
        if isWord(el.lower()):        
            count+=1
    print(count,end='')

def isWord(el):
    for letter in el:
        if letter in alphabet:
            return True
    return False

main()