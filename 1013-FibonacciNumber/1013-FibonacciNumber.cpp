// Last updated: 6/9/2025, 1:56:18 PM
class Solution {
public:
    int fib(int n){
      
      if( n==0 || n==1 ) return n;
      return fib(n-1)+fib(n-2);
              
    }
};