class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        def dfs(rooms: List[List[int]], i: int, trav: List[bool]):
            if trav[i]:
                return
            trav[i] = True
            for j in rooms[i]:
                dfs(rooms, j, trav)

        trav = [False] * len(rooms)
        dfs(rooms, 0, trav)
        for i in trav:
            if not i:
                return False
        return True
