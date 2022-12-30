class MyHashMap {
public:
vector<vector<int>> v;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        vector<int> temp;
        int a=0;
        int n=v.size();
        for(int i=0;i<n;i++){
            if(v[i][0]==key){
                v[i][1]=value;
                break;
            }
            a++;
        }
        
        if(a==n){
            temp.push_back(key);
            temp.push_back(value);
            v.push_back(temp);
        }
    }
    
    int get(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i][0]==key){
                return v[i][1];
            }
        }
        return -1;
    }
    
    void remove(int key) {
       for(int i=0;i<v.size();i++){
            if(v[i][0]==key){
                v[i][0]=-1;
            }
        }
    }
};
