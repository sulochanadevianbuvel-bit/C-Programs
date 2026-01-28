#include<stdio.h>
int main(){
    int a,b,y=1;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++){
         y=y*a;
    }
    printf("%d",y);
    return 0;
}