class Solution {
    public int maxChunksToSorted(int[] arr) {
        return find(arr, 0, arr.length, 0, new boolean[arr.length]);
    }

    private int find(int arr[], int i, int n, int s, boolean f[]) {
        if (i == n)
            return 0;
        int max = s;
        while (i < n) {
            f[arr[i]] = true;
            max = Math.max(max, arr[i]);
            if (allTrue(f, s, max))
                return 1 + find(arr, i + 1, n, max + 1, f);
            ++i;
        }
        return 1;
    }

    private boolean allTrue(boolean f[], int s, int e) {
        while (s <= e) {
            if (!f[s])
                return false;
            ++s;
        }
        return true;
    }
}
