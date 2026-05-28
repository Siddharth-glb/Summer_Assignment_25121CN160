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
int main(){
    int start,stop;
    printf("Enter Range from: ");
    scanf("%d",&start);
    printf("To: ");
    scanf("%d",&stop);
    for(int i = start;i<=stop;i++){
        if(is_prime(i)){
            printf("%i\n",i);
        }
    }
    return 0;
}