class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        def fact(n):
            if n == 0:
                return 1
            return n * fact(n - 1)

        alpha = "123456789"
        res = []
        taken = [False] * 9
        cp = fact(n - 1)
        d = n - 1
        for i in range(n):
            j = 1
            while cp < k:
                j += 1
                k -= cp
            l = -1
            while j > 0:
                l += 1
                if not taken[l]:
                    j -= 1
            taken[l] = True
            res.append(alpha[l])
            if d != 0:
                cp /= d
            d -= 1
        return "".join(res)
