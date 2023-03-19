class Solution {
public:
void sets(vector<int>nums , int ind , vector <int> v , vector<vector<int>>&ans){
        if(ind >= nums.size()){
            ans.push_back(v);
            return ;
        }
        sets(nums , ind+1 , v , ans);
        int curr_ele = nums[ind] ;
        v.push_back(curr_ele) ;
        sets(nums , ind+1 , v , ans);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans ;
        vector <int> v ;
        int ind = 0 ;
        sets(nums , ind , v , ans) ;
        return ans ;
    }
};