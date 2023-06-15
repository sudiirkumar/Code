num = int(input("Enter a number: "))
base = int(input("Enter base: "))
ans = ""
while num>0:
    term = str(num%base)
    if term=="10":
        term = "A"
    elif term == "11":
        term = "B"
    elif term == "12":
        term = "C"
    elif term == "13":
        term = "D"
    elif term == "14":
        term = "E"
    elif term == "15":
        term = "F"
    ans += term
    num //= base
ans = ans[::-1]
print(ans)
