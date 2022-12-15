

//User function Template for C++


int minimum_apple(int arr[], int n){
    // Complete the function
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s.size();
    
}
