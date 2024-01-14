#include<stdio.h>

void solve(){
    char a[101];
    scanf("%s",&a);
    int i=0;
    int n;
    while(a[i]!='\0'){
        n=a[i]-'0';
        i++;
    }
    if(n%2){
        printf("odd\n");
    }
    else{
        printf("even\n");
    }
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        solve();
    }
    return 0;
}