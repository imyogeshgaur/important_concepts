def divideNumber(a,b):
    try:
        a=int(a)
        b=int(b)
        if a > b:
            print(a/b)
        else:
            print(b/a)
    except ZeroDivisionError:
        print("Infinite")
    except ValueError:
        print("Please Enter an Integer to continue !!!")

num1 = input('Enter first number')
num2 = input('Enter second number ')
divideNumber(num1,num2)
