// Create a class ‘Employee’ with data members Empid, Name, Salary, Address and constructors
//  to initialize the data members. Create another class ‘Teacher’ that inherit the properties of class
//  employee and contain its own data members department, Subjects taught and constructors to
//  initialize these data members and also include display function to display all the data members.
//  Use array of objects to display details of N teachers. 

import java.util.*;

class Employee {

    int Empid;
    String name;
    int salary;
    String Address;

    Scanner sc= new Scanner(System.in);

    Employee()
    {
        System.out.println("Enter the Employee id,name,salary,address");
        Empid=sc.nextInt();
        name=sc.next();
        salary=sc.nextInt();
        Address=sc.next();
    }
    
}
class teachers extends Employee{

    String Department;
    String subject;

    teachers()
    {
        System.out.println("Enter the Teacher details like dept,subject");
        Department=sc.next();
        subject=sc.next();
    }

    void display()
    {
        System.out.println("Employeid :"+Empid);
        System.out.println("Name :"+name);
        System.out.println("Salary :"+salary);
        System.out.println("Address :"+Address);
        System.out.println("Department :"+Department);
        System.out.println("Subject :"+subject);

    }
}
public class singleinheritance
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int size;
        System.out.println("Enter the number of teachers :");
        size=sc.nextInt();
        teachers t[] =new teachers[size];
        for(int i=0;i<size;i++)
        {
            t[i]= new teachers();
        }
        for(int i=0;i<size;i++)
        {
            t[i].display();
        }

        
    
    }
}
