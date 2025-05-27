file=open("data.csv","r")
lines=file.readlines()

column=lines[0].split(",")
for col in column:
    print(col)
n=int(input("enter the column to display"))
for line in lines:
    info=line.split(",")
    print(info[n])
file.close()