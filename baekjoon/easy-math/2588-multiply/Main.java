import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        String b = s.next();
        System.out.println(a * Integer.parseInt(b.substring(2,3)));
        System.out.println(a * Integer.parseInt(b.substring(1,2)));
        System.out.println(a * Integer.parseInt(b.substring(0,1)));
        System.out.println(a * Integer.parseInt(b));
        s.close();
    }
}