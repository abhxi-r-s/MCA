#17.	 From a list, create a list removing all even numbers
list=[1,2,3,4,5,6,7,8,9,10]
list2=[]
for i in range(0,len(list)):
    if list[i]%2==0:
        list2.append(list[i])

print(list2)