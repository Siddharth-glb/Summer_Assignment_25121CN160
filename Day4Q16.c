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
    int n, m;
    printf("Enter starting number: ");
    scanf("%d", &n);
    printf("Enter ending number: ");
    scanf("%d", &m);
    for(int i =n;i<m;i++){
        if(armstrong(i)==i){
            printf("%d\n",i);
        }
    }
    return 0;
}