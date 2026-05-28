#include <stdio.h>
int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);if(num<2){printf("Not Prime");return 0;}
    for (int i = 2;i*i<=num;i++){
        if(num%i==0){
            printf("Divisible by %i",i);
            return 0;
        }    
    }
    printf("prime");
    return 0;
}