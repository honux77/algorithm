import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.Stack;
public class Main {

    public static void tsort(Stack<Integer> stack, boolean[] visited, List<List<Integer>> g, int v, int n) {
        visited[v] = true;
        for (int i: g.get(v)) {
            if (!visited[i]) {
                tsort(stack, visited, g, i, n);
            }
        }        
        stack.push(v);
    }

    public static void main(final String[] args) {
		Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int m = s.nextInt();

        List<List<Integer>> g = new ArrayList<>();
        for (int i = 0; i <= n; i++) {
            g.add(new ArrayList<Integer>());
        }

        boolean []visited = new boolean[n + 1];

        for (int i = 0; i < m; i++) {
            int u = s.nextInt();
            int v = s.nextInt();
            g.get(u).add(v);
        }

        Stack <Integer> stack = new Stack<>();

        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                tsort(stack, visited, g, i, n);
            }
        }

        while (!stack.empty()) {
            System.out.println(stack.pop());
        }
		s.close();
	}
}
