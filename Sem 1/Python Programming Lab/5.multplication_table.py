print("""
Multiplication Table
- - - - - - - - - - -
Enter the number :
""")
num=int(input())
limit=int(input("Enter the limit:"))

for i in range(1,limit+1):
          print(f"{i}*{num} =",i*num)
          
