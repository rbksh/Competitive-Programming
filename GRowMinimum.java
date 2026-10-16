import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class GRowMinimum {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            int min = Integer.MAX_VALUE;
            for (int j = 0; j < m; j++) {
                int val = Integer.parseInt(st.nextToken());
                if (val < min) min = val;
            }
            sb.append(min).append(" ");
        }
        System.out.print(sb);
    }
}