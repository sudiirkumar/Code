# try:
#     a = int(input("Enter a number: "))
# except Exception as e:
#     print("Error occured")
#     print(e)
# b = int(input("Enter a number: "))
a = int(input())
b = int(input())
try:
    print(a/b)
except Exception as ex:
    print("Cannot divide by zero")
    print(ex)
print(a*b)
print(a+b)
print(a-b)