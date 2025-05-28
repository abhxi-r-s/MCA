public class test {
 
    int a;
    int b;

    public test(int x,int y)
    {
        a=x;
        b=y;
    }
    public Boolean equals(test ob)
    {
        if(ob.a==a && ob.b==b)
        {
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String[] args)
    {
        test o1=new test(10, 20);
        test o2=new test(10, 20);
        test o3=new test(1, 5);
        boolean b=o1.equals(o2);

        if(b)
        {
            System.out.println("A=B");
        }
        else
        {
            System.out.println("A!=");
        }
        
    }
}
