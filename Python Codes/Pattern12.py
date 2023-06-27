num = int(input("Enter a number: "))
for i in range(num):
    for j in range(2*num - 1):
        if i+j==num-1 or i+j==2*(num-1) or (i==0 and j>=(num-1)) or (i==num-1 and j<=num-1):
            print("* ",end="")
        else:
            print("  ",end="")
    print()