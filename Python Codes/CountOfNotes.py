a = int(input("Enter amount: "))#6240 -> 240 -> 40 -> 0
# 2000, 500, 200, 100, 50, 20, 10, 5, 2, 1
if a>=2000:
    print("No of 2000 notes: ",a//2000)
    a = a%2000
if a>=500:
    print("No of 500 notes: ",a//500)
    a = a%500
if a>=200:
    print("No of 200 notes: ",a//200)
    a = a%200
if a>=100:
    print("No of 100 notes: ",a//100)
    a = a%100
if a>=50:
    print("No of 50 notes: ",a//50)
    a = a%50
if a>=20:
    print("No of 20 notes: ",a//20)
    a = a%20
if a>=10:
    print("No of 10 notes: ",a//10)
    a = a%10
if a>=5:
    print("No of 5 notes: ",a//5)
    a = a%5
if a>=2:
    print("No of 2 notes: ",a//2)
    a = a%2
if a>=1:
    print("No of 1 notes: ",a//1)
    a = a%1