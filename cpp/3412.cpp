class Solution {
public:
    long long calculateScore(string& s) {
        int n = s.length(), t;
        int* stack[26];
        for (int i = 0; i < 26; i++)
            stack[i] = (int*)malloc(sizeof(int) * n);
        int ind[26] = {0};
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            t = s[i] - 97;
            if (ind[25 - t] == 0)
                stack[t][ind[t]++] = i;
            else
                sum += i - stack[25 - t][--ind[25 - t]];
        }
        return sum;
    }
};
