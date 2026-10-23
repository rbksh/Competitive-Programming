import java.util.Scanner;

public class ToggleCharacterCase {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char ch = sc.next().charAt(0);
        if (ch >= 'A' && ch <= 'Z') {
            ch = (char)(ch+32);
        } else if (ch >= 'a' && ch <= 'z') {
            ch = (char)(ch - 32);
        }
        System.out.print(ch);
        sc.close();
    }
}