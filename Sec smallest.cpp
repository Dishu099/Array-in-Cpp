#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,small,second;
    cout<<"ENTER NUMBER OF ELEMENTS:"<<endl;
    cin>>n;
    int a[n];
    cout<<"ENTER THE DATA:"<<endl;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    small=a[0];
    for(int i=0;i<n;i++){
        if(small>a[i]){
            small=a[i];
        }
    }
    second=a[0];
    for(int i=0;i<n;i++){
        if(second>a[i]){
            if(a[i]!=small)
                second=a[i];
        }
    }
    cout<<"SECOND SMALLEST NUMBER IS:"<<second<<endl;
}
