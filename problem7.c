#include<stdio.h>
int main(){
    int a,sd=0,ld;
    scanf("%d",&a);
    for(;a!=0;a=a/10){
        ld=a%10;
        sd=sd+ld;
    }
    printf("%d ",sd);
    return 0;
}