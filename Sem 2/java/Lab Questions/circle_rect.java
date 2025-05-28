import java.util.*;

interface shape {

    public void area();
    public void perimter();
    
}

class Circle implements shape {

    double radius;
    Circle(double r)
    {
        radius=r;
    }
    public void area()
    {
        System.out.println("Area of the Circle is :"+(3.14*radius*radius));
    }
    public void perimter()
    {
        System.out.println("Perimeter of Circle is :"+(2*3.14*radius));
    }
    
}
class Rectangle implements shape{

    double length,breadth;

    Rectangle(double l,double b){
          length= l;
          breadth=b;
    }
    public void area()
    {
        System.out.println("Area of the Rectangle is :"+(length*breadth));
    }
    public void perimter()
    {
        System.out.println("Perimeter of the Rectangle is :"+(2*(length+breadth)));
    }
}

class circle_rect{

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);

        int ch=0;
        do{

            System.out.println("Enter your choice : \n1.Circle \n2.Rectangle \n3.Exit");
            ch=sc.nextInt();

            switch (ch) {
                case 1:
                    System.out.println("Enter the radius of the circle :");
                    double r=sc.nextDouble();
                    Circle c= new Circle(r);
                    c.area();
                    c.perimter();
                    break;
                case 2:
                System.out.println("Enter the length and breadth of the rectangle :");
                double l=sc.nextDouble();
                double b=sc.nextDouble();
                Rectangle K= new Rectangle(l, b);
                K.area();
                K.perimter();
                break;

                default:
                System.out.println("Exiting..........");
                    break;
            }

        }while(ch!=3);
        
        sc.close();
    }
}
