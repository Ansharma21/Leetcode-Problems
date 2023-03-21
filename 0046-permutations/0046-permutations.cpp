class Solution {
public:
    void hojayega (vector<int>nums , vector<vector<int>>&v , int ind){
        if(ind >= nums.size()){
            v.push_back(nums);
            return ;
        }   
        for(int j = ind ; j<nums.size() ; j++){
            swap(nums[ind] , nums[j]) ;
            hojayega(nums , v , ind + 1);
            swap(nums[ind] , nums[j]) ;
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        vector<vector<int>> v ;
        int ind = 0 ;
        hojayega(nums , v , ind) ;
        return v ;
    }
};