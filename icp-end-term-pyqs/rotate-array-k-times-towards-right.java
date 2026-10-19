import java.util.Scanner;

public class rotate-array-k-times-towards-right {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        if (k == 0) return;
        if (n <= 1) return;
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int[] temp = new int[n];
        for (int i = 0; i < n; i++) {
            int newPosition = (i+k)%n; //if we have to rotate it towards left, then put i+k = i+k-n
            temp[newPosition] = arr[i];
        }

        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        sc.close();
    }
}