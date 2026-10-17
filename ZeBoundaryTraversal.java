import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class ZeBoundaryTraversal {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        
        long[][] a = new long[n][m];
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < m; j++) {
                a[i][j] = Long.parseLong(st.nextToken());
            }
        }
        
        // Edge Case 1: Single Row
        if (n == 1) {
            for (int j = 0; j < m; j++) {
                System.out.print(a[0][j]);
                if (j < m - 1) {
                    System.out.print(" ");
                }
            }
        }
        // Edge Case 2: Single Column
        else if (m == 1) {
            for (int i = 0; i < n; i++) {
                System.out.print(a[i][0]);
                if (i < n - 1) {
                    System.out.print(" ");
                }
            }
        } 
        else {
            // 1. Top Row (Left to Right)
            for (int j = 0; j < m; j++) {
                System.out.print(a[0][j] + " ");
            }
            // 2. Right Column (Top to Bottom, skip top-right corner)
            for (int i = 1; i < n; i++) {
                System.out.print(a[i][m - 1] + " ");
            }
            // 3. Bottom Row (Right to Left, skip bottom-right corner)
            for (int j = m - 2; j >= 0; j--) {
                System.out.print(a[n - 1][j] + " ");
            }
            // 4. Left Column (Bottom to Top, skip bottom-left & top-left corners)
            for (int i = n - 2; i >= 1; i--) {
                System.out.print(a[i][0]);
                if (i > 1) {
                    System.out.print(" ");
                }
            }
        }
        
        System.out.println();
    }
}