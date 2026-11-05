import java.util.*;

public class GoodContest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[3];
        for (int i = 0; i < 3; i++) {
            arr[i] = sc.nextInt();
        }
        int weakCount = -1;

        if ((arr[0] == arr[1]) && (arr[1] == arr[2])) {
            weakCount = 0;
            System.out.println(weakCount);
        }
        
        if ((arr[0] == arr[1]) || (arr[1] == arr[2])) 
    }

}
