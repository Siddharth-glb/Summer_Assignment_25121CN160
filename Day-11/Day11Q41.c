//Write a program to Write function to find sum of two numbers.
#include <stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int n,m;
    printf("Enter A: ");
    scanf("%d",&n);
    printf("Enter B: ");
    scanf("%d",&m);
    printf("%d + %d = %d",n,m,sum(n,m));
    return 0;
}