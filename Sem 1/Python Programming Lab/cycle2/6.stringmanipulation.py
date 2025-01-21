name=input("Enter the string :")

if name[-3:]=="ing":
    name+="ly"
else:
    name+="ing"

print(name)
