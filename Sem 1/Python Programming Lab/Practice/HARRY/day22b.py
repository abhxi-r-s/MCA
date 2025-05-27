list=[[1,1,1],
      [1,1,1],
      [1,1,1],
      [1,1,1],
      [1,1,1]]

list[0][0]=0
list[1][1]=0
list[2][2]=0

print(list)

if [0,1,1] in list:
    print("yes")
else:
    print("No")
print(list[0:5:2])

