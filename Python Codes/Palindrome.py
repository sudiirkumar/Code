num = int(input("Enter a number: "))
original_num = num
rev = 0
while num>0:
    dig = num%10
    rev = rev*10 + dig
    num //= 10
if rev==original_num:
    print("Palindrome")
else:
    print("Not a palindrome")