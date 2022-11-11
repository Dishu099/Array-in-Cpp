#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        int k=0;
        int count=0;
        sort(A,A+n);
        for(int i=0;i<n;i++)
        {
            int element=A[i];
            int a=i+1;
            int b=n-1;
            while(a<b)
            {
          
                int sum=element+A[a]+A[b];
                if(sum>X)
                b--;
                else
                if(sum<X)
                a++;
                else
                if(sum==X)
                return true;
            }
            
           
            
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
