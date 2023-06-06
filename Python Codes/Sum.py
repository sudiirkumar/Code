i = 1
n = int(input("Enter a number: "))
sum_natural = 0
sum_even = 0
sum_odd = 0
while i<=n:
    if i%2==0:
        sum_even += i
    else:
        sum_odd += i
    sum_natural += i
    i += 1
print(sum_natural)
print(sum_even)
print(sum_odd)