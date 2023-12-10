# Lab 8 Task 2 - 2210009123 - Yosef Ahmed
import tkinter as tk

def add():
    num1, num2 = getnum()
    result = num1 + num2
    endresult.configure(text=result)
    
def subtract():
    num1, num2 = getnum()
    result = num1 - num2
    endresult.configure(text=result)
    
def multiply():
    num1, num2 = getnum()
    result = num1 * num2
    endresult.configure(text=result)
    
def divide():
    num1, num2 = getnum()
    result = num1 / num2
    endresult.configure(text=result)

def getnum():
    return int(num1.get()), int(num2.get())
    


root = tk.Tk()

menu = tk.Menu(root)
calcmenu = tk.Menu(menu, tearoff=0)
root.config(menu=menu)
calcmenu.add_command(label="ADD", command=add)
calcmenu.add_command(label="SUB", command=subtract)
calcmenu.add_command(label="MUL", command=multiply)
calcmenu.add_command(label="DIV", command=divide)
menu.add_cascade(label="Calculate", menu=calcmenu)

num1 = tk.Entry(root)
num1.pack()
num2 = tk.Entry(root)
num2.pack()

# buttons
addbutton = tk.Button(root, text="ADD", command=add)
addbutton.pack()

subbutton = tk.Button(root, text="SUB", command=subtract)
subbutton.pack()

mulbutton = tk.Button(root, text="MUL", command=multiply)
mulbutton.pack()

divbutton = tk.Button(root, text="DIV", command=divide)
divbutton.pack()

endresult = tk.Label(root, text="")
endresult.pack

root.mainloop()

