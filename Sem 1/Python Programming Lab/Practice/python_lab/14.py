#14.	 Sort dictionary (ascending and descending)

keys=input("Enter the keys :").split()

dict={}

for key in keys:
    dict[key]=input(f"Enter the value for key {key}")

print(dict)
keys.sort()
print("Ascending order")
for key in keys:
    print(f"{key}:{dict[key]}")

keys.sort(reverse=True)
print("Desending order")
for key in keys:
    print(f"{key}:{dict[key]}")

