import java.util.Scanner;

public class ZoTriplets {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            int mid = n/2;
            int spaces = Math.abs(i-mid);
            for (int j = 0; j < spaces; j++) {
                System.out.print(" ");
            }
            int peakVal = mid + 1 - spaces;
            for (int j = peak; j >= 1; j--) {
                System.out.print(j + " ");
            }
            for (int j = 2; j <= peak; j++) {
                System.out.print(j);
            }
            System.out.println();
        }
        sc.close();
    }
}