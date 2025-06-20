// Last updated: 6/9/2025, 1:56:32 PM
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
        const s = new Set();
        for (let i = 0; i < nums.length; i++) {
            if (s.has(nums[i])) {
                return true;
            }
            s.add(nums[i]);
        }
        return false;    
};