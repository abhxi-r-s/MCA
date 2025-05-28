public class A {
    static int C;
    static void count()
    {
        C++;
    }
    static void display()
    {
        System.out.println("Hai "+C);
    }
}
class Main2
{
    public static void main(String[] args)
    {
        A.C=0;
        A.count();
        A.count();
        A.display();
    }
}
