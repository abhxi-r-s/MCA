import java.util.*;
class Overloading
{
    void area(int a,int b)
    {
        System.out.println("Area of rectangle is :"+(a*b));
    }
    void area(double a,double b)
    {
        System.out.println("Area of Triangle is :"+(0.5*a*b));
    }
}
public class  shape
{
    public static void main(String[] args)
    {
        int a,b;
        double c,d;
        Scanner sc=  new Scanner (System.in);
        System.out.println("Enter the length and breadth of the rectangle");
        a=sc.nextInt();
        b=sc.nextInt();
        Overloading o= new Overloading();
        o.area(a, b);
        System.out.println("Enter the base and height of the triangle");
        c=sc.nextDouble();
        d=sc.nextDouble();
        o.area(c, d);
        sc.close();

    }
}