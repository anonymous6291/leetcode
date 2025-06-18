class Solution:
    def divideArray(self, n: List[int], k: int) -> List[List[int]]:
        l = len(n)
        n.sort()
        b = int(l / 3)
        for i in range(0, l, 3):
            if n[i + 2] - n[i] > k:
                return []
        return [[n[i], n[i + 1], n[i + 2]] for i in range(0, l, 3)]
