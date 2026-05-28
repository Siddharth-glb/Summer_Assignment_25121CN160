//Write a program to Write function for palindrome.
#include <stdio.h>
int is_palindrome(int n){
    int rev=0;
    int t=n;
    while(n>0){
        rev = rev * 10 + (n % 10);
        n/=10;
    }
    if(t==rev){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    if(is_palindrome(n)){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    return 0;
}