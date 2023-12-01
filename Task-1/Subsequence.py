def main(): 
    original_size,sub_size = input('Enter original size and sub size seperated by spaces: ').split()
    original_size,sub_size = [int(original_size),int(sub_size)]
    original = input("enter original sequence: ").split()
    sub = input("Enter subsequence: ").split()
    original = original[:original_size]
    sub = sub[:sub_size]
    if sub_sequence(original,sub):
        print("YES")
        return
    print("NO")

def sub_sequence(original,sub):
    for i in range(1,len(sub)):
        if (sub[i] in original) and (sub[i-1] in original):
            if original.index(sub[i]) < original.index(sub[i-1]):
                return False
    return True
main()