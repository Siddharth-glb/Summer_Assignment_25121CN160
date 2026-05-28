#include <stdio.h>

int main(){
    int n,rev=0;
    printf("Enter number: ");
    scanf("%d",&n);
    int t=n;
    while(n>0){
        rev += (n%10);
        rev*=10;
        n/=10;
    }
    rev/=10;
    if(t==rev){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    return 0;
}