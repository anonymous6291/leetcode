import java.util.HashMap;
import java.util.Map;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            Integer j = map.get(target - nums[i]);
            if (j != null)
                return new int[] { j, i };
            map.put(nums[i], i);
        }
        return new int[] { 0, 0 };
    }
}
