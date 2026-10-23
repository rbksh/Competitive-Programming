import java.util.Scanner;

public class RemoveKFactors {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        boolean isPalindrome = true;

        int right = n-1;
        int left = 0;
        while (right > left) {
            if (arr[left] != arr[right]) {
                isPalindrome = false;
                break;
            }
            right--;
            left++;
        }

        if (isPalindrome) System.out.print("is palindrome");
        else System.out.print("not palindrome");
        sc.close();
    }
}