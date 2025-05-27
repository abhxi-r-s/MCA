#13.Create a single string from two strings, swapping the character at position 1

a=input("Enter first string :")
b=input("Enter second string :")

print(b[0]+a[1:len(a)]+a[0]+b[1:len(b)])