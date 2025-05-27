countries = ("Spain", "Italy", "India", "England", "Germany")
temp = list(countries)
temp.append("Russia")       #add item 
temp.pop(3)  
print(temp)               #remove item
temp[2] = "Finland"         #change item
countries = tuple(temp)
print(countries)