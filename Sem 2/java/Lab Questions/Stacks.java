import java.util.*;

public class Stacks {
    
    ArrayList<Integer>stack;
    int size,top=-1;

    Stacks()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter size: ");
        size = sc.nextInt();
        stack= new ArrayList<Integer>(size);
    }

    void push()
    {
        Scanner sc=new Scanner(System.in);
        if(top==size)
        {
            System.out.println("Overflow");
        }
        else
        {
            top++;
            System.out.println("Enter the element to push :");
            int ele=sc.nextInt();
            stack.add(ele);
        }
    }

    void pop()
    {
        if(top==-1)
        {
            System.out.println("Stack is empty");
        }
        else{
            stack.remove(top);
            top--;
            System.out.println("Element deleted");
        }
    }

    void display()
    {
        System.out.println("Stack elements are "+stack);
    }

    public static void main(String[] args) {
        
        Scanner sc= new Scanner(System.in);
        Stacks s = new Stacks();
        int ch;
        
        while(true){
            System.out.println("1.push /n 2.pop /n 3.display /n 4.exit");
            ch=sc.nextInt();
            switch(ch){
                case 1:s.push();
                break;
                case 2:s.pop();
                break;
                case 3:s.display();
                break;
                case 4:return ;
                default:
                System.out.println("error");
            }
        }
      
    }
}

