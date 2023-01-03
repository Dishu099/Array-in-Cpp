

class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<int> p;
        p.push(0);
        
        vector<int> ans(n);
        ans[0] = 1;

        for(int i = 1; i < n; ++i) {
            while(!p.empty() && price[p.top()] <= price[i]) {
                p.pop();
            }

            ans[i] = i - (p.empty() ? -1 : p.top());
            p.push(i);
        }

        return ans;
    }
};
