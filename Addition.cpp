class Solution {
public:
    int addDigits(int num) {
        int ans=0;
        string s=to_string(num);
        if(s.size()==1){
            return num;
        }
        while(s.size()!=1){
            ans=0;
            for(int i=0;i<s.size();i++){
                int a = s[i]-48;
                ans=ans+a;
            }
            s=to_string(ans);
            
        }
        return ans;
    }
};
