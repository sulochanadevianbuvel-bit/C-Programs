#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>=18){
        printf("%d is a eligible to vote",a);
    }
    else{
        printf("%d is a not eligible to vote ",a);
    }
    return 0;
}
 