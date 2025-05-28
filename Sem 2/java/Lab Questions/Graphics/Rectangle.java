package Graphics;

public class Rectangle implements Figure{
    
    double l,b;
    public Rectangle(double length,double breadth)
    {
        l=length;
        b=breadth;
    }
    public void area()
    {
        System.out.println("Area of the Rectangle is "+(l*b));
    }
}
