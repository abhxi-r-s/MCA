#tuples wont change value once defined
tuple=(1,)
tup = (1, 2, 76, 342, 32, "green", True)
# tup[0] = 90
print(type(tup), tup)
print(len(tup))
print(tup[0])
print(tup[-1])
print(tup[2])
# print(tup[34])

if  "green" in tup:
  print("Yes green is present in this tuple")
if 342 in tup:
  print("yesss")
tup2 = tup[1:4]
print(tup2)