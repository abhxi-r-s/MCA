class parent1 {

    int x,y;
    parent1(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        System.out.println("Its Parent class Function");
        System.out.println("X ="+x+"Y ="+y);
    }
    
}
class child2 extends parent1
{
    int z;
    child2(int m,int n,int o)
    {
        super(m,n);
        z=o;
        System.out.println(z);
        
    }
    void display()
    {
        System.out.println("Derived class display fn");
        super.display();
    }
    public static void main(String[] args)
    {
        child2 c1=new child2(1, 2, 3);
        c1.display();
        
    }
}
