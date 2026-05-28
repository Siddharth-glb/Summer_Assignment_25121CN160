#include <stdio.h>

int main() {
    int n = 20;
    for(int i = 1;i<=n;i++){
        for(int j =n-i;j>0;j-=1){
            printf(" ");
        }
        for(int j =0;j<i*2-1;j+=1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}