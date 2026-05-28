#include <stdio.h>

int main() {
    int n,t;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j =n-i;j>0;j--){
            printf(" ");
        }
        t=0;
        for(int j =0;j<i*2-1;j++){
            if(t>i){t--;}
            else {t++;}
            printf("%d",t);
            
        }
        printf("\n");
    }
    return 0;
}