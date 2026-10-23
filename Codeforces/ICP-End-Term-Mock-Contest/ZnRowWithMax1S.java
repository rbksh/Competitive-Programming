import java.util.Scanner;

public class ZnRowWithMax1S {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int max_one = 0;
        int best_index = -1;

        int[][] matrix = new int[n][m];
        for (int i = 0; i < n; i++) {
            int currentOnes = 0;
            for (int j = 0; j < m; j++) {
                matrix[i][j] = sc.nextInt();
                if (matrix[i][j] == 1) {
                    currentOnes++;
                }
            }

            if (currentOnes > max_one) {
                max_one = currentOnes;
                best_index = i;
            }
        }

        System.out.print(best_index);

        sc.close();
    }
}