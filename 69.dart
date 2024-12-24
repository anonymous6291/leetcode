class Solution {
  int mySqrt(int x) {
        int s = 0, e = 46340;
        while (s < e) {
            int m = (s + e) >> 1;
            int t = m * m;
            if (t == x)
                return m;
            if (t < x)
                s = m + 1;
            else
                e = m - 1;
        }
        if (s * s > x)
            return s - 1;
        return s;
  }
}
