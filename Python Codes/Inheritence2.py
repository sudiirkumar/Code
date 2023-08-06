class A:
    def __init__(self,name,age):
        self.name = name
        self.age = age
    def printDetails_A(self):
        print("Printing from class A")
        print("Name:",self.name)
        print("Age:",self.age)
class B(A):
    def printDetails_B(self):
        print("Printing from class B")
        print("Name:",self.name)
        print("Age:",self.age)
class C(A):
    def printDetails_C(self):
        print("Printing from class C")
        print("Name:",self.name)
        print("Age:",self.age)
class D(B,C):
    def printDetails_D(self):
        print("Printing from class D")
        print("Name:",self.name)
        print("Age:",self.age)

ob1 = D("Aman",19)
ob1.printDetails_A()
ob1.printDetails_B()
ob1.printDetails_C()
ob1.printDetails_D()
