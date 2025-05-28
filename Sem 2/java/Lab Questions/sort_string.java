import java.util.*;

public class sort_string {
    
    Scanner sc= new Scanner(System.in);
    String s[];
    
    int size;
    String temp;

    sort_string()
    {
        System.out.println("Enter the size of the String :");
        size=sc.nextInt();

        s= new String[size];

        System.out.println("Enter the String :");
        for(int i=0;i<size;i++)
        {
            s[i]=sc.next();
        }
    }

    void sorting()
    {
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size-i-1;j++)
            {
                if(s[j].compareTo(s[j+1])>0)//Alphabetic order
                {
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }
            }
        }
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            System.out.println(s[i]+" ");
        }
    }

}
class Mainfn{

    public static void main(String[] args) {
        
        sort_string S1= new sort_string();
        S1.sorting();
        S1.display();
    }
    
    
}
