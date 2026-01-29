#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>=10 && a<=20){
        printf("%d is within range",a);
    }
    else{
        printf("%d is not in within range",a);
    }
    return 0;
}