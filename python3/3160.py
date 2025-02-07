class Solution:
    def queryResults(self, l: int, q: List[List[int]]) -> List[int]:
        m1 = {}
        m2 = {}
        res = []
        for a, b in q:
            r1 = m1.get(a)
            if r1 == None or r1 != b:
                if r1 != None:
                    m1.pop(a)
                    r2 = m2.pop(r1)
                    if r2 > 1:
                        m2.setdefault(r1, r2 - 1)
                m1.setdefault(a, b)
                if b in m2:
                    m2.setdefault(b, m2.pop(b) + 1)
                else:
                    m2.setdefault(b, 1)
            res.append(m2.__len__())
        return res
