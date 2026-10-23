import java.util.*;

public class CAlphabetGameHardVersion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int q = sc.nextInt();
        
        while(q-- > 0) {
            int l = sc.nextInt();
            int r = sc.nextInt();
            int vw = 0;
            int consonants = 0;
            
            for (int i = l - 1; i <= r - 1; i++) {
                char ch = Character.toLowerCase(s.charAt(i));
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    vw++;
                } else {
                    consonants++;
                }
            }
            System.out.println(vw + " " + consonants);
        }
        sc.close();
    }
}