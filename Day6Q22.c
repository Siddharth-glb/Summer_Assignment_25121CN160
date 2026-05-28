#include <stdio.h>

int decimal(long long int n){
    int dec = 0;
    int duo = 1;
    while(n>0){
        dec += (n%10)*duo;
        duo*=2;
        n/=10;
    }
    return dec;
}

int main() {
    long long int n;
    printf("Enter number n: ");
    scanf("%lld", &n);
    printf("%d",decimal(n));
    return 0;
}