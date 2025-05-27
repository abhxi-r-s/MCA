keys=input("Enter the keys :").split()
dict={}
for key in keys:
    dict[key]=input("Enter the value for key",key,":")

print(dict)

keys.sort()
for key in keys:
    print(f"{key}:{dict[key]}")

keys.sort(reverse=True)
for key in keys:
    print(f"{key}:{dict[key]}")