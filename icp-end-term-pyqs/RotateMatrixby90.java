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
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; i++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
//if we have to rotate counter-clockwise, first reverse rows then take transpose.
        int[][] newMatrix = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = m-1; j >= 0; j--) {
                newMatrix[i][n-j-1] = matrix[i][j];
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print(newMatrix[i][j] + " ");
            }
        }
        sc.close();
    }
}