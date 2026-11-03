import java.util.Scanner;

public class ZoTriplets {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int totalRows = 2*n-1;
        for (int i = 1; i <= totalRows; i++) {
            int width = 0;
            if (i <= n) {
                width = i;
            } else {
                width = 2*n-i;
            }

            for (int j = 1; j <= width; j++) {
                if (i%2 == j%2) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        sc.close();
    }
}