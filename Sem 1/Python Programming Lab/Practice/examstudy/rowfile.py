file=open("username.csv")
list=file.readlines()

file.close()
print(list[0])
n=int(input("Enter the row number to display :"))
file=open("username.csv")
list2=file.readlines()[n]
print(list2)
file.close()
