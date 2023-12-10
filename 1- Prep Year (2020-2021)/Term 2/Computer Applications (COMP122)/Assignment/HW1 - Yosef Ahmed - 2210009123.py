# Yosef Mohamed Abdelraheem Ahmed       2210009123      SM13
# COMP122 HW1

ValidLetters = "A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "F", "Nothing"


def get_grade():                                                        # Part A: get_grade
    global grade, point
    while True:
        totalmark = round(float((input("Input Total Mark: "))))
        if totalmark < 0 or totalmark > 100:  # finding letter grade based on inputted mark
            print("That isn't a valid number grade, Try again.")
            continue
        else:
            if 0 <= totalmark < 50:
                grade = "F"
            elif 50 <= totalmark < 54:
                grade = "D"
            elif 54 <= totalmark < 58:
                grade = "D+"
            elif 58 <= totalmark < 62:
                grade = "C-"
            elif 62 <= totalmark < 66:
                grade = "C"
            elif 66 <= totalmark < 70:
                grade = "C+"
            elif 70 <= totalmark < 74:
                grade = "B-"
            elif 74 <= totalmark < 78:
                grade = "B"
            elif 78 <= totalmark < 82:
                grade = "B+"
            elif 82 <= totalmark < 86:
                grade = "A-"
            elif 86 <= totalmark < 90:
                grade = "A"
            elif 90 <= totalmark <= 100:
                grade = "A+"
            break
    gradepoint(grade)  # Finding point equivalents based on letter grade
    print("Letter Grade is:", grade)
    print("Point Equivalence is:", point)


def gradepoint(grade):  # Finding point equivalents based on letter grade
    global point
    if grade == "A+" or grade == "A":
        point = 4.00
    elif grade == "A-":
        point = 3.67
    elif grade == "B+":
        point = 3.33
    elif grade == "B":
        point = 3.00
    elif grade == "B-":
        point = 2.67
    elif grade == "C+":
        point = 2.33
    elif grade == "C":
        point = 2.00
    elif grade == "C-":
        point = 1.67
    elif grade == "D+":
        point = 1.33
    elif grade == "D":
        point = 1.00
    elif grade == "F":
        point = 0.00


def calculate_sgpa(grade1, grade2, grade3):                             # Part B: calculate_sgpa
    total_marks = 0
    total_number_of_subjects = 0
    if grade1 != "Nothing":
        gradepoint(grade1)
        total_number_of_subjects += 1
        total_marks = total_marks + point
    if grade2 != "Nothing":
        gradepoint(grade2)
        total_number_of_subjects += 1
        total_marks = total_marks + point
    if grade3 != "Nothing":
        gradepoint(grade3)
        total_number_of_subjects += 1
        total_marks = total_marks + point
    if total_number_of_subjects == 0:
        print("0")
    SGPA = total_marks / total_number_of_subjects
    print(SGPA)
    return SGPA


def find_cumulative_marks():                                             # Part C: find_cumulative_marks
    results = []
    rcrd = 1
    while True:
        try:
            records = int(input("How many records to input? "))
            break
        except ValueError:
            print("You didn't a number, try again")
            continue
    for loop in range(0, records):
        x = []
        y = []
        v = 0
        asmt = 1
        print("Enter record of student", rcrd, end=":\n")
        while True:
            ID = str(input("Enter Student ID: "))
            if ID != "":
                break
            else:
                print("You typed nothing, try again")
                continue
        while True:
            Name = str(input("Enter Student Name: ")).title()
            if Name != "":
                break
            else:
                print("You typed nothing, try again")
                continue
        while True:
            print("Input Assignment", asmt, end=". ")
            print("Type \"None\" for an invalid score (Counts as a score of 0):")
            print("Press Enter when done")
            try:
                GradesList = input(">").lower()
                if GradesList == "none":
                    asmt += 1
                    continue
                if GradesList != "":
                    v = v + float(GradesList)
                    asmt += 1
                    continue
                else:
                    v = str(v)
                    break
            except ValueError:
                print("That's not a valid input")
                asmt = asmt
                continue
        rcrd += 1
        y.append(v)
        x.append(ID)
        x.append(Name)
        z = x + y
        tup = tuple((z[0], z[1], z[2]))
        results.append(tup)
    print("Cumulative Marks:\n", results)


# # Start of the code # #
print("---------Part A: Letter Grade & Point Equivalence---------")
get_grade()
print("\n-------------------Part B: Semester GPA-------------------")
print("Letter Grades: A+, A, A-, B+, B, B-, C+, C, C-, D+, D, F.")
print("Type \"Nothing\" for a blank grade")
while True:
    g1 = str(input("Input Letter Grade 1: ")).capitalize()
    if g1 not in ValidLetters:
        print("That isn't a valid letter grade, try again")
        continue
    else:
        break
while True:
    g2 = str(input("Input Letter Grade 2: ")).capitalize()
    if g2 not in ValidLetters:
        print("That isn't a valid letter grade, try again")
        continue
    else:
        break
while True:
    g3 = str(input("Input Letter Grade 3: ")).capitalize()
    if g3 not in ValidLetters:
        print("That isn't a valid letter grade, try again")
        continue
    else:
        break
calculate_sgpa(g1, g2, g3)
print("\n-----------------Part C: Cumulative Marks-----------------")
find_cumulative_marks()
k = input("Press Enter to close...")
