//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
void solve(vector<int>A,int B,vector<vector<int>>&ans,vector<int>output, int ind){
        if(ind == A.size()){
            if(B == 0){
              sort(output.begin() , output.end());    
              ans.push_back(output);
            }
            return ;
        }
        if(A[ind] <= B){
           output.push_back(A[ind]);
           solve(A , B-A[ind], ans , output , ind);
           output.pop_back();
        }
           while(ind != A.size()-1 && A[ind]==A[ind+1]){
              ind++ ;
           }
        solve(A , B , ans , output , ind+1);
    }
    vector<vector<int>>combinationSum(vector<int> &A, int B) {
        vector<vector<int>>ans;
        int ind = 0 ;
        vector<int>output;
        sort(A.begin(), A.end());
        solve(A , B , ans , output , 0);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends