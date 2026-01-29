#include <stdio.h>
int main() {
    int n,loss,total=0,highloss=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        scanf("%d", &loss);
        total += loss;
        if(loss > 100)
            highloss++;
    }
    printf("Total Loss: %d\n", total);
    printf("High Loss Days: %d", highloss);
    return 0;
}