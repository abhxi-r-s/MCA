x=int(input("enter the first number"))
y=int(input("enter the second number"))
z=int(input("enter the third number"))

if(x>y):
    if(x>z):
        large=x 
    else:
        large=z
else:
    if y>z:
        large=y
    else:
        large=z

        
    print(large,"is greatest")
    
    
    
