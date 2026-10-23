import java.util.Scanner;

public class RemoveKFactors {
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
        int[] minimums = new int[n];

        for (int i = 0; i < n; i++) {
            int minVal = matrix[i][0];
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] >= 0 && minVal > matrix[i][j]) {
                    minVal = matrix[i][j];
                    minimums[i] = minVal;
                } else {
                    minVal = 0;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            System.out.print(minimums[i] + " ");
        }
        sc.close();
    }
}