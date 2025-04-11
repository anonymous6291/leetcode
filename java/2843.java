class Solution {
    private boolean symmetric(int i) {
        if (i < 10 || (i > 99 && i < 1000) || i == 10000)
            return false;
        if (i > 999)
            return (i / 1000 + (i / 100) % 10) == ((i / 10) % 10 + i % 10);
        return i % 11 == 0;
    }

    public int countSymmetricIntegers(int low, int high) {
        int count = 0;
        while (low <= high)
            if (symmetric(low++))
                count++;
        return count;
    }
}
