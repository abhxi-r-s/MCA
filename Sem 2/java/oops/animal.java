public class animal {
     
    String color="Red";    
    
}
class animal2 extends animal{

    String color="Blue";

    void colordisplay()
    {
        System.out.println(color);
        System.out.println(super.color);
    }
    public static void main(String[] args)
    {
        animal2 a=new animal2();
        a.colordisplay();
    }
}
