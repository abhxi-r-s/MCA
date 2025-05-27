
#list manipulation

list=[["🤞","🤞","🤞"],["🤞","🤞","🤞"],["🤞","🤞","🤞"]]

list1=list[0]
list2=list[1]
list3=list[2]

print("\t",list1,"\n \t",list2,"\n \t",list3)
print("Enter the position :")
a=int(input())
b=int(input())
if a<1 or a>len(list1)-1 or b<1 or b>len(list1)-1:
    print("Invalid Position")
else:
    list[a-1][b-1]="X"
    print("\t",list1,"\n \t",list2,"\n \t",list3)

