print('''
                           WELCOME TO CET BANK,BRANCH TVM
      ''')
class Bank_Account:    
    def __init__(self,accno,name,type,balance=0):
        self.accno=accno
        self.name=name
        self.acctype=type
        self.balance=balance
    def display(self):
        print("Acc/No:",self.accno)
        print("Name:",self.name)
        print("Account Type",self.acctype)
        print("Balance:",self.balance)
    def deposit(self,amt):
        self.balance=self.balance+amt
        print("Amount Deposited Successfully")
    def withdraw(self,amt):
        if amt>self.balance:
            print("Insufficient Balance ")
        else :
            self.balance=self.balance-amt
            print("Amount Withdrawn Successfully")
    def getbalance(self):
        print("Available Balance is :",self.balance)
    
# Acc=Bank_Account(8129817313810,"Abhishek","Savings",2500000)

accno=int(input("Enter your account number :"))
name=input("Enter your name :")
type=input("Enter your Account type :")
balance=int(input("Enter your Initial Deposit :"))
acc=Bank_Account(accno,name,type,balance)
choice=0

while(choice!=5):
    print('''
        MENU
        
        1. Display Account Details
        2. Check Balance
        3. Deposit Amount
        4. Withdraw Amount
        5. Exit
        ''')
    choice=int(input("Enter your choice :"))
    if(choice==1):
        acc.display()
    elif(choice==2):
        print("Your Balance is :",acc.getbalance())
    elif(choice==3):
        amt=int(input("Enter the amount to be deposited :"))
        acc.deposit(amt)
    elif(choice==4):
        amt=int(input("Enter the amount to be withdrawn :"))
        acc.withdraw(amt)
    else:
        print("Thank you for using our services")