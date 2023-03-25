//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	   void solve(string S , vector<string>&ans , int ind){
	       if(ind >= S.size()){
	           ans.push_back(S);
	           return ;
	       }
	       for(int j = ind ; j<S.size() ; j++){
	           swap(S[ind] , S[j]);
	           solve(S , ans , ind+1);
	           swap(S[ind] , S[j]);
	       }
	   }
		vector<string>find_permutation(string S){
		    vector<string>ans;
		    int ind = 0 ;
		    solve(S , ans , ind);
		    set<string>st;
		    for(auto i : ans){
		        st.insert(i);
		    }
		    vector<string>temp;
		    for(auto i : st){
		        temp.push_back(i);
		    }
		    return temp ;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends