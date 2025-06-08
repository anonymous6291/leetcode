class Solution {
private:
    void find(int i, vector<int>& l, int n) {
        for (int j = 0; j < 10; j++, i++) {
            if (i > n)
                return;
            l.push_back(i);
            find(i * 10, l, n);
        }
    }

public:
    vector<int> lexicalOrder(int n) {
        vector<int> l;
        int e = n > 9 ? 9 : n;
        for (int s = 1; s <= e; s++) {
            l.push_back(s);
            find(s * 10, l, n);
        }
        return l;
    }
};
