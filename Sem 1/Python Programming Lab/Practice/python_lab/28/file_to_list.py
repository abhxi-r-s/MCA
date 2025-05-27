#28.Read each row from a given csv file and print it as a list of strings
file=open("data.csv")
rows=file.readlines()
file.close()
print("Lines in file are")

for line in rows:
    cols=line.split(",")
    for data in cols:
        print(data,end=" , ")


    
    