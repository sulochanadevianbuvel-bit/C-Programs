#include <stdio.h>
int main() {
    int type, age;
    int fare;
    scanf("%d", &type);
    scanf("%d", &age);
    switch (type) {
        case 1:
            fare=300;
            if (age<12)
                fare=fare/2;
            else if (age>=60)
                fare=fare-(fare* 33/100);
            printf("Fare $%d",fare);
            break;

        case 2:
            fare=1000;
            if (age<12)
                fare=fare/2;
            printf("Fare $%d",fare);
            break;
        default:
            printf("Invalid Class");
    }
    return 0;
}