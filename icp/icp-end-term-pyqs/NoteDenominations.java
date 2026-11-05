import java.util.Scanner;

public class RemoveKFactors {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] notes = {500,100,50,20,10,5,2,1};
        for (int x : notes) {
            System.out.print(x + " = " + n/x);
            n=n%x;
        }
        sc.close();
    }
}