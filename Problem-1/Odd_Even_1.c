#include<stdio.h>

void solve(){
  int n; scanf("%d",&n);
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
