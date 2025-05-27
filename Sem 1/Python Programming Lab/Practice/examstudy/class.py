class book:
    def __init__(self,name,age,address,phone):
        self.name=name
        self.age=age
        self.address=address
        self.phone=phone
    def display(self):
        print(f"Name :{self.name}\nPhone :{self.phone}")
    def dis(self):
        print(f"Age:{self.age}\nAddress:{self.address}")


name=input("Enter the name :")
age=input("Enter the age :")
address=input("Enter the address :")
phone=input("Enter the phone number :")

c1=book(name,age,address,phone)
c1.display()
c1.dis()