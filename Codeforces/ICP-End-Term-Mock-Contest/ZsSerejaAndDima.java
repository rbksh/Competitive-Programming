import java.util.Scanner;

public class ZsSerejaAndDima {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int[] cards = new int[n];
        
        for (int i = 0; i < n; i++) {
            cards[i] = sc.nextInt();
        }
        
        int[] serejaCards = new int[(n + 1) / 2];
        int[] dimaCards = new int[n / 2];
        
        int sIndex = 0;
        int dIndex = 0;
        int left = 0;
        int right = n - 1;
        
        for (int turn = 0; turn < n; turn++) {
            int chosen;
            
            if (cards[left] > cards[right]) {
                chosen = cards[left];
                left++;
            } else {
                chosen = cards[right];
                right--;
            }
            
            if (turn % 2 == 0) {
                serejaCards[sIndex] = chosen;
                sIndex++;
            } else {
                dimaCards[dIndex] = chosen;
                dIndex++;
            }
        }
        
        int serejaSum = 0;
        for (int i = 0; i < sIndex; i++) {
            serejaSum += serejaCards[i];
        }
        
        int dimaSum = 0;
        for (int i = 0; i < dIndex; i++) {
            dimaSum += dimaCards[i];
        }
        
        System.out.println(serejaSum + " " + dimaSum);
        
        sc.close();
    }
}