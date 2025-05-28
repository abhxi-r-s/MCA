import java.util.LinkedHashSet;
import java.util.Set;
import java.util.*;

public class hashed {

    public static void main(String[] args) {
        
        Set<String> set= new LinkedHashSet<String>();
        int ch=0;
        String ele;
        Scanner sc= new Scanner(System.in);
        do{
            System.out.println("Enter your choice : \n1.Add\n2.Remove\n3.Display\n4.Search\n5.Exit");
            ch=sc.nextInt();
            switch(ch)
            {
                case 1:System.out.println("Enter the element to add :");
                ele=sc.next();
                set.add(ele);
                break;

                case 2:
                if(set.isEmpty())
                {
                    System.out.println("Set is empty");
                }
                else
                {
                    System.out.println("Enter the element to remove :");
                    ele=sc.next();
                    set.remove(ele);
                }
                break;
                case 3:
                System.out.println("The Linked HAshset is "+set);
                break;
                case 4:System.out.println("Enter the element to search :");
                ele=sc.next();
                boolean contains= set.contains(ele);
                System.out.println("Set contains "+ele+" "+contains);
                break;
                case 5:
                System.out.println("Exiting---");
                break;
                default:
                break;
            }
        }while(ch!=5);
        sc.close();
    }
    
    
}
