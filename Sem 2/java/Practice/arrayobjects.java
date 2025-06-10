import java.util.*;

import javax.swing.plaf.metal.MetalBorders.ScrollPaneBorder;

class employee {

    int eno,esalary;
    String ename;
    Scanner sc = new Scanner(System.in);

    employee()
    {
        System.out.println("Enter the employee eno :");
        eno=sc.nextInt();
        System.out.println("Enter the employe name:");
        ename=sc.next();
        System.out.println("Enter the employe salary:");
        esalary=sc.nextInt();       

    }
    void display()
    {
        System.out.println("ENO: "+this.eno);
        System.out.println("ENAME: "+this.ename);
        System.out.println("SALARY: "+this.esalary);
    }
}
public class arrayobjects
{
    public static void main(String[] args)
    {
        Scanner sc= new Scanner(System.in);
        int size;
        System.out.println("Enter the number of employees");
        size=sc.nextInt();
        employee e[]= new employee[size];
        System.out.println("Enter the Employee Details :");
        for(int i=0;i<size;i++)
        {
            e[i]= new employee();
        }
        for(int i=0;i<size;i++)
        {
            e[i].display();
        }
    }
}
