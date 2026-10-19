import java.util.Scanner;

public class ZlInvertedVerticalTriangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();

        int totalRows = 2 * n - 1;
        for (int i = 0; i < totalRows; i++) {
            int spaces = i;
            if (i >= n) {
                spaces = totalRows - 1 - i;
            }

            if (spaces == 0) {
                System.out.println("*");
            } else {
                System.out.print("*");
                for (int j = 0; j < 2 * spaces - 1; j++) {
                    System.out.print(" ");
                }
                System.out.println("*");
            }
        }
    }
}