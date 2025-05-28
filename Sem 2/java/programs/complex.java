
import java.util.*;
public class complex {
    float real;
    float img;

    complex(float real, float img){
        this.real=real;
        this.img=img;
    }

    complex addComplex(complex n2){
        float real1 = this.real + n2.real;
        float img1 = this.img + n2.img;
        complex result=new complex(real1, img1);
        return result;
    }
    void display(){
        System.out.println(real+" + "+img+"i");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter real part of complex number 1: ");
        float r1 = sc.nextFloat();
        System.out.print("Enter imaginary part of complex number 1: ");
        float i1 = sc.nextFloat();
        complex c1=new complex(r1,i1);
        System.out.print("Enter real part of complex number 2: ");
        float r2 = sc.nextFloat();
        System.out.print("Enter imaginary part of complex number 2: ");
        float i2 = sc.nextFloat();
        complex c2=new complex(r2,i2);
        complex c3=c1.addComplex(c2);
        c1.display();
        c2.display();
        System.out.println("---------------");
        c3.display();
    }
}
