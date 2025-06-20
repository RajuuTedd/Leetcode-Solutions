// Last updated: 6/9/2025, 1:56:19 PM
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    let l = 0 , r= nums.length - 1;
    while(l<=r)
    {
        let mid =l+ Math.floor((r-l)/2);
        if(nums[mid]===target)
        {
            return mid;
        }
        else if(nums[mid] < target)
        {
            l = mid + 1;
        }
        else {
            r = mid-1;
        }
    }
    return -1;
};