//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         int first,second,third;
         first=a[0];
         for(int i=0;i<n;i++){
             if(a[i]>first){
                 first=a[i];
             }
         }
         second=INT_MIN;
         for(int i=0;i<n;i++){
             if(a[i]>second && a[i]<first){
                 second=a[i];
             }
         }
         third=INT_MIN;
         for(int i=0;i<n;i++){
             if(a[i]>third && a[i]<second){
                 third=a[i];
             }
         }
         return third;
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
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends
