#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
         sort(arr, arr+n);
    vector<int>solution;
    for(int i=0; i < n-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            solution.push_back(arr[i]);
            while(arr[i+1] == arr[i])
                i++;
        }
    }
    if(solution.size()==0)
        solution.push_back(-1);
    return solution; 
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
