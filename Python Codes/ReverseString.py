# Take input an string and output the reverse of the string
# Hello -> olleH
s = input("Enter an string: ")
i = len(s) - 1
while i>=0:
    print(s[i],end="")
    i -= 1