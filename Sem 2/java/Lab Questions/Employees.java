// //Create a class ‘Employee’ with data members Empid, Name, Salary, Address and constructors to 
// initialize the data members. Create another class ‘Teacher’ that inherit the properties of class 
// employee and contain its own data members department, Subjects taught and constructors to 
// initialize these data members and also include display function to display all the data members. 
// Use array of objects to display details of N teachers.  

import java.util.*;
class Employees{

    int Empid;
    String Ename;

    Employees(int k)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Employee id :");
        Empid=sc.nextInt();
        System.out.println("Enter the Employee Name :");
        Ename=sc.next();
    }
}
class Teacher extends Employees{
    String subject;
    String code;

    Teacher(int x)
    {
        super(x);
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the Subject :");
        subject=sc.next();
        System.out.println("Enter the code :");
        code=sc.next();
    }

    void display(int r)
    {
        System.out.println("Name is :"+Ename);
        System.out.println(Empid);
        System.out.println(subject);
        System.out.println(code);
    }
}
class Teacher_main{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);

        System.out.println("Enter number of teachers :");
        int n=sc.nextInt();
        Teacher[] t= new Teacher[n];

        for(int i=0;i<n;i++)
        {
            t[i]=new Teacher(i+1);
            
        }
        for(int i=0;i<n;i++)
        {
            t[i].display(i+1);
        }
    }
}