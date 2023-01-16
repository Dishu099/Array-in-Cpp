class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int size = original.size();
        vector<vector<int>> v;
        if((m*n)!=size){
            return v;
        }
        int a=0;
        for(int i=0;i<m;i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
                temp.push_back(original[a]);
                a++;
            }
            v.push_back(temp);
        }
        return v;
    }
};
