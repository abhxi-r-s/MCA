// Create a class ‘Person’ with data members Name, Gender, Address, Age  and a constructor to
//  initialize the data members and another class ‘Employee’ that inherits the properties  of class
//  Person and also contains its own data members like Empid, Company_name, Qualification,
//  Salary and its own constructor. Create another class ‘Teacher’ that inherits the properties of
//  class Employee and contains its own data members like Subject, Department, Teacherid and
//  also contain constructors and methods to display the data members. Use array of objects to
//  display details of N teachers. 
import java.util.*;
class Person {

    String Name;
    String Gender,Address;
    int Age;
    Scanner sc =new Scanner(System.in);

    Person()
    {
        System.out.println("Enter Name");
        Name=sc.next();
        System.out.println("Enter Gender");
        Gender=sc.next();
        System.out.println("Enter Address");
        Address=sc.next();
        System.out.println("Enter Age");
        Age=sc.nextInt();
    }    
}
class Employee extends Person
{
    int Empid;
    String Company,Qualification;
    int Salary;

    Scanner sc = new Scanner(System.in);

    Employee()
    {
        System.out.println("Enter the Empid :");
        Empid=sc.nextInt();
        System.out.println("Enter the Comapany Name :");
        Company=sc.next();
        System.out.println("Enter the Qualification :");
        Qualification=sc.next();
        System.out.println("Enter the Salary :");
        Salary=sc.nextInt();
    }
}
class Teacher extends Employee
{
    int Tid;
    String Dept,sub;

    Teacher()
    {
        System.out.println("Enter the Teacher id :");
        Tid=sc.nextInt();
        System.out.println("Enter the Dept :");
        Dept=sc.next();
        System.out.println("Enter the Subject :");
        sub=sc.next();
    }
    void display()
    {
        System.out.println(Name);
        System.out.println(Gender);
        System.out.println(Address);
        System.out.println(Age);
        System.out.println(Empid);
        System.out.println(Company);
        System.out.println(Qualification);
        System.out.println(Tid);
        System.out.println(Dept);
        System.out.println(sub);
    }
}
public class teacher_main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        int n;
        System.out.println("Enter the number of teachers :");;
        n=sc.nextInt();
        Teacher t[] = new Teacher[n];
        System.out.println("Enter the details");
        for(int i=0;i<n;i++)
        {
            t[i]= new Teacher();
        }
        for(int i=0;i<n;i++)
        {
            t[i].display();
        }
        sc.close();
    }
}
