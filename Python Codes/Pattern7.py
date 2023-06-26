# * * * * 
# *     * 
# *     * 
# * * * * 
num = int(input("Enter a number: "))
char = chr(1)
for i in range(num):
    for j in range(num):
        if i==0 or i==num-1 or j==0 or j==num-1 or i==j or i+j==num-1:
            print(char+" ",end="")
        else:
            print("  ",end="")
    print()