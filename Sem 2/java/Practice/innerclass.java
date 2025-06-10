import java.util.*;
class CPU {

    int price;

    class Processor
    {
        int no_of_cores;
        String manufacturer;

        Processor()
        {
            Scanner sc= new Scanner(System.in);
            System.out.println("Enter the number od cores");
            no_of_cores=sc.nextInt();
            System.out.println("Enter Manufacturer :");
            manufacturer=sc.next();
            // sc.close();           
            
        }
    }
    static class RAM
    {
        int memory;
        String manufacturer;

        RAM()
        {
            Scanner sc= new Scanner(System.in);
            System.out.println("Enter the size of the memory used :");
            memory=sc.nextInt();
            System.out.println("Enter the manufaturer :");
            manufacturer=sc.next();
            // sc.close();
        }
    }
    
}
public class innerclass
{
    public static void main(String[] args)
    {
        CPU c= new CPU();
        CPU.Processor p = c.new Processor();
        CPU.RAM r= new CPU.RAM();

        c.price=2500+(r.memory*20)+(p.no_of_cores*20);
        System.out.println("Price of CPU is "+c.price+" of RAM manufaturer "+r.manufacturer+" and Processor manufaturer "+p.manufacturer);
        
    }
}
