import java.util.*;

public class BAlphabetGameEasyVersion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int vw = 0;
        int consonants = 0;

        char[] characters = str.toCharArray();

        for (int i = 0; i < characters.length; i++) {
            char ch = Character.toLowerCase(characters[i]);
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vw++;
            } else if (Character.isLetter(ch)) {
                consonants++;
            }
        }
        System.out.print(vw + " " + consonants);
        sc.close();
    }
}