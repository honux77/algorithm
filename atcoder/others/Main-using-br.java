import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int n = Integer.parseInt(br.readLine());

		Point[] a = new Point[n];

		for (int i = 0; i < n; i++) {
			String[] t = br.readLine().split(" ");
			int x = Integer.parseInt(t[0]);
			int y = Integer.parseInt(t[1]);			
			a[i] = new Point(x, y);
		}	

		for (var p: a) {
			bw.write(p.x + " " + p.y + "\n");
		}
		
		br.close();
		bw.close();
	}
}

class Point {
	int x;
	int y;
	Point(int x, int y) {
		this.x = x;
		this.y = y;
	}
}
