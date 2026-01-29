#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c ){
        printf("Equilateral triangle");
    }
    else{
        printf("Not an Equilateral triangle");
    }
    return 0;
}