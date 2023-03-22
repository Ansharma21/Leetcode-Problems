class Solution {
public:
void combine_krde(int ind,vector<int>output,vector<vector<int>>&v,int n,int k){
       if(output.size() == k){
          v.push_back(output);   
          return ;
        }
        for(int i = ind ; i<=n ; i++){
            output.push_back(i);
            combine_krde(i+1 , output , v , n , k);
            output.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        ios_base::sync_with_stdio(false);
        vector<vector<int>>v ;
        int ind = 1 ;
        vector <int> output ;
        combine_krde(ind , output , v , n , k);
        return v ;
    }
};