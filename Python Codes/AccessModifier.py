# Public : Accessed by all - Default
# Protected : Limited access - _
# Private : Accessed by no one - __
class Student:
    __name = None
    __roll = None
    __add = None
    __Class = None
    def __init__(self,name,roll,add,Class):
        self.__name = name
        self.__roll = roll
        self.__add = add
        self.__Class = Class
    def getName(self):
        return self.__name
    def getAdd(self):
        return self.__add
    def getRoll(self):
        return self.__roll
    def getClass(self):
        return self.__Class
    def setName(self,name):
        self.name = name
    def setName(self,add):
        self.add = add
    def setName(self,roll):
        self.roll = roll
    def setName(self,Class):
        self.Class = Class

s = Student("Aman",1,"Gaya",12)
print(s.getName())
print(s.getRoll())
print(s.getClass())
print(s.getAdd())
