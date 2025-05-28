package Graphics;

public class Circle implements Figure {

    double radius;
    public Circle(double r){

        radius=r;
    }

    public void area()
    {
        System.out.println("Area of the Circle :"+(3.14*radius*radius));
    }
}
