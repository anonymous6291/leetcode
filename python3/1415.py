class Solution:
    def getHappyString(self, n: int, k: int) -> str:
        self.k = k

        def find(res, i, n):
            if i == n:
                self.k -= 1
                return self.k == 0
            for c in ["a", "b", "c"]:
                if res[i - 1] != c:
                    res[i] = c
                    if find(res, i + 1, n):
                        return True
            return False

        res = ["a"] * n
        for c in ["a", "b", "c"]:
            res[0] = c
            if find(res, 1, n):
                return "".join(res)
        return ""
