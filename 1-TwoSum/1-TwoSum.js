// Last updated: 6/9/2025, 1:57:02 PM
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let seen = new Map();
    for(let i=0;i<nums.length;i++)
    {
        const num = nums[i];
        if( seen.has(num))
        return [i, seen.get(num)];
        seen.set (target-num, i );

    }
    return[]
};