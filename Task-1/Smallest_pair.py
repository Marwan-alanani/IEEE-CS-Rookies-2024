
test_cases = int(input("Number of test cases: "))


for _ in range(test_cases):
     number_elements = int(input("Number of elements per test case: "))  
     el = input("Enter test case elements seperated by spaces: ").split(" ")
     el = [int(i) for i in el[:number_elements]]
     pairs_sum = []
     for i in range(0,number_elements):
          for j in range(i+1,number_elements):
               pairs_sum.append(el[i]+el[j]+j-i)
     pairs_sum.sort()
     print("Smallest sum is: "+str(pairs_sum[0]))