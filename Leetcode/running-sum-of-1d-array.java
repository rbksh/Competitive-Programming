class Solution {
    public int[] runningSum(int[] nums) {
        int currentSum = 0;
        int[] newArr = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            currentSum += nums[i];
            newArr[i] = currentSum;
        }
        return newArr;
    }
}