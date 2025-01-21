list=[]
num=int(input("Enter the size of the list :"))

print("Enter the list elements :")
for i in range(0,num):
    list.append(int(input()))
    
print("The list is :",list)
print("Even numbers in list :")
for i in list:
    if(i%2==0):
        print(i)
    
    

