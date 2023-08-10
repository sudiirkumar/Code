class Person:
    def __init__(self,name,age,dob):
        self.name = name
        self.age = age
        self.dob = dob
    def __str__(self):
        name = "Name: "+self.name
        age = "\nAge: "+str(self.age)
        dob = "\nDOB: "+self.dob
        return name+age+dob
    def __len__(self):
        return self.age
    def __repr__(self):
        # return '('+self.name+','+str(self.age)+','+self.dob+')'
        return f'("{self.name}",{self.age},"{self.dob}")'
p = Person("Aman Chauhan",19,"12/09/2005")
# print(p.__repr__())
# print(len(p))
print(p)