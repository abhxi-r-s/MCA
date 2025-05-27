print('''PIZZA MENU
      1.Small Pizza
      2.Medium Pizza
      3.Large Pizza
      ''')
TP=0
ch=int(input("Enter your choice :"))
if(ch==1):
    print("Price is RS 100")
    TP=100
elif(ch==2):
    print("Price is RS 200")
    TP=200
else:
    print("Price is RS 300")
    TP=300
pep=input("Do you want Pepperoni Y/N")
if(pep=="Y" or pep=="y"):
    print("Pepperoni Rs 30")
    TP+=30
else:
    print("Ok,Pepperoni Not Selected")
chee=input("Need extra cheese Y/N")
if(chee=="Y" or chee=="y"):
    print("Extra cheese Rs 20")
    TP+=20
else:
    print("Ok,Extra cheese Not Selected")
print("Total Bill =",TP)
    