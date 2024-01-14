#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    int n = s.size();
    int a= s[n-1]-'0';
    if(a%2){
        cout<<"odd"<<endl;
    }
    else{
        cout<<"even"<<endl;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}