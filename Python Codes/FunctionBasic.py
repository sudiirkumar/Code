def sum(a,b):
    sum = a+b
    return sum
def printHello():
    print("Hello, there!")
def factorial(n):
    i = 1
    ans = 1
    while i<=n:
        ans = ans * i
        i+=1
    return ans
print("This is an example of function: ")
print(sum(11,2))
print(factorial(6))
printHello()