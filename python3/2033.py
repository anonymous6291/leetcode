class Solution:
    def minOperations(self, grid: List[List[int]], x: int) -> int:
        arr = []
        freq = [0] * 10001
        for i in grid:
            for j in i:
                freq[j] += 1
        for i in range(10001):
            for j in range(freq[i]):
                arr.append(i)
        mid = arr[int((len(grid) * len(grid[0])) / 2)]
        count = 0
        for i in arr:
            if (i - mid) % x != 0:
                return -1
            count += int(abs(i - mid) / x)
        return count
