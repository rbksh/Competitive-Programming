import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class JAntiDiagonalSum {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = null;

       
        int n = Integer.parseInt(br.readLine().trim());
        int[][] matrix = new int[n][n];

        for (int i = 0; i < n; i++) {
            while (st == null || !st.hasMoreTokens()) {
                String line = br.readLine();
                if (line == null) break;
                st = new StringTokenizer(line);
            }
            for (int j = 0; j < n; j++) {
                if (!st.hasMoreTokens()) {
                    st = new StringTokenizer(br.readLine());
                }
                matrix[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        long antiDiagonalSum = 0;
        for (int i = 0; i < n; i++) {
            antiDiagonalSum += matrix[i][n - 1 - i];
        }

        System.out.println(antiDiagonalSum);
    }
}