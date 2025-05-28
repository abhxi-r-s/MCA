
class MyThread extends Thread {
    
    public void run()
    {
        // String strr="Thread is running...";
        // System.out.println(strr);
        System.out.println("Current thread name: " + Thread.currentThread().getName());
        System.out.println("run() method is called");
        
    }
}
public class Main{

    public static void main(String[] args)
    {
        MyThread t1 = new MyThread();
        // MyThread t2= new MyThread();
        // MyThread t3= new MyThread();

        // t1.start();
        System.out.println("Hello World!");
        t1.run();
        // t1.run();
    }
}