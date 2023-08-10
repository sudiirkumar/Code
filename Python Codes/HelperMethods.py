class Person:
    def __init__(self,name,age,dob):
        self.name = name
        self.age = age
        self.dob = dob
    @classmethod
    def fromString(cls,string):
        return Person(string.split('-')[0],string.split('-')[1])
    def printDetails(self):
        print("Name:",self.name)
        print("Age:",self.age)
        print("DOB:",self.dob)
p = Person("Aman",19,"12/04/2001")
p1 = Person("Aman1",19,"12/04/2001")
p2 = Person("Aman2",19,"12/04/2001")
p3 = Person("Aman3",19,"12/04/2001")
# __dir__, __dict__, help
# print(p.__dir__())
# print(Person.__dict__)
print(help(int))
