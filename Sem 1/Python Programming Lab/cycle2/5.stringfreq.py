"""
name=input("enter the string")
char=input("enter the character")
count=0
for i in name:
    if(i==char):
        count+=1
print(count)
"""

name=input("Enter the string :")

unique=set(name)

for i in unique:
    count=0
    for j in name:
        if(i==j):
            count+=1
    print(f"Number of {i} is {count}")
        
