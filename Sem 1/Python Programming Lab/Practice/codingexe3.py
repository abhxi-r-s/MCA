#BMI

height=float(input("Enter the Height(in metre) :"))
weight=float(input("Enter the Weight(in kg) :"))
bmi=1

bmi=weight/(height**2)

if(bmi<18.5):
    print("Underweight")
elif(bmi>=18.5 and bmi<24.9):
    print("Normal")
elif(bmi>24.9):
    print("Overweight")