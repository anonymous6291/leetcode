class Solution:
    def convertToBase7(self, num: int) -> str:
        if num == 0:
            return "0"
        n = (-num) if num < 0 else num
        its = ["0", "1", "2", "3", "4", "5", "6"]
        res = []
        while n > 0:
            res.append(its[n % 7])
            n = math.floor(n / 7)
        if num < 0:
            res.append("-")
        res.reverse()
        return "".join(res)
