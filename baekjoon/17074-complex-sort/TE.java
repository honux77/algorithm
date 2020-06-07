import java.util.Scanner;
import java.util.ArrayList;

public class TE {

    static boolean sortCheck(ArrayList <Integer> n, int idx) {

        Integer t = n.get(0);
        for (int i = 1; i < n.size(); i++) {
            if (i == idx) continue;
            if (t > n.get(i)) return false;
            t = n.get(i);       
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        ArrayList <Integer> a = new ArrayList <>();
        for (int i = 0; i < n; i++) {
            a.add(s.nextInt());
        }
        int r = 0;
        for (int i = 0; i < n; i++) {
            if (sortCheck(a, i)) r++;
        }
        System.out.println(r);
        s.close();
    }
}