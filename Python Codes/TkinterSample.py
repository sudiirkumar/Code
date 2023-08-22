import tkinter
def buttonClicked():
    text.config(text="Hello there")
m = tkinter.Tk()
m.title("New Project")
text = tkinter.Label(m,text="hello")
button1 = tkinter.Button(m,text = "Button 1",command=buttonClicked)
text.pack()
button1.pack()
m.mainloop()