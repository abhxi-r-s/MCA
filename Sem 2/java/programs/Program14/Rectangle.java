package Program14;

public class Rectangle implements Figure {

    double length,breadth;

    public Rectangle(double length, double breadth){

        this.length=length;
        this.breadth=breadth;
    }

    public void area()
    {
        double area = length * breadth;
        System.out.println("Area of Rectangle :"+area);
    }
    
}
