// import java.io.BufferedReader;
// import java.io.InputStreamReader;
// import java.io.IOException;
// import java.util.Scanner;
// import java.util.StringTokenizer;

// public class YReverseEachWord {

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         String s = sc.nextLine();
//         String[] words = s.split("\\s+");
//         StringBuilder result = new StringBuilder();

//         for (String word: words) {
//             String reversed = "";
//             for (int i = word.length()-1; i >= 0; i--) {
//                 reversed+=word.charAt(i);
//             }
//             result.append(reversed).append(" ");
//         }
//         System.out.print(result.toString());
//         sc.close();
//     }
// }

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class YReverseEachWord {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();
        if (s == null) return;
        StringTokenizer st = new StringTokenizer(s);
        StringBuilder result = new StringBuilder();

        while (st.hasMoreTokens()) {
            StringBuilder word = new StringBuilder(st.nextToken());
            result.append(word.reverse()).append(" ");
        }
        System.out.print(result.toString().trim());
    }
}