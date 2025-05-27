file=open("data.csv","r")
lines=file.readlines()
file.close()
column=lines[0].split(",")
for col in column:
    print(col)
c=int(input("Enter the column to display :"))
for line in lines:
    cols=line.split(",")
    print(cols[c])