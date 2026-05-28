#include <stdio.h>

int main(){
    int n,m;
    printf("Enter width: ");
    scanf("%d",&n);
    printf("Enter height: ");
    scanf("%d",&m);
    for(int i = 0;i<n;i++){
        printf("*");
    }
    putchar('\n');
    for(int i = 0;i<m-2;i++){
        putchar('*');
        for(int j = 0;j<n-2;j++){
            putchar(' ');
        }
        printf("*\n");
    }
    for(int i = 0;i<n;i++){
        printf("*");
    }
    return 0;
}