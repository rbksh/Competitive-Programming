import java.util.Scanner;

public class WTrimSpaces {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String s2 = s.replace(" ", "");
        System.out.print(s2);
        sc.close();
    }
}