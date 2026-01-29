#include <stdio.h>
int main() {
    int n,rain,total=0,heavyday=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        scanf("%d", &rain);
        total += rain;
        if(rain > 50)
            heavyday++;
    }
    printf("Total Rainfall: %d\n", total);
    printf("Heavy Rain Days: %d", heavyday);
    return 0;
}