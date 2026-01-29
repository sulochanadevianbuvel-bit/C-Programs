#include <stdio.h>
int main() {
    int a, count=0;
    scanf("%d",&a);
    for(;a!=0;a=a/10){
        count++;
    }
    if(count==3){
        printf("Three digit number ");
    }
    else{
        printf("Not a three digit number ");
    }
    return 0;
}