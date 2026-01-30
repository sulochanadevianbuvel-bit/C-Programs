#include <stdio.h>
int main() {
    int plan,pay;
    int cost;
    scanf("%d", &plan);
    scanf("%d", &pay);
    switch (plan) {
        case 1:
            cost=199;
            break;
        case 2:
            cost=399;
            break;
        default:
            printf("Invalid Plan");
            return 0;
    }
    switch (pay) {
        case 11:
        case 12:
            cost=cost-20;
            break;
        case 13:
            break;
        default:
            printf("Invalid Payment Mode");
            return 0;
    }
    printf("Pay $%d", cost);
    return 0;
}