import tkinter as tk
m = tk.Tk()
global name
global Class
global roll
def submit():
    name = name_entry.get()
    Class = class_entry.get()
    roll = roll_entry.get()
    final_text.config(text=f"{name} is of class {Class} and roll number is {roll}")
# Widgets
name_label = tk.Label(m,text="Name: ",width=30)
class_label = tk.Label(m,text="Class: ",width=30)
roll_label = tk.Label(m,text="Roll: ",width=30)
final_text = tk.Label(m,text="",width=80)

name_entry = tk.Entry(m,width=40)
class_entry = tk.Entry(m,width=40)
roll_entry = tk.Entry(m,width=40)

submit_button = tk.Button(m,text="Submit",width=10,command=submit)

name_label.grid(row=0,column=0)
name_entry.grid(row=0,column=1)
class_label.grid(row=1,column=0)
class_entry.grid(row=1,column=1)
roll_label.grid(row=2,column=0)
roll_entry.grid(row=2,column=1)
submit_button.grid(row=3,column=1)
final_text.grid(row=4,column=1)
m.mainloop()