#include <stdio.h>

void fib(int n,int now,int next){
    
    if(n>0){
        printf("%d\n",now);
        int t = now;
        now = next;
        next += t;
        fib(n-1,now,next);
    }
}

int main() {
    int n;
    printf("Enter number n: ");
    scanf("%d", &n);
    fib(n,0,1);
    return 0;
}