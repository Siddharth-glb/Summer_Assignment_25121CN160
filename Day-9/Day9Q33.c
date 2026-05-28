#include <stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j = 0;j<=n-i;j++){
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}