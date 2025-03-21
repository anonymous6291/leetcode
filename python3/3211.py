class Solution:
    def validStrings(self, n: int) -> List[str]:
        res = []

        def find(curr):
            if len(curr) == n:
                res.append(curr)
                return
            find(curr + "1")
            if not curr or curr[-1] == "1":
                find(curr + "0")

        find("")
        return res
