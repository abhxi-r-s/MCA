class NumberPrinter implements Runnable {
    
    @Override
    public void run() {
        for (int i = 1; i <= 10; i++) {
            System.out.println(Thread.currentThread().getName() + ": " + i);
            try {
                Thread.sleep(500); // Sleep for 500 milliseconds
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

public class MainNumberPrinter{
    public static void main(String[] args) {
        
        NumberPrinter printer = new NumberPrinter();
        Thread thread = new Thread(printer);
        thread.start();
    }
}
