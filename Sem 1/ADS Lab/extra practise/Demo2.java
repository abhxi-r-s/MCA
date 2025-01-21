import java.util.Scanner;

class Calculator
{
    
void add(int n1,int n2)
{
    int r;
    r=n1+n2;
    System.out.println(r);    
}
}
public class Demo2{

    public static void main(String a[])
    {

        Scanner sc=new Scanner(System.in);  
        int x,y;
        System.out.println("Enter the values : ");
        x=sc.nextInt();
        y=sc.nextInt();
        Calculator calc =new Calculator();
        calc.add(x,y);
        
    }


}