#21.	Add ‘ing’ at the end of a given string. If it already ends with ‘ing’, add ‘ly’

str=input("Enter the string :")

if str[-3:]=="ing":
    str=str+"ly"
else:
    str=str+"ing"

print(str)