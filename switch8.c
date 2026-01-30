#include <stdio.h>
int main() {
    int code,experience;
    int salary;
    scanf("%d", &code);
    scanf("%d", &experience);
    switch (code) {
        case 1:
            salary = 50000;
            break;
        case 2:
            salary = 35000;
            break;
        default:
            printf("Invalid Code");
            return 0;
    }
    if (experience >= 3) {
        salary = salary + (experience * 5000);
    }
    printf("Salary $%d", salary);
    return 0;
}