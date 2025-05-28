import java.util.*;
import java.io.*;

public class allarthexp extends RuntimeException {
    
    allarthexp(String s)
    {
        super(s);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a,b;

        System.out.println("Enter the numbers :");
        a=sc.nextInt();
        b=sc.nextInt();

        try{
            System.out.println("Division is "+(a/b));
            
        }
        catch(allarthexp e)
        {
            System.out.println(e.getMessage());
            
        }

        try{
            if(a<b)
            {
                throw new allarthexp("First number is greater than second- unable to substract");
            }
            else{
                System.out.println("After Substraction "+(a-b));
            }
        }
        catch(allarthexp e){

            System.out.println(e.getMessage());

        }

    }
}
