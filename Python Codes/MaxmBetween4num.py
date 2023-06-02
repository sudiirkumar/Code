num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
num3 = int(input("Enter third number: "))
num4 = int(input("Enter fourth number: "))

if num1>num2 and num1>num3 and num1>num4:
    print(str(num1) + " is greatest.")
elif num2>num3 and num2>num4:
    print(str(num2) + " is greatest.")
elif num3>num4:
    print(str(num3) + " is greatest.")
else:
    print(str(num4) + " is greatest.")