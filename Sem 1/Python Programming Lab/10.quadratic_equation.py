a=int(input("enter the first coefficient:"))
b=int(input("enter the second coefficient:"))
c=int(input("enter the third coefficient:"))

temp=(b**2)-(4*a*c)
if(temp<0):
    print("no real solution")
elif(temp==0):
    result=-b/(2*a)
    print("solution is",result)
else:
    res1=(-b+(temp**0.5))/2*a
    res2=(-b-(temp**0.5))/2*a
    print("solutions are",res1," ",res2)

