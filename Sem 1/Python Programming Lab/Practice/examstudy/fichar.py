string=input("Enter the string")
string=string.lower()
unique=set(string)

for i in unique:
    count=0
    for j in string:
        if i==j:
            count+=1
    print(f"{i} count is {count}")
