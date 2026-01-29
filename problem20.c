#include <stdio.h>
int main() {
    int n, decimal = 0, base = 1, rem;
    scanf("%d", &n);
    while(n > 0) {
        rem = n % 10;
        decimal += rem * base;
        base *= 2;
        n /= 10;
    }
    printf("%d", decimal);
    return 0;
}