SUBSEQUENCE = []
def main():
    size = int(input("Enter a length of string: "))
    string = input("Enter a string: ")
    string = string[:size]
    count = 1
    for i in range(len(string)-1):
        if string[i] != string[i+1]:
            count+=1
        else:
            count = 1
        SUBSEQUENCE.append(count)
    SUBSEQUENCE.sort(reverse=True)
    print(SUBSEQUENCE[0])

main()