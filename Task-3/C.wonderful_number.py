no = int(input())
def isOdd(no):
    if no%2 !=0:
        return True
    return False
def isPalindromic(no):
    binary = format(no,'b')
    reverseBinary = reversed(binary)
    reverseBinary = ''
    for el in reversed(binary):
        reverseBinary+= el
    if reverseBinary == binary:
        return True
if isOdd(no):
    if isPalindromic(no):
        print("YES",end='')
    else:
        print("NO",end='')
else:
    print("NO",end='')

        


