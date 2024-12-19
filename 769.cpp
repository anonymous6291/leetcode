class Solution {
private:
    int maxnum(int i, int j) { return (i > j) ? i : j; }

private:
    bool allTrue(bool* f, int s, int e) {
        while (s <= e) {
            if (!f[s])
                return false;
            ++s;
        }
        return true;
    }

private:
    int find(vector<int>& arr, int i, int n, int s, bool* f) {
        if (i == n)
            return 0;
        int max = s;
        while (i < n) {
            f[arr[i]] = true;
            max = maxnum(max, arr[i]);
            if (allTrue(f, s, max))
                return 1 + find(arr, i + 1, n, max + 1, f);
            ++i;
        }
        return 1;
    }

public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        bool* f = (bool*)malloc(sizeof(bool) * n);
        for (int i = 0; i < n; i++)
            f[i] = false;
        return find(arr, 0, n, 0, f);
    }
};
