datadict = [
    {"Id": 101, "Name": "Joseph", "Age": 18, "Mark": 40},
    {"Id": 102, "Name": "Aju", "Age": 18, "Mark": 47},
    {"Id": 103, "Name": "Navya", "Age": 20, "Mark": 45},
    {"Id": 104, "Name": "Praveen", "Age": 21, "Mark": 47},
]
file=open("dictresult.csv","x")
titles=[]
titles=list(datadict[0].keys())
# print(titles)
titlestr=""

for i in range(0,len(titles)-1):
    titlestr=titlestr+titles[i]+","
titlestr=titlestr+titles[-1]
file.write(titlestr)

values=[]
valuestr=""

for data in datadict:
    values=list(data.values())
    for i in range(0,len(values)-1):
        valuestr=valuestr+str(values[i])+","
    valuestr=valuestr+str(values[-1])
# print(valuestr)
file.write(valuestr)
file.close()

file=open("dictresult.csv","r")
rows=file.readlines()
for row in rows:
    data = row.split(",")
    for d in data:
        print(d, end=" ")
file.close()
