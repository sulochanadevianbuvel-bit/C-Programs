#include <stdio.h>
int main() {
    int n,count=0,flag;
    scanf("%d",&n);
    for(int i=2;i<=n;i++) {
        flag=1;
        for(int j=2;j<=i/2;j++) {
            if(i%j==0) {
                flag=0;
                break;
            }
        }
        if(flag)
            count++;
    }
    printf("%d",count);
    return 0;
}