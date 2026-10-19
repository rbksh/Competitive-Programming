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
        for (int i = 0; i < n/2; i++) {
            if (arr[i] != arr[n-i-1]) {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome) System.out.print("palindrome");
        else System.out.print("not palindrome");
        sc.close();
    }
}