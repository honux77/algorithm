import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class Main {

	static List<Integer> stringToIntList(String line) throws IOException {
		return Arrays.stream(line.split(" ")).map(Integer::parseInt).collect(Collectors.toList());
	}

	static void printTruck(List<Integer> bridge, int time, int cw) throws InterruptedException {
		StringBuffer sb = new StringBuffer();

		for (int t: bridge) {
			if (t == 0) {
				sb.append("_");
			} else {
				sb.append(t);
			}
		}
		System.out.printf("%5d %5d %s\n\n", time, cw, sb.toString());
	}

	public static void main(String[] args) throws NumberFormatException, IOException, InterruptedException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		List <Integer> li = stringToIntList(br.readLine());
		//int n = li.get(0);
		int w = li.get(1); //bridge length
		int l = li.get(2); //max length

		List <Integer> trucks  = stringToIntList(br.readLine());		
		List <Integer> bridge = new ArrayList<>();
		
		//init bridge
		for(int i = 0; i < w; i++) {
			bridge.add(0);
		}

		int time = 0;
		int cw = l;
		//printTruck(bridge, time, cw);
		while(!trucks.isEmpty()|| cw != l) {
			time++;
			cw += bridge.remove(0);			
			if (!trucks.isEmpty() && cw >= trucks.get(0)) {				
				int truck = trucks.remove(0);
				bridge.add(truck);
				cw -= truck;				
			} else {
				bridge.add(0);
			}
			printTruck(bridge, time, cw);
		}
		System.out.println(time);
		br.close();
	}
}
