#19.	 Fibonacci series of N terms
n=int(input("Enter the limit :"))
def fibonacci(term):
    if term<=1:
        return term
    else:
        return fibonacci(term-1)+fibonacci(term-2)
    


if n<=0:
    print("Enter a positive number ")
else:
    Fib_series=[]
    for i in range(0,n):
        Fib_series.append(fibonacci(i))
    print(f"Fibonacci series of {n} terms: {Fib_series}")