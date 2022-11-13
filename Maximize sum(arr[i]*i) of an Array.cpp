#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
         sort(a, a+ n);
   int  sum = 0;
   const unsigned int x=1000000007;
   for (int i = 0; i < n; ++i) {
      sum = (sum + (a[i] * i))%x;
      
   }
   
   return sum;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
