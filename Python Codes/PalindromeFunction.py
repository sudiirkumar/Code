# Create a function to check if a number is palindrome or not
# Example: 12321, 5, 1234321, 45554, etc.
def isPalindrome(num):
    temp = num
    rev = 0
    while temp>0:
        dig = temp%10
        rev = rev*10 + dig
        temp //= 10
    if rev == num:
        return True
    else:
        return False
    
num = int(input("Enter a number: "))
# print(isPalindrome(num))
if isPalindrome(num):
    print("Palindrome")
else:
    print("Not a palindrome")