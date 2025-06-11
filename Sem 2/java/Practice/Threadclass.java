import java.util.*;

class Multiple5 extends Thread {
    int n;

    Multiple5(int a) {
        n = a;
    }

    public void run() {
        System.out.println("Multiplication Table of 5:");
        for (int i = 1; i <= n; i++) {
            System.out.println("5 * " + i + " = " + (5 * i));
        }
    }
}

class Prime extends Thread {
    int n;

    Prime(int a) {
        n = a;
    }

    boolean isPrime(int j) {
        if (j <= 1) return false;
        for (int i = 2; i * i <= j; i++) {
            if (j % i == 0) return false;
        }
        return true;
    }

    public void run() {
        System.out.println("\nFirst " + n + " Prime Numbers:");
        int count = 0, num = 2;
        while (count < n) {
            if (isPrime(num)) {
                System.out.print(num + " ");
                count++;
            }
            num++;
        }
        System.out.println();
    }
}

public class Threadclass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the limit: ");
        int a = sc.nextInt();

        Multiple5 m = new Multiple5(a);
        Prime p = new Prime(a);

        m.start();
        p.start();

        sc.close();
    }
}
