count0 = 0
count1 = 0
count2 = 0
count3 = 0
count4 = 0
count5 = 0
count6 = 0
count7 = 0
count8 = 0
count9 = 0
num = int(input("Enter a number: "))
while num>0:
    digit = num%10
    match digit:
        case 0:
            count0 += 1
        case 1:
            count1 += 1
        case 2:
            count2 += 1
        case 3:
            count3 += 1
        case 4:
            count4 += 1
        case 5:
            count5 += 1
        case 6:
            count6 += 1
        case 7:
            count7 += 1
        case 8:
            count8 += 1
        case 9:
            count9 += 1
    num //= 10
print("Counting of 0: ",count0)        
print("Counting of 1: ",count1)        
print("Counting of 2: ",count2)        
print("Counting of 3: ",count3)        
print("Counting of 4: ",count4)        
print("Counting of 5: ",count5)        
print("Counting of 6: ",count6)        
print("Counting of 7: ",count7)        
print("Counting of 8: ",count8)        
print("Counting of 9: ",count9)        