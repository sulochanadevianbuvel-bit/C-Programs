#include<stdio.h>
int main(){
    int a,fact=1;
    scanf("%d",&a);
    for(int i=a;i>0;i--){
        fact=fact*i;
    }
    printf("%d ",fact);
    return 0;
}