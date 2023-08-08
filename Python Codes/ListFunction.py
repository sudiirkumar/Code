def sum(*num):
    if type(num[0])==str:
        sum = ""
        for n in num:
            sum += n
        return sum
    else:
        sum = 0
        for n in num:
            sum += n
        return sum
print(sum(1,2,3,4,9,4,5,5,5,4,6,6,9))
print(sum("Apple","Boy","Cat"))