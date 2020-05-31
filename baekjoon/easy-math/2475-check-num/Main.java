import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int sum = 0;
      
        for (int i = 0; i < 5; i++) {
            int t = s.nextInt();
            sum += t * t;
        }

        System.out.println(sum % 10);
        s.close();
    }
}