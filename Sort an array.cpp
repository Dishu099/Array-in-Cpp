#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>n;
    int a[n];
    cout<<"ENTER UNSORTED DATA:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
               x=a[j];
               a[j]=a[i];
               a[i]=x;
            }
        }
    }
    cout<<"SORTED ARRAY:"<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
}
