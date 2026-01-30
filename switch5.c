#include <stdio.h>
int main() {
    int account, year;
    scanf("%d", &account);
    scanf("%d", &year);
    switch (account) {
        case 1:
            printf("Interest 4%%");
            break;

        case 2:
            if (year>3)
                printf("Interest 7%%");
            else
                printf("Interest 5%%");
            break;
        default:
            printf("Invalid Account Type");
    }
    return 0;
}