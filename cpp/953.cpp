class Solution {
public:
    bool isAlienSorted(vector<string>& w, string& o) {
        int c[26];
        for (int i = 0; i < 26; i++)
            c[o[i] - 97] = i;
        string s1 = w[0];
        int n = w.size(), n1 = s1.length();
        for (int i = 1; i < n; i++) {
            string s2 = w[i];
            int n2 = s2.length(), j = 0;
            while (j < n1 && j < n2 && s1[j] == s2[j])
                j++;
            if (j != n1 && j == n2)
                return false;
            while (j < n1)
                if (j == n2 || c[s1[j] - 97] > c[s2[j] - 97])
                    return false;
                else if (s1[j] != s2[j++])
                    break;
            n1 = n2;
            s1 = s2;
        }
        return true;
    }
};
