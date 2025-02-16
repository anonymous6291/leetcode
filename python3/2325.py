class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        tf = [0] * 26
        s = 97
        res = []
        for i in key:
            if i != " " and tf[ord(i) - 97] == 0:
                tf[ord(i) - 97] = chr(s)
                s += 1
        for i in message:
            if i != " ":
                res.append(tf[ord(i) - 97])
            else:
                res.append(" ")
        return "".join(res)
