public class Solution {
    public int solve(int A) {
        int count = 0;
        for (long k = 1; (k*(k-1)/2) < A; k++) {
            long temp = A-(k*(k-1)/2);
            if (temp%k == 0) {
                count++;
            }
        }
        return count;
    }
}
