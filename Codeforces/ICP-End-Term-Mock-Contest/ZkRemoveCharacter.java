import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Scanner;
import java.util.StringTokenizer;

public class ZkRemoveCharacter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        char x = sc.next().charAt(0);

        String s2 = s.replace(String.valueOf(x), "");
        System.out.print(s2);
        sc.close();
    }
}