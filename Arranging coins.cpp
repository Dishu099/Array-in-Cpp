class Solution {
public:
    int arrangeCoins(int n) {
        int count=-1;
        int i=1;
        while(n>=0){
            n=n-i;
            i++;
            count++;
        }
        return count;
    }
};
