#include <stdio.h>

int power(int base,int n){ 
    int result = 1; 
    for(int i = 1;i<=n;i++){ 
        result*=base; 
    } 
    return result; 
}
int main() {
    int n,base;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power of it: ");
    scanf("%d", &n);
    printf("%d",power(base,n));
    return 0;
}