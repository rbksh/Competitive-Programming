class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        int[] newArr = new int[n];
        for (int i = 0; i < n; i++) {
            int newIndex = (i+k)%n;
            newArr[newIndex] = nums[i];
        }
        for (int i = 0; i < n; i++) {
            nums[i] = newArr[i];
        }
        System.out.print(nums);
    }
}