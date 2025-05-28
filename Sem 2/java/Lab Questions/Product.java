import java.util.Scanner;

class Product {
    String pname;
    int pcode, price;

    void details() {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the product name:");
        pname = sc.next();
        System.out.println("Enter the Product code:");
        pcode = sc.nextInt();
        System.out.println("Enter the product price:");
        price = sc.nextInt();
    }

    
    static void lowest(Product a, Product b, Product c) {
        if (a.price < b.price && a.price < c.price) {
            System.out.println(a.pname + " is the lowest");
        } else if (b.price < a.price && b.price < c.price) {
            System.out.println(b.pname + " is the lowest");
        } else {
            System.out.println(c.pname + " is the lowest");
        }
    }
}

class Compare {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 

        Product p1 = new Product();
        Product p2 = new Product();
        Product p3 = new Product();

        p1.details();
        p2.details();
        p3.details();

        Product.lowest(p1, p2, p3);

    }
}
