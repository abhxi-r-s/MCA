public class base {

    base()
    {
        System.out.println("Base class default constructor");
    }
    void display()
    {
        System.out.println("Base display function");
    }
    
}
class top extends base{
    int x;
    top()
    {
        System.out.println("Child Default Constructor");
    }
    void display(int m)
    {
        x=m;
        System.out.print(x);
    }
    public static void main(String[] args)
    {
        top A = new top();
        A.display();
        A.display(20);
    }
}