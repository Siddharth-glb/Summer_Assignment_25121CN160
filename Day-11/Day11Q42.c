//Write a program to Write function to find maximum.
#include <stdio.h>
int max(int a,int b){
    return (a>b)?a:b;
}
int main(){
    int n,m;
    printf("Enter A: ");
    scanf("%d",&n);
    printf("Enter B: ");
    scanf("%d",&m);
    printf("max(%d,%d) = %d",n,m,max(n,m));
    return 0;
}