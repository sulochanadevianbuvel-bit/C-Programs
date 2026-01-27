#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    int s1=a+b;
    int d1=a-b;
    float s2=c+d;
    float d2=c-d;
    printf("%d %d\n",s1,d1);
    printf("%.1f %.1f",s2,d2);
    
    return 0;
}
