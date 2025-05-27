#20.	 Character frequency in a string

# a=input("Enter the string :")
# b=input("Enter the character to find count :")
# c=b.lower()
# d=a.lower()
# s=d.count(c)
# print(s)
# str = input("Enter a string: ")
# res={}
# for char in str:
#     if char in res.keys():
#         res[char]=res[char]+1
#     else:
#         res[char]=1
# print(res)
# x=input(" ")
string = input("Enter the string: ").lower()
unique = set(string)


for i in unique:
    count = 0
    for j in string:
        if i == j:
            count += 1
    print(f"count of {i} in {string} is {count}")