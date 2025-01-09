class Solution:
    def prefixCount(self, w: List[str], p: str) -> int:
        count = 0
        for s in w:
            if s.startswith(p):
                count += 1
        return count
