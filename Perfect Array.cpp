//{ Driver Code Starts
// CPP program to check whether the given array
// is perfect or not.
#include <iostream>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int check(int arr[], int n)
    {
        // Complete the function
         int i = 1;
    while (arr[i] > arr[i - 1] && i < n)
        ++i;
    while (arr[i] == arr[i - 1] && i < n)
        ++i;
    while (arr[i] < arr[i - 1] && i < n)
        ++i;
    return (i == n);
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
           cin>>arr[i];
        Solution ob;
        if (ob.check(arr, n))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
// } Driver Code Ends
