class Solution {
    public int largestAltitude(int[] gain) {
        int n = gain.length;
        int[] newArr = new int[n+1];
        newArr[0] = 0;
        int altitudeCount = 0;
        for (int i = 0; i < gain.length; i++) {
            altitudeCount += gain[i];
            newArr[i+1] = altitudeCount;
        }
        int maxAltitude = newArr[0];
        for (int i = 0; i < newArr.length; i++) {
            if (maxAltitude  < newArr[i]) {
                maxAltitude = newArr[i];
            }
        }
        return maxAltitude;
    }
}