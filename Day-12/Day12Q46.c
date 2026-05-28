//Write a program to Write function for Fibonacci.

#include <stdio.h>
void fibonacci(int n){
    int num=0,next=1,sum;
    for(int i = 0;i<n;i++){
        printf("%d\n",num);
        sum = num + next;
        num = next;
        next = sum;
    }
}
int main() {
    int n;
    printf("Enter number n: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}