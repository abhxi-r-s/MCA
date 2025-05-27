def add(a,b):
    sum=0
    sum=a+b
    return sum
def multiply(a,b=1):
    mul=1
    mul=a*b
    return mul

a=int(input("Enter the number a :"))
b=int(input("Enter the number b :"))
print("The answer is :",add(a,b))
print("The answer is :",multiply(a))
print("The answer is :",multiply(a,b))


