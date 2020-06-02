import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;        
        int n = s.nextInt();

        for (int i = 0; i < n; i++) {
            int t = s.nextInt();
            if (t > max) {
                max = t;
            }
            if (t < min) {
                min = t;
            }
        }
        System.out.println(min + " " + max);
        s.close();
    }
}