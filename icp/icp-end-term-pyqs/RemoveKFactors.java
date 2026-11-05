import java.util.Scanner;

public class RemoveKFactors {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int[] newArr = new int[];

        int k = sc.nextInt();

        for (int i = 0; i < arr.length; i++) {
            int countDivisors = 0;
            for (int j = 1; j <= arr[i]; j++) {
                if (arr[i]%j == 0) {
                    countDivisors++;
                }
                int l = 0;
                if(countDivisors != k) {
                    newArr[l] = arr[i];
                    l++;
                }
            }

        }

        for (int i = 0; i < newArr.length; i++) {
            System.out.print(newArr[i] + " ");
        }
        sc.close();
    }
}