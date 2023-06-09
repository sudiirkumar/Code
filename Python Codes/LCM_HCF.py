n1 = int(input("Enter first number: "))
n2 = int(input("Enter second number: "))
maxm = max(n1,n2)
minm = min(n1,n2)
hcf = minm
while hcf>=1:
    if n1%hcf==0 and n2%hcf==0:
        break
    hcf -= 1
lcm = maxm
while lcm<=n1*n2:
    if lcm%n1==0 and lcm%n2==0:
        break
    lcm += 1
print("LCM: "+str(lcm))
print("HCF: "+str(hcf))