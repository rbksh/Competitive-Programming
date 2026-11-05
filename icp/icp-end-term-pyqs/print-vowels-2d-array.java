import java.util.Scanner;

public class print-vowels-2d-array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] strings = new String[n];
        for (int i = 0; i < n; i++) {
            strings[i] = sc.nextLine();
        }

        String[] vowels = new String[];

        for (String word: strings) {
            String currentVowels = "";
            for (int i = 0; i < word.length(); i++) {
                ch = Character.toLowerCase(word.charAt(i));
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    currentVowels+=ch;
                }
            }
            vowels[i] = currentVowels;
        }

        for (int i = 0; i < vowels.length; i++) {
            System.out.print(vowels[i] + " ");
        }
        sc.close();
    }
}