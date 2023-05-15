//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int find(int N){
        for(int i = N ; i >= 0 ; i--){
            string s = to_string(i);
            string temp = s ;
            sort(temp.begin(), temp.end());
            if(s == temp){
              return i ;   
            }
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends