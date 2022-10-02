#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends

class Solution{
  public:
    void rearrangeArray(int arr[], int n) {
        // code here
        sort(arr, arr + n);
 
    int temp[n]; 
    int Index = 0;
    for (int i = 0, j = n - 1; i <= n / 2 || j > n / 2;
         i++, j--) {
        temp[Index] = arr[i];
        Index++;
        temp[Index] = arr[j];
        Index++;
    }
 
    
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.rearrangeArray(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
