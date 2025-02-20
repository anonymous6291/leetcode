class Solution {
    public String findDifferentBinaryString(String[] nums) {
        int n = nums.length;
        char res[] = new char[n];
        for (int i = 0; i < n; i++)
            res[i] = (nums[i].charAt(i) == '1') ? '0' : '1';
        return new String(res);
    }
}
