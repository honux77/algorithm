import java.util.Scanner;
import java.util.Stack;

public class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		for (int i = 0; i < n; i++) {
			if (match(s)) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			};			
		}
		
		s.close();
	}

	private static boolean match(Scanner s) {
		String p = s.next();
		Stack <Character> st = new Stack<>();
		for (int i = 0; i < p.length(); i++) {
			char c = p.charAt(i);
			switch (c) {
				case '(':
				st.add(c);
				break;
				case ')':
				if (st.empty()) {
					return false;	
				} else {
					 st.pop();
				}
			} 
		}
		return st.empty();		
	}
}
