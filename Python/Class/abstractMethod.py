from abc import ABC,abstractmethod

class Employee(ABC):
    _employeeId = 0
    _employeeName = "XYZ"
    _employeeContactNumber = 0
    _employeeSalary = 0

    @abstractmethod
    def printDetails():
        pass
        

class Programmer(Employee):
    def __init__(self,eId,eName,eContact,eSalary):
        self._employeeId = eId
        self._employeeName = eName
        self._employeeContactNumber = eContact
        self._employeeSalary = eSalary

    def getLanguage(self,choiceOfLanguage):
        self.languageToCode = choiceOfLanguage

# Mandatory to define this function
    def printDetails(self):
        print(f"The Id of the Employee is {self._employeeId}.\nThe Name of the Employee is {self._employeeName}.\nThe Contact Number of the Employee is {self._employeeContactNumber}.\nThe Salary of the Employee is {self._employeeSalary}.\nThe Language of the Employee is {self.languageToCode}.")


yogesh = Programmer(10101,"Yogesh Gaur",564358623,4358)
yogesh.getLanguage("Python")
yogesh.printDetails()

# yogesh  = Employee() Cant Instantiate Access the class 

         

