package Graphics;

public class Square implements Figure {
    
    double s;
    public Square(double side)
    {
        s=side;
    }

    public void area()
    {
        System.out.println("Area of the Square is :"+(s*s));
    }
}
