import java.util.Scanner;

public class EGameOfMinimums {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int k = 0; k < n; k++) {
            arr[k] = sc.nextInt();
        }
        
        int first = Integer.MAX_VALUE;
        int second = Integer.MAX_VALUE;
        int third = Integer.MAX_VALUE;
        
        for (int i = 0; i < n; i++) {
            int val = arr[i];
            
            if (val < first) {
                third = second;
                second = first;
                first = val;
            } 
            else if (val > first && val < second) {
                third = second;
                second = val;
            } 
            else if (val > second && val < third) {
                third = val;
            }
        }
        
        System.out.println(first + " " + second + " " + third);
        sc.close();
    }
}