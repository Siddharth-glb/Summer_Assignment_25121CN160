#include <stdio.h>

int main() {
    int n,sum=0;
    printf("Enter number n: ");
    scanf("%d", &n);
    int m=n;
    while(m>0){
        int fact=1;
        for(int i = 1;i<=m%10;i++){
            fact*=i;
        }   
        sum+=fact;
        m/=10;
    }
    if (sum==n){
        printf("Strong Number");
    }
    else{
        printf("Not a Strong Number");
    }
    return 0;
}