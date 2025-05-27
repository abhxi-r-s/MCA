class Publisher:
    def __init__(self,name):
        self.__name=name
    def display(self):
        print("Publisher is :",self.__name)
class Book(Publisher):
    def __init__(self,pubname,bookname,pages):
        super().__init__(pubname)
        self.__bookname=bookname
        self.__pages=pages
    def display(self):
        super().display()
        print("Book Name is ",self.__bookname)
        print("Pages are :",self.__pages)
class author(Book):
    def __init__(self,pubname,bookname,pages,author,age):
        super().__init__(pubname,bookname,pages)
        self.__author=author
        self.__age=age
    def display(self):
        super().display()
        print(f"Author,s name is {self.__author} and his age is {self.__age}")

P1=author("DC BOOKS","Pirates",199,"Adolph",89)
P1.display()
