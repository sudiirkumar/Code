import math as m
num = int(input("Enter a number: "))
i = 2
sum = 0
while i<=m.sqrt(num):
    if num%i==0:
        print(i)
        print(num//i)
        sum = sum + i
        sum = sum + (num//i)
    i += 1
sum += 1
if sum == num:
    print("Perfect Number")
else:
    print("Not a perfect number")