class Rectangle:
    def __init__(self,length,breadth):
        self.length = length
        self.breadth = breadth
    def area(self):
        return self.length *self.breadth
    def perimeter(self):
        return 2*(self.length+self.breadth)
    def __gt__(self,rect2):
        print("Haiii")
        return self.area() > rect2.area()
length=int(input("Enter the First rectangle length :"))
breadth=int(input("Enter the First rectangle breadth :"))
rec1=Rectangle(length,breadth)
length=int(input("Enter the Second rectangle length :"))
breadth=int(input("Enter the Second rectangle breadth :"))
rec2=Rectangle(length,breadth)

print("Area of First Rectangle is :",rec1.area())
print("Perimeter of First Rectangle is :",rec1.perimeter())

print("Area of Second Rectangle is :",rec2.area())
print("Perimeter of Second Rectangle is :",rec2.perimeter())

if rec1>rec2:
    print("First Rectangle is larger")
else:
    print("Second Rectangle is larger ")



    