import java.util.Scanner;
import java.util.ArrayList;

public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        ArrayList <Integer> a = new ArrayList <>();
        a.add(-1000000000);
        for (int i = 0; i < n; i++) {
            a.add(s.nextInt());
        }
        a.add(1000000000);

        int count = 0;
        int ans = 0;

        for (int i = 1; i < n; i++) {
            if (a.get(i) > a.get(i + 1)) {
                count++;
                if (a.get(i - 1) <= a.get(i + 1)) ans ++; 
                if (a.get(i) <= a.get(i + 2)) ans ++; 
            }
        }

        if (count == 0) ans = n;
        if (count > 1) ans = 0;
        System.out.println(ans);
        s.close();
    }
}