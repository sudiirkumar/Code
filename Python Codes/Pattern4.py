# ****
#  ***
#   **
#    *
num = int(input("Enter a number: "))
for r in range(num):
    print("  "*r,end="")
    print("* "*(num-r))