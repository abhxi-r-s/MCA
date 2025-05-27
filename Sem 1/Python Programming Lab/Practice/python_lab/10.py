import math
a=int(input("Enter coefficient of x^2 :"))
b=int(input("Enter coefficient of x :"))
c=int(input("Enter constant :"))

temp=0
temp=(b**2)-(4*a*c)

if(temp<0):
    print("No Solution")
elif(temp==0):
    result=-b/(2*a)
    print("Single Solution :",result)
else:
    result1=(-b+math.sqrt(temp))/(2*a)
    result2=(-b-math.sqrt(temp))/(2*a)
    print("Two solutions :",result1,"\n",result2)
