#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i = n;i>0;i--){
        for(int j =n-i;j>0;j--){
            printf(" ");
        }
        for(int j =0;j<i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}