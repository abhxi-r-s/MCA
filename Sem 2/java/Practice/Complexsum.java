import java.util.*;
class complex {
    int r,i;

    // complex()
    // {
    //     r=0;
    //     i=0;
        
    // }
    
    void getdetails()
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the real part");
        r=sc.nextInt();
        System.out.println("Enter the imaginary part :");
        i=sc.nextInt();
    }

    void add(complex a,complex b)
    {
        System.out.println("Sum after addition :");
        this.r=a.r+b.r;
        this.i=a.i+b.i;
        System.out.println((this.r) + "+"+(this.i)+"i" );
    }
}
public class Complexsum
{
    public static void main(String [] args)
    {
        complex a = new complex();
        complex b= new complex();
        complex c= new complex();
        a.getdetails();
        b.getdetails();
        c.add(a, b);
        

    }
}

