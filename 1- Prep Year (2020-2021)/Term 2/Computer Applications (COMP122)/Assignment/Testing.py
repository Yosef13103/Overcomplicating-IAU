ValidLetters = "A+", "A", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "F"
def InvalidLetter(g1):
    n = 1
    while True:
        g1 = str(input("Input Letter Grade", n, end=": ")).capitalize()
        if g1 not in ValidLetters:
            print("That isn't a valid letter grade, try again")
            continue
        else:
            n += 1
            break

print("Letter Grades: A+, A, B+, B, B-, C+, C, C-, D+, D, F")
gg1 = InvalidLetter()
calculate_sgpa(gg1, gg2, gg3)
print("-----------------Part C: Cumulative Marks-----------------")



