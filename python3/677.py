class MapSum:

    def __init__(self):
        self.pairs = {}

    def insert(self, key: str, val: int) -> None:
        if key in self.pairs:
            self.pairs.pop(key)
        self.pairs.setdefault(key, val)

    def sum(self, prefix: str) -> int:
        sum = 0
        for i in self.pairs:
            if i.startswith(prefix):
                sum += self.pairs.get(i)
        return sum


# Your MapSum object will be instantiated and called as such:
# obj = MapSum()
# obj.insert(key,val)
# param_2 = obj.sum(prefix)
