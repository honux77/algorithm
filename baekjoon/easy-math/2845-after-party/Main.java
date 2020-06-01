import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int m = s.nextInt() * s.nextInt();     
        for (int i = 0; i < 5; i++) {
            System.out.print(s.nextInt() - m + " ");
        }
        System.out.println();
        s.close();
    }
}