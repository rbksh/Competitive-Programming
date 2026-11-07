class Solution {
    public int majorityElement(int[] nums) {
        int counter = 0;
        int candidate = -1;
        for (int i = 0; i < nums.length; i++) {
            if (counter == 0) {
                candidate = nums[i];
                counter = 1;
            } else if (candidate == nums[i]) {
                counter++;
            } else {
                counter--;
            }
        }
        int freq = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == candidate) {
                freq++;
            }
        }
        int temp = 0;
        if (freq > nums.length/2) {
            temp = candidate;
        }
        return candidate;
    }
}