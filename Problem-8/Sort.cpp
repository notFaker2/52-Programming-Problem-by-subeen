#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a,a+3);
        cout<<"Case "<<i<<": ";
        for(int i=0;i<3;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}