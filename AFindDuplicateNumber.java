import java.util.Scanner;

public class AFindDuplicateNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            int N = sc.nextInt();
            long arraySum = 0; 
            
            for (int m = 0; m < N; m++) {
                arraySum += sc.nextLong();
            }

            long expectedMax = N - 2;
            long expectedSum = (expectedMax * (expectedMax + 1)) / 2;

            long duplicate = arraySum - expectedSum;
            
            System.out.println(duplicate);
        }
        sc.close();
    }
}