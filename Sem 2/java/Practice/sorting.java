import java.util.*;

class Stringsort {
    
    String str[],temp;
    int size;
    Scanner sc= new Scanner(System.in);

    Stringsort()
    {
        System.out.println("Enter the size of the String");
        size=sc.nextInt();
        str= new String[size];
        System.out.println("Enter the string");
        for(int i=0;i<size;i++)
        {
            this.str[i]=sc.next();
        }
        
    }

    void sort()
    {
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size-i-1;j++)
            {
                if(str[j].compareTo(str[j+1])>0)
                {
                    temp=str[j];
                    str[j]=str[j+1];
                    str[j+1]=temp;
                }
            }
        }
        System.out.println("After sorting");
        System.out.println("_ _ _ _ _ _ _");
        for(int i=0;i<size;i++)
        {
            System.out.println(str[i]);
        }
    }
}
public class sorting
{
    public static void main(String[] args)
    {
        Stringsort s= new Stringsort();
        s.sort();
    }
}
