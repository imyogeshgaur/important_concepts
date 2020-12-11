# def dec1(func1):
#     def nowexec():
#         print("Executing now")
#         func1()
#         print("Executed")
#     return nowexec

# @dec1
# def who_is_harry():
#     print("Harry is a good boy")

# # who_is_harry = dec1(who_is_harry)

# who_is_harry()


def Calculator(fun):
    def exec(a,b):
        print("Executing...")
        fun(a,b)
        print("Executed..")
    return exec

@Calculator
def add(a,b):
    return a+b

add = Calculator(add)

add(5,6)



  
