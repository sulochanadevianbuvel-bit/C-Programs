#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%7==0){
        printf("%d is a divisible by both 3 and 7",a);
    }
    else{
        printf("%c is a not divisible by both 3 and 7",a);
    }
    return 0;
}
 