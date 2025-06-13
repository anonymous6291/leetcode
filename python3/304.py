class NumMatrix:
    def __init__(self, m: List[List[int]]):
        self.m = m
        r = len(m)
        c = len(m[0])
        for i in range(r):
            for j in range(1, c):
                m[i][j] += m[i][j - 1]
        for i in range(c):
            for j in range(1, r):
                m[j][i] += m[j - 1][i]
        for i in m:
            i.append(0)
        m.append([0] * (c + 1))

    def sumRegion(self, x: int, y: int, b: int, c: int) -> int:
        return self.m[b][c] - self.m[x - 1][c] - self.m[b][y - 1] + self.m[x - 1][y - 1]


# Your NumMatrix object will be instantiated and called as such:
# obj = NumMatrix(matrix)
# param_1 = obj.sumRegion(row1,col1,row2,col2)
