class Solution {
public:
    bool canJump(vector<int>& nums) {
        int dp[nums.size()];
        dp[0] = nums[0] ;
        for(int i = 1 ; i<nums.size() ; i++){
            int c = i + nums[i] ;
            if(dp[i-1] < i){
                return false ;
            }
            dp[i] = max(dp[i-1] , c);
        }
        return true ;
    }
};