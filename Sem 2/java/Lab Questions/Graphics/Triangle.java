package Graphics;

public class Triangle implements Figure {

    double h,b;
    public Triangle(double height,double base)
    {
        h=height;
        b=base;
    }
    public void area()
    {
        System.out.println("Area of the Triangle is :"+(0.5*b*h));
    }
    
}
