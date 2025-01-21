keys=input("Enter the keys :").split()
dict1={}

for i in keys:
    values=input("Enter the value of :"+i+"_is :")
    dict1[i]=values

print(dict1)

keys2=input("Enter the keys :").split()
dict2={}

for i in keys2:
    values=input("Enter the value of :"+i+"_is :")
    dict2[i]=values

print(dict2)

dict3=dict1
dict3.update(dict2)

print(dict3)
