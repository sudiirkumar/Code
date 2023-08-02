class Student:
    def __init__(self,name,roll):
        self.__name = name
        self.__roll = roll
    @property
    def name(self):
        return "Hello "+self.__name
    @name.setter
    def name(self,new_name):
        assert (new_name[0]>='A' and new_name[0]<='Z')
        self.__name = new_name
st1 = Student("Aman",10)
st1.name = "Baman"
print(st1.name)
