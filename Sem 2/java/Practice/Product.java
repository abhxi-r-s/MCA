//Define class Product with Product name,price and code.Create 3 objects for Product class and Find the Lowest Price Product.
import java.util.*;
class Product{

    int pcode,price;
    String pname;

    void details()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Product Code :");
        pcode=sc.nextInt();
        System.out.println("Enter the Product Name :");
        pname=sc.next();
        System.out.println("Enter the price of the Product :");
        price=sc.nextInt();        
    }
    static void Lowest(Product a,Product b,Product c)
    {
        if(a.price<b.price && a.price<c.price)
        {
            System.out.println(a.pname + " is the lowest");
        }
        else if(b.price<a.price && b.price<c.price)
        {
            System.out.println(b.pname + " is the lowest");
        }
        else
        {
            System.out.println(c.pname + " is the lowest");
        }
    }
}
class Compare{
    public static void main(String[] args)
    {
        Product p1= new Product();
        Product p2= new Product();
        Product p3= new Product();
        p1.details();
        p2.details();
        p3.details();

        Product.Lowest(p1,p2,p3);

    }
}