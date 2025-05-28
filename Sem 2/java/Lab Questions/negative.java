import java.util.*;

public class negative extends RuntimeException{
    negative(String s)
    {
        super(s);
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size fo the array :");
        int size= sc.nextInt();
        int[] k= new int[size];
        int sum=0;
        System.out.println("Enter the array elements :");
        try{
            for(int i=0;i<size;i++)
            {
                k[i]=sc.nextInt();
                if(k[i]<0)
                {
                    throw new negative("Negative not allowed");
                }
                else{
                    sum+=k[i];
                }
            }

        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
            System.exit(0);
        }
        System.out.println("Average is "+(sum/size));
    }
    
}