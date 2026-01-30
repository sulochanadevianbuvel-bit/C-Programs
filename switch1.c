#include <stdio.h>
int main() {
    int account,balance,withdraw;
    scanf("%d", &account);
    scanf("%d", &balance);
    scanf("%d", &withdraw);

    switch (account) {
        case 1:
            if (balance >= withdraw)
                printf("Transaction Successfull");
            else
                printf("Insufficient Balance");
            break;

        case 2:
            if (withdraw > 5000)
                printf("Limit Exceeded");
            else
                printf("Transaction Successfull");
            break;

        default:
            printf("Invalid Account Type");
    }
    return 0;
}