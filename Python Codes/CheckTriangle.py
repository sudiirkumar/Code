a = int(input("Enter an side: "))
b = int(input("Enter an side: "))
c = int(input("Enter an side: "))
if a==b and b==c:
    print("Equilateral")
elif a==b or b==c:
    print("Isosceles")
else:
    print("Scalene")
#a+b>c
# b+c>a
# c+a>b