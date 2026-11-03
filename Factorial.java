import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long fact = 1; //using long to avoid overflow of integers

        for (int i = 1; i <= n; i++) {
            fact = fact*i;
        }
        System.out.print(fact);
        sc.close();
    }
}