import java.util.Scanner;

static boolean isArmstrong(int n) {
    int temp = n;
    int digitsCount = countDigits(n);
    int sum = 0;
    while (n > 0) {
        int digit = n%10;
        sum = sum + Math.pow(digit,digitsCount);
    }
    return (sum == temp);

}

static int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n = n/10;
    }
    return count;
}

public class ArmstrongNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (isArmstrong(n)) {
            System.out.print();
        } 
        sc.close();
    }
}