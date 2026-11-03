import java.util.Scanner;

public class RemoveKFactors {
    static int reverseArr(int[] arr, int start, int end) {
        int left = start;
        int right = end;
        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            right--;
            left++;
        }
        return arr;
    }



    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int x = sc.nextInt();
        int y = sc.nextInt();

        System.out.print(reverseArr(arr, x, y));


        sc.close();
    }
}