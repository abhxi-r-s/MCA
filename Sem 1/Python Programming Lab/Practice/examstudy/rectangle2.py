class rectangle:
    def __init__(self,l,b):
        self.l=l
        self.b=b
    def area(self):
        return self.l*self.b
    def __gt__(self,rect2):
        return self.area()>rect2.area()
    
r1=rectangle(1,2)
r2=rectangle(3,4)
if(r1>r2):
    print("First rectangle greater")
else:
    print("second")