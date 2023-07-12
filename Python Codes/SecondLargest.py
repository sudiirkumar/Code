l = [12,35,1,10,34,1]
maxm = 0
maxm2 = 0
for  x in l:
    if x>maxm:
        maxm2 = maxm
        maxm = x
    elif x>maxm2 and x!=maxm:
        maxm2 = x
print(maxm,maxm2)