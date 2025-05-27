#without class
matrix=[]

n=int(input("Enter the size :"))
for i in range(0,n):
    matrix.append([])
    for j in range(0,n):
        matrix[i].append(int(input(f"Enter the {i}{j} value :")))

for i in range(0,n):
    for j in range(0,n):
        print(matrix[i][j],end="")
    print("")
