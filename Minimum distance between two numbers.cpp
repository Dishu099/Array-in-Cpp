#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int p = -1, min_dist = INT_MAX;
     
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]==x || a[i]==y)
        {
            if( p != -1 && a[i] != a[p])
                min_dist = min(min_dist , i-p);
            p=i;
        }
    }
    if(min_dist==INT_MAX)
        return -1;
 
    return min_dist;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
