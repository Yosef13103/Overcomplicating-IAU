class Student:
    def __init__(self, name, age, grades):
        self.name = name
        self.age = age
        self.grades = grades

# Initializing an instance of the Student class
student = Student(name="John", age=20, grades=[90, 85, 95])
# Printing the student object
print(student)
