class Solution {
public:
    int compress(vector<char>& chars) {
        ios_base::sync_with_stdio(false);
        if(chars.size() == 1){
            return 1 ;
        }
        string s = "" ;
        int cnt = 1 ;
        char current = chars[0];
        for(int i = 1 ; i<chars.size() ; i++){
           if(current == chars[i]){
               cnt ++ ;
           }
           else {
               s += current ;
               if(cnt > 1){
                 s += to_string(cnt) ;
               }
               current = chars[i] ;
               cnt = 1 ; 
           } 
           if(i >= chars.size() - 1){
              s += current ;
             if(cnt > 1){  
              s += to_string(cnt) ;
             }
           }
        }
        chars.clear() ;
        for(auto i : s){
           chars.push_back(i);
        }
        return s.size() ;
    }
};