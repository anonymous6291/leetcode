class Solution:
    def allTrue(self, b: List[bool], s: int, e: int) -> bool:
        while s <= e:
            if not (b[s]):
                return False
            s += 1
        return True

    def find(self, arr: List[int], i: int, n: int, s: int, f: List[bool]) -> int:
        if i == n:
            return 0
        maxn = s
        while i < n:
            f[arr[i]] = True
            maxn = max(maxn, arr[i])
            if self.allTrue(f, s, maxn):
                return 1 + self.find(arr, i + 1, n, maxn + 1, f)
            i += 1
        return 1

    def maxChunksToSorted(self, arr: List[int]) -> int:
        n = len(arr)
        f = [False] * n
        return self.find(arr, 0, n, 0, f)
