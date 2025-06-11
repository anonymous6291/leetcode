class Solution:
    def insert(self, i: List[List[int]], j: List[int]) -> List[List[int]]:
        def intersect(i, j):
            if i[0] > j[0]:
                return intersect(j, i)
            return i[1] >= j[0]

        n = len(i)
        m = 0
        d = False
        k = 0
        while k < n:
            if intersect(i[k], j):
                s = min(i[k][0], j[0])
                while k < n and i[k][0] <= j[1]:
                    k += 1
                k -= 1
                i[m] = [s, max(i[k][1], j[1])]
                d = True
            else:
                i[m] = i[k]
            m += 1
            k += 1
        if not d:
            r = []
            k = 0
            while k < n:
                if (not d) and i[k][0] > j[0]:
                    r.append(j)
                    d = True
                else:
                    r.append(i[k])
                    k += 1
            if not d:
                r.append(j)
            return r
        print(i)
        return [i[k] for k in range(m)]
