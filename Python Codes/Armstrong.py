import math as m
num = int(input("Enter a number: "))
original_num = num
no_of_dig = int(m.log10(num)) + 1
sum = 0
while num>0:
    dig = num%10
    sum += dig**no_of_dig
    num //= 10
print(sum)
if original_num == sum:
    print("Armstrong")
else:
    print("Non armstrong")