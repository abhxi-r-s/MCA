import java.util.Scanner;

public class array {
public static void main(String[] args)
{
    Scanner sc= new Scanner(System.in);
    System.out.print("Enter the array size");
    int size=sc.nextInt();
    int arr[] =new int[size];
    System.out.print("Enter the array elements :");
    for(int i=0;i<size;i++)
    {
        System.out.print("Enter the element "+(i+1));
        arr[i]=sc.nextInt();
    }
    for(int i=0;i<size;i++)
    {
        System.out.println(arr[i]+" ");
    }
    sc.close();
}
    
    
}
