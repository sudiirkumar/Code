num = int(input("Enter a number: "))
ldig = num%10
while num>0:
    dig = num%10
    num = num // 10
print("First digit:",dig)
print("Last digit:",ldig)
print("Sum of first and last digit:",ldig+dig)