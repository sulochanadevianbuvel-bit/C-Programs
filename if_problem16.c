#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sum=a+b+c;
    if(sum==180){
        printf("Valid triangle");
    }
    else{
        printf("Not a Valid triangle");
    }
    return 0;
}