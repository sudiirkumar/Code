import math
def isPrime(num):
    if num==1:
        return False
    i = 2
    while i<=int(math.sqrt(num)):
        if num%i==0:
            return False
        i += 1
    return True
print(isPrime(12))
print(isPrime(92))
print(isPrime(57))
print(isPrime(63))
print(isPrime(107))
print(isPrime(34))