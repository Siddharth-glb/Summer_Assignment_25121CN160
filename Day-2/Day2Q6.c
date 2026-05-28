#include <stdio.h>

int main(){
    int n,rev=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n>0){
        rev += (n%10);
        rev*=10;
        n/=10;
    }
    rev/=10;
    printf("Reverse = %i",rev);
    return 0;
}