#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        if(d == 1)
    {
        int temp;
        temp = arr[n-1];
        arr[n-1] = arr[0];
        arr[0] = temp;
        return;
    }
    int temp[d];
    for(int i =0; i < d; i++) temp[i] = arr[i];
    for(int i=d; i < n; i++) arr[i-d] = arr[i];
      
    int a=0;
    for(int i=n-d; i < n; i++)
    {
        arr[i] = temp[a];
        a++;
    }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
