class Solution {
public:
    bool detectCapitalUse(string word) {
        int flag=0;
        if(isupper(word[0]) && isupper(word[1])){
            for(int i=2;i<word.size();i++){
                if(!isupper(word[i])){
                    return false;
                }
            }
        }
        else if(isupper(word[0]) && islower(word[1])){
             for(int i=2;i<word.size();i++){
                if(!islower(word[i])){
                    return false;
                }
            }
        }
        else if(islower(word[0])){
             for(int i=1;i<word.size();i++){
                if(!islower(word[i])){
                    return false;
                }
            }
        }
        return true;
    }
};
