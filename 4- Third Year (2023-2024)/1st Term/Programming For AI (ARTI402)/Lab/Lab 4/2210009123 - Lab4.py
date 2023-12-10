# Task 1:
print("\n\nTask 1:")

numbers = (1, 2, 3, 4, 5, 6, 7, 8, 9)
even = 0
odd = 0
for x in numbers:
    if not x % 2:
        even += 1
    else:
        odd += 1
print("Number of even numbers:", even)
print("Number of odd numbers:", odd)

# Task 2:
print("\n\nTask 2:")

datalist = [1452, 11.23, 1+2j, True, 'w3resource', (0, -1), [5, 12], {"class":'V', "section":'A'}]
for x in datalist:
    print(x, "is of type", type(x))

# Task 3:
print("\n\nTask 3:")

for x in range(1, 51):
    if x % 3 == 0 and x % 5 == 0: # This is first in the if statements to ensure that if the number isn't a multiple of 3 and 5 it actually prints "FizzBuzz" instead of just "Fizz" or "Buzz"
        print("FizzBuzz")
    elif x % 5 == 0:
        print("Buzz")
    elif x % 3 == 0:
        print("Fizz")
    else:
        print(x)

# Task 4:
print("\n\nTask 4:")

string = input("Enter a string: ")
letters = 0
digits = 0
for x in string:
    if x.isdigit():
        digits += 1
    elif x.isalpha():
        letters += 1
print("Letters:", letters)
print("Digits:", digits)

# Task 5:
print("\n\nTask 5:")

while True:
    valid = True
    password = input("Enter a password: ")
    if not any(char.isupper() for char in password): # Must have an uppercase letter [A-Z]
        valid = False
        print("-No uppercase letter found")
    if not any(char.islower() for char in password): # Must have a lowercase letter [a-z]
        valid = False
        print("-No lowercase letter found")
    if not any(char.isdigit() for char in password): # Must have a digit [0-9]
        valid = False
        print("-No digits found")
    if not any(char in "$#@" for char in password): # Must have at least one of [$#@]
        valid = False
        print("-No characters of \"$#@\" found")
    if len(password) < 6 or len(password) > 16: # Must be betweeen 6 to 16
        valid = False
        print("-Password must be between 6 to 16 characters")

    if valid:
        print("Your password is valid")
        break
    else:
        print("Your password is invalid")
        continue # Loop till the password entered is valid

# Task 6:
print("\n\nTask 6:")

num = [1, 4, 62, 78, 32, 23, 90, 24, 2, 34]
for x in num:
    if x > 30: # If the number is greater than 30, it will be printed
        print(x)

# Task 7:
print("\n\nTask 7:")

list1 = [12, 15, 32, 42, 55, 75, 122, 132, 150, 180, 200]
for x in list1:
    if x > 150: # If the number is greater than 150, it will break out of the loop
        break
    if x % 5 == 0:
        print(x)

# Task 8:
print("\n\nTask 8:")

list1 = [10, 20, 30, 40, 50]
for x in range(len(list1)+1):
        print(list1[x::-1]) # ::-1 will reverse the list
print("Done")

# Task 9:
print("\n\nTask 9:")

number_of_terms = int(input("Enter a number: "))
sum = 0
for n in range(1, number_of_terms + 1):
    sum += int(str(2) * n) # str(2) * x will repeat the number 2 n amount of times, then int() will convert it to an integer so it can be added to the sum
print(sum)

