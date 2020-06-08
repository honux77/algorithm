import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.List;

public class Main {

	static int[] toIntArray(String line) throws IOException {
		return Arrays.stream(line.split(" ")).mapToInt(Integer::parseInt).toArray();
	}

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int[] arr = toIntArray(br.readLine());
		int n = arr[0];
		int l = arr[1];
		int w = arr[2];

		int[] tr = toIntArray(br.readLine());		

		System.out.printf("hello %d %d %d\n", n, l, w);
		br.close();
	}
}
