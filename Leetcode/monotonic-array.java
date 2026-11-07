class Solution {
    public boolean isMonotonic(int[] nums) {
        int n = nums.length;
        boolean isIncreasing = true;
        boolean isDecreasing = true;
        for (int i = 1; i <= n-1; i++) {
            if (nums[i-1] > nums[i]) {
                isIncreasing = false;
            } 
            if (nums[i-1] < nums[i]) {
                isDecreasing = false;
            }
            if (!isIncreasing && !isDecreasing) {
                return false;
            }
        }
        return (isIncreasing || isDecreasing);
    }
}   