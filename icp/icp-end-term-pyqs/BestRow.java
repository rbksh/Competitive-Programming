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
        int[] rowSums = new int[n];

        for (int i = 0; i < n; i++) {
            int RowSum = 0;
            for (int j = 0; j < m; j++) {
                RowSum+=matrix[i][j];
            }
            rowSums[i] = RowSum;
        }

        int maxRowSum = rowSums[0];
        for (int i = 0; i < rowSums.length; i++) {
            if (maxRowSum < rowSums[i]) {
                maxRowSum = rowSums[i];
            }
        }
        System.out.print(maxRowSum);
        sc.close();
    }
}