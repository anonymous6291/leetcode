class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size(), p = 0;
        vector<int> C(n);
        bool F[51] = {false};
        for (int i = 0; i < n; i++) {
            if (F[A[i]])
                ++p;
            else
                F[A[i]] = true;
            if (F[B[i]])
                ++p;
            else
                F[B[i]] = true;
            C[i] = p;
        }
        return C;
    }
};
