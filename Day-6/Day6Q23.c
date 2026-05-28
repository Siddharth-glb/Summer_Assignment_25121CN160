#include <stdio.h>

int setbits(int n){
    int count = 0;
    while(n>0){
        count += (n%2);
        n/=2;
    }
    return count;
}

int main() {
    int n;
    printf("Enter number n: ");
    scanf("%d", &n);
    printf("%d",setbits(n));
    return 0;
}