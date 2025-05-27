n=int(input("Enter the number :"))
def fibonacci(num):
    if num<1:
        return 1
    else:
        return fibonacci(num-1)+fibonacci(num-2)
feb=[]
for i in range(0,n):
    feb.append(fibonacci(i))
print(feb)