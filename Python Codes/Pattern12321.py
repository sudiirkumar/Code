num = int(input("Enter a number: "))
for i in range(num):
    print((num-i-1)*"  ",end='')
    for j in range(i+1):
        print(j+1,end=" ")
    for j in range(i):
        print(i-j,end=" ")
    print()
for i in range(num-1):
    print((i+1)*"  ",end='')
    for j in range(num-i-1):
        print(j+1,end=" ")
    for j in range(num-i-2):
        print(num-i-j-2,end=" ")
    print()