import java.util.Scanner;
import java.math.*;

public class Main {    

    public static void hanoi(int n, int source, int target) { 
        if (n == 1) {
            System.out.println(source + " " + target);
            return;
        }

        int other = 6 - source - target;

        hanoi(n - 1, source, other); 
        System.out.println(source + " " + target);       
        hanoi(n - 1, other, target); 
        return;
    }
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BigInteger bi = new BigInteger("2");
        BigInteger c = bi.pow(n).subtract(BigInteger.ONE);
        System.out.println(c);
        if (n <= 20) {
            hanoi(n, 1, 3);
        }        
    } 
}
