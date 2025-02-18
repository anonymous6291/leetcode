class Solution {
private:
    bool find(string& res, string& p, bool* trav, int s, int i, int n) {
        res[i] = (char)(s + '0');
        if (i == n)
            return true;
        while (true) {
            s = s + ((p[i] == 'I') ? 1 : -1);
            if (s < 1 || s > 9)
                return false;
            if (!trav[s]) {
                trav[s] = true;
                if (find(res, p, trav, s, i + 1, n))
                    return true;
                trav[s] = false;
            }
        }
    }

public:
    string smallestNumber(string& p) {
        int n = p.length();
        string res = p + "1";
        bool trav[10] = {false};
        for (int i = 1; i <= 9; i++) {
            trav[i] = true;
            if (find(res, p, trav, i, 0, n))
                return res;
            trav[i] = false;
        }
        return "";
    }
};
