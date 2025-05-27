#27.Copy odd lines of one file to another

file=open("demo.csv","r")
rows=file.readlines()
file.close()
file=open("result.csv","w")
file.write(rows[0])
for i in range(1,len(rows)):
    if(i%2==1):
        file.write(rows[i])
file.close()