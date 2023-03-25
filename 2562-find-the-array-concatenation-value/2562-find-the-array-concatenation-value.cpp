class Solution {
public:
   int size(int x){
        int cnt = 0 ;
        while(x>0){
            cnt++;
            x /= 10;
        }
        return cnt;
    }
    long long findTheArrayConcVal(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        if(nums.size() == 1){
            return nums[0];
        }
        long long int cnt = 0 ;
        int i = 0 ;
        int j = nums.size()-1;
        while(i<j){
            cnt += nums[i]*pow(10 , size(nums[j])) + nums[j];
            i++ ;
            j-- ;
            if(i==j){
              cnt += nums[j];
            }
        }
        return cnt ;
    }
};