class Employee:
    _employeeId = 0
    _employeeName = "XyZ"
    _employeeContactNumber = 0
    _employeeSalary = 0
    def __init__ (self,eId,eName,eContact,eSalary):
        self._employeeName = eName
        self._employeeId = eId;
        self._employeeContactNumber = eContact
        self._employeeSalary = eSalary
    
    #dunderFunctions
    def __add__(self,otherSalary):
        return f"{self._employeeSalary + otherSalary._employeeSalary}"

    def __truediv__(self,otherSalary):
        return f"{self._employeeSalary / otherSalary._employeeSalary}"

    def __repr__(self):
        return f"Employee('{self._employeeId},{self._employeeName}',{self._employeeContactNumber},{self._employeeSalary})"

    def __str__(self):
        return f"The Employee id is {self._employeeId}.\nThe Employee Name is {self._employeeName}.\nThe Employee Contact Number is {self._employeeContactNumber}.\nThe Employee Salary is {self._employeeSalary}."
    
yogesh =  Employee(10001,"Yogesh Gaur",3745843240,43534)
ramesh = Employee(32423,"Ramesh Sharam",2455,5)
print(yogesh.__add__(ramesh))
print(yogesh.__truediv__(ramesh))
print(repr(ramesh))
print(str(ramesh))
