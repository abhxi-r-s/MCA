
public class shape {
    
    double getarea(int x)
    {
        int k=x;
        return Math.PI*k*k;
    }
    double getarea(int x,int y)
    {
        int k=x;
        int d=y;
        return k*d;
    }
    double getperimeter(int x)
    {
        int d=x;
        return 2*Math.PI*d;
    }
    double getperimeter(int x,int y)
    {
        int k=x;
        int d=y;
        return 2*(k+d);
    }
    public static void main(String[] args){
       shape s= new shape();
       System.out.println("Area is "+s.getarea(2)); 
       System.out.println("Area is "+s.getarea(2,4));
       System.out.println("Perimeter is "+s.getperimeter(4));
       System.out.println("Perimeter is "+s.getperimeter(4,5)); 
    }
}