import java.util.Random;

public class RandomDemo {

    public static void main(String[] args) {

        Random random = new Random();

        int number = random.nextInt(); // random int (positive or negative)

        System.out.println(number);
    }

}
