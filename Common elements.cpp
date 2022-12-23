#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>n1;
    int a1[n1];
    cout<<"ENTER DATA 1:"<<endl;
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    int n2;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>n2;
    int a2[n2];
    cout<<"ENTER DATA 2:"<<endl;
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    int n3;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>n3;
    int a3[n3];
    cout<<"ENTER DATA 3:"<<endl;
    for(int i=0;i<n3;i++){
        cin>>a3[i];
    }
    cout<<"COMMON ELEMENT:"<<" ";
    int i=0,j=0,k=0;
    while(i<n1&&j<n2&&k<n3){
        if(a1[i]==a2[j]&&a2[j]==a3[k]){
            cout<<a1[i];
            i++;
            j++;
            k++;
        }
        else if(a1[i]<a2[j])
        i++;
        else if(a2[j]<a3[k])
        j++;
        else
        k++;
    }
}
