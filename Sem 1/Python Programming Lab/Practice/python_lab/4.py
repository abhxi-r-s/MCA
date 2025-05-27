# Arithmetic Operations
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
choice=0
while choice!=5:
    print('''
                MENU
      1. ADDITION
      2. SUBTRACTION
      3. MULTIPLICATION
      4. DIVISION
      5. EXIT
    ''')
    choice = int(input("Enter your choice: "))

    if choice == 1:
        print("Sum of numbers is:", a + b)
    elif choice == 2:
        print("Difference of numbers is:", a - b)
    elif choice == 3:
        print("Product of numbers is:", a * b)
    elif choice == 4:
        if b != 0:
            print("Division of numbers is:", a / b)
        else:
            print("Division by zero is not allowed.")
    elif choice == 5:
        print("Exiting...")
        
    else:
        print("Invalid choice. Please try again.")
