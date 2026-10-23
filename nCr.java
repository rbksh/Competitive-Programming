import java.util.Scanner;

public class nCr {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int r = sc.nextInt();
        long nf = 1;
        for (int i = 1; i <= n; i++) {
            nf = nf*i;
        }

        long rf = 1;
        for (int i = 1; i <= r; i++)  {
            rf = rf*i;
        }

        long nrf = 1;

        for (int i = 1; i <= n-r; i++) {
            nrf = nrf*i;
        }

        int result = (nf/(rf*nrf));
        System.out.print(result);

        sc.close();
    }
}