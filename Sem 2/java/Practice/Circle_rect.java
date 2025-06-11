// Create an interface having prototypes of functions area() and perimeter(). Create two classes
//  Circle and Rectangle which implements the above interface. Create a menu driven program to
//  find area and perimeter of objects.
interface shape
{
    public void area();
    public void perimeter();
}
class Circle implements shape{

    int rad;
    Circle(int r)
    {
        rad=r;
    }
    public void area()
    {
        System.out.println("Area of the circle is "+(2.14*rad*rad));
    }
    public void perimeter()
    {
        System.out.println("Perimeter of the Circle is "+(2*2.14*rad));
    }
}
class Rect implements shape
{
    int len,bdh;

    Rect(int l, int b)
    {
        len=l;
        bdh=b;
    }
    public void area()
    {
        System.out.println("Area of the rectangle is :"+(len*bdh));
    }
    public void perimeter()
    {
        System.out.println("Perimeter of the rectangle is :"+(2*(len+bdh)));
    }
}

public class Circle_rect {

    public static void main(String[] args)
    {
        Circle c= new Circle(2);
        c.area();
        c.perimeter();
        Rect r = new Rect(2,3);
        r.area();
        r.perimeter();
    }
    
}
