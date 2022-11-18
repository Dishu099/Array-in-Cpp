//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> v(2);
    v[0]=-1;
    v[1]=-1;
    int A=INT_MAX;
    if(n==1)
    {
        if(arr[0]==x)
        {
            v[0]=0;
            v[1]=0;
            return v;
        }
        else
        {
           return v;
        }
    }
    
    int low=0;
    int high=n-1;
  
    while(low<=high)
    {
        int mid=low+(high-low)/2;
       
        if(arr[mid]==x)
        {
         
        A=min(mid,A);
        high=mid-1;
        }
        else
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else
        low=mid+1;
        
    }
    
   
    low=0;
    high=n-1;
    int B=-1;
      while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
        B=max(mid,B);
        low=mid+1;
        }
        else
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else
        low=mid+1;
        
    }
    if(A==INT_MAX)
    A=-1;
    v[0]=A;
    v[1]=B;
    
    return v;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
