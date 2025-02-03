class Solution {
    int max(int i,int j){
        return (i > j) ? i : j;
    }

    int longestMonotonicSubarray(List<int> nums) {
        int ic = 1, dc = 1, ml = 1, n = nums.length;
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] < nums[i]) {
                ic++;
                dc = 1;
            } else if (nums[i - 1] > nums[i]) {
                ic = 1;
                dc++;
            } else {
                ic = 1;
                dc = 1;
            }
            ml = max(max(ic, dc), ml);
        }
        return ml;
    }
}
