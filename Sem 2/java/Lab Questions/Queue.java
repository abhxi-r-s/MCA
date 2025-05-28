import java.util.*;
public class Queue {
    
    public static void main(String[] args) {
        
        Scanner sc= new Scanner(System.in);
        PriorityQueue<String> Q= new PriorityQueue<String>();
        // PriorityQueue<String> Q=new PriorityQueue<String>();
        int ch=0;
        String ele;


        do{
            System.out.println("Enter your Choice :\n1.Add\n2.Remove\n3.Display\n4.Exit");
            ch=sc.nextInt();

            switch(ch)
            {
                case 1:System.out.println("Enter the element to insert :");
                ele=sc.next();
                Q.add(ele);
                break;

                case 2:
                if(Q.isEmpty())
                {
                    System.out.println("Queue is empty");
                }
                else
                {
                    Q.remove();
                }
                break;

                case 3:
                System.out.println("Elements in the queue are "+Q);
                break;

                case 4:
                System.out.println("Exiting.....");

            }
        }while(ch!=4);

        sc.close();
    }
}
