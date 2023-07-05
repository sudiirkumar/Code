def maxm(a,b):
    if a>b:
        return a
    return b
def maxm(a,b,c=-1):
    if a>b and a>c:
        return a
    if b>c:
        return b
    return c
print(maxm(1,2))
print(maxm(1,2,3))