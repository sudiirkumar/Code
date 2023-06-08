import math
num = int(input("Enter a number: "))
n = 2
while n<=num:
    i = 2
    isPrime = True
    while i<=(int(math.sqrt(n))):
        if n%i==0:
            isPrime = False
            break
        i+= 1
    if isPrime:
        print(n)
    n+=1