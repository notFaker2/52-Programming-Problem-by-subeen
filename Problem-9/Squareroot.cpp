#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll a=sqrt(n);
        if(a*a==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}