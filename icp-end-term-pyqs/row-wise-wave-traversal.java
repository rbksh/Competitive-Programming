import java.util.Scanner;

public class row-wise-wave-traversal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] matrix = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < n; i++) {
            if (i%2 == 0) {
                for (int j = 0; j < n; j++) {
                    if (j == n-1) {
                        System.out.print(matrix[i][j]);
                    } else {
                        System.out.print(matrix[i][j] + " ");
                    }
                }
            } else {
                for (int j = n-1; j >= 0; j--) {
                    if (j == 0) {
                        System.out.print(matrix[i][j]);
                    } else {
                        System.out.print(matrix[i][j] + " ");
                    }
                }
            }
        }
        sc.close();
    }
}