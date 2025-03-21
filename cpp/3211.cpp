class Solution {
private:
    void find(string& pre, int i, int n, vector<string>& res) {
        if (i == n) {
            res.push_back(pre);
            return;
        }
        pre.push_back('1');
        find(pre, i + 1, n, res);
        pre.pop_back();
        if (i == 0 || pre[i - 1] == '1') {
            pre.push_back('0');
            find(pre, i + 1, n, res);
            pre.pop_back();
        }
    }

public:
    vector<string> validStrings(int n) {
        vector<string> res;
        string curr;
        find(curr, 0, n, res);
        return res;
    }
};
