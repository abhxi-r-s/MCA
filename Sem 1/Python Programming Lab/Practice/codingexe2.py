#Age and calculate days,month and year left

age=int(input("Enter the age :"))

cal=90-age
days=365*cal
week=52*cal
months=12*cal

print(f"So you have {days} days,{week} weeks and {months} months left !")