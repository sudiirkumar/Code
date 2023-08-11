# DRY - Do Not Repeat
class Parent:
    cityName = "Gaya"
    def __init__(self,name,age):
        self.name = name
        self.age = age
    def printDetails(self):
        print("Name:",self.name)
        print("Age:",self.age)

class Child(Parent):
    cityName = "Patna"
    def __init__(self,name,age,salary):
        self.salary = salary
        super().__init__(name,age)
    def printDetails(self):
        super().printDetails()
        print("Salary:",self.salary)
        print("City:",super().cityName)
    def printNameAge(self):
        super().printDetails()

c = Child("Aman",20,10000)
c.printDetails()
c.printNameAge()
