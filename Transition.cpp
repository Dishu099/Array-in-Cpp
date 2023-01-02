#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code here
    if(arr[n-1] == 0)
        return -1;
    
    if(n==1)
    {
        if(arr[0] == 1)
            return 0; 
        else
            return -1; 
    }
    int L = 0;
    int R = n-1;
    while(L <= R)
    {
        int mid = floor((L+R) /2);
        if(arr[mid] == 1 && arr[mid-1] != 1)
            return mid;
        else if(arr[mid] == 0)
            L = mid+1;
        else if(arr[mid] == 1)
            R = mid-1;
    }
    return -1;
}
