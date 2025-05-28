public class parent2 {

    int l, b;

    parent2(int x, int y) {
        l = x;
        b = y;
    }

    void area() {
        System.out.println("Area is " + (l * b));
    }

    void volume()
    {
        System.out.println("Volume is "+(l*b));
    }
}

class child1 extends parent2 {

   // int m, n;
    int h;

    child1(int m,int n,int z)
    {
        super(m,n);
        
        h=z;
        System.out.println(h);
        System.out.println(m);
        
        
    }

    public static void main(String[] args) {
        child1 c = new child1(10, 20, 30);
        c.area();
        c.volume();
    }
}
