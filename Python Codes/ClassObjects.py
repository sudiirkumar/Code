class Student:
    name = "Student_name"
    roll = 0
    Class = 0
    add = "Student address"

    def changeName(self,new_name):
        self.name = new_name
    def print_info(self):
        print("Name:",self.name)
        print("Class:",self.Class)
        print("Roll:",self.roll)
        print("Address:",self.add)
st1 = Student()
st1.name = "Aman"
st1.roll = 1
st1.add = "Gaya"
st1.Class = 11
st1.changeName("Baman")
st1.print_info()

st2 = Student()
st2.name = "Dheeraj"
st2.roll = 2
st2.add = "Patna"
st2.Class = 12 
st2.print_info()