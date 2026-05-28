#include <stdio.h>

int Sdigit(int n){
    if(n<0){
        n=-n;
    }
    if(n<1){
        return 0;
    }
    return n%10 + Sdigit(n/10);
}
int main() {
    int n;
    printf("Enter number n: ");
    scanf("%d", &n);
    printf("%d\n",Sdigit(n));
    return 0;
}