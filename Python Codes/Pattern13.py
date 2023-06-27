n = int(input("Enter a number: "))
for i in range(n):
    for j in range(i+1):
        if i==n-1 or j==0 or i==j:
            print("* ",end="")
        else:
            print("  ",end="")
    print()