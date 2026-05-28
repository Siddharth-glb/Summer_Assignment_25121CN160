#include <stdio.h>

int main(){
    int n;
    int ch = 'A';
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j = 0;j<i;j++){
            printf("%c",j+ch);
        }
        putchar('\n');
    }
    return 0;
}