base = int(input("Enter base: "))#2
exp = int(input("Enter exponent: "))#3
result = 1
while exp>0:
    result = result * base
    exp -= 1
print(result)