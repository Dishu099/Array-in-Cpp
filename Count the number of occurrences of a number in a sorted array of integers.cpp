//to count the number of occurrences of a number in a sorted array of integers.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>n;
    int a[n];
    cout<<"ENTER DATA:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cout<<"NUMBER OF OCCURENCE OF:"<<endl;
    cin>>x;
    int result=0;
    for(int i=0;i<n;i++){
        if(x==a[i]){
        result++;
}



    }
     cout<<result;
}
