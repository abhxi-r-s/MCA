file=open("username.csv")
list=file.readlines()
file.close()
column=list[0].split(",")
for col in column:
    print(col,"",end="")
n=int(input("Enter the column index to display :"))
for i in list:
    info=i.split(",")
    print(info[n])
