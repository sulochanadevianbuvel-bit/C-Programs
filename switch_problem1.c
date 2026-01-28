#include <stdio.h>
int main() {
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    switch(a){
        case 1:{
             if(b>100){
                int c,d,e;
                int x=100*3;
                c=b-100;
                d=c*5;
                e=(x+d)-80;
                printf("Bill $%d",e);
            }
            else{
               int y=b*3;
               printf("Bill $%d",y);
            }
            break;
        }
        case 2:{
            if(b>100){
                int c,d;
                c=100*7;
                d=(b-100)*10;
                int v=c+d;
                printf("Bill $%d",v);
            }
        }
    }
    return 0;
}
