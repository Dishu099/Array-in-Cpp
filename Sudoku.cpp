class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       
        for(int i=0;i<board.size();i++){
            unordered_map<char,int> m;
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]!='.'){
                    m[board[i][j]]++;
                }
            }
            for(auto value:m){
                if(value.second>1){
                    return false;
                }
            }
        }
        
        for(int i=0;i<board.size();i++){
            unordered_map<char,int> m;
            for(int j=0;j<board[i].size();j++){
                if(board[j][i]!='.'){
                    m[board[j][i]]++;
                }
            }
            for(auto value:m){
                if(value.second>1){
                    return false;
                }
            }
        }
   
        for(int a=0;a!=board.size();a=a+3){
            for(int b=0;b!=board.size();b=b+3){
                unordered_map<char,int> m;
        for(int i=a;i<a+3;i++){
           for(int j=b;j<b+3;j++){
               if(board[i][j]!='.'){
                   m[board[i][j]]++;
               } 
            }
        }
            for(auto value:m){
                if(value.second>1){
                    return false;
                }
            
        }
        }
        
            }
          
      return true;
    }
};
