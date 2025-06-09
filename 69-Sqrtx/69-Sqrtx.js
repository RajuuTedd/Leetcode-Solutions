// Last updated: 6/9/2025, 1:56:52 PM
/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
    let l =0 , r = x;
    let res= 0 ;
    while(l<=r)
    {
        let m = Math.floor((l+r)/2);
        const square = m * m;
        if(square == x)
        {
            return m;
        }
        else if(square<x)
        {
            l = m +1;
            res = m;
        }
        else
        {
            r = m-1;
        }
    }
    return res;
};