import java.util.*;

class CPU {
    
    Scanner sc= new Scanner(System.in);
    int price;

    class Processor{

        int no_cores;
        String Manufacturer;

        Processor()
        {
            System.out.println("Enter the Number of cores :");
            no_cores=sc.nextInt();
            System.out.println("Enter the manufacturer :");
            Manufacturer=sc.next();
        }

    }

    static class RAM{

        int Memory;
        String Manufacturer;

        RAM()
        {
            Scanner sc= new Scanner(System.in);
            System.out.println("Enter the Memory Size :");
            Memory=sc.nextInt();
            System.out.println("Enter the Manufacturer :");
            Manufacturer=sc.next();
        }
    }
    
}
class innerclass{

    public static void main(String[] args) {

        CPU c = new CPU();
        CPU.Processor p= c.new Processor();
        CPU.RAM r= new CPU.RAM();
        c.price=2500+(p.no_cores*25)+(r.Memory*15);

        System.out.println("Price is :"+c.price+" Number of cores is "+p.no_cores+" and the memory required is "+r.Memory);

        
    }
    

}

