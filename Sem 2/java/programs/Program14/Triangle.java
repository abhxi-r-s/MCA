package Program14;

public class Triangle implements Figure {

    double breadth,height;

    public Triangle(double breadth, double height)
    {
        this.breadth=breadth;
        this.height=height;
    }
    public void area()
    {
        double area= 0.5 * breadth * height;
        System.out.println("Area of Triangle :"+ area);
    }
    
}
