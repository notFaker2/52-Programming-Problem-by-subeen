#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=1000;
    int j=0;
    for(int i=n;i>0;i--){
        cout<<i<<"\t";
        j++;
        if(j==5){
            cout<<endl;
            j=0;
        }
    }
}