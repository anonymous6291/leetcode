class Solution:
    def kidsWithCandies(self, c: List[int], e: int) -> List[bool]:
        m = max(c)
        return [(i + e) >= m for i in c]
