#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int hi=0;
        int lo=n-1;
        while(hi<=lo){
            int mid=(hi+lo)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]<k){
                hi=mid+1;
            }
            else{
                lo=mid-1;
            }
        }
    return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}
