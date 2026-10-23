import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class ZcFindMaximum {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = null;

        String line = br.readLine();
        if (line == null || line.trim().isEmpty()) return;
        st = new StringTokenizer(line);
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        int maxElement = Integer.MIN_VALUE;

        for (int i = 0; i < n; i++) {
            while (st == null || !st.hasMoreTokens()) {
                line = br.readLine();
                if (line == null) break;
                st = new StringTokenizer(line);
            }
            for (int j = 0; j < m; j++) {
                if (st == null || !st.hasMoreTokens()) {
                    line = br.readLine();
                    if (line == null) break;
                    st = new StringTokenizer(line);
                }
                int val = Integer.parseInt(st.nextToken());
                if (val > maxElement) {
                    maxElement = val;
                }
            }
        }

        System.out.print(maxElement);
    }
}