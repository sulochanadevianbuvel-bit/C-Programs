#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    int a,b,y;
    scanf("%d %d",&a,&b);
    switch(c){
        case '+':{
             y=a+b;
            printf("%d",y);
            break;
        }
        case '-':{
            y=a-b;
            printf("%d",y);
            break;
        }
        case '*':{
            y=a*b;
            printf("%d",y);
            break;
        }
        case '/':{
            y=a/b;
            printf("%d",y);
            break;
        }
        default:{
            printf("Enter a valid operator");
        }
    }
    return 0;
}
