import math
num = int(input("Enter a number: "))
temp = num
while temp>0:
    dig = temp%10
    if dig==0 or dig==1 or dig==4 or dig==6 or dig==8 or dig==9:
        print("No because one of the digit is not prime:",dig)
        exit()
    temp //= 10
i = 2
while i<=int(math.sqrt(num)):
    if num%i==0:
        print("No because number itself is not prime")
        exit()
    i += 1
print("Yes")    