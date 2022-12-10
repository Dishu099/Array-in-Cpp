class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
       double slope=0;
        if(coordinates[1][0]==coordinates[0][0]){
            slope=INT_MAX;
        }
        else{
           slope=(coordinates[1][1]*1.00-coordinates[0][1]*1.00)/(coordinates[1][0]*1.00-coordinates[0][0]*1.00);
           
        }
       
        for(int i=0;i<n-1;i++){
         double a=0;
            if(coordinates[i+1][0]==coordinates[i][0]){
            a=INT_MAX;
        }
            else{
            a=(coordinates[i+1][1]*1.00-coordinates[i][1]*1.00)/(coordinates[i+1][0]*1.00-coordinates[i][0]*1.00);
                
            }
       
          
            if(a!=slope){
                return false;
            }
        }
        return true;
    }
};
