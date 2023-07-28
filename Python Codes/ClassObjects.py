class Student:
    def __init__(self,name,roll,add,Class):
        self.name = name
        self.roll = roll
        self.add = add
        self.Class = Class

    def changeName(self,new_name):
        self.name = new_name
    def print_info(self):
        print("Name:",self.name)
        print("Class:",self.Class)
        print("Roll:",self.roll)
        print("Address:",self.add)
st1 = Student("Aman",1,"Gaya",12)
st1.roll = -10
st1.print_info()

st2 = Student("Rahul",2,"Patna",11) 
st2.print_info()