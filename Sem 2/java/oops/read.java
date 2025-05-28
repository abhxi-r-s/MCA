import java.util.*;
class read {
    double getarea(int x){
        int r=x;
        return Math.PI*r*r;
    }
    double getperimeter(int x){
        int a=x;
        return 2*Math.PI*a;
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        read c=new read();
        System.out.println("Enter a radius : ");
        int radius = sc.nextInt();
        double area = c.getarea(radius);
        double perimeter = c.getperimeter(radius);
        System.out.println("area is "+area);
        System.out.println("perimeter is "+perimeter);
        sc.close();
    }
}
