num = int(input("Enter a number: "))
if num<0:
    print("Factorial of negative number is not defined.")
    exit()
fact = 1
i = 1
while i<=num:
    fact *= i
    i += 1
print(fact)