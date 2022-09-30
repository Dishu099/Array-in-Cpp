//{ Driver Code Starts
#include <iostream>
using namespace std;
#define ll long long

ll findMaxProduct(int A[], int n, int k);

int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int k;
		cin>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
	
		cout<<findMaxProduct(a,n,k)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/*You are required to complete the function*/

long long findMaxProduct(int A[], int n, int k)
{
//Your code here
 long int MaxProduct = 1; 
    for (int i=0; i<k; i++) 
        MaxProduct *= A[i]; 
    long int prev_product = MaxProduct; 
    for (int i=1; i<=n-k; i++) 
    { 
        long int curr_product = (prev_product/A[i-1]) * 
                            A[i+k-1]; 
        MaxProduct = max(MaxProduct, curr_product); 
        prev_product = curr_product; 
    } 
    return MaxProduct; 
}

