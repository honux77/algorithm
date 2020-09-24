import java.util.Scanner;

public class Main {

	static boolean checkGen(int a, int b) {
		int s = a;
		while (a != 0) {
			int d = a % 10;
			a /= 10;
			s += d;
		}
		return s==b;
		
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		for (int i = 1; i < n; i++) {
			if (checkGen(i, n)) {
				System.out.println(i);
				return;
			}
		}
		System.out.println(0);
		s.close();
	}
}
