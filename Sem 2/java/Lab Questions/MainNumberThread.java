class NumberThread extends Thread {

    private int start;
    private int end;

    public NumberThread(int start, int end) {
        this.start = start;
        this.end = end;
    }

    @Override
    public void run() {
        for (int i = start; i <= end; i++) {
            System.out.println("Thread " + Thread.currentThread().getName() + ": " + i);
        }
    }
}

public class MainNumberThread {

    public static void main(String[] args) {

        NumberThread thread1 = new NumberThread(1, 5);
        NumberThread thread2 = new NumberThread(6, 10);
        NumberThread thread3 = new NumberThread(11, 15);

        thread1.setName("Thread-1");
        thread2.setName("Thread-2");
        thread3.setName("Thread-3");

        thread1.start();
        thread2.start();
        thread3.start();
    }

}