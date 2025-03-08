class Solution:
    def minimumRecolors(self, blocks: str, k: int) -> int:
        s = 0
        e = 0
        w = 0
        n = len(blocks)
        while e < k:
            if blocks[e] == "W":
                w += 1
            e += 1
        minw = w
        while e < n:
            if blocks[e] == "W":
                w += 1
            if blocks[s] == "W":
                w -= 1
            if w < minw:
                minw = w
            e += 1
            s += 1
        return minw
