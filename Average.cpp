//print the average of the no.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,avg;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>n;
    int a[n];
    cout<<"ENTER THE DATA:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];

    }
    avg=sum/n;
    cout<<"AVERAGE IS:"<<avg;
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
