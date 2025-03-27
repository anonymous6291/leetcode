class Solution {
private:
    bool prime(int n) {
        if (n == 1)
            return false;
        int s = 2, e = (int)sqrt(n);
        while (s <= e)
            if (n % s++ == 0)
                return false;
        return true;
    }

public:
    int maximumPrimeDifference(vector<int>& nums) {
        int s = 0, e = nums.size() - 1;
        while (s <= e)
            if (prime(nums[s++]))
                break;
        s--;
        while (s <= e)
            if (prime(nums[e--]))
                return e - s + 1;
        return e - s + 1;
    }
};
