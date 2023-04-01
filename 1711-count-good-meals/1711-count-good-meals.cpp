class Solution {
public:
      bool isPowerOfTwo(int n) {
      if(n == 1){
          return true ;
      }
      else if(n % 2 != 0 || n == 0){
          return false ;
      }  
      return isPowerOfTwo(n/2) ;  
    }
    int count(vector<int>nums){
        sort(nums.begin() , nums.end());
        int i = 0 ;
        int j = nums.size()-1;
        long long int cnt = 0;
        unordered_map<int, int>m ;
        long long int mod = 1000000007;
        for(auto &i : nums){ 
          for(int j = 0 ; j<22 ; j++){
           long long int x = pow(2 , j);
           if(m.find(x - i) != m.end()){
                   cnt += m[x-i] ;
           }
          }
          m[i]++;  
        }
        return (int)(cnt%mod);
    } 
    int countPairs(vector<int>& deliciousness) {
        ios_base::sync_with_stdio(false);
        return count(deliciousness) ;
    }
};