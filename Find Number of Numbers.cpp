//{ Driver Code Starts
#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		cout<<num(a,n,k)<<endl;
	}
}
// } Driver Code Ends


/*Complete the function given below*/
int num(int a[], int n, int k)
{
     //add code here.
     int count=0;
     for(int i=0;i<n;i++){
         while(a[i]!=0)
       {
         int temp=a[i]%10;
         if(temp==k)
         {
           count++;
         }
         a[i]=a[i]/10;
        }
    }
    return count;
     }
