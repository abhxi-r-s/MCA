package java.programs;
import java.util.Scanner;

class demo2{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number :");
        int a=sc.nextInt();
        System.out.print("The number is "+a);
        sc.close();
    }
}