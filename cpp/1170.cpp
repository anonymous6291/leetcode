class Solution {
private:
    int f(string& s) {
        int n = s.length();
        int freq[26] = {0};
        for (int i = 0; i < n; i++)
            freq[s[i] - 'a']++;
        for (int i = 0; i < 26; i++)
            if (freq[i] != 0)
                return freq[i];
        return 0;
    }

public:
    vector<int> numSmallerByFrequency(vector<string>& q, vector<string>& w) {
        int n = q.size();
        int freq[12] = {0};
        for (string s : w) {
            int t = f(s);
            while (t >= 0)
                freq[t--]++;
        }
        vector<int> res(n);
        for (int i = 0; i < n; i++)
            res[i] = freq[f(q[i]) + 1];
        return res;
    }
};
