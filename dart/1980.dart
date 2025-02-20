class Solution {
    String findDifferentBinaryString(List<String> nums) {
        int n = nums.length;
        String res = "";
        for (int i = 0; i < n; i++)
            res += (nums[i][i] == '1') ? '0' : '1';
        return res;
    }
}
