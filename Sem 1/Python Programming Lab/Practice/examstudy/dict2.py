data={"Name":"Abhi","Roll No":2}

x=data.keys()
file=open("result2.csv","x")
for i in x:
    file.write(f"{i}:{data[i]}")

file.close()