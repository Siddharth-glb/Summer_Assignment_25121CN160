#include <stdio.h>

int main() {
    int n,num=0,next=1,sum;
    printf("Enter number n: ");
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        printf("%d\n",num);
        sum = num + next;
        num = next;
        next = sum;
    }
    return 0;
}