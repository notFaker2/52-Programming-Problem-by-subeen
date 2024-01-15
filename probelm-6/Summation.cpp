#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin>>s;
    int a= (s[0]-'0')+(s[s.size()-1]-'0');
    cout<<"Sum = "<<a<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}