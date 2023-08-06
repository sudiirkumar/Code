class A:
    schoolName = "ABC Public School" #static data member
    def __init__(self,name,age):
        self.name = name
        self.age = age
    def printDetails(self):
        print("Name:",self.name)
        print("Age:",self.age)
        print("School name:",self.schoolName)

    @staticmethod
    def printSchoolName():
        print("School Name:",A.schoolName)

a = A("Aman",19)
b = A("Baman",20)
c = A("Raman",18)
a.printDetails()
b.printDetails()
c.printDetails()
a.printSchoolName()