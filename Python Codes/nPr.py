# nPr = n! / (n-r)!
def factorial(n):
    i = 1
    ans = 1
    while i<=n:
        ans = ans * i
        i+=1
    return ans

n = int(input("Enter value of n: "))
r = int(input("Enter value of r: "))
ans = factorial(n)/factorial(n-r)
print(ans)