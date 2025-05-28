import java.util.*;

interface Innercircle {

    public void area();
    // public void perimeter();
    
}
class circle implements Innercircle {
    
    int rad;
    public circle(int r)
    {
        rad= r;
    }
    public void area()
    {
        System.out.println(rad*rad);
    }
}
class circle_rec{
    public static void main(String[] args) {
        
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the rad of the circle :");
        int r= sc.nextInt();
        circle c= new circle(r);
        c.area();
        sc.close();
    }
}
