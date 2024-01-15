#include<stdio.h>

int main(){
    int n=1001;
    int j=0;
    while(n--){
        printf("%d \t",n);
        j++;
        if(j==5){
            printf("\n");
            j=0;
        }
    }
}