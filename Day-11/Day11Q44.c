//Write a program to Write function to find factorial.
#include <stdio.h>

int fact(int n){
    int fact=1;
    for(int i = 2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter A: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
    return 0;
}