class Number:
    def __init__(self,value):
        self.value = value
    def __add__(n1,n2):
        return n1.value + n2.value
    def __sub__(n1,n2):
        return n1.value - n2.value
n1 = Number(12)
n2 = Number(25)
print(n1+n2)
print(n1-n2)