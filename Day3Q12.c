#include <stdio.h>

int main() {
    int n, m, r;
    printf("Enter number n: ");
    scanf("%d", &n);
    printf("Enter number m: ");
    scanf("%d", &m);
    if (n < m) {
        int t = n;
        n = m;
        m = t;
    }
    int a = n,b = m;
    while (m != 0) {
        r = n % m;
        n = m;
        m = r;
    }
    printf("LCM = %d\n", a*b/n);
    return 0;
}
