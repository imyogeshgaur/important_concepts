def writeTableInFile(number):
    table = [number*i for i in range(1,11)]
    with open('ex5.txt',"a") as f:
        f.write(str(table))
        f.write('\n')

num = int(input('Enter Your Number :' ))
writeTableInFile(num)
choice  = input("Do You Want To Continue ?? Press Q/q to quit")
while choice !='Q' or choice != 'q':
    num = int(input('Enter Your Number :' ))
    writeTableInFile(num)
    choice  = input("Do You Want To Continue ?? Press Q/q to quit")