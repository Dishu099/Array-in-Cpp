class Solution {
public:
    string capitalizeTitle(string title) {
      stringstream s(title);
      string word;
      string ans;
      while(s>>word){
          if(word.size()>2){
              word[0]=toupper(word[0]);
              for(int i=1;i<word.size();i++){
                  word[i]=tolower(word[i]);
              }
          }
          else{
              for(int i=0;i<word.size();i++){
                  word[i]=tolower(word[i]);
              }
          }
        ans =ans + word + " ";
      }
      ans.pop_back();
      return ans;
    }
};
