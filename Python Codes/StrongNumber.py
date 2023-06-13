import math
num = int(input("Enter a number: "))
original_num = num
sum = 0
while num>0:
    dig = num%10
    sum += math.factorial(dig)
    num = num // 10
if sum==original_num:
    print("Strong number")
else:
    print("Not an strong number")