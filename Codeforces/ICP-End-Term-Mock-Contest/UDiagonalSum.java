import java.util.Scanner;

public class UDiagonalSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[][] matrix = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        int diagonalSum = 0;
        for (int i = 0; i < n; i++) {
            diagonalSum+=matrix[i][i];
        }

        System.out.print(diagonalSum);

        sc.close();
    }
}