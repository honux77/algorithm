import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String[] o = br.readLine().split(" ");
		int m = Integer.parseInt(o[0]);
		int n = Integer.parseInt(o[1]);
		int b = Integer.parseInt(o[2]);

		List <Long> l = new ArrayList<>();
		
		for (int i = 0; i < m; i++) {
			o = br.readLine().split(" ");
			for (int j = 0; j < n ; j++) {	
				l.add(Long.parseLong(o[j]));						
			}
		}

		long max = Collections.max(l);
		long min = Collections.min(l);

		long ans = Long.MAX_VALUE;
		long ansHeight = 0;

		for (long i = min; i <= max; i++) {
			long put = 0;
			long remove = 0;
			for (int j= 0; j < l.size(); j++) {
				long x = l.get(j);
				if (x > i) {
					remove += x - i;					
				}				 
					
				if (x < i) {
					put += i - x;
				}
			}
			if (put <= remove + b) {
				long cost = put + remove * 2;
				if (cost <= ans) {
					ans = cost;
					ansHeight = i;
				}
			}			
		}

		System.out.println(ans + " " + ansHeight);		
		br.close();
	}
}
