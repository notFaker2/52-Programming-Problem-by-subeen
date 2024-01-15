#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isprime(int n){
    if(n==2){
        return true;
    }
    else if(n>2&&n%2==0){
        return false;
    }
    else if(n>2&&n%2!=0){
        for(int i=3;i<=sqrt(n);i+=2){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}

void solve(int a){
    int n; cin>>n;
    if(isprime(n)){
        cout<<"Case "<<a<<": 1 ";
        cout<<n<<endl;
        return;
    }
    vector<bool> v(n+1);
    for(int i=0;i<n+1;i++){
        v[i]=true;
    }
    if(n%2==0){
        for(int i=4;i<n+1;i+=2){
            if(n%i!=0){
                v[i]=false;
            }
        }
    }
    for(int i=3;i<=sqrt(n);i++){
        if(n%i!=0){
            v[i]=false;
        }
        for(int j=i*i;j<n+1;j+=i){
            if(v[i]){
                if(n%j!=0){
                    v[j]=false;
                }
            }
        }
    }
    cout<<"Case "<<a<<": 1 ";
    for(int i=2;i<n+1;i++){
        if(v[i]){
            if(n%i==0){
                cout<<i<<" ";
            }
        }
    }
    cout<<endl;
    
}

int main(){
    int t; cin>>t;
    int i=1;
    while(t--){
        solve(i);
        i++;
    }
}