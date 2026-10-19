import java.util.Scanner;

public class PalindromeArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int[] newArr = new int[n];

        for (int i = 0; i < n; i++) {
            newArr[i] = arr[n-i-1];
        }

        boolean isPalindrome = true;
        for (int i = 0; i < n; i++) {
            if (arr[i] != newArr[i]) {
                isPalindrome = false;
            }
        }

        if (isPalindrome) {

        } else {
            
        }

        sc.close();
    }
}