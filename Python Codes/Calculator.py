import tkinter as tk
main = tk.Tk()
main.title('Calculator')
input_str = ''
num1 = 0
num2 = 0
operation = ''
def buttonPressed(txt):
    # output_l.config(text='Button Pressed',anchor='e',justify='right')
    print(f"{txt} was pressed")
    global input_str
    global operation
    global num1
    global num2
    if txt=='C':
        input_str = ''
        num1 = 0
        num2 = 0
    elif txt=='=':
        num1 = int(float(input_str.split(operation)[0]))
        num2 = int(input_str.split(operation)[1])
        if operation=='':
            input_str = 'INVALID INPUT'
        else:
            if operation=='+':
                sum = num1 + num2
                input_str = str(sum)
            elif operation=='-':
                diff = num1 - num2
                input_str=str(diff)
            elif operation=='*':
                product = num1*num2
                input_str = str(product)
            elif operation=='/':
                quo = num1/num2
                input_str = str(quo)
            else:
                input_str = 'INVALID INPUT' 
    elif txt=='+':
        if input_str!='':
            operation = '+'
            input_str += '+'
    elif txt=='-':
        if input_str!='':
            operation = '-'
            input_str += '-'
    elif txt=='*':
        if input_str!='':
            operation = '*'
            input_str += '*'
    elif txt=='/':
        if input_str!='':
            operation = '/'
            input_str += '/'
    elif txt=='0':
        if input_str!='':
            input_str += '0'
    elif txt=='1':
        input_str += '1'
    elif txt=='2':
        input_str += '2'
    elif txt=='3':
        input_str += '3'
    elif txt=='4':
        input_str += '4'
    elif txt=='5':
        input_str += '5'
    elif txt=='6':
        input_str += '6'
    elif txt=='7':
        input_str += '7'
    elif txt=='8':
        input_str += '8'
    elif txt=='9':
        input_str += '9'
    output_l.config(text=input_str)
output_l = tk.Label(main,text="",width=30)
button_0 = tk.Button(main,text='0',width=10,command=lambda m="0": buttonPressed(m))
button_1 = tk.Button(main,text='1',width=10,command=lambda m="1": buttonPressed(m))
button_2 = tk.Button(main,text='2',width=10,command=lambda m="2": buttonPressed(m))
button_3 = tk.Button(main,text='3',width=10,command=lambda m="3": buttonPressed(m))
button_4 = tk.Button(main,text='4',width=10,command=lambda m="4": buttonPressed(m))
button_5 = tk.Button(main,text='5',width=10,command=lambda m="5": buttonPressed(m))
button_6 = tk.Button(main,text='6',width=10,command=lambda m="6": buttonPressed(m))
button_7 = tk.Button(main,text='7',width=10,command=lambda m="7": buttonPressed(m))
button_8 = tk.Button(main,text='8',width=10,command=lambda m="8": buttonPressed(m))
button_9 = tk.Button(main,text='9',width=10,command=lambda m="9": buttonPressed(m))
button_plus = tk.Button(main,text='+',width=30,command=lambda m="+": buttonPressed(m))
button_minus = tk.Button(main,text='-',width=30,command=lambda m="-": buttonPressed(m))
button_mul = tk.Button(main,text='*',width=30,command=lambda m="*": buttonPressed(m))
button_div = tk.Button(main,text='/',width=30,command=lambda m="/": buttonPressed(m))
button_equals = tk.Button(main,text='=',width=10,command=lambda m="=": buttonPressed(m))
button_clear = tk.Button(main,text='C',width=10,command=lambda m="C": buttonPressed(m))

output_l.grid(row=0,column=3,padx=5,pady=5)
button_7.grid(row=1,column=0,padx=5,pady=5)
button_8.grid(row=1,column=1,padx=5,pady=5)
button_9.grid(row=1,column=2,padx=5,pady=5)
button_plus.grid(row=1,column=3,padx=5,pady=5)
button_4.grid(row=2,column=0,padx=5,pady=5)
button_5.grid(row=2,column=1,padx=5,pady=5)
button_6.grid(row=2,column=2,padx=5,pady=5)
button_minus.grid(row=2,column=3,padx=5,pady=5)
button_1.grid(row=3,column=0,padx=5,pady=5)
button_2.grid(row=3,column=1,padx=5,pady=5)
button_3.grid(row=3,column=2,padx=5,pady=5)
button_mul.grid(row=3,column=3,padx=5,pady=5)
button_0.grid(row=4,column=0,padx=5,pady=5)
button_clear.grid(row=4,column=1,padx=5,pady=5)
button_equals.grid(row=4,column=2,padx=5,pady=5)
button_div.grid(row=4,column=3,padx=5,pady=5)
main.mainloop()