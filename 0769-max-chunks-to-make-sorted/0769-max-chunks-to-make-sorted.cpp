class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int cnt = 0 ;
        int c = INT_MIN ;
        for(int i = 0 ; i<arr.size() ; i++){
           c = max(c , arr[i]);
           if(c == i){
             cnt++ ;  
           } 
        }
        return cnt ;
    }
};