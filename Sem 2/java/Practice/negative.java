import java.util.*;

public class negative  extends RuntimeException{

    negative(String s)
    {
        super(s);
    }
    public static void main(String[] args)
    {
        int arr[];
        int size,sum=0;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the size of the list");
        size=sc.nextInt();
        arr= new int[size];

        System.out.println("Enter the array elements :");
        try{
            for(int i=0;i<size;i++)
            {
                arr[i]=sc.nextInt();

                if(arr[i]<0)
                {
                    throw new negative("Negative numbers not allowed");
                }
                else
                {
                    sum+=arr[i];
                }
            }

        }
        catch(Exception e){

            System.out.println(e.getMessage());
            System.exit(0);
        }

        System.out.println("Average of the numbers is :"+(sum/size));
        
    }
}
