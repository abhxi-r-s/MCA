keys=input("enter the keys :").split()
dict1={}
for key in keys:
    value=input(f"enter the value for {key}")
    dict1[key]=value
print(dict1)

keys.sort()


dict_sort_asc={key:dict1[key] for key in keys}
print("ascending order")
print(dict_sort_asc)

keys.sort(reverse=True)

dict_sort_dec={key:dict1[key] for key in keys}
print("descending order")
print(dict_sort_dec)


