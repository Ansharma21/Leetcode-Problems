class Solution {
public:
void hojayega_yrr(int ind,vector<int>candidates,int target,vector<vector<int>>&v,vector<int>output){
        if(ind == candidates.size()){
            if(target == 0){
                v.push_back(output);
            }
            return ;
        }
        if(candidates[ind] <= target){
            output.push_back(candidates[ind]) ;
            hojayega_yrr(ind,candidates,(target-candidates[ind]),v,output);
            output.pop_back() ;
        }
        hojayega_yrr(ind+1,candidates,target,v,output);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        ios_base::sync_with_stdio(false);
        vector <vector<int>> v ;
        int ind = 0 ;
        vector <int> output ;
        hojayega_yrr(0 , candidates , target , v , output); 
        return v ;    
    }
};