#include<stdio.h>
int main(){
    int a,count=0,ld;
    scanf("%d",&a);
    for(;a!=0;a=a/10){
        ld=a%10;
        if(ld%2==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}