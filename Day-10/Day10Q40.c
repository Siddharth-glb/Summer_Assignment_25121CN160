#include <stdio.h>

int main() {
    int n,t;
    int ch = 'A';
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j =n-i;j>0;j--){
            printf(" ");
        }
        t=0;
        for(int j =0;j<i*2-1;j++){
            if(j<i){t++;}
            else {t--;}
            printf("%c",t-1+ch);
            
        }
        printf("\n");
    }
    return 0;
}