#    *
#   **
#  ***
# ****
num = int(input("Enter a number: "))
for r in range(num):
    print("  "*(num-r-1),end="")
    print("* "*(r+1))