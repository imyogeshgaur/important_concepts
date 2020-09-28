def tableOfNumber(number):
    try:
        number = int(number)
        table = [number*i for i in range(1,11)]
        print(table)
    except ValueError:
        print("Please Enter an integer to continue")

num = input("Enter the number :")
tableOfNumber(num)
