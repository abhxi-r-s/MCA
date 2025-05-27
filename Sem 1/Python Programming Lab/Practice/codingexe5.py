print(''' LOVE CALCULATOR
      ''')

name1=input("Enter the First Person name :")
name2=input("Enter the Second Person name :")

name=name1+name2
name=name.lower()

t=name.count('t')
r=name.count('r')
u=name.count('u')
e=name.count('e')
l=name.count('l')
o=name.count('o')
v=name.count('v')

side1=t+r+u+e
side2=l+o+v+e

ans=str(side1)+str(side2)
ans=int(ans)

if ans<10:
    print("Low Love")
elif ans>10 and ans<90:
    print("Medium Love")
else:
    print("Always Together")
print("Your love value is :",ans)