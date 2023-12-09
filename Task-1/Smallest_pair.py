test_cases = int(input())
smallest = []
for _ in range(test_cases):
     number_elements = int(input())  
     el = input().split()
     el = [int(i) for i in el]
     pairs_sum = []
     for i in range(0,number_elements):
          for j in range(i+1,number_elements):
               pairs_sum.append(el[i]+el[j]+j-i)
     pairs_sum.sort()
     smallest.append(pairs_sum[0])
for el in smallest:
     print(str(el),end='')
     print('\n',end='')