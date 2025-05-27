a=int(input("Enter the number :"))
b=int(input("Enter the number :"))

for i in range(min(a,b),0,-1):
    if(a%i==0 and b%i==0):
        print("Gcd is",i)
        break