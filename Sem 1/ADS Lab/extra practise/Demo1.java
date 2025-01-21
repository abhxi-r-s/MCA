import java.util.Scanner;

class Calculator
{
    
int add(int n1,int n2)
{
    int r;
    r=n1+n2;
    return r;
}
}
public class Demo1{

    public static void main(String a[])
    {

        Scanner value=new Scanner(System.in);  
        int x,y;
        System.out.println("Enter the values : ");
        x=value.nextInt();
        y=value.nextInt();
        Calculator calc =new Calculator();
        int sum= calc.add(x,y);
        System.out.println(sum);
    }


}