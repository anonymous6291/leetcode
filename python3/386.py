class Solution:
    def lexicalOrder(self, n: int) -> List[int]:
        l = []

        def find(i: int) -> None:
            for j in range(10):
                if i > n:
                    return
                l.append(i)
                find(i * 10)
                i += 1

        for s in range(1, min(9, n) + 1):
            l.append(s)
            find(s * 10)
        return l
