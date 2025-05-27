class Rectangle:
    def __init__(self,length,breadth):
        self.length=length
        self.breadth=breadth

    def area(self):
        return self.length*self.breadth
    def peri(self):
        return 2*(self.length*self.breadth)
    
    def __gt__(self,other):
        return self.area()>other.area()
    
r1=Rectangle(9,3)
r2=Rectangle(6,4)
R=r1>r2
print(R)
