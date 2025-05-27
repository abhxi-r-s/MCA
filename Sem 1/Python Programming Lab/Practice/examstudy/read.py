file=open("username.csv","r")
list=file.readlines()
# print(list,type(list))
file.close()
f=open("result.csv","x")
f.write(list[0])
for i in range(1,len(list)-1):
    if(i%2==0):
        f.write(list[i])
f.close()
fi=open("result.csv")
list2=fi.read().split(" ")
print(list2)
fi.close()