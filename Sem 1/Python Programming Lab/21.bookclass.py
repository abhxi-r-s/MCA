class Publisher:
    def __init__(self, name):
        self.__name=name
        
    def display(self):
        print("Name of Publisher: ", self.__name)
    
class Book(Publisher):
    def __init__(self, pubname, title, author):
        super().__init__(pubname)
        self.__pubname = pubname
        self.__title= title
        self.__author = author
        
    def display(self):
        super().display()
        print("Book Title:",self.__title)
        print("Book Author:",self.__author)
class Python(Book):
    def __init__(self,pubname, title, author,price, pages):
        super().__init__(pubname, title, author)
        self.__price=price
        self.__page=pages
    def display(self):
        super().display()
        print("Price of the book: ", self.__price)
        print("Number of pages: ", self.__page)
        
# res = Python("DC Books", "Invisible Man", "Ralph Ellison", 250, 350)
pub=input("Enter the publisher name :")
book1=input("Enter the book name :")
aut=input("Enter the author name :")
pr=input("Enter the price :")
pg=input("Enter the number of page :")
res = Python(pub,book1,aut,pr,pg)
res.display()   
        