import math

def get_grade():
    Number = float(input("Type grade:"))
    Grade = math.ceil(Number)

    if Grade >= 90:
        Lettergrade = 'A+ or 4.00'
    elif Grade >= 86:
        Lettergrade = 'A or 4.00'
    elif Grade >= 82:
        Lettergrade = 'A- or 3.67'
    elif Grade >= 78:
        Lettergrade = 'B+ or 3.33'
    elif Grade >= 74:
        Lettergrade = 'B or 3.00'
    elif Grade >= 70:
        Lettergrade = 'B- or 2.67'
    elif Grade >= 66:
        Lettergrade = 'C+ or 2.33'
    elif Grade >= 62:
        Lettergrade = 'C or 2.00'
    elif Grade >= 58:
        Lettergrade = 'C- or 1.67'
    elif Grade >= 54:
        Lettergrade = 'D+ or 1.33'
    elif Grade >= 54:
        Lettergrade = 'D or 1.00'
    elif Grade >= 0:
        Lettergrade = 'F or 0.00'
    

    print('Grade: ', Lettergrade)

get_grade()

def calculate_sgpa():
    x = input("Grade 1:")
    y = input("Grade 2:")
    z = input("Grade 3:")
    
    if x == 'A':
        x = 4
    elif x == 'B':
        x = 3
    elif x == 'C':
        x = 2
    elif x == 'D':
        x = 1
    elif x == 'nothing' or '':
        x = 0

    if y == 'A':
        y = 4
    elif y == 'B':
        y = 3
    elif y == 'C':
        y = 2
    elif y == 'D':
        y = 1
    elif y == 'nothing' or '':
        y = 0

    if z == 'A':
        z = 4
    elif z == 'B':
        z = 3
    elif z == 'C':
        z = 2
    elif z == 'D':
        z = 1
    elif z == 'nothing' or '':
        z = 0
    
    sgpa = (x+y+z)/3

    print('SGPAG: ', sgpa)
    
calculate_sgpa()