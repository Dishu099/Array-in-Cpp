//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    for (int i = 0; i < n; i++)
        arr[i] = arr[i] * arr[i];
    sort(arr, arr + n);
    for (int i = n - 1; i >= 2; i--) {
        int l = 0; 
        int r = i - 1; 
        while (l < r) {
            if (arr[l] + arr[r] == arr[i])
                return true;
 
          
            (arr[l] + arr[r] < arr[i]) ? l++ : r--;
        }
    }
    return false;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}

// } Driver Code Ends
