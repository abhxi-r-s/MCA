class PrimeFinderThread extends Thread {

    private int start;
    private int end;

    public PrimeFinderThread(int start, int end) {
        this.start = start;
        this.end = end;
    }

    @Override
    public void run() {
        for (int i = start; i <= end; i++) {
            if (isPrime(i)) {
                System.out.println("Thread " + Thread.currentThread().getName() + ": " + i + " is prime.");
            }
        }
    }

    private boolean isPrime(int number) {
        if (number <= 1) return false;
        for (int i = 2; i <= Math.sqrt(number); i++) {
            if (number % i == 0) return false;
        }
        return true;
    }
}

public class MainPrimeFinder {

    public static void main(String[] args) {
        PrimeFinderThread thread1 = new PrimeFinderThread(1, 50);
        PrimeFinderThread thread2 = new PrimeFinderThread(51, 100);
        PrimeFinderThread thread3 = new PrimeFinderThread(101, 150);

        thread1.setName("Prime-Finder-1");
        thread2.setName("Prime-Finder-2");
        thread3.setName("Prime-Finder-3");

        thread1.start();
        thread2.start();
        thread3.start();
    }
}
