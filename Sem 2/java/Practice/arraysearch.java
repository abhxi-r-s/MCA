import java.util.*;

class array {

    int size,ele;
    int arr[];
    Scanner sc= new Scanner(System.in);
    array()
    {
        
        System.out.println("Enter the array size");
        size=sc.nextInt();
        arr= new int[size];
        System.out.println("Enter the array elements :");
        for(int i=0;i<size;i++)
        {
            arr[i]=sc.nextInt();
        }
    }
    void search()
    {
        System.out.println("Enter the element to be searched :");
        ele=sc.nextInt();

        for(int i=0;i<size;i++)
        {
            if(ele==arr[i])
            {
                System.out.println("Element found ");
                break;
            }
        }
    }
}
public class arraysearch
{
    public static void main(String[] args)
    {
        array a= new array();
        a.search();
    }
}
