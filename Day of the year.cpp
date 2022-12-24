class Solution {
public:
    int dayOfYear(string date) {
        string s;
       string leap;
        string str;
        int a,x;
        for(int i=0;i<=3;i++){
            leap.push_back(date[i]);
        }
        int y;
        y=stoi(leap);
        if((y%4==0 && y%100!=0)|| y%400==0){
            a=29;
        }
        else{
            a=28;
        }
        int i=0;
        int j=1;
        int arr[12]={0,31,28,31,30,31,30,31,31,30,31,30};
         for(int i=0;i<j;i++){
             if((date[5]=='0'||date[5]=='1') && (date[6]>='0' && date[6]<='9')){
                  if(date[5]=='0'){
               
            str.push_back(date[6]); 
            }
            else{
                 str.push_back(date[5]);
            str.push_back(date[6]);
            }
                 if(date[8]=='0'){
               
            s.push_back(date[9]); 
            }
            else{
                 s.push_back(date[8]);
            s.push_back(date[9]);
            }
                 x=stoi(s);
                 int b=stoi(str);
                 if(a==29){
                         arr[2]=29;
                     }
                 while(b--){
                     
                       x=x+arr[i];
                     i++;j++;
                 }
               
             }
         }
       return x;
    }
};
