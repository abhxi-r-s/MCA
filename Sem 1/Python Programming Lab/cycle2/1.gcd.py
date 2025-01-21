a = int(input("Number 1: "))
b = int(input("Number 2: "))

for i in range(min(a,b),0,-1):
    if(a%i==0 and b%i==0):
        print("GCD is",i)
        break
   
    
