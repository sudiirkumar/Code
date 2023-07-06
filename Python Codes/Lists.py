n = int(input("Enter number of values: "))
l = []
for i in range(n):
    num = int(input("Enter a value: "))
    l.append(num)
print(l)
l.sort()
print(l)
l.reverse()
print(l)
l.remove(5)
print(l)
l.pop()
print(l)
print(l.index(2))
# total_sum = 0
# for n in l:
#     print(n,end=" ")
#     total_sum += n
# print("\nTotal sum is:",total_sum)
# even_sum = 0
# for n in l:
#     if n%2==0:
#         print(n,end=" ")
#         even_sum += n
# print("\nEven sum:",even_sum)
# odd_sum = 0
# for n in l:
#     if n%2==1:
#         print(n,end=" ")
#         odd_sum += n
# print("\nOdd sum:",odd_sum)