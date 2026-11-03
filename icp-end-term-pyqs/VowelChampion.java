import java.util.Scanner;


public class RemoveKFactors {
    static boolean isVowel(char ch) {
       char lower = Character.toLowerCase(ch);
       if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
        return true;
       } else {
        return false;
       }
    }

    static int countVowels(String s) {
        int len = s.length();
        int count = 0;
        for (int i = 0; i < len; i++) {
            char ch = Character.toLowerCase(s.charAt(i));
            if (isVowel(ch)) {
                count++;
            }
        }
        return count;
    }

    static int bestWord(String[] words) {
        int ans = 0; 
        for (String word: words) {
            for (int i = 0; i < word.length(); i++) {
                int count = countVowels(word);
                ans = Math.max(ans, count);
            }
        }
        return ans;
    }




    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] strings = new String[n];
        for (int i = 0; i < n; i++) {
            strings[i] = sc.nextLine();
        }


        sc.close();
    }
}