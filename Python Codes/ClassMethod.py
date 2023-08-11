class Person:
    def __init__(self,name,age,dob):
        self.name = name
        self.age = age
        self.dob = dob
    @classmethod
    def fromString(cls,string):
        return Person(string.split('-')[0],string.split('-')[1])
    @classmethod
    def dateFromWords(cls,date):
        #10 oct 2004
        l = date.split(' ')
        dic = {'jan':'01','feb':'02','mar':'03','apr':'04','may':'05','jun':'06','jul':'07','aug':'08','sep':'09','oct':'10','nov':'11','dec':'12'}
        return (l[0]+'/'+dic[l[1]]+'/'+l[2])
    def printDetails(self):
        print("Name:",self.name)
        print("Age:",self.age)
        print("DOB:",self.dob)

p4 = Person("Daman",21,"10/10/2004")
p1 = Person("Aman",20,Person.dateFromWords("10 jan 2003"))
p1.printDetails()
p4.printDetails()
