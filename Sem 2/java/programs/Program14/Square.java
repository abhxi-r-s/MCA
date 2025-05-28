package Program14;

public class Square implements Figure {

    double length;

    public Square(double length){
        this.length=length;
    }

    public void area()
    {
        double area= length*length;
        System.out.println("Area of Square:"+ area);
    }
    
}
