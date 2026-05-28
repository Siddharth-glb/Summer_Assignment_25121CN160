#include <stdio.h>
int power(int base,int n){ 
    int result = 1; 
    for(int i = 1;i<=n;i++){ 
        result*=base; 
    } 
    return result; 
}
int armstrong(int num){
    int result = 0;
    int num2 = num;
    int digit_c=0;
    while (num > 0){
        digit_c += 1;
        num/=10;
    }
    while (num2 > 0){
        result += power(num2%10,digit_c);
        num2/=10;
    }
    return result;
}

int main(){
    int n;
    printf("Enter number n: ");
    scanf("%d", &n);
    if(armstrong(n)==n){
        printf("Armstrong");
    }else{
        printf("Not armstrong");
    }
    
    return 0;
}