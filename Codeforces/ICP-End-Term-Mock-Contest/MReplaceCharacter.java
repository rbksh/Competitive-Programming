import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class MReplaceCharacter {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();
        
        String line = br.readLine();
        while (line != null && line.trim().isEmpty()) {
            line = br.readLine();
        }
        
        if (line != null) {
            StringTokenizer st = new StringTokenizer(line);
            char c1 = st.nextToken().charAt(0);
            char c2 = st.nextToken().charAt(0);
            System.out.print(s.replace(c1, c2));
        }
    }
}