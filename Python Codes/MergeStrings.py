# S1 = "Hello"  S2 = "Bye"
# Ans = "HBeylelo"
def mergeString(s1,s2):
    if len(s1)==0:
        return s2
    if len(s2)==0:
        return s1
    i = 0
    j = 0
    answer = ""
    while i<len(s1) and j<len(s2):
        answer += s1[i]
        i += 1
        answer += s2[j]
        j += 1
    while i<len(s1):
        answer += s1[i]
        i += 1
    while j<len(s2):
        answer += s2[j]
        j += 1
    return answer
s1 = "Hello"
s2 = "Apple"
print(mergeString(s1,s2))