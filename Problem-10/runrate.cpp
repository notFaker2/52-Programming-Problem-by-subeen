#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

void solve(){
    int a,b,c; cin>>a>>b>>c;
    a++;
    double d,e;
    double ball_used=300-c;
    d=(b*6)/ball_used;
    e=(a-b)*6*1.0/c;
    cout<<fixed<<setprecision(2);
    cout<<d<<" "<<e<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}