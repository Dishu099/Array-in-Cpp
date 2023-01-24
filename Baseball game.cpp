class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                s.pop();
            }
            else if(operations[i]=="D"){
                int a=s.top()*2;
                s.push(a);
            }
             else if(operations[i]=="+"){
                int a=s.top();
                 s.pop();
                 int b=s.top();
                s.push(a);
                 s.push(a+b);
            }
            else{
                int a=stoi(operations[i]);
                s.push(a);
            }
        }
        int sum=0;
        while(!s.empty()){
            sum=sum+s.top();
            s.pop();
        }
        return sum;
    }
};
