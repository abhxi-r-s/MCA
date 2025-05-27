string=input("Enter the strring").lower()

if string[-3:]=="ing":
    string+="ly"
else:
    string+="ing"

print(string)