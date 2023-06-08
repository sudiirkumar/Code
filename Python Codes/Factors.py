import math as m
num = int(input("Enter a number: "))
i = 1
while i<=m.sqrt(num):
    if num%i==0:
        print(i)
        print(num//i)
    i += 1