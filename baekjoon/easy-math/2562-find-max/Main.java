import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int idx = 1;
        int max = s.nextInt();
        for (int i = 2; i < 10; i++) {
            int t = s.nextInt();
            if (t > max) {
                max = t;
                idx = i;
            }
        }
        System.out.println(max);
        System.out.println(idx);
    }
}