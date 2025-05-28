package Program14;

public class Circle implements Figure{
    
    double radius;

    public Circle(double radius){
        this.radius=radius;
    }
    public void area()
    {
        double area = Math.PI * radius * radius;
        System.out.println("Area of circle is " +area);
    }
    
}
