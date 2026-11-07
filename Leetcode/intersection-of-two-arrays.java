class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        int n = nums1.length;
        int m = nums2.length;
        int[] temp = new int[n < m ? n : m];
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            boolean found = false;
            for (int k = 0; k < count; k++) {
                if (temp[k] == nums1[i]) {
                    found = true;
                    break;
                }
            }
            if (found) continue;
            
            for (int j = 0; j < m; j++) {
                if (nums1[i] == nums2[j]) {
                    temp[count++] = nums1[i];
                    break;
                }
            }
        }
        
        int[] result = new int[count];
        for (int i = 0; i < count; i++) {
            result[i] = temp[i];
        }
        return result;
    }
}