
lowerLeft = [1,1]
upperRight = [1,1]
def main():
    test_cases = int(input())
    for testCase in range(test_cases):
        rectangles = int(input())
        x1,y1,x2,y2 = [int(i) for i in input().split()]
        global lowerLeft
        global upperRight
        lowerLeft = [x1,y1]
        upperRight = [x2,y2]
        for rectangle in range(rectangles-1):
            x3,y3,x4,y4 = [int(i) for i in input().split()]
            getSharedPoints(lowerLeft[0],lowerLeft[1],upperRight[0],upperRight[1],x3,y3,x4,y4)
        if upperRight[0]>lowerLeft[0] and upperRight[1]>lowerLeft[1]:
            print(f"Case #{testCase+1}: {getArea(lowerLeft,upperRight)}")
        else:
            print(f"Case #{testCase+1}: 0")


def getSharedPoints(x1,y1,x2,y2,x3,y3,x4,y4):
    max_x_bottomLeft = max(x1,x3)
    max_y_bottomLeft = max(y1,y3)
    min_x_upperRight = min(x2,x4)
    min_y_upperRight = min(y2,y4)
    global lowerLeft
    global upperRight
    lowerLeft = [max_x_bottomLeft,max_y_bottomLeft]
    upperRight = [min_x_upperRight,min_y_upperRight]



def getArea(lowerLeft,upperRight):
    height = upperRight[1]-lowerLeft[1]
    width = upperRight[0]-lowerLeft[0]
    return width*height

main()