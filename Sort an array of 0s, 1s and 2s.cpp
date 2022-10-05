#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
         int zeros = 0, ones = 0, two =0;
        
    for(int i =0; i < n; i++)
    {
        if(a[i] == 0)
        {
            zeros+=1;
        }
        else if(a[i] == 1)
        {
            ones+=1;
        }
        else if(a[i] == 2)
        {
            two+=1;
        }
    }
        int i=0;
    while(zeros--)
    {
        a[i] = 0;
        i+=1;
    }
    
    while(ones--)
    {
        a[i] = 1;
        i+=1;
    }
    
    while(two--)
    {
        a[i] = 2;
        i+=1;
    }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}
