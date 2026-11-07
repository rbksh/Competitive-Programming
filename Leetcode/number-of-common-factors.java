class Solution {
    public int commonFactors(int a, int b) {
        int temp = a;
        if (a > b) {
            temp = b;
        }
        int commonFactors = 0;
        for (int i = 1; i <= temp; i++) {
            if (a%i == 0 && b%i == 0) {
                commonFactors++;
            }
        }
        return commonFactors;
    }
}