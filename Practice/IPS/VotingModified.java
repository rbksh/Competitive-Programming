import java.util.Scanner;

public class VotingModified {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int candidate1 = -1; int candidate2 = -1;
        int count1 = 0; int count2 = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == candidate1) {
                count1++;
            } else if (arr[i] == candidate2) {
                count2++;
            } else if (count1 == 0) {
                candidate1 = arr[i];
                count1 = 1;
            } else if (count2 == 0) {
                candidate2 = arr[i];
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }
        int freq1 = 0; int freq2 = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == candidate1) {
                freq1++;
            } else if (arr[i] == candidate2) {
                freq2++;
            }
        }
        int len = arr.length/3;
        if (freq1 > len) {
            return candidate1;
        } else if (freq2 > len) {
            return candidate2;
        }
        return -1;
    }
}