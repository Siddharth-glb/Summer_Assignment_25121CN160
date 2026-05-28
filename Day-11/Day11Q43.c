//Write a program to Write function to check prime.
#include <stdio.h>
int is_prime(int num){
    if(num<2){return 0;}
    for (int i = 2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }    
    }
    return 1;
}
int main(){
    int n;
    printf("Enter A: ");
    scanf("%d",&n);
    if(is_prime(n)){
        printf("%d is Prime",n);
    }
    else{
        printf("%d is not Prime",n);
    }
    return 0;
}