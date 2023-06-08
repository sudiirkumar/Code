import math as m
num = int(input("Enter a number: "))
n = 2
while n<=num:
    if num%n==0:
        i = 2
        isPrime = True
        while i<=(int(m.sqrt(n))):
            if n%i==0:
                isPrime = False
                break
            i += 1
        if isPrime:
            print(n)
    n += 1