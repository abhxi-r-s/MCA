import java.util.*;

class Stringcheck {

    String str;
    Scanner sc= new Scanner(System.in);

    Stringcheck()
    {
        System.out.println("Enter the string :");
        str=sc.next();
    }
    void stringfunctions()
    {
        System.out.println("UPPER: "+str.toUpperCase());
        System.out.println("LOWER: "+str.toLowerCase());
        System.out.println("LENGTH: "+str.length());
        System.out.println("TRIME: "+str.trim());
        System.out.println("CONCAT: "+str.concat("CR7"));
        System.out.println("INDEX: "+str.indexOf("o"));
        System.out.println("INDEX: "+str.indexOf("o",10));
        System.out.println("SUBSTRING2: "+str.substring(2));
        System.out.println("SUBSTRING2,6: "+str.substring(2,6));


    }
}
public class stringmanipulation
{
    public static void main(String[] args)
    {
        Stringcheck s= new Stringcheck();
        s.stringfunctions();
    }
}
