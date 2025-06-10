import java.util.*;

class Product {
    
    String pcode;
    String pname;
    int price;

    void getvalues()
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the Product code :");
        pcode=sc.next();
        System.out.println("Enter the Product name :");
        pname=sc.next();
        System.out.println("Enter the Product price :");
        price=sc.nextInt();
    }

    static void compare(Product p1,Product p2,Product p3)
    {
        if(p1.price<p2.price && p1.price<p3.price)
        {
            System.out.println(p1.pname + " is the lowest priced product");
        }
        else if(p2.price<p1.price && p2.price<p3.price)
        {
            System.out.println(p2.price + " is the lowest priced product");

        }
        else
        {
            System.out.println(p3.price + " is the lowest priced product");
        }

    }
}
public class mainproduct
{
    public static void main(String[] args)
    {
    Product p1= new Product();
    Product p2= new Product();
    Product p3= new Product();
    p1.getvalues();
    p2.getvalues();
    p3.getvalues();

    Product.compare(p1,p2,p3);

    }
    
}
