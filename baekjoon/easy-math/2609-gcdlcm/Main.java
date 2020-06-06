import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        int ab = a * b;
        int gcd;

        while (true) {
            int c = a % b;
            if (c == 0) {
                gcd = b;
                break;
            }
            a = b;
            b = c;
        }
        System.out.println(gcd);
        System.out.println(ab / gcd);
        s.close();
    }
}