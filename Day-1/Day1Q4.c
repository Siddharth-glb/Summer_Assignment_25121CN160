#include <stdio.h>

int main(){
    int n,count=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n>0){
        count++;
        n/=10;
    }
    printf("Number of digits = %i",count);
    return 0;
}