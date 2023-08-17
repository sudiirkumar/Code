# create a class vector with 3 data members x,y,z and overload + operator
# to add 2 vector and - operator to subtract -> xi + yj + zj
# __str__ to print
class vector:
    def __init__(self,x,y,z):
        self.x = x
        self.y = y
        self.z = z
    def __str__(self):
        return f"{self.x}i + {self.y}j + {self.z}k"
    def __add__(ob1,ob2):
        return vector(ob1.x+ob2.x,ob1.y+ob2.y,ob1.z+ob2.z)
    def __sub__(ob1,ob2):
        return vector(ob1.x-ob2.x,ob1.y-ob2.y,ob1.z-ob2.z)
    def __mul__(ob1,ob2):
        return (ob1.x*ob2.x) + (ob1.y*ob2.y) + (ob1.z*ob2.z)

v1 = vector(1,2,3) # i + 2j + 3k
v2 = vector(2,3,4)
print(v1)
print(v2)
print(v1*v2)