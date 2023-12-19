class Student:
    name = ""
    age = 0
    course = []
    def __init__(self, n, a, c):
        self.name = n
        self.age = a
        self.course = [c]
    def addCourse(self, newCourse):
        self.course.append(newCourse)

s1 = Student('Surya', 19, "Python")
s2 = Student('Saadhitya', 17, "Python")

s1.addCourse("C")
s2.addCourse("C")
print(s1.name, s1.course)
print(s2.name, s2.course)
