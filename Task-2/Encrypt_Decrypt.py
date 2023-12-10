Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/"
Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
indexes = []
def main():
    operation = input()
    orginal_string = input()
    converted = Encrypt_decrypt(operation,orginal_string)          
    print(converted)

def Encrypt_decrypt(operation,string):
    converted=''
    if operation == '1': 
        for i in range(len(string)):
            indexes.append(Original.find(string[i]))
            converted += Key[indexes[i]]
    else:
        for i in range(len(string)):
            indexes.append(Key.find(string[i]))
            converted += Original[indexes[i]]
    return converted

main()

