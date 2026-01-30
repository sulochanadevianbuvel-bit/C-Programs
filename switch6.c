#include <stdio.h>
int main() {
    int mark,attendance;
    scanf("%d", &mark);
    scanf("%d", &attendance);
    if (attendance < 75) {
        printf("Fail");
    } 
    else {
        if (mark >= 75)
            printf("Distinction");
        else if (mark >= 50)
            printf("Pass");
        else
            printf("Fail");
    }
    return 0;
}