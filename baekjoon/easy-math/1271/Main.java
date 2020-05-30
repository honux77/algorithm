import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        BigInteger m = new BigInteger(s.next());
        BigInteger n = new BigInteger(s.next());
        System.out.println(m.divide(n));
        System.out.println(m.mod(n));
    }
}