print("Task 1:")
# # Task 1: Evaluate Q=Xc³+Yc²+Zc
# X = float(input("Enter X: "))
# Y = float(input("Enter Y: "))
# Z = float(input("Enter Z: "))
# C = 10
# Q = X*C**3 + Y*C**2 + Z*C
# print("Q is: ", Q)


# # Task 2: Convert centigrade to fahrenhite, kilometer to mile, hours to seconds
# #         Get average score for 4 variables
# #         Calculate distance between two points (√(〖(x_B-x_A)〗^2+〖(y_B-y_A)〗^2
# print("Task 2:")


# celcius = float(input("Enter temperature in centigrade: "))
# fahrenhite = (celcius * 9/5) + 32
# print("Temperature in fahrenhite is: ", fahrenhite)

# kilometer = float(input("Enter distance in kilometer: "))
# mile = kilometer * 0.6214
# print("Distance in mile is: ", mile)

# hours = float(input("Enter time in hours: "))
# seconds = hours * 3600
# print("Time in seconds is: ", seconds)

# total = 0
# for i in range(4):
#     score = float(input("Enter score: "))
#     total += score
# average = total / 4
# print("Average score is: ", average)

# Ax = float(input("Enter X for point A: "))
# Ay = float(input("Enter Y for point A: "))
# Bx = float(input("Enter X for point B: "))
# By = float(input("Enter Y for point B: "))
# distance = ((Bx - Ax)**2 + (By - Ay)**2)**(1/2)
# print("Distance between point A and point B is: ", distance)

# # Task 3: Menu driven program to calulcate:
# #         1. Area of a circle
# #         2. Area of a square
# #         3. Area of a sphere

# print("Task 3:")
# while(True):
#     length = float(input("Enter length of shape: "))
#     print(" 1. Area of a circle\n 2. Area of a square\n 3. Area of a sphere")
#     choice = int(input("Enter your choice: "))
#     if choice == 1:
#         area = 3.14 * length**2
#         break
#     elif choice == 2:
#         area = length**2
#         break
#     elif choice == 3:
#         area = 4 * 3.14 * length**2
#         break
#     else:
#         print("Invalid choice!\nTry again!")
#         continue
# print("Area is: ", area)

# # Task 4: Write "Hello World" to an output file "output.txt" Using try, except, finally.
# print("Task 4:")

# try:
#     file = open("output.txt", "w")
#     file.write("Hello World")
#     file.close()
#     print("Output file written to!")
# except:
#     print("Error occured while opening the file!")
# finally:
#     print("Program ended!")