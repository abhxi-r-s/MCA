def average(*numbers):#conver the given numbers to the function into tuples 
    sum=0
    for i in numbers:
        sum+=i
    print("Average is :",int(sum/len(numbers)))

average(2,3,4)