// Last updated: 6/9/2025, 1:56:37 PM
/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
   let count = 0, res=0;
   nums.forEach(num =>
   {
    if(count==0) res = num;
    if(num==res) count++;
    else count--;
   })
   return res;
   
};