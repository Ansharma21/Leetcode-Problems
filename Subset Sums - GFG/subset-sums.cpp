//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{
public:
void solve(vector<int>arr,vector<int>output,int ind,vector<vector<int>>&ans){
        if(ind >= arr.size()){
            ans.push_back(output);
            return;
        }
        solve(arr , output , ind + 1 , ans);
        int ele = arr[ind];
        output.push_back(ele);
        solve(arr , output , ind + 1 , ans);
    }
    vector<int> subsetSums(vector<int> arr, int N){
        vector <int> v ;
        vector <vector <int>> ans ;
        vector <int> output;
        int ind = 0 ;
        solve(arr , output , ind , ans);
        for(int i = 0 ; i<ans.size() ; i++){
            int sum = 0 ;
            for(int j = 0 ; j<ans[i].size() ; j++){
                sum += ans[i][j];
            }
            v.push_back(sum);
        }
        return v ;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends