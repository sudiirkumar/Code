import os
score = 0
questions = ("Who is the father of computer?","What is the full form of CPU?","What is the full form of CU?","What is the full form of ALU?","What is the full form of MU?","Which part of the computer is considered as Brain of the Computer?","Which can be the input and output devices both?","1024 Bytes equivalent to?","What does an Operating System do?","Which is not an Operating System?")
options = (("Charlie Babbage","Dennis Ritchie","Charles Babbage","Ken Thompson"),("Compound unit","Central processing unit","Central programming unit","Central progressive unit"),("Arithmetic Logical Unit","Arithmetic Local Unit","Advance Logical Unit","None of these"),("Management Unit","Masked Unit","Main Unit","Memory Unit"),("RAM","CPU","ROM","Hard disk"),("Scanner","Touch monitor","Joystick","Speaker"),("2^13","2^12","2^9","2^10"),("Memory management","File management","Application management","All of them"),("Windows","Mac","Linux","Open Office"))
correct_answer_idx = (2,1,0,3,1,1,3,3,3)
prize_money = (1000,1500,2500,5000,8000,10000,15000,25000,50000)
for i in range(9):
    os.system("cls")
    print("Que "+str(i+1)+". "+questions[i],"\n")
    for j in range(4):
        print(str(1+j)+". ",options[i][j])
    ch = int(input("\nEnter your choice: "))
    if ch-1==correct_answer_idx[i]:
        score += prize_money[i]
    input("Press enter key to continue")
    # print("\nCorrect Answer: "+options[i][correct_answer_idx[i]],"\n\n")
os.system("cls")
print("You won:",score)