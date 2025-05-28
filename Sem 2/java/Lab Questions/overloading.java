import java.util.*;
// import java.math.*;
public class overloading {
    
    void area(int a)
    {
        System.out.println("Area of Square is :"+(a*a));
    }

    void area(float a)
    {
        System.out.println("Area of Circle is :"+(Math.PI*a*a));
    }
    void area(int a,int b)
    {
        System.out.println("Area of Rectangle is :"+(a*b));
    }
    void area(float a,float b)
    {
        System.out.println("Area of Triangle is :"+(0.5*a*b));
    }
}
class caluculate{

   public static void main(String[] args) {
    
    int a,b,c;
    float d,e,f;

    overloading S= new overloading();

    Scanner sc= new Scanner(System.in);

    System.out.println("Enter the side of the square :");
    a=sc.nextInt();
    S.area(a);

    System.out.println("Enter the radius of the circle:");
    d=sc.nextFloat();
    S.area(d);

    System.out.println("Enter the sides of the rectangle :");
    b=sc.nextInt();
    c=sc.nextInt();
    S.area(b,c);

    System.out.println("Enter the sides of the Triangle :");
    e=sc.nextFloat();
    f=sc.nextFloat();
    S.area(e,f);

    sc.close();
   }
}
