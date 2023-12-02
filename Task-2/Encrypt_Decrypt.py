Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/"
Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
indexes = []
def main():
    operation = input("Enter 1 or 2: ")
    orginal_string = input("Enter original string: ")
    converted = Encrypt_decrypt(operation,orginal_string)          
    print(converted)

def Encrypt_decrypt(operation,string):
    converted=''
    match operation:
        case '1':
            for i in range(len(string)):
                indexes.append(Original.find(string[i]))
                converted += Key[indexes[i]]
        case '2':
            for i in range(len(string)):
                indexes.append(Key.find(string[i]))
                converted += Original[indexes[i]]
    return converted

main()

