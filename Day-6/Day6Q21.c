#include <stdio.h>

long long int binary(int n){
    long long int bin = 0;
    int ten = 1;
    while(n>0){
        bin += (n%2)*ten;
        ten*=10;
        n/=2;
    }
    return bin;
}

int main() {
    int n;
    printf("Enter number n: ");
    scanf("%d", &n);
    printf("%lld",binary(n));
    return 0;
}