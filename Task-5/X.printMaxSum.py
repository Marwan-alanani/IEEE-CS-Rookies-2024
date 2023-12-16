def main():
    rows,cols = [int(i) for i in input().split()]
    global matrix
    matrix = []
    for i in range(rows):
        matrix.append([int(i) for i in input().split()])
    print(getSum(rows,cols))

def getSum(rows,cols,i=0,j=0):
    global matrix
    
    # bottom right reached
    if i==rows-1 and j==cols-1:
        return matrix[i][j]
    
    # lateral move
    if i==rows:
        return getSum(rows,cols,i-1,j+1)
    
    # vertical move
    if j==cols:
        return getSum(rows,cols,i+1,j-1)
    
    return matrix[i][j] + max(getSum(rows,cols,i+1,j),getSum(rows,cols,i,j+1))
       
        
main()