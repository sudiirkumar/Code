num = int(input("Enter a number: "))
cnt = 0
while num>0:
    dig = num%10
    cnt += 1
    print(dig)
    num = num // 10
print("Count of digits: ",cnt)