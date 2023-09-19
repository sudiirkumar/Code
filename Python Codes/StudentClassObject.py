class Student:
    def __init__(self,name,roll,dept,marks):
        self.name = name
        self.roll = roll
        self.dept = dept
        self.marks = marks

    def printDetails(self):
        print("Name:",self.name)
        print("Roll:",self.roll)
        print("Dept:",self.dept)

    def __str__(self):
        details = "Name: "+self.name
        details = details + "\nRoll:"+str(self.roll)
        details = details + "\nDept:"+self.dept
        details = details + "\nMarks:"+str(self.marks)
        return details

    def calcPercent(self):
        pass
student1 = Student("Aman",1,"BCA",76)
student2 = Student("Raman",4,"BBA",56)

# student1.printDetails()
# student2.printDetails()

print(student1)
print(student2)