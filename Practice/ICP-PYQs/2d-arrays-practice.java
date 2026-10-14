import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        int[][] matrix = new int[N][M];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }
        sc.close();

    }

    void printMat(int mat[][]) {
        int n = mat.length;
        int m = mat[0].length;

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < m; c++) {
                System.out.print(mat[r][c] + " ");
            }
            System.out.println();
        }
    }

    void colSum(int mat[][]) {
        int n = mat.length;
        int m = mat[0].length;
        
        for (int i = 0; i < m; i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                sum+=mat[j][i];
            }
            System.out.println(sum);
        }
    }

    void printMainDiagonal1(int mat[][]) { // N*N iterations
        int N = mat.length;
        int M = mat[0].length;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (i == j) {
                    System.out.print(mat[i][j]);
                }
                System.out.println();
            }
        }
    }

    void printMainDiagonal2(int mat[][]) { //N Iterations
        int N = mat.length;
        for (int i = 0; i < N; i++) {
            System.out.print(mat[i][i] + " ");
        }
        System.out.println();
    }

    void printAntiDiagonal1(int mat[][]) {
        int N = mat.length;
        int M = mat[0].length;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (i + j == N-1) {
                    System.out.print(mat[i][j] + " ");
                }
                System.out.println();
            }
        }
    }

    void printAntiDiagonal2(int mat[][]) { //N iterations
        int N = mat.length;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N-1-i; j++) {
                System.out.print(mat[i][j]);
            }
            System.out.println();
        }
    }
}