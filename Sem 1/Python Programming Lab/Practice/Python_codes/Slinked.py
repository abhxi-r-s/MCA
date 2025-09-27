class node:
    def __init__(self,value):
        self.value=value
        self.next=None
class Linkedlist:
    def __init__(self):
        self.head=None
    def insert_at_end(self,value):
        new_node=node(value)
        if self.head==None:
            self.head= new_node
        else:
            current=self.head
            while current.next:
                current=current.next
            current.next=new_node
    def print_list(self):
        current=self.head
        while current:
            print(current.data + "->")
            current=current.next

def main():
    my_list=Linkedlist()
    n=int(input("Enter the number of elements going to insert :"))
    for _ in range(0,n):
        my_list.insert_at_end(int(input("Enter the value :")))
        my_list.print_list()
if __name__ == "__main__":
    main()


