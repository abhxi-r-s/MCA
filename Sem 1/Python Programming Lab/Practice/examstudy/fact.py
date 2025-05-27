a=int(input("Enter the number :"))
def factorial(num):

    if(num==1 or num==0):
        return 1
    else:
        return num*factorial(num-1)
        
print("factorial is ",factorial(a))
