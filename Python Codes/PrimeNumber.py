import math
num = int(input("Enter a number: "))
if num==1:
    print("Non prime")
    exit()
i = 2
isPrime = True
while i<=(int(math.sqrt(num))):
    print(i)
    if num%i==0:
        isPrime = False
        break
    i += 1
if isPrime:
    print("Prime")
else:
    print("Non prime")