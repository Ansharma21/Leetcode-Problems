class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        vector <int> v = arr ;
        sort(v.begin(), v.end());
        long long int c1 = 0 ;
        long long int c2 = 0 ;
        long long int cnt = 0 ;
        for(int i = 0; i < arr.size(); i++){
            c1 += v[i] ;
            c2 += arr[i] ;
            if(c1 == c2) {
              cnt++ ;
            }
        }
	    return cnt ;
    }
};