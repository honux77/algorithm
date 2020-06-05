import java.util.Scanner;

public class Hello {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		System.out.printf("hello %d\n", n);
		s.close();
	}
}
