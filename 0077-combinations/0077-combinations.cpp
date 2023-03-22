class Solution {
public:
void combines(int ind,vector<int>output,vector<vector<int>>&v,int n,int k){
       if(output.size() == k){
          v.push_back(output);   
          return ;
        }
        for(int i = ind ; i<=n ; i++){
            output.push_back(i);
            combines(i+1 , output , v , n , k);
            output.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>v ;
        int ind = 1 ;
        vector <int> output ;
        combines(ind , output , v , n , k);
        return v ;
    }
};