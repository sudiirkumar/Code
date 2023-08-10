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
        if l[1]=='jan':
            l[1] = '01'
        elif l[1]=='feb':
            l[1] = '02'
        elif l[1]=='mar':
            l[1] = '03'
        elif l[1]=='apr':
            l[1] = '04'
        elif l[1]=='may':
            l[1] = '05'
        elif l[1]=='jun':
            l[1] = '06'
        elif l[1]=='jul':
            l[1] = '07'
        elif l[1]=='aug':
            l[1] = '08'
        elif l[1]=='sep':
            l[1] = '09'
        elif l[1]=='oct':
            l[1] = '10'
        elif l[1]=='nov':
            l[1] = '11'
        elif l[1]=='dec':
            l[1] = '12'
        return (l[0]+'/'+l[1]+'/'+l[2])
    def printDetails(self):
        print("Name:",self.name)
        print("Age:",self.age)
        print("DOB:",self.dob)

p4 = Person("Daman",21,"10/10/2004")
p1 = Person("Aman",20,Person.dateFromWords("10 jan 2003"))
p1.printDetails()
p4.printDetails()
