class Solution {
public:
    int fib(int n) {
        int dp[31] = {0} ;
        if(n <= 1){
            return n ;
        }
        if(dp[n] != 0){
          return dp[n] ;
        } 
        return dp[n] = fib(n-1) + fib(n-2) ;
    }
};