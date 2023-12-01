
size = int(input("Number of elements: "))       
numbers = input("Enter numbers seperated by spaces: " ).split()
numbers = [int(i) for i in numbers[:size]]
min_index = 0
max_index = 0
for i in range(1,len(numbers)):
    if numbers[i] < numbers[min_index]:
         min_index = i
    if numbers[i]> numbers[max_index]:
         max_index = i
numbers[min_index] , numbers[max_index] = [numbers[max_index],numbers[min_index]]
print(numbers)