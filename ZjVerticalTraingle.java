import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Scanner;
import java.util.StringTokenizer;

public class ZjVerticalTraingle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0 ; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }

        for (int k = n-1; k >= 1; k--) {
            for (int l = 1; l <= k; l++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        sc.close();
    }
}