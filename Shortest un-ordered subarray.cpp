//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
  bool checkIncreasing(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        if (a[i] >= a[i + 1])
            return false;
    return true;
}
bool checkDecreasing(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        if (a[i] < a[i + 1])
            return false;
    return true;
}
    int shortestUnorderedSubarray(int a[], int n)
    {
        if (checkIncreasing(a, n) == true || checkDecreasing(a, n) == true)
        return 0;
    else
        return 3;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) 
            cin >> a[i];
        Solution obj;
        cout << obj.shortestUnorderedSubarray(a, n) << endl;
    }
}

// } Driver Code Ends
