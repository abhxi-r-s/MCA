key=input("Enter the keys (by using comma) :").split(",")
dict={}
for i in key:
    e=input(f"Enter the value for key {i}:")
    dict[i]=e

print(dict)