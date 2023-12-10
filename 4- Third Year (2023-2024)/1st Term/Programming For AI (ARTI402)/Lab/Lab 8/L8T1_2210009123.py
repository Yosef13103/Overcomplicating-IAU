# Lab 8 Task 1 - 2210009123 - Yosef Ahmed
import tkinter as tk
import random

# Checks the users input
def check_guess():
    user_input = int(userinput.get())

    # Check if the user's input matches the random number
    if user_input == random_number:
        result_label.config(text="You win")
    elif user_input > random_number:
        result_label.config(text="Too high")
    else:
        result_label.config(text="Too low")

random_number = random.randint(0, 10)

root = tk.Tk()

label = tk.Label(root, text="Enter a number between 0 and 10 to guess:")
label.pack()

userinput = tk.Entry(root)
userinput.pack()

check_button = tk.Button(root, text="Check Guess", command=check_guess)
check_button.pack()

result_label = tk.Label(root, text="")
result_label.pack()


root.mainloop()
