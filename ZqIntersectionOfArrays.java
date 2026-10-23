import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.io.IOException;

public class ZqIntersectionOfArrays {
    public static void main(String[] args)  {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- >0) {
            int n = sc.nextInt();
            int[] arr1 = new int[n];
            for (int i = 0; i < n; i++) {
                arr1[i] = sc.nextInt();
            }
            int m = sc.nextInt();
            int[] arr2 = new int[m];
            for (int j = 0; j < m; j++) {
                arr2[j] = sc.nextInt();
            }

            for (int i = 0; i < arr1.length; i++) {
                for (int j = 0; j < arr2.length; j++) {
                    if (arr1[i] == arr2[j]) {
                        System.out.print(arr1[i] + " ");
                        arr2[j] = Integer.MIN_VALUE;
                        break;
                    }
                }
            }
            System.out.println();
        }
        sc.close();
    }
}