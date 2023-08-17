def func(i):
    try:
        print(l[i])
        return
    except:
        print("Error occured")
        return
    finally:
        print("Program ended")
l = [1,2,3,4,5]
i = int(input("Enter a number: "))
func(i)