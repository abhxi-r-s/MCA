print("Arithematic operations")
print("- - - - - - - - - - - ")

print("Enter the 2 numbers :")
a=int(input("a="))
b=int(input("b="))
i=True
while(i==True):
    print("\nMenu")
    print("\n----")
    print("\n1.Addition")
    print("\n2.Substraction")
    print("\n3.Multiplication")
    print("\n4.Division")
    print("\n5.Modulus")
    print("\n6.Exit")
    ch=int(input("Enter your choice"))
    if(ch==1):
        print("Answer is:",a+b)
    elif(ch==2):
        print("Answer is:",a-b)
    elif(ch==3):
        print("Answer is :",a*b)
    elif(ch==4):
        print("Answer is:",a/b)
    elif(ch==5):
        print("Answer is:",a%b)


    if(ch==6):
        print("exiting the loop")
        break
    
       
       
      

