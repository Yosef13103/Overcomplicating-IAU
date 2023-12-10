# Question 1
while(True):
    string = str(input("Enter a string: "))
    print("1. Check String Length:")
    print("2. Calculate the number of digits and letters: ")
    print("3. Exit")

    choice = input("Enter your choice: ")
    if choice == '1':
        if len(string) > 8 and len(string) < 16:
            print("String Length is OK")
        else:
            print("Invalid String Length")
    elif choice == '2':
        digits = 0
        letters = 0
        for char in string:
            if char.isdigit():
                digits += 1
            elif char.isalpha():
                letters += 1
        print("Number of digits: ", digits)
        print("Number of letters: ", letters)
    elif choice == '3':
        print("Exiting.")
        break
    else:
        print("Invalid Choice")

# Question 2
def check_grades(list):
    maxstudent = ""
    maxgrade = 0
    for i in range(len(list)):
        if list[i][1] > maxgrade:
            maxstudent = list[i][0]
            maxgrade = list[i][1]
    return maxstudent, maxgrade

list = (("Yosef", 70),
        ("Ahmed", 29),
        ("Hamad", 100),
        ("Majed", 50))

student, grade = check_grades(list)
print("Student with the highest grade is ", student, " with grade of ", grade)