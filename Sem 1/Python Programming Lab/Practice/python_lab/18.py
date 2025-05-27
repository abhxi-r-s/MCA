#18.	Factorial using function
a=int(input("Enter the number :"))
fact=1
def factorial(num):
    if(num==1 or num==0):
        return 1
    else:
        fact=(num*factorial(num-1))
    return fact

print("Factorial is: ",factorial(a))
    