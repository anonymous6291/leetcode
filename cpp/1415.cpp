class Solution {
private:
    int k;

private:
    bool find(string& res, int i, int n) {
        if (i == n) {
            k--;
            return k == 0;
        }
        for (char c = 'a'; c < 'd'; c++)
            if (res[i - 1] != c) {
                res[i] = c;
                if (find(res, i + 1, n))
                    return true;
            }
        return false;
    }

public:
    string getHappyString(int n, int k) {
        string res;
        for (int i = 0; i < n; i++)
            res += "a";
        this->k = k;
        for (char c = 'a'; c < 'd'; c++) {
            res[0] = c;
            if (find(res, 1, n))
                return res;
        }
        return "";
    }
};
