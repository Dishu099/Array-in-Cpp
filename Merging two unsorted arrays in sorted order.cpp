//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Your code goes hereclass Solution{
	
class Solution{
	public:
	void sortedMerge(int a[], int b[], int res[],int n, int m)
	{
	   // Your code goes here
	    sort(a, a + n);
        sort(b, b + m);
 
        int i = 0, j = 0, k = 0;
        while (i < n && j < m) {
         if (a[i] <= b[j]) {
            res[k] = a[i];
            i += 1;
            k += 1;
            } 
            else
        {
            res[k] = b[j];
            j += 1;
            k += 1;
        }
    }   
        while (i < n) {  
            res[k] = a[i];
            i += 1;
            k += 1;
        }   
        while (j < m) {   
            res[k] = b[j];
            j += 1;
            k += 1;
        }
	}
};
	  


//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }

	    for(int i = 0;i<m;i++){
	        cin >> b[i];
	    }
	    
	    int res[n+m];

      
        Solution ob;
        ob.sortedMerge(a,b,res,n,m);

        for(int i = 0;i<n+m;i++){
	        cout << res[i] << " ";
	    }
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends
