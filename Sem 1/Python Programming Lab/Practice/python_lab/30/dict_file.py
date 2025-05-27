#30. Write a Python dictionary to a CSV file, read the CSV and display its content

datadict = [
    {"Id": 101, "Name": "Joseph", "Age": 18, "Mark": 40},
    {"Id": 102, "Name": "Aju", "Age": 18, "Mark": 47},
    {"Id": 103, "Name": "Navya", "Age": 20, "Mark": 45},
    {"Id": 104, "Name": "Praveen", "Age": 21, "Mark": 47},
]
# writing data
titles = list(datadict[0].keys())
file = open("result.csv", "w")
row0 = ""
res = []
for i in range(0, len(titles) - 1):
    row0 = row0 + titles[i] + ","
row0 = row0 + titles[-1]
file.write(row0 + "\n")
for data in datadict:
    valuelist = list(data.values())
    valuestring = ""
    for i in range(0, len(valuelist) - 1):
        valuestring = valuestring + str(valuelist[i]) + ","
    valuestring += str(valuelist[-1])
    file.write(valuestring + "\n")
file.close()

# reading data
print("File data")
file = open("result.csv", "r")
rows = file.readlines()
for row in rows:
    data = row.split(",")
    for d in data:
        print(d, end=" ")
file.close()