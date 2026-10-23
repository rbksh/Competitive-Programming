import java.util.Scanner;

public class AverageOfArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            sum+=arr[i];
        }
        int len = arr.length;
        int average = (sum/len);
        System.out.print(average);
        sc.close();
    }
}