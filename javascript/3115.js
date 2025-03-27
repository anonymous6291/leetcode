/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumPrimeDifference = function (nums) {
    var prime = (a) => {
        if (a == 1)
            return false;
        let s = 2, e = parseInt(Math.sqrt(a));
        while (s <= e)
            if (a % s++ == 0)
                return false;
        return true;
    };
    let s = 0, e = nums.length - 1;
    while (s <= e)
        if (prime(nums[s++]))
            break;
    s--;
    while (s <= e)
        if (prime(nums[e--]))
            return e - s + 1;
    return 0;
};
