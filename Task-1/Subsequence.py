def main(): 
    original_size,sub_size = input().split()
    original = input().split()
    sub = input().split()
    if ordered(original,sub):
        print("YES",end='')
        return
    print("NO",end='')

def ordered(original,sub):
    previousIndex = get_index(sub[0],original)

    if previousIndex != -1:         
        for i in range(1,len(sub)):
            # check that items are sequential
            current_index = get_index(sub[i],original,previousIndex+1)
            if previousIndex > current_index or current_index == -1:
                return False
            previousIndex = current_index
        return True
    # if item not found
    return False

def get_index(el,original,start=0):
    for i in range(start,len(original)):
        if(el == original[i]):
            return i
    return -1
            

main()