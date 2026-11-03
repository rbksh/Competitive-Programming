import java.util.Scanner;

public class ZoTriplets {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int lastVal = arr[n-1];
        int j = n-2;

        while (j >=0 && arr[j] > lastVal) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = lastVal;

        
        sc.close();
    }
}