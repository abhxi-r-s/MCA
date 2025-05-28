import Graphics.*;
import java.util.*;

public class test_package {
    
    public static void main(String[] args) {
        
        int ch=0;
        // double r;
        Scanner sc= new Scanner(System.in);
        do{

        
        System.out.println("Enter your choice :\n 1.Circle\n2.Rectangle\n3.Square\n4.Triangle\n5.Exit");
        ch=sc.nextInt();

        switch(ch)
        {
            case 1:
            System.out.println("Enter the radius of the circle :");
            double r=sc.nextDouble();
            Graphics.Circle c= new Graphics.Circle(r);
            c.area();
            break;

            case 2:
            System.out.println("Enter the length and breadth of the Rectangle :");
            double l=sc.nextDouble();
            double b=sc.nextDouble();
            Graphics.Rectangle R= new Graphics.Rectangle(l,b);
            R.area();
            break;

            case 3:
            System.out.println("Enter the side of the square :");
            double s= sc.nextDouble();
            Graphics.Square S=new Graphics.Square(s);
            S.area();
            break;

            case 4:
            System.out.println("Enter base and height of the Triangle :");
            double m=sc.nextDouble();
            double n=sc.nextDouble();
            Graphics.Triangle t= new Graphics.Triangle(m, n);
            t.area();
        }
        }while(ch!=5);

        sc.close();
        
    }
}
