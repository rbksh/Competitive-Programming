public class Solution {
    public int[] plusOne(int[] digits) {
        int n = digits.length;
        if (n > 1 && digits[n-1] < 9) {
            digits[n-1] += 1;
            return digits;
        } else if (n == 1 && digits[n-1] == 9) {
            int[] newArr = new int[n+1];
            newArr[1] = 0;
            newArr[0] = 1;
            return newArr;
        } else {
            int[] newArr = new int[n+1];
            newArr[n] = 0;
            int carry = 1;
            for (int i = n - 1; i >= 0; i--) {
                int sum = digits[i] + carry;
                newArr[i + 1] = sum % 10;
                carry = sum / 10;
            }
            newArr[0] = carry;
            if (carry == 0) {
                int[] trimmed = new int[n];
                for (int i = 0; i < n; i++) {
                    trimmed[i] = newArr[i + 1];
                }
                return trimmed;
            }
            return newArr;
        }
    }
}