class Base1:
    base1int = 0
    
    @classmethod
    def setBase1(self,a):
        self.base1int = a
    
class Base2:
    base2int = 0

    @classmethod
    def setBase2(self,b):
        self.base2int = b

class Base3:
    base3int = 0

    @classmethod
    def setBase3(self,c):
        self.base3int = c

class Derrived(Base1,Base2,Base3):
    def showValues(self):
        print(f"The value in First Base Class is {self.base1int}.\nThe value in Second Base Class is {self.base2int}.\nThe value in Third Base Class is {self.base3int}.\nThe Sum of All Values is {self.base1int+self.base2int+self.base3int}")

derrived  = Derrived()
derrived.setBase1(34)
derrived.setBase2(45)
derrived.setBase3(56)
derrived.showValues()
