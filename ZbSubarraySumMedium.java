import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Scanner;
import java.util.StringTokenizer;

public class ZbSubarraySumMedium {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        long totalSum = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            long count = (long)(i+1)*(n-i);
            totalSum = totalSum + arr[i]*count;
        }

        System.out.print(totalSum);


        sc.close();
    }
}