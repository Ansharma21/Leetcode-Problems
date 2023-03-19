class Solution {
public:
void combination(string digits,vector<string>&v,string s,int ind, string map[]){
        if(ind >= digits.size()){
            v.push_back(s) ;
            return ;
        }
        int n = digits[ind] - '0';
        string val = map[n] ;
        
        for(auto i : val){
            s.push_back(i);
            combination(digits , v , s , ind+1 , map);
            s.pop_back() ;
        }
        
}
    vector<string> letterCombinations(string digits) {
        vector<string> v ;
        if(digits.size() == 0){
            return v ;
        }
        string s = "" ;
        int ind = 0 ;
     string map[10] = {"", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        combination(digits , v , s , ind , map) ;
        return v ;
    }
};