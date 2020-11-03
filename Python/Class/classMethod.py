class Employee:
    employeeId = 0
    employeeName = "XYz"
    employeeContactNumber = 0
    employeeSalary = 0.0

    @classmethod

    def getValues(cls,eId,eName,eContact,eSalary):
        cls.employeeId = eId
        cls.employeeName= eName
        cls.employeeContactNumber = eContact
        cls.employeeSalary = eSalary

    def printValue(self):
          print(f"The Employee id is {self.employeeId}.\nThe Employee Name is {self.employeeName}.\nThe Employee Contact Number is {self.employeeContactNumber}.\nThe Employee Salary is {self.employeeSalary}.")
    
yogesh = Employee()
yogesh.getValues(10001,"Yogesh Gaur",3745843240,43534.359)
yogesh.printValue()