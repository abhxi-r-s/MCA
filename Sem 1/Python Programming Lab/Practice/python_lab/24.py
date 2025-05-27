#24.	 Bank account (Constructor and Methods)

print('''
WELCOME TO CET BANK
      ''')

class bank_account():
    def __init__(self,accno,name,type,balance=0):
        self.accno=accno
        self.name=name
        self.type=type
        self.balance=balance
    def display(self):
        print("Account No",self.accno)
        print("Name :",self.name)
        print("Type of Account :",self.type)
        print("Available Balance :",self.balance)
    def deposit(self,amt):
        self.balance+=amt
        print("Deposited Successfully ")
    def withdrawel(self,amt):
        self.balance-=amt
        print(amt,"is withdrawed from the account")
    def balance_check(self):
        print("Available balance :",self.balance)


accno=int(input("Enter the FIRST USER Account Number :"))
name=input("Enter the FIRST USER name :")
type=input("Enter the FIRST USER Account type :")
balance=int(input("Enter the FIRST USER available balance :"))
acc=bank_account(accno,name,type,balance)

accno=int(input("Enter the SECOND USER Account Number :"))
name=input("Enter the SECOND USER name :")
type=input("Enter the SECOND USER Account type :")
balance=int(input("Enter the SECOND USER available balance :"))
acc2=bank_account(accno,name,type,balance)

choice=0
while(True):
    print('''
        MENU
        1.DISPLAY
        2.WITHDRAW
        3.DEPOSIT
        4.BALANCE CHECK
        5.EXIT
        \n Enter Your choice :
    ''')
    
    choice=int(input())
    a=int(input("Enter the account number to acquire the details :"))
    if(a==acc.accno):
        if choice==1:
            acc.display()
        elif choice==2:
            amt=int(input("Enter the amount to withdraw :"))
            acc.withdrawel(amt)
        elif choice==3:
            amt=int(input("Enter the amount to deposit :"))
            acc.deposit(amt)
        elif choice==4:
            acc.balance_check()
        elif choice==5:
            break
        else:
            print("Enter a valid option")
    elif(a==acc2.accno):
        if choice==1:
            acc2.display()
        elif choice==2:
            amt=int(input("Enter the amount to withdraw :"))
            acc2.withdrawel(amt)
        elif choice==3:
            amt=int(input("Enter the amount to deposit :"))
            acc2.deposit(amt)
        elif choice==4:
            acc2.balance_check()
        elif choice==5:
            break
        else:
            print("Enter a valid option")
    
