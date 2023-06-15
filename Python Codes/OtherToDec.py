import math
num = input("Enter a number: ")
base = int(input("Enter base: "))
power = 0
ans = 0
while power<len(num):
    term = num[len(num)-power-1]
    if term == 'A' or term == 'a':
        term = "10"
    elif term == 'B' or term == 'b':
        term = "11"
    elif term == 'C' or term == 'c':
        term = "12"
    elif term == 'D' or term == 'd':
        term = "13"
    elif term == 'E' or term == 'e':
        term = "14"
    elif term == 'F' or term == 'f':
        term = "15"
    ans = ans + (base**power)*int(term)
    power += 1
print(ans)