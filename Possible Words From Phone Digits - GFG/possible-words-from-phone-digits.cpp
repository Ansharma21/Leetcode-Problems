//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
void solve(int ind,vector<string>&ans,string s,int a[],int N,string m[]){
    if(ind >= N){
        ans.push_back(s) ;
        return ;
    }
    string x = m[a[ind]] ;
    for(auto i : x){
        s.push_back(i);
        solve(ind+1 , ans , s , a , N , m);
        s.pop_back();
    }
}
    
    vector<string>possibleWords(int a[], int N){
        vector<string>ans ;
        if(N == 0){
            return ans ;
        }
        string s = ""; int ind = 0 ;
    string m[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(ind , ans , s , a , N , m);
        return ans ;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends