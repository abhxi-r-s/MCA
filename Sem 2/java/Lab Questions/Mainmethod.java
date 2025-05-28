class MyRunnable implements Runnable {
    
    public void run() {
        System.out.println("Running in a separate thread!");
    }
    
}
public class Mainmethod{

    public static void main(String[] args) {
        MyRunnable r = new MyRunnable();
        // r.start(); 
        Thread t = new Thread(r);
        t.start();
}
}