class Solution {
    int maxnum(int i, int j) {
        return (i > j) ? i : j;
    }

    bool allTrue(List<bool> f,int s,int e){
        while(s <= e){
            if(!f[s])
                return false;
            ++s;
        }
        return true;
    }

    int find(List<int> arr, int i, int n, int s, List<bool> f){
        if (i == n)
            return 0;
        int max = s;
        while (i < n){
            max = maxnum(max, arr[i]);
            f[arr[i]] = true;
            if(allTrue(f, s, max))
                return 1 + find(arr, i + 1, n, max + 1, f);
            ++i;
        }
        return 1;
    }

    int maxChunksToSorted(List<int> arr) {
        List<bool> f = [false, false, false, false, false, false, false, false, false, false];
        return find(arr, 0, arr.length, 0, f);
    }
}
