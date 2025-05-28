import java.util.*;
public class arraylistgeneric
{
    public static void main(String[] args)
    {
        // ArrayList<String> list=new ArrayList<String>();
        ArrayList<String> list= new ArrayList<String>();
        Scanner sc=new Scanner(System.in);
        String ele;
        int ch;
        while(true)
        {
            System.out.println("\nArrayList\n-----------------");
            System.out.println("1:add\n2:size\n3:search by index\n4:find index\n5:contains or not\n6:remove\n7:remover by index\n8:ddisplay\n9:clear\n10:exit");
            System.out.println("Enter your choice : ");

            ch=sc.nextInt();
            switch(ch)
            {
                case 1:
                System.out.println("Enter the element to insert : ");
                ele=sc.next();
                list.add(ele);
                break;

                case 2:
                System.out.println("The size of the array list is : "+list.size());
                break;

                case 3:
                System.out.println("Enter the index of the element to be searched : ");
                int index=sc.nextInt();
                System.out.println("Element found at "+index+"is : "+list.get(index));
                break;

                case 4:
                System.out.println("Enter an element to find the index : ");
                ele=sc.next();
                index=list.indexOf(ele);
                System.out.println("Index of "+ele+"is : "+index);
                break;

                case 5:
                System.out.println("Enter an element : ");
                ele=sc.next();
                boolean contains=list.contains(ele);
                System.out.println(ele+" is in the list : "+contains);
                break;

                case 6:
                System.out.println("Enter the element to be removed : ");
                ele=sc.next();
                boolean removed=list.remove(ele);
                System.out.println("After removing "+ele+" array list is : "+list);
                break;

                case 7:
                System.out.println("Enter the index to remove the element : ");
                index=sc.nextInt();
                list.remove(index);
                System.out.println("After removing the element,array list is : "+list);
                break;

                case 8:
                System.out.println("Array list is : "+list);
                break;

                case 9:
                list.clear();
                break;

                case 10:
                return;

                default:
                System.out.println("Invalid choice");



            }
        }
    }
    
}
