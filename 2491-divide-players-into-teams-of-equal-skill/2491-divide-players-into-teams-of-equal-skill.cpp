class Solution {
public:
    long long int prod = 0 ;
    int count(vector<int>nums){
        sort(nums.begin() , nums.end());
        int i = 0 ;
        int j = nums.size()-1;
        int cnt = 0;
        while(i<j){
            if(nums[i]+nums[j]==nums[i+1] + nums[j-1]){
                cnt++ ;
                prod += nums[i]*nums[j] ; 
                i++ ; j-- ;
            }
            else if(nums[i]+nums[j]>nums[i+1] + nums[j-1]){
                j-- ;
            }
            else {
                i++ ;
            }
        }
        return cnt ;
    }
    long long dividePlayers(vector<int>& skill) {
        ios_base::sync_with_stdio(false);
        if(count(skill) == skill.size()/2){
            return prod ;
        }
        else {
            return -1 ;
        }
    }
};