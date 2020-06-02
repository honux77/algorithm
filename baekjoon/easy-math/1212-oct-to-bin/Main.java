import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        boolean start = true;
        Scanner s = new Scanner(System.in);
        String oct = s.next();
        StringBuffer sb = new StringBuffer();
        for (char c: oct.toCharArray()) {
            String bin = Integer.toBinaryString(c - '0');
            if (!start) {
                switch(bin.length()) {
                    case 1:
                    bin = "00" + bin;
                    break;
                    case 2:
                    bin = "0" + bin; 
                    break;
                }
            }
            start = false;            
            sb.append(bin);
        }
        System.out.println(sb.toString());
        s.close();
    }
}
