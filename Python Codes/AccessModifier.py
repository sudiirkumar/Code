# Public : Accessed by all - Default
# Protected : Limited access - _
# Private : Accessed by no one - __
class Student:

    def __init__(self,name,roll,address):
        self.__name = name
        self.__roll = roll
        self.__address = address
    # def getName(self):
    #     return self.__name

    @property
    def name(self):
        return "Hello "+self.__name
    @property
    def roll(self):
        return self.__roll
    @property
    def address(self):
        return self.__address
    @name.setter
    def name(self,new_name):
        self.__name = new_name
    @roll.setter
    def roll(self,new_roll):
        assert new_roll>0
        self.__roll = new_roll
    @address.setter
    def address(self,new_address):
        self.__address = new_address

st1 = Student("Aman",1,"Gaya")
print(st1.name)
st1.name = "Baman"
print(st1.name)
st1.roll = 3
print(st1.roll)