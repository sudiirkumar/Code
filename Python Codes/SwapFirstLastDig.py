import  math
num = int(input("Enter a number: "))
ldig = num%10 # Finding last dig
n = int(math.log10(num)) + 1 # Number of digits
fdig = int(num//(10**(n-1))) # finding first digit by dividing the number by 10^(n-1)
swappedNum = ldig*(10**(n-1)) # Placing ldig in place of fdig
swappedNum += num%(10**(n-1)) # adding the remaining number
swappedNum -= ldig # removing last dig
swappedNum += fdig # adding fdig as last digit
print(swappedNum)