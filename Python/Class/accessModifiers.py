class Employee:
    _employeeName = "abc" #protected member
    _employeeSalary = 0  
    __employeeId = 0  #private member
    __employeeContactNumber = 0
    def getValues(self,eId,eName,eContact,eSalary):
        self.employeeName = eName
        self.employeeId = eId;
        self.employeeContactNumber = eContact
        self.employeeSalary = eSalary

    def printValues(self):
        print(f"The Employee id is {self.employeeId}.\nThe Employee Name is {self.employeeName}.\nThe Employee Contact Number is {self.employeeContactNumber}.\nThe Employee Salary is {self.employeeSalary}.")

yogesh = Employee();
yogesh.getValues(10001,"Yogesh Gaur",3745843240,43534.359)
print(yogesh._employeeName)
print(yogesh._Employee__employeeContactNumber)


    