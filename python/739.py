class Solution:
    def dailyTemperatures(self, temp: List[int]) -> List[int]:
        n = len(temp)
        ind = -1
        s = [0] * n
        res = [0] * n
        for i in range(n - 1, -1, -1):
            while ind >= 0 and temp[i] >= temp[s[ind]]:
                ind -= 1
            if ind < 0:
                res[i] = 0
            else:
                res[i] = s[ind] - i
            ind += 1
            s[ind] = i
        return res
