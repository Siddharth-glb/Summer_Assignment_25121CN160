#include <stdio.h>
int is_prime(int num){
    if(num<2){return 1;}
    for (int i = 2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }    
    }
    return 1;
}
int main() {
    int n,Lprime=0;
    printf("Enter number n: ");
    scanf("%d", &n);
    for(int i = 1;i<=n;i++){
        if(n%i==0 && is_prime(i) && i>Lprime){
            Lprime=i;
        }
    }
    printf("Largest prime factor of %d is %d",n,Lprime);
    return 0;
}