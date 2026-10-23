import java.util.Scanner;

public class XArrangeTheNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            for (int i = 1; i <= n; i+=2) {
                System.out.print(i + " ");
            }
            int start = n;
            if (n%2 != 0) {
                start = n-1;
            }
            for (int i = start; i >= 2; i-=2) {
                System.out.print(i);
                if (i > 2) {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        sc.close();
    }
}