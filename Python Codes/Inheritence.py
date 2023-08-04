class A:#Parent class
    def __init__(self,name,age) -> None:
        self.name = name
        self.age = age
    def printDetails(self):
        print("Name",self.name)
        print("Age",self.age)
    def isAdult(self):
        if self.age>=18:
            return True
        else:
            return False
class B(A):#Child class
    def __init__(self,name,age,salary):
        self.name = name
        self.age = age
        self.salary = salary
    #method overriding -> Polymorphism -> One name, multiple work
    def printDetails(self):
        print("Name:",self.name)
        print("Age:",self.age)
        print("Salary:",self.salary)
    def printSalary(self):
        print("Salary:",self.salary)
b = B("Aman",19,100000)
b.printDetails()
a = A("Raman",18)
a.printDetails()

#Another example

class Student:
    def __init__(self,name,roll):
        self.name = name
        self.roll = roll
    def printName(self):
        print("Hello",self.name)
class PassedOutStudent(Student):
    def __init__(self,name,roll,salary) -> None:
        self.name = name
        self.roll = roll
        self.salary = salary
st1 = Student("Aman",1)
st1.printName()
ps1 = PassedOutStudent("Raman",1,10000)
ps1.printName()