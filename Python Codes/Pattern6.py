# * 
# * * 
# * * * 
# * * * * 
# * * * * * 
# * * * * 
# * * * 
# * * 
# * 
num = int(input("Enter a number: "))
for i in range(num):
    print("* "*(i+1))
for i in range(num-1,0,-1):
    print("* "*i)