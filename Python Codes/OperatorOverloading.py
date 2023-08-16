class Student:
    def __init__(self,name,year,marks,attendance):
        self.name = name
        self.year = year
        self.marks = marks
        self.attendance = attendance
    def __str__(self):
        return f"Name: {self.name}\nMarks: {self.marks}\nAttendance: {self.attendance}"
    def __add__(ob1,ob2):
        return f"Name: {ob1.name}\nMarks: {ob1.marks+ob2.marks}\nAttendance: {ob1.attendance+ob2.attendance}"
    def __sub__(ob1,ob2):
        return f"Name: {ob1.name}\nMarks: {ob1.marks-ob2.marks}\nAttendance: {ob1.attendance-ob2.attendance}"
# s1 = "Aman"
# s2 = "Chaudhary"
# print(s1+s2)
# n1 = 10
# n2 = 14
# print(n1+n2)
s1 = Student("Aman",1,80,150)
print(s1)
s2 = Student("Aman",2,85,180)
print(s2)
print(s1-s2)