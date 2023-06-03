P = int(input("Enter principle amount: "))
R = float(input("Enter rate: "))
T = int(input("Enter no of years: "))
CI = P*(1 + R/100)**T - P
print("Compound interest: "+str(CI))