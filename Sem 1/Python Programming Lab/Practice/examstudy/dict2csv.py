keys=input("Enter the keys :").split(" ")
dict={}
file=open("dict.csv","x")
for key in keys:
    dict[key]=input(f"Enter the value for key {key}:")
    file.write(f"{key}:{dict[key]}\n")
file.close()
# print(dict)
f=open("dict.csv","r")
list=f.read()
print(list)
f.close()


