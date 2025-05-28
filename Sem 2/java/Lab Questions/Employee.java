import java.util.*;

public class Employee {

    int eNo,eSalary;
    String eName;

    Employee()
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the Employee Number :");
        eNo=sc.nextInt();
        System.out.println("Enter the Employee Name :");
        eName=sc.next();
        System.out.println("Enter the Employee Salary :");
        eSalary=sc.nextInt();
        

    }
}
class array_object
{
    public static void main(String[] args) {
        
        int n,S,flag=0,Found=0;
        // int[] E;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Number of Employees :");
        n=sc.nextInt();

        Employee E[]= new Employee[n];
        System.out.println("Enter the Employee Details :");
        for(int i=0;i<n;i++)
        {
            E[i]= new Employee();
        }
        
        System.out.println("-- - - - - -Employee Search - - - - - - -");
        System.out.println("Enter the Employee Number to Search :");
        S=sc.nextInt();

        for(int i=0;i<n;i++)
        {
            if(E[i].eNo==S)
            {
                flag=1;
                Found=i;
            }
        }
        if(flag==1)
        {
            System.out.println("Employee Found");
            System.out.println("Employee Number  :"+E[Found].eNo);
            System.out.println("Employee Name :"+E[Found].eName);
            System.out.println("Employee Salary :"+E[Found].eSalary);
            
            // int[][] K;
            // K=new int[n][m]; 
        }
        else
        {
            System.out.println("Employee Not Found");
        }
    }
}
