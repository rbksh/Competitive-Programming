import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Scanner;
import java.util.StringTokenizer;

public class ZeBoundaryTraversal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        int[][] matrix = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        if (n == 1) {
            for (int j = 0; j < m; j++) {
                System.out.print(matrix[0][j]);
                if (j < m-1) {
                    System.out.print(" ");
                }
            }
        } else if (m == 1) {
            for (int i = 0; i < n; i++) {
                System.out.print(matrix[i][0]);
                if (i < n-1) {
                    System.out.print(" ");
                }
            }
        } else {
            for (int j = 0; j < m; j++) {
                System.out.print(matrix[0][j] + " ");
            }
            for (int i = 1; i < n; i++) {
                System.out.print(matrix[i][m-1] + " ");
            }
            for (int j = m-2; j >= 0; j--) {
                System.out.print(matrix[n-1][j] + " ");
            }
            for (int i = n-2; i > 0; i--) {
                System.out.print(matrix[i][0]);
                if (i > 1) {
                    System.out.print(" ");
                }
            }
        }
        sc.close();
    }
}