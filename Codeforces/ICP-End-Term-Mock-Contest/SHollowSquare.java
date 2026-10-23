import java.util.Scanner;

public class SHollowSquare {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            if (i == 0 || i == n-1) {
                for (int j = 0; j < n; j++) {
                    System.out.print("*");
                }
                System.out.println();
            } else {
                System.out.print("*");
                for (int k = 0; k < n-2; k++) {
                    System.out.print(" ");
                }
                System.out.print("*");
                System.out.println();
            }
            sc.close();
        }
    }
}