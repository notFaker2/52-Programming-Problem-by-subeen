#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        int n; cin>>n;
        cout<<"Case "<<i<<": ";
        for(int j=1;j<=sqrt(n);j++){
            if(n%j==0){
                cout<<j<<" ";
            }
        }
        for(int j=sqrt(n);j>=1;j--){
            if(n%j==0){
                cout<<n/j<<" ";
            }
        }
        cout<<endl;
    }
}