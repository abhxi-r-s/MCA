num=int(input("Enter the count of pyramid :"))

for i in range(1,num+1):
    for j in range(1,i+1):
        print(i*j,end=' ')
    print("\n")
