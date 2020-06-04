import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int h = s.nextInt();
        int m = s.nextInt();
        if (m >= 45) m -= 45;
        else {
            m += 15;
            h = (h + 23) % 24;
        }
        System.out.println(h + " " + m);
        s.close();
    }
}