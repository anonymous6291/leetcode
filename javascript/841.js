/**
 * @param {number[][]} rooms
 * @return {boolean}
 */
var canVisitAllRooms = function (rooms) {
    var dfs = function (rooms, i, trav) {
        if (trav[i])
            return
        trav[i] = true
        for (let j of rooms[i])
            dfs(rooms, j, trav)
    };
    let trav = new Array(rooms.length).fill(false)
    dfs(rooms, 0, trav)
    for (let i of trav)
        if (!i)
            return false
    return true;
};
