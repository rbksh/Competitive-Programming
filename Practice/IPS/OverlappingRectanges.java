public class Solution {
    public int solve(int A, int B, int C, int D, int E, int F, int G, int H) {
        long x1;
        if (A > E) {
            x1 = A;
        } else {
            x1 = E;
        }

        long x2;
        if (C < G) {
            x2 = C;
        } else {
            x2 = G;
        }

        long xWidth = x2 - x1;
        if (xWidth < 0) {
            xWidth = 0;
        }

        long y1;
        if (B > F) {
            y1 = B;
        } else {
            y1 = F;
        }

        long y2;
        if (D < H) {
            y2 = D;
        } else {
            y2 = H;
        }

        long yHeight = y2 - y1;
        if (yHeight < 0) {
            yHeight = 0;
        }

        return (int) (xWidth * yHeight);
    }
}