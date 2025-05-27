list=(1,2,3,"abhi")
dict={1:"Abhi",2:"thee"}
print(list[3])
print(dict[2])
dict[7]="gey"
for key in dict:
    print(dict[key])
dict2={}
# n=int(input("Enter the number of values :"))
# for i in range(1,n+1):
#     k=int(input('Enter the key :'))
#     e=input("Enter the name :")
#     dict2[i]=e
# for key in dict2:
#     print(dict2[key],end=" ")

list2=[1,2,3,4,5,6,7,8,"ws"]
list2.append(66)

# print(list2)
# list3=[]
# q=int(input("Enter the number of elements to insert to the list :"))
# for i in range(1,q+1):
#     k=int(input("Enter the value to insert :"))
#     list3.append(k)

# print(list3)
# list3=[]
# dictionary={1:"Abhi",2:"King",3:"ya"}
# for key in dictionary:
#     list3.append(key)
# print(list3)
list7=[]
dictionary={5:"Abhi",7:"King",3:"ya"}
for key in dictionary:
    list7.append(key)
list7.sort()
dictsort={}
for i in list7:
    dictsort[i]=dictionary[i]

print(dictsort)


