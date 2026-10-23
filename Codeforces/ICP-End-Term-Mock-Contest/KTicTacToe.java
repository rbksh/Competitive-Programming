import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class KTicTacToe {
    public static boolean checkWin(char[][] board, char p) {
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == p && board[i][1] == p && board[i][2] == p) return true;
            if (board[0][i] == p && board[1][i] == p && board[2][i] == p) return true;
        }
        if (board[0][0] == p && board[1][1] == p && board[2][2] == p) return true;
        if (board[0][2] == p && board[1][1] == p && board[2][0] == p) return true;
        return false;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        char[][] board = new char[3][3];
        boolean hasEmpty = false;

        for (int i = 0; i < 3; i++) {
            String line = br.readLine();
            for (int j = 0; j < 3; j++) {
                board[i][j] = line.charAt(j);
                if (board[i][j] == '.') {
                    hasEmpty = true;
                }
            }
        }

        if (checkWin(board, 'X')) {
            System.out.println("Player X has won!");
        } else if (checkWin(board, 'O')) {
            System.out.println("Player O has won!");
        } else if (!hasEmpty) {
            System.out.println("Draw");
        } else {
            System.out.println("Game is still in progress");
        }
    }
}