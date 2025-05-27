class bank:
    def __init__(self,accno,type,phone,balance=0):
        self.accno=accno
        self.type=type
        self.phone=phone
        self.balance=balance
    def display(self):
        print(self.accno)
        print(self.type)
        print(self.phone)
        print(self.balance)
    def deposit(self,amt):
        self.balance+=amt
acc=bank(232,"saving",435,234567)
acc.display()
