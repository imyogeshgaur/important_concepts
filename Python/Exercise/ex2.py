def printValues(listOfNumbers):
    for index,item in enumerate(listOfNumbers):
        if index==2 or index==4 or index==6:
            print(item)

l = [1,2,3,4,5,6,7,8,9,10]
printValues(l)
