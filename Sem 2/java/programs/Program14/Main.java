package Program14;
import java.util.Scanner;

public class Main {

    public static void main(String[] args)
    {
        Scanner sc= new Scanner(System.in);

        //Circle
        System.out.print("Enter the Radius of the Circle :");
        double radius = sc.nextDouble();
        Circle c = new Circle(radius);
        c.area();

        //Rectangle
        System.out.println("Enter the length of the Rectangle :");
        double length = sc.nextDouble();
        System.out.println("Enter the breadth of the Rectangle :");
        double breadth = sc.nextDouble();
        Rectangle r = new Rectangle(length, breadth);
        r.area();

        //Square
        System.out.println("Enter the side of the Square :");
        double side = sc.nextDouble();
        Square s= new Square(side);
        s.area();

        //Triangle
        System.out.println("Enter the breadth of the Triangle :");
        double b = sc.nextDouble();
        System.out.println("Enter the height of the Triangle :");
        double h = sc.nextDouble();
        Triangle t= new Triangle(b, h);
        t.area();
        

        sc.close();
    }
    
}
