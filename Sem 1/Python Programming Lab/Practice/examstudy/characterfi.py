# a=input("Enter the string")
# b=set(a)

# for i in b:
#     count=0
#     for j in a:
#         if(i==j):
#             count+=1
#     print(f"Count of {i} in {a} is {count}")

a=input("Enter the string :")
b=a.lower()
print(b)
c=input("Enter the character to find the frequency :")
d=b.count(c)
print(d)