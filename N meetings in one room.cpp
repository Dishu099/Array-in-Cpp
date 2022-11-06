//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
     static bool comp(pair<int,int> p1, pair<int,int> p2){
        if(p1.second < p2.second)
            return true;
        else if(p1.second > p2.second)
            return false;
        else{
            if(p1.first > p2.first)
                return true;
            else
                return false;
        }
    }
    
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
         vector<pair<int,int>> meet;
        for(int i = 0; i < n; i++){
            meet.push_back({start[i],end[i]});
        }
        sort(meet.begin(), meet.end(), comp);
        int count = 1;
        pair<int,int> last = meet[0]; 
        
        for(int i = 1; i < n; i++){
          
            if(meet[i].first > last.second){
                count++;
                last = meet[i];
            }
        }
        return count; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
