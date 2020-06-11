import java.util.Scanner;

public class Main {

	static int[] primes;

	static void findPrimes(int m) {
		primes = new int[m];
        primes[0] = primes[1] = primes[2] = 1;
		for (int i = 3; i < m; i++) {			
			if (primes[i] == 1) {
				continue;
			}			
			for (int j = i * 2; j < m; j+= i) {
				primes[j] = 1;
			}
		}
	}
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);		
		findPrimes(1000001);

		int num;
		while((num = s.nextInt()) != 0) {
			solve(num);
		}
		s.close();
	}

	private static boolean isPrime(int n) {
		return primes[n] == 0;
	}

	private static int nextPrime(int p) {
		p++;
		while (p < primes.length) {
			if (isPrime(p)) return p;
			p++;
		}
		return -1;
	}

	private static void solve(int num) {
		int a = 3;
		int b = num - a;
		while (a <= b) {
			if (isPrime(b)) {
                break;
			}
			a = nextPrime(a);
			b = num - a;
		}
		System.out.printf("%d + %d = %d\n", a, b, num);
	}
}