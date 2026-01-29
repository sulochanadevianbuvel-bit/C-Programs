#include <stdio.h>
int factorial(int n) {
    int f = 1, i;
    for(i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main() {
    int n, temp, digit, sum = 0;
    scanf("%d", &n);
    temp = n;
    for(;temp != 0;temp=temp/10) {
        digit = temp % 10;
        sum += factorial(digit);
    }
    if(sum == n)
        printf("Yes");
    else
        printf("No");

    return 0;
}