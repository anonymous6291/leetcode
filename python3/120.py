class Solution:
    def minimumTotal(self, tri: List[List[int]]) -> int:
        def find(tri: List[List[int]], i: int, j: int, mins: List[int]) -> int:
            if i == len(tri) - 1:
                return tri[i][j]
            m1 = mins[i + 1] if (j != 0) else (find(tri, i + 1, j, mins))
            m2 = find(tri, i + 1, j + 1, mins)
            mins[i + 1] = m2
            return min(m1, m2) + tri[i][j]

        return find(tri, 0, 0, [0] * len(tri))
