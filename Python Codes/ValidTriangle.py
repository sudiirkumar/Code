a = int(input("Enter an angle: "))
b = int(input("Enter an angle: "))
c = int(input("Enter an angle: "))
if a==0 or b==0 or c==0:
    print("Angle cannot be zero")
elif a+b+c==180:
    print("It is a valid triangle.")
    if a==b and b==c:
        print("Equilateral")
    elif a==b or b==c:
        print("Isosceles")
    else:
        print("Scalene")
else:
    print("It is not a valid triangle.")