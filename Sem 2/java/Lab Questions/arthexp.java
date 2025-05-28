import java.util.*;
public class arthexp {
    
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int a,b;
        System.out.println("Enter the two numbers :");
        a=sc.nextInt();
        b=sc.nextInt();

    try{
        System.out.println(a/b);
    }
    catch(Exception e){
        System.out.println("Can't divide by zero");
    }
    sc.close();
    }
    
}
